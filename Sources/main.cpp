#include "CTRPluginFramework.hpp"
#include "cheats.hpp"

void    abort(void);

namespace CTRPluginFramework
{
        union TitleID
    {
        u64  full;
        u32  half[2];
    };

	void	PatchProcess(FwkSettings &settings) 
    {
        // This can be used to patch code.bin before the plugin is loaded to disable the home menu or other various patches that you want to create. 
    }

    #define MAJOR_VERSION       2
    #define MINOR_VERSION       0
    #define REVISION_VERSION	0
    #define STRINGIFY(x)        #x
    #define TOSTRING(x)         STRINGIFY(x)
    #define STRING_VERSION      "[" TOSTRING(MAJOR_VERSION) "." TOSTRING(MINOR_VERSION) "." TOSTRING(REVISION_VERSION) "]"

    std::string     vert = "" << Color::Green << "";
    std::string     orange = "" << Color::Orange << "";
    std::string     rouge = "" << Color::Red << "";
    std::string     bleu = "" << Color::Blue << "";
    std::string     cyan = "" << Color::Cyan << "";
    std::string     turquoise = "" << Color::Turquoise << "";
    std::string     dogerblue = "" << Color::DodgerBlue << "";
    std::string 	magenta = "" << Color::Magenta << "";

  const std::string about = u8"ACNL Plugin  " STRING_VERSION "\n\n" \
        u8"Created by Brume."; 


    void    InitMenu(PluginMenu &menu)
    {
        std::string     note;

        std::string     animnote;
        std::string     ttinote;
        std::string 	pitnote;
        std::string 	faintnote;
        std::string     coordnote;
        std::string     speednote;
        std::string     walkovernote;
        std::string 	walktroughnote;
        std::string 	moonjumpnote;
        std::string     tpnote;
        std::string 	pickanythingnote;
        std::string     pullanythingnote;
        std::string 	pickupseedernote;
        std::string     dupnote;
        std::string     seednote;
        std::string     normnote;
        std::string     animations;
        std::string 	assignernote;
        std::string 	emotenote;
        std::string 	stalkchangernote;
        std::string 	onlineanimnote;
        std::string     onlineseednote;

        
        
             std::string     vert = "" << Color::Green << "";
    std::string     orange = "" << Color::Orange << "";
    std::string     rouge = "" << Color::Red << "";
    std::string     bleu = "" << Color::Blue << "";
    std::string     cyan = "" << Color::Cyan << "";
    std::string     turquoise = "" << Color::Turquoise << "";
    std::string     dogerblue = "" << Color::DodgerBlue << "";


        animnote = "Press \uE052 + \uE000 to open a keyboard and type the ID of animation you want.";
        onlineanimnote = "Press \uE053 + \uE001 to open a keyboard to write Online Animation ID."
        		<< Color::Red << "Only other players can see Animations.";
        ttinote = "Press \uE053 + \uE07A to open a keyboard and write the item ID you like.";
        animations = "Press \uE053 + \uE000 to open a keyboard and type the ID of animation you want.";
        faintnote = "Press \uE053 + \uE000 to faint.";
        emotenote = "Press \uE052 + \uE001 to open a keyboard to change emote ID.";
        coordnote = "Use \uE000 + \uE07D \uE07E to use this cheat.";
        speednote = "Press \uE001 to move fast !";
        walkovernote = "Press \uE052 + \uE079 to enable and \uE052 + \uE07A to disable.";
        walktroughnote = "Press \uE052 + \uE079 to enable and \uE052 + \uE07A to disable.";
        moonjumpnote = "Pess \uE052 + \uE079 to go up and \uE052 + \uE07A to go down.";
        tpnote = "Press \uE001 + \uE079 to save your location and \uE001 + \uE07A to restore your save.";
        pickanythingnote = "You can Pick Up anything with this cheat.";
        pullanythingnote = "You can Pull anything with this cheat.";
        assignernote = "Press \uE053 + \uE07B to open a keyboard for assigning items.";
        seednote = "Press \uE001 + \uE07A to open a keyboard and type the item ID you want to seed.";
        onlineseednote = "Press \uE001 + \uE07A to open a keyboard and type the item ID you want to seed.";
        pickupseedernote = "Press \uE001 + \uE07A to open a keyboard and type the item ID you want to seed.\n"
               << Color::Red << "You need to have a full inventory.\n"
               << Color::Red << "And when you take something let it fall down and your item will apear.\n"
               << Color::Red << "If you disable this cheat, put one place in your inventory to evit crash.";
        dupnote = "Press \uE053 to duplicate the first item to the second place in your inventory.\n"
               << Color::Red << "Press \uE053 + \uE002 to duplicate the first item to all slots.";
        stalkchangernote = "Press \uE052 + \uE07B to stalk the first player, \uE052 + \uE07A to stalk the second and \uE052 + \uE07C to stalk the third.";

               std::string     InCreation = " : " << Color::Red << " Creating...";
               std::string     beta = " : " << Color::Yellow << " Beta";
               std::string     NoLags = " : " << Color::Cyan << " No Lags";

        	menu += new MenuFolder(orange + "Movements", "",
        {
            new MenuEntry(orange + "Coordinate Modifier" + NoLags, coordinate, coordnote),
            new MenuEntry(orange + "Speed Hack" + NoLags, speed, speednote),
            new MenuEntry(orange + "Walk Over Things" + NoLags, walkOver, walkovernote),
            new MenuEntry(orange + "Walk Trough Walls" + NoLags, walktrough, walktroughnote),
            new MenuEntry(orange + "Moon Jump" + NoLags, MoonJump, moonjumpnote),
        });

        menu += new MenuFolder(orange + "Inventory", "",
        {
            new MenuEntry(orange + "Text To Items" + NoLags, text2item, ttinote),
            new MenuEntry(orange + "Duplication" + NoLags, duplication, dupnote),
            new MenuEntry(orange + "Commands" + NoLags, nullptr, commands),
        });

        menu += new MenuFolder(orange + "Animations Hack", "",
        {
			new MenuEntry(orange + "Animations Hack" + NoLags, Animations, animnote),
            new MenuEntry(orange + "Animations Hack" + beta, anim, animations),
            new MenuEntry(orange + "Online Animations" + NoLags, onlineanim, onlineanimnote),
        });

        menu += new MenuFolder(orange + "Seed Methods", "",
        {
            new MenuEntry(orange + "Pick Anything" + NoLags, nullptr, canpickupanything, pickanythingnote),
            new MenuEntry(orange + "Pull Anything" + NoLags, nullptr, canpullanything, pullanythingnote),
            new MenuEntry(orange + "Online Seeder" + NoLags, Seeder, onlineseednote),
            new MenuEntry(orange + "Offline Seeder" + NoLags, offSeeder, seednote),
            new MenuEntry(orange + "PickUp Seeder" + NoLags, pickseeder, pickupseedernote),
            new MenuEntry(orange + "Everything Seeder" + NoLags, EverythingSeeder),
        });

        menu += new MenuFolder(orange + "Money", "",
        {
            new MenuEntry(orange + "Wallet" + NoLags, nullptr, wallet),
            new MenuEntry(orange + "Bank" + NoLags, nullptr, bank),
            new MenuEntry(orange + "Meow Coupons" + NoLags, nullptr, coupon),
            new MenuEntry(orange + "Badges" + NoLags, nullptr, badges),
        });

         MenuFolder *player = new MenuFolder(orange + "Player");
             {
            *player += new MenuFolder(orange + "Dream Code Modifier", "",
            {
                new MenuEntry(orange + "Dream Code Modifier" + NoLags, nullptr, comodifier),
            });
        }

        menu += player;


         MenuFolder *options = new MenuFolder(orange + "Options");
             {
            *options += new MenuFolder(orange + "Options For Items", "",
            {
                new MenuEntry(orange + "Infinite Items" + NoLags, nullptr, InfiniteItems),
                new MenuEntry(orange + "Eat" + NoLags, nullptr, CanEat),
                new MenuEntry(orange + "Timer" + NoLags, nullptr, CanTimer),
                new MenuEntry(orange + "Show Off" + NoLags, nullptr, CanShowOff),
                new MenuEntry(orange + "Put In The Wallet" + NoLags, nullptr, CanPutAway),
                new MenuEntry(orange + "Open" + NoLags, nullptr, CanOpen),
                new MenuEntry(orange + "Write Letter" + NoLags, nullptr, CanLetter),
            });                        
             {
            *options += new MenuFolder(orange + "Options For Letters", "",
            {
                new MenuEntry(orange + "Modify" + NoLags, nullptr, CanModify),
                new MenuEntry(orange + "Throw" + NoLags, nullptr, CanThrow), 
            });
        }

        menu += options;

        menu += new MenuFolder(orange + "Players Stalker", "",
        {
            new MenuEntry(orange + "Player 1" + NoLags, stalking_1),
            new MenuEntry(orange + "Player 2" + NoLags, stalking_2),
            new MenuEntry(orange + "Player 3" + NoLags, stalking_3),
            new MenuEntry(orange + "Stalk Changer" + NoLags, stalkchanger, stalkchangernote),
        });

        menu += new MenuFolder(orange + "Misc", "",
        {
            new MenuEntry(orange + "Head Position" + NoLags, nullptr, headposition),
            new MenuEntry(orange + "Head Size" + NoLags, nullptr, headsize),
            new MenuEntry(orange + "Tool Position" + NoLags, nullptr, toolposition),
            new MenuEntry(orange + "Tool Size" + NoLags, nullptr, toolsize),
            new MenuEntry(orange + "Players Teleporter" + NoLags, nullptr, playerteleporter),
            new MenuEntry(orange + "Room Teleporter" + NoLags, nullptr, roomtp),
            new MenuEntry(orange + "Nookling Upgrades" + NoLags, nullptr, nook),
            new MenuEntry(orange + "Can Walk When Talk" + NoLags, nullptr, walktalk),
            new MenuEntry(orange + "Unbreakable Flowers" + NoLags, nullptr, unbreakableflower),
            new MenuEntry(orange + "More Than 3 Number On Island" + NoLags, morenumberisland),
            new MenuEntry(orange + "Items Assigner" + NoLags, itemassign, assignernote),
            new MenuEntry(orange + "Emote Mod" + NoLags, emote, emotenote),
            new MenuEntry(orange + "Faint" + NoLags, Faint, faintnote),
        });
    }
}

	int	main()
	{
        std::string     namenote = "" << Color::Red << "ACNL Brume Plugin";
        /*extern  Region   g_region;

        TitleID tid = { Process::GetTitleID() };

        if (tid.half[0] == 0x86400)
            g_region = EUR;
        else if (tid.half[0] == 0x86300)
            g_region = USA;
        else
            OSD::Notify("Don't forget to add your own TID or else the plugin won't run!");
            abort();

            if (g_region = EUR)
                OSD::Notify("Brume Plugin EUR");
                abort();
            if (g_region = USA)
            	OSD::Notify("Brume Plugin USA");
            	abort();*/
        PluginMenu *menu = new PluginMenu(namenote, MAJOR_VERSION, MINOR_VERSION, REVISION_VERSION, about);

        menu->SynchronizeWithFrame(true);

        InitMenu(*menu);

        menu->Run();

        return (0);
	}
}