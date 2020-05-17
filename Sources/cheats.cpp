 #include "cheats.hpp"
u32 offset = 0;
u32 data32 = 0;
u8 data8 = 0;
u16 data16 = 0;
u32 patch_address = 0;
u16 cmp16 = 0;
u32 cmp32 = 0;

u32     g_location = USA_LOCATION_ADDR;
u32     g_indoor_pos_x = USA_INDOOR_POS_X_ADDR;
u32     g_indoor_pos_y = USA_INDOOR_POS_Y_ADDR;
u32     g_indoor_pos_z = USA_INDOOR_POS_Z_ADDR;
u32     g_outdoor_pos_x = USA_OUTDOOR_POS_X_ADDR;
u32     g_outdoor_pos_y = USA_OUTDOOR_POS_Y_ADDR;
u32     g_outdoor_pos_z = USA_OUTDOOR_POS_Z_ADDR;
u32     g_town_items = USA_TOWN_ITEMS_ADDR;
u32     g_island_items = USA_ISLAND_ITEMS_ADDR;
u32     g_pwp = USA_PWP_ADDR;
u32     g_inv = USA_INV_ADDR;
u32     g_velocity = USA_VELOCITY_ADDR;
u32     g_grass_start = USA_GRASS_START_ADDR;
u32     g_grass_end = USA_GRASS_END_ADDR;
u32     g_nook = USA_NOOK_ADDR;
u32     g_leif = USA_LEIF_ADDR;
u32     g_tan = USA_TAN_ADDR;
u32     g_edible = USA_EDIBLE_ADDR;
u32     g_seed = USA_SEED_ADDR;
u32     g_id = USA_ID_ADDR;
u32     g_realtime;
u32     g_savetime;
u32     g_world_x;
u32     g_world_y;
u32     g_input_text_buffer;
u32     g_hours;
u32     g_minutes;
u32     g_visitor_indoor_x = USA_VISITOR_INDOOR_X_ADDR;
u32     g_visitor_indoor_z = USA_VISITOR_INDOOR_Z_ADDR;
u32     g_visitor_outdoor_x= USA_VISITOR_OUTDOOR_X_ADDR;
u32     g_visitor_outdoor_z = USA_VISITOR_OUTDOOR_Z_ADDR;
u32     g_visitor1_indoor_x = USA_VISITOR1_INDOOR_X_ADDR;
u32     g_visitor1_indoor_z = USA_VISITOR1_INDOOR_Z_ADDR;
u32     g_visitor1_outdoor_x = USA_VISITOR1_OUTDOOR_X_ADDR;
u32     g_visitor1_outdoor_z = USA_VISITOR1_OUTDOOR_Z_ADDR;
u32     g_visitor2_indoor_x = USA_VISITOR2_INDOOR_X_ADDR;
u32     g_visitor2_indoor_z = USA_VISITOR2_INDOOR_Z_ADDR;
u32     g_visitor2_outdoor_x = USA_VISITOR2_OUTDOOR_X_ADDR;
u32     g_visitor2_outdoor_z = USA_VISITOR2_OUTDOOR_Z_ADDR;
u32     g_online0_inv = USA_ONLINE0_INV_ADDR;
u32     g_online1_inv = USA_ONLINE1_INV_ADDR;
u32     g_online2_inv = USA_ONLINE2_INV_ADDR;
u32     g_online3_inv = USA_ONLINE3_INV_ADDR;
u32     g_online4_inv = USA_ONLINE4_INV_ADDR;
u32     g_online5_inv = USA_ONLINE5_INV_ADDR;
u32     g_online6_inv = USA_ONLINE6_INV_ADDR;
u32     g_keyboard;
u32     g_island_bubble;
u32     g_island_keyboard;
u32     g_abd;
u32     g_walkOver = USA_WALKOVER_ADDR;
u32     g_kpointer;
u32        g_bank = USA_BANK_ADDR;
u32     g_online0_bank = USA_ONLINE0_BANK_ADDR;
u32     g_online1_bank = USA_ONLINE1_BANK_ADDR;
u32     g_online2_bank = USA_ONLINE2_BANK_ADDR;
u32     g_online3_bank = USA_ONLINE3_BANK_ADDR;
u32     g_online4_bank = USA_ONLINE4_BANK_ADDR;
u32     g_online5_bank = USA_ONLINE5_BANK_ADDR;
u32     g_online6_bank = USA_ONLINE6_BANK_ADDR;
u32        g_meow = USA_MEOW_ADDR;
u32     g_online0_meow = USA_ONLINE0_MEOW_ADDR;
u32     g_online1_meow = USA_ONLINE1_MEOW_ADDR;
u32     g_online2_meow = USA_ONLINE2_MEOW_ADDR;
u32     g_online3_meow = USA_ONLINE3_MEOW_ADDR;
u32     g_online4_meow = USA_ONLINE4_MEOW_ADDR;
u32     g_online5_meow = USA_ONLINE6_MEOW_ADDR;
u32     g_online6_meow = USA_ONLINE6_MEOW_ADDR;
u32        g_wallet = USA_WALLET_ADDR;
u32     g_online0_wallet = USA_ONLINE0_WALLET_ADDR;
u32     g_online1_wallet = USA_ONLINE1_WALLET_ADDR;
u32     g_online2_wallet = USA_ONLINE2_WALLET_ADDR;
u32     g_online3_wallet = USA_ONLINE3_WALLET_ADDR;
u32     g_online4_wallet = USA_ONLINE4_WALLET_ADDR;
u32     g_online5_wallet = USA_ONLINE5_WALLET_ADDR;
u32     g_online6_wallet = USA_ONLINE6_WALLET_ADDR;
u32     g_confirm;
u32     g_nook1Price;
u32     g_nook2Price;
u32     g_room = USA_ROOM_ID_ADDR;
u32     g_isabelle = USA_ISABELLE_ADDR;
u32     g_kappn = USA_KAPPN_ADDR;
u32     g_npc = USA_NPC_ADDR;
u32     g_badge = USA_BADGE_ADDR;
u32     g_collision;
u32     g_turnip;
u32     g_main_x;
u32     g_main_y;
u32     g_main_items;
u32     g_in_cond;
u32     g_out_cond;
u32     g_in_col = USA_COLLISION_IN_ADDR;
u32     g_out_col = USA_COLLISION_OUT_ADDR;
u32     g_quick;
u32     g_out_grav = USA_GRAVITY_OUT_ADDR;
u32     g_medals = USA_MEDALS_ADDR;
u32     g_online0_medals = USA_ONLINE0_MEDALS_ADDR;
u32     g_online1_medals = USA_ONLINE1_MEDALS_ADDR;
u32     g_online2_medals = USA_ONLINE2_MEDALS_ADDR;
u32     g_online3_medals = USA_ONLINE3_MEDALS_ADDR;
u32     g_online4_medals = USA_ONLINE4_MEDALS_ADDR;
u32     g_online5_medals = USA_ONLINE5_MEDALS_ADDR;
u32     g_online6_medals = USA_ONLINE6_MEDALS_ADDR;
u32     g_camera_asm;
u32     g_camera_x;
u32     g_camera_y;
u32     g_camera_z;
u32     g_camera_pointer;
u32     g_camstop_pointer;
u32     g_coordinates_pointer;
u32     g_player_ptr = USA_PLAYER_PTR_ADDR;
u32     g_pulling = USA_PULLING_ADDR;

u32     g_player = USA_PLAYER_ADDR;



namespace CTRPluginFramework
{

bool    g_text_activated = false;
bool    g_teleport_save = true;

void    walkOver(MenuEntry *entry)
    {
        static bool button = false;
        static bool button2= false;

        if (Controller::IsKeyDown(Key::L) && Controller::IsKeyDown(Key::DPadUp) && !button)
        {
            {
                Process::Write8(g_walkOver, 0x83);
            }
            OSD::Notify("Walk Over Things On");
            button = true;
        }
        if (Controller::IsKeyDown(Key::L) && Controller::IsKeyDown(Key::DPadDown) && !button2)
        {
            {
                Process::Write8(g_walkOver, 0x00);
            }
            OSD::Notify("Walk Over Things Off");
            button2 = true;
        }
        if (!Controller::IsKeyDown(Key::L) && !Controller::IsKeyDown(Key::DPadUp) && !button)
        {
            button = false;
        }
        if (!Controller::IsKeyDown(Key::L) && !Controller::IsKeyDown(Key::DPadDown) && !button2)
        {
            button2 = false;
        }
    }

void    badges_common(u8 bdge)
{
    u32     offset;
    u8      player;
    int     i;
    bool resu;

    resu = Process::Read8(g_player, player);
    if (player <= 0x3)
    {
        offset = player * 0xA480;
        for (int i = 0; i < 24; i++)
        {
            Process::Write8(g_badge + offset + (0x1 * i), bdge);
        }
    }
}

void    bank_common(u32 enc1, u32 enc2)
{
    u32     offset;
    u8      player;
    bool resu;
    u32 online0_bank;
    u32 online1_bank;
    u32 online2_bank;
    u32 online3_bank;
    u32 online4_bank;
    u32 online5_bank;
    u32 online6_bank;

    {   
        resu = Process::Read8(g_player, player);
        if (player <= 0x3)
        {
            offset = player * 0xA480;
            Process::Write32(g_bank + offset, enc1);
            Process::Write32(g_bank + offset + 0x4, enc2);
            if (Process::Read32(g_online4_bank, online4_bank) != 0)
                Process::Write32(g_online4_bank, enc1);
                Process::Write32(g_online4_bank + 0x4, enc2);
            if (Process::Read32(g_online5_bank, online5_bank) != 0)
                Process::Write32(g_online5_bank, enc1);
                Process::Write32(g_online5_bank + 0x4, enc2);
            if (Process::Read32(g_online6_bank, online6_bank) != 0);
                Process::Write32(g_online6_bank, enc1);
                Process::Write32(g_online6_bank + 0x4, enc2);
        }
  
        if (player >= 0x3)
        {
            if (Process::Read32(g_online0_bank, online0_bank) != 0);
                Process::Write32(g_online0_bank, enc1);
                Process::Write32(g_online0_bank + 0x4, enc2);
            if (Process::Read32(g_online1_bank, online1_bank) != 0);
                Process::Write32(g_online1_bank, enc1);
                Process::Write32(g_online1_bank + 0x4, enc2);
            if (Process::Read32(g_online2_bank, online2_bank) != 0);
                Process::Write32(g_online2_bank, enc1);
                Process::Write32(g_online2_bank + 0x4, enc2);
            if (Process::Read32(g_online3_bank, online3_bank) != 0);
                Process::Write32(g_online3_bank, enc1);
                Process::Write32(g_online3_bank + 0x4, enc2);
        }
    }
}

void    nook_common(int value)
{
    Process::Write16(g_nook, 0x0101 * value);
    Process::Write8(g_leif, value == 1 ? 2 : value);
}

 void    meow_common(u32 enc1, u32 enc2)
{
    u32     offset;
    u8      player;
    bool    resu;
    u32     online0_meow;
    u32     online1_meow;
    u32     online2_meow;
    u32     online3_meow;
    u32     online4_meow;
    u32     online5_meow;
    u32     online6_meow;

    {   
        resu = Process::Read8(g_player, player);
        if (player <= 0x3)
        {
            offset = player * 0xA480;
            Process::Write32(g_meow + offset, enc1);
            Process::Write32(g_meow + offset + 0x4, enc2);
            if (Process::Read32(g_online4_meow, online4_meow) != 0)
                Process::Write32(g_online4_meow, enc1);
                Process::Write32(g_online4_meow + 0x4, enc2);
            if (Process::Read32(g_online5_meow, online5_meow) != 0)
                Process::Write32(g_online5_meow, enc1);
                Process::Write32(g_online5_meow + 0x4, enc2);
            if (Process::Read32(g_online6_meow, online6_meow) != 0);
                Process::Write32(g_online6_meow, enc1);
                Process::Write32(g_online6_meow + 0x4, enc2);
        }
  
        if (player >= 0x3)
        {
            if (Process::Read32(g_online0_meow, online0_meow) != 0);
                Process::Write32(g_online0_meow, enc1);
                Process::Write32(g_online0_meow + 0x4, enc2);
            if (Process::Read32(g_online1_meow, online1_meow) != 0);
                Process::Write32(g_online1_meow, enc1);
                Process::Write32(g_online1_meow + 0x4, enc2);
            if (Process::Read32(g_online2_meow, online2_meow) != 0);
                Process::Write32(g_online2_meow, enc1);
                Process::Write32(g_online2_meow + 0x4, enc2);
            if (Process::Read32(g_online3_meow, online3_meow) != 0);
                Process::Write32(g_online3_meow, enc1);
                Process::Write32(g_online3_meow + 0x4, enc2);
        }
    }
}

 void    wallet_common(u32 enc1, u32 enc2)
{
    u32     offset;
    u8      player;
    bool resu;
    u32 online0_wallet;
    u32 online1_wallet;
    u32 online2_wallet;
    u32 online3_wallet;
    u32 online4_wallet;
    u32 online5_wallet;
    u32 online6_wallet;
    {   
        resu = Process::Read8(g_player, player);
        if (player <= 0x3)
        {
            offset = player * 0xA480;
            Process::Write32(g_wallet + offset, enc1);
            Process::Write32(g_wallet + offset + 0x4, enc2);
            if (Process::Read32(g_online4_wallet, online4_wallet) != 0)
                Process::Write32(g_online4_wallet, enc1);
                Process::Write32(g_online4_wallet + 0x4, enc2);
            if (Process::Read32(g_online5_wallet, online5_wallet) != 0)
                Process::Write32(g_online5_wallet, enc1);
                Process::Write32(g_online5_wallet + 0x4, enc2);
            if (Process::Read32(g_online5_wallet, online6_wallet) != 0);
                Process::Write32(g_online6_wallet, enc1);
                Process::Write32(g_online6_wallet + 0x4, enc2);
        }
  
        if (player >= 0x3)
        {
            if (Process::Read32(g_online0_wallet, online0_wallet) != 0);
                Process::Write32(g_online0_wallet, enc1);
                Process::Write32(g_online0_wallet + 0x4, enc2);
            if (Process::Read32(g_online1_wallet, online1_wallet) != 0);
                Process::Write32(g_online1_wallet, enc1);
                Process::Write32(g_online1_wallet + 0x4, enc2);
            if (Process::Read32(g_online2_wallet, online2_wallet) != 0);
                Process::Write32(g_online2_wallet, enc1);
                Process::Write32(g_online2_wallet + 0x4, enc2);
            if (Process::Read32(g_online3_wallet, online3_wallet) != 0);
                Process::Write32(g_online3_wallet, enc1);
                Process::Write32(g_online3_wallet + 0x4, enc2);
        }
    }
}

void    badge_gold(MenuEntry *entry)
{
    badges_common(0x3);
}

void    badge_silver(MenuEntry *entry)
{
    badges_common(0x2);
}

void    badge_bronze(MenuEntry *entry)
{
    badges_common(0x1);
}

void    badge_none(MenuEntry *entry)
{
    badges_common(0x0);
}

 void    badges(MenuEntry *entry)
 {

 Keyboard keyboard("Choose what type of badges you like.");

    std::vector<std::string> list =
    {
        "Gold",
        "Silver",
        "Bronze",
        "None"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    if(userchoice == 0)
    {
        badges_common(0x3);
    }
    else if(userchoice == 1)
    {
        badges_common(0x2);
    }
    else if(userchoice == 2)
    {
        badges_common(0x1);
    }
    else if(userchoice == 3)
    {
        badges_common(0x0);
    }
 }

 void    wallet(MenuEntry *entry)
 {

 Keyboard keyboard("");

    std::vector<std::string> list =
    {
        "Broken Wallet",
        "Max Bells",
        "0 Bells",
        "Negative Bells"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    if(userchoice == 0)
    {
        wallet_common(bellBound1, bellBound2);
    }
    else if(userchoice == 1)
    {
        wallet_common(bell99k1, bell99k2);
    }
    else if(userchoice == 2)
    {
        wallet_common(bell0k1, bell0k2);
    }
    else if(userchoice == 3)
    {
        wallet_common(bellNeg1, bellNeg2);
    }
 }

  void    bank(MenuEntry *entry)
 {

 Keyboard keyboard("");

    std::vector<std::string> list =
    {
        "Max Bells",
        "1 Million Bells",
        "0 Bells"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    if(userchoice == 0)
    {
        bank_common(bell999M1, bell999M2);
    }
    else if(userchoice == 1)
    {
        bank_common(bell1M1, bell1M2);
    }
    else if(userchoice == 2)
    {
        bank_common(bell0k1, bell0k2);
    }
 }

  void    coupon(MenuEntry *entry)
 {

 Keyboard keyboard("");

    std::vector<std::string> list =
    {
        "Max Meow Coupons",
        "No Coupons",
        "Negative Coupons"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    if(userchoice == 0)
    {
        meow_common(bell99k1, bell99k2);
    }
    else if(userchoice == 1)
    {
        meow_common(bell0k1, bell0k2);
    }
    else if(userchoice == 2)
    {
        meow_common(bellNeg1, bellNeg2);
    }
 }

   void    nook(MenuEntry *entry)
 {

 Keyboard keyboard("Choose an upgrade for your shop.");

    std::vector<std::string> list =
    {
        "T&T Mart",
        "Super T&T",
        "T.I.Y",
        "T&T Emporium"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    if(userchoice == 0)
    {
        nook_common(1);
    }
    else if(userchoice == 1)
    {
        nook_common(2);
    }
    else if(userchoice == 2)
    {
        nook_common(3);
    }
    else if(userchoice == 3)
    {
        nook_common(4);
    }
 }

void    coordinate(MenuEntry *entry)
{
    static u32  loc;
    bool resu;

    bool resu1;
    bool resu2;
    bool resu3;
    bool resu4;
    float outdoor_pos_z;
    float outdoor_pos_x;

    float indoor_pos_z;
    float indoor_pos_x;


     resu1 = Process::ReadFloat(g_outdoor_pos_z, outdoor_pos_z);
      resu2 = Process::ReadFloat(g_outdoor_pos_x, outdoor_pos_x);
       resu3 = Process::ReadFloat(g_indoor_pos_z, indoor_pos_z);
        resu4 = Process::ReadFloat(g_indoor_pos_x, indoor_pos_x);




    float opzplus;
    float opzmoin;

    float opxplus;
    float opxmoin;



    opzplus = outdoor_pos_z + 5.0;
    opzmoin = outdoor_pos_z - 5.0;

    opxplus = outdoor_pos_x + 5.0;
    opxmoin = outdoor_pos_x - 5.0;


    float ipzplus;
    float ipzmoin;

    float ipxplus;
    float ipxmoin;



    ipzplus = indoor_pos_z + 5.0;
    ipzmoin = indoor_pos_z - 5.0;

    ipxplus = indoor_pos_x + 5.0;
    ipxmoin = indoor_pos_x - 5.0;


   // if (!Controller::IsKeyDown(Key::A))
       // return;
    resu = Process::Read32(g_location, loc);

    
    if (loc == -1) //FFFFFFFF=outdoors
    {
        if (Controller::IsKeyDown(Key::A) && Controller::IsKeyDown(Key::DPadDown))
            Process::WriteFloat(g_outdoor_pos_z, opzplus);
        if (Controller::IsKeyDown(Key::A) && Controller::IsKeyDown(Key::DPadUp))
            Process::WriteFloat(g_outdoor_pos_z, opzmoin);
        if (Controller::IsKeyDown(Key::A) && Controller::IsKeyDown(Key::DPadLeft))
            Process::WriteFloat(g_outdoor_pos_x, opxmoin);
        if (Controller::IsKeyDown(Key::A) && Controller::IsKeyDown(Key::DPadRight))
            Process::WriteFloat(g_outdoor_pos_x, opxplus);
    }
    else //if it's anything but FFFFFFFF then you're indoors
    {
        if (Controller::IsKeyDown(Key::A) && Controller::IsKeyDown(Key::DPadDown))
            Process::WriteFloat(g_indoor_pos_z, ipzplus);
        if (Controller::IsKeyDown(Key::A) && Controller::IsKeyDown(Key::DPadUp))
            Process::WriteFloat(g_indoor_pos_z, ipzmoin);
        if (Controller::IsKeyDown(Key::A) && Controller::IsKeyDown(Key::DPadLeft))
            Process::WriteFloat(g_indoor_pos_x, ipxmoin);
        if (Controller::IsKeyDown(Key::A) && Controller::IsKeyDown(Key::DPadRight))
            Process::WriteFloat(g_indoor_pos_x, ipxplus);
    
  }
}

void    speed(MenuEntry *entry)
	{
	    u32     velocity;
	    float fvelo;
	    bool resu;
	    bool resu2;

	    float ffvelo;
	    float fplusvelo;
	    static bool button = false;
	    {
		    if (Controller::IsKeyDown(Key::B) && !button)
		    {
		        resu = Process::Read32(g_velocity, velocity);
		        resu2 = Process::ReadFloat(g_velocity, ffvelo);

		        fplusvelo = ffvelo + 2.0;
		        
		        if (velocity >= 0x41A79DB3)
		        {
		            Process::Write32(g_velocity, 0x41A79DB3);
		        }
		        else if (velocity > 0)
		        {
		            Process::WriteFloat(g_velocity, fplusvelo);
		        }
		        OSD::Notify("Sonic!");
		        button = true; 
	        }
	    	if (Controller::IsKeyDown(Key::B))
	    	{
	        	button = false;
	    	}
	    }
	}

/*
void HeadModifier(void)
{
    if (Controller::IsKeyDown(Key::DPadUp))
    {
        Process::Write32(0x00555555, +0x00555555);
        //ADD32(0x00555555, 0x00100000);
    }
    else
    if (Controller::IsKeyDown(Key::DPadDown))
    {
        Process::Write32(0x00555555, -0x00100000);
        //SUB32(0x00555555, 0x00100000);
    }
}
*/

u32    writeSlot(int slot, u32 item)
{
    u32     offset;
    bool resu;
    
   resu = Process::Read32(g_player_ptr, offset);
   


    if (offset != 0 && item > 0x1000 && (item < 0x4000 || item == 0x7FFE))
    {
        Process::Write32(offset + 0x6BD0 + (slot * 4), item);
    }
    
}

u32     readSlot(int slot)
{
    u32     offset;
    bool resu;
    bool resu2;

    resu = Process::Read32(g_player_ptr, offset);
    if (offset != 0)
        return (resu2 = Process::Read32(offset + 0x6BD0 + (slot * 4), offset));
}

	void	text2item(MenuEntry *entry)
{
    u16     offseti;

	

if (Controller::IsKeyDown(Key::R) && Controller::IsKeyDown(Key::DPadDown))
    {
    u32     input;
    u8      player;
    u32     offset;
    bool    resu;

    u16 online0_inv;
    u16 online1_inv;
    u16 online2_inv;
    u16 online3_inv;
    u16 online4_inv;
    u16 online5_inv;
    u16 online6_inv;
    
    if (Controller::IsKeyDown(Key::R) && Controller::IsKeyDown(Key::DPadDown))
    {

 Keyboard keyboard("Type the item ID you like.");

    int userchoice = keyboard.Open(input);

    resu = Process::Read8(g_player, player);
    
    if (player <= 0x3)
    {
        offset = player * 0xA480;
        Process::Write16(g_inv + offset, input);
        if (Process::Read16(g_online4_inv, online4_inv) != 0)
        {
            Process::Write16(g_online4_inv, input); 
        }
        if (Process::Read16(g_online5_inv, online5_inv) != 0)
        {
            Process::Write16(g_online5_inv, input); 
        }
        if (Process::Read16(g_online6_inv, online6_inv) != 0)
        {
            Process::Write16(g_online6_inv, input);
        }
    }
    if (player >= 0x3)
    {
        if (Process::Read16(g_online0_inv, online0_inv) != 0)
        {
            Process::Write16(g_online0_inv, input);
        }
        if (Process::Read16(g_online1_inv, online1_inv) != 0)
        {
            Process::Write16(g_online1_inv, input); 
        }
        if (Process::Read16(g_online2_inv, online2_inv) != 0)
        {
            Process::Write16(g_online2_inv, input); 
        }
        if (Process::Read16(g_online3_inv, online3_inv) != 0)
        {
            Process::Write16(g_online3_inv, input);
        }
        
     }  
   }
}

}

void walktrough(MenuEntry *entry)
    {
        u32 loc;
        bool resu;
        u16 incol;
        bool resu2;
        static bool button = false;
        static bool button2= false;
     
        resu2 = Process::Read16(g_in_col, incol);
     
        resu = Process::Read32(g_location, loc);
     
        if (Controller::IsKeyDown(Key::L) & Controller::IsKeyDown(Key::DPadUp) && !button)
        {
            if (loc == -1) //FFFFFFFF=outdoors 
            {
                Process::Write8(g_out_col, 0x01);
            }
            else
            {
                Process::Write8(g_in_col, 0xFF);
            }
            OSD::Notify("Walk Through Walls On");
            button = true;
        }
        if (Controller::IsKeyDown(Key::L) & Controller::IsKeyDown(Key::DPadDown) && !button2)
        {
            if (loc == -1) //FFFFFFFF=outdoors 
            {
                Process::Write8(g_out_col, 0x00);
            }
            else if (Process::Read16(g_in_col, incol) == 0x7FFE)
            {
                Process::Write8(g_in_col, 0x00);
            }
            OSD::Notify("Walk Through Walls Off");
            button2 = true;
        }
        if (!Controller::IsKeyDown(Key::L) & !Controller::IsKeyDown(Key::DPadUp))
        {
            button = false;
        }
        if (!Controller::IsKeyDown(Key::L) & !Controller::IsKeyDown(Key::DPadDown))
        {
            button2 = false;
        }
    }

    void    EverythingSeeder(MenuEntry *entry)
{
    Process::Write32(0x19C050, 0xE1A00000);
    Process::Write32(0x725124, 0xE1A00000);
}

void 	Faint(MenuEntry *entry)
    {
        u32 	loc;
        bool 	resu;
        {

        resu = Process::Read32(g_location, loc);

        if (Controller::IsKeyDown(Key::R) && Controller::IsKeyDown(Key::A))
        {
            if (loc == -1)
            {
                Process::Write32(0x33077533, 0x12C);
            }
            else
            {
            	Process::Write32(0x3307765C, 0xA560);
            	Process::Write32(0x3307765F, 0xA560);
            }
        }
    }
    }

    void    InfiniteItems(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
	       	Process::Write32(0x0019C574, 0xE2805A00);
        }
        else if(userchoice == 1)
        {
	       	Process::Write32(0x0019C574, 0xE2805A06);
        }
    }
 } 

    void    CanEat(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
	       	Process::Write32(0x0019C1F0, 0xE1A00000);
        }
        else if(userchoice == 1)
        {
	       	Process::Write32(0x0019C1F0, 0x0A000009);
        }
    }
 }

    void    CanTimer(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
	       	Process::Write32(0x0019BBA8, 0xE1A00000);
        }
        else if(userchoice == 1)
        {
	       	Process::Write32(0x0019BBA8, 0x1A000011);
        }
    }
 }

    void    CanShowOff(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
	       	Process::Write32(0x0019BA78, 0xE1A00000);
        }
        else if(userchoice == 1)
        {
	       	Process::Write32(0x0019BA78, 0x1A000012);
        }
    }
 }

    void    CanPutAway(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
	       	Process::Write32(0x0019BB6C, 0xE1A00000);
        }
        else if(userchoice == 1)
        {
	       	Process::Write32(0x0019BB6C, 0x1A000009);
        }
    }
 }

    void    CanOpen(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
	       	Process::Write32(0x0019BCB0, 0xE1A00000);
        }
        else if(userchoice == 1)
        {
	       	Process::Write32(0x0019BCB0, 0x0A000009);
        }
    }
 }

    void    CanLetter(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
	       	Process::Write32(0x0019BAD8, 0xE1A00000);
        }
        else if(userchoice == 1)
        {
	       	Process::Write32(0x0019BAD8, 0x1A00001F);
        }
    }
 }

    void    CanModify(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
	       	Process::Write32(0x0019D824, 0xE1A00000);
        }
        else if(userchoice == 1)
        {
	       	Process::Write32(0x0019D824, 0x1A000027);
        }
    }
 }

    void    CanThrow(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
	       	Process::Write32(0x0019D8E4, 0xE1A00000);
        }
        else if(userchoice == 1)
        {
	       	Process::Write32(0x0019D8E4, 0x0A000004);
        }
    }
 }

void 	stalking_1(MenuEntry *entry)
{
	static u32 loc;
	u32 x;
	u32 z;
	bool 	resu;

	resu = Process::Read32(g_location, loc);
	if (loc == -1)
	{
        resu = Process::Read32(g_visitor_outdoor_x, x);
        resu = Process::Read32(g_visitor_outdoor_z, z);
        if (X != 0)
            Process::Write32(g_outdoor_pos_x, x);
            Process::Write32(g_outdoor_pos_z, z);
	}
	else
    {
        resu = Process::Read32(g_visitor_indoor_x, x);
        resu = Process::Read32(g_visitor_indoor_z, z);
        if (x != 0)
            Process::Write32(g_indoor_pos_x, x);
            Process::Write32(g_indoor_pos_z, z);
    }
}

void    stalking_2(MenuEntry *entry)
{
    static u32 loc;
    u32 x;
    u32 z;
    bool    resu;

    resu = Process::Read32(g_location, loc);
    if (loc == -1)
    {
        resu = Process::Read32(g_visitor1_outdoor_x, x);
        resu = Process::Read32(g_visitor1_outdoor_z, z);
        if (X != 0)
            Process::Write32(g_outdoor_pos_x, x);
            Process::Write32(g_outdoor_pos_z, z);
    }
    else
    {
        resu = Process::Read32(g_visitor1_indoor_x, x);
        resu = Process::Read32(g_visitor1_indoor_z, z);
        if (x != 0)
            Process::Write32(g_indoor_pos_x, x);
            Process::Write32(g_indoor_pos_z, z);
    }
}

void    stalking_3(MenuEntry *entry)
{
    static u32 loc;
    u32 x;
    u32 z;
    bool    resu;

    resu = Process::Read32(g_location, loc);
    if (loc == -1)
    {
        resu = Process::Read32(g_visitor2_outdoor_x, x);
        resu = Process::Read32(g_visitor2_outdoor_z, z);
        if (X != 0)
            Process::Write32(g_outdoor_pos_x, x);
            Process::Write32(g_outdoor_pos_z, z);
    }
    else
    {
        resu = Process::Read32(g_visitor2_indoor_x, x);
        resu = Process::Read32(g_visitor2_indoor_z, z);
        if (x != 0)
            Process::Write32(g_indoor_pos_x, x);
            Process::Write32(g_indoor_pos_z, z);
    }
}

void    stalkchanger(MenuEntry *entry)
    {
        static bool button = false;
        static bool button2= false;
        static bool button3= false;
        {
            if (Controller::IsKeyDown(Key::L) && Controller::IsKeyDown(Key::DPadLeft) && !button)
            {
                {
                    static u32 loc;
                    u32 x;
                    u32 z;
                    bool    resu;

                    resu = Process::Read32(g_location, loc);
                    if (loc == -1)
                    {
                        resu = Process::Read32(g_visitor_outdoor_x, x);
                        resu = Process::Read32(g_visitor_outdoor_z, z);
                        if (X != 0)
                            Process::Write32(g_outdoor_pos_x, x);
                            Process::Write32(g_outdoor_pos_z, z);
                    }
                    else
                    {
                        resu = Process::Read32(g_visitor_indoor_x, x);
                        resu = Process::Read32(g_visitor_indoor_z, z);
                        if (x != 0)
                            Process::Write32(g_indoor_pos_x, x);
                            Process::Write32(g_indoor_pos_z, z);
                    }
                }
                OSD::Notify("Fix");
                button = true;
            }
            if (Controller::IsKeyDown(Key::L) && Controller::IsKeyDown(Key::DPadDown) && !button2)
            {
                {
                    static u32 loc;
                    u32 x;
                    u32 z;
                    bool    resu;

                    resu = Process::Read32(g_location, loc);
                    if (loc == -1)
                    {
                        resu = Process::Read32(g_visitor1_outdoor_x, x);
                        resu = Process::Read32(g_visitor1_outdoor_z, z);
                        if (X != 0)
                            Process::Write32(g_outdoor_pos_x, x);
                            Process::Write32(g_outdoor_pos_z, z);
                    }
                    else
                    {
                        resu = Process::Read32(g_visitor1_indoor_x, x);
                        resu = Process::Read32(g_visitor1_indoor_z, z);
                        if (x != 0)
                            Process::Write32(g_indoor_pos_x, x);
                            Process::Write32(g_indoor_pos_z, z);
                    }
                }
                OSD::Notify("Fix");
                button2 = true;
            }
            if (Controller::IsKeyDown(Key::L) && Controller::IsKeyDown(Key::DPadRight) && !button3)
            {
                {
                    static u32 loc;
                    u32 x;
                    u32 z;
                    bool    resu;

                    resu = Process::Read32(g_location, loc);
                    if (loc == -1)
                    {
                        resu = Process::Read32(g_visitor2_outdoor_x, x);
                        resu = Process::Read32(g_visitor2_outdoor_z, z);
                        if (X != 0)
                            Process::Write32(g_outdoor_pos_x, x);
                            Process::Write32(g_outdoor_pos_z, z);
                    }
                    else
                    {
                        resu = Process::Read32(g_visitor2_indoor_x, x);
                        resu = Process::Read32(g_visitor2_indoor_z, z);
                        if (x != 0)
                            Process::Write32(g_indoor_pos_x, x);
                            Process::Write32(g_indoor_pos_z, z);
                    }
                }
                OSD::Notify("Fix");
                button3 = true;
            }
            if (!Controller::IsKeyDown(Key::X) && !Controller::IsKeyDown(Key::DPadLeft))
            {
                button = false;
            }
            if (!Controller::IsKeyDown(Key::X) && !Controller::IsKeyDown(Key::DPadDown))
            {
                button2 = false;
            }
            if (!Controller::IsKeyDown(Key::X) && !Controller::IsKeyDown(Key::DPadRight))
            {
                button3 = false;
            }
        }
    }

   void    playerteleporter(MenuEntry *entry)
 {
    static u32 loc;
    u32 x;
    u32 z;
    bool    resu;

 Keyboard keyboard("On what player you want to go?");

    std::vector<std::string> list =
    {
        "Player 1",
        "Player 2",
        "Player 3"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    if(userchoice == 0)
    {
        resu = Process::Read32(g_location, loc);
        if (loc == -1)
        {
            resu = Process::Read32(g_visitor_outdoor_x, x);
            resu = Process::Read32(g_visitor_outdoor_z, z);
            if (X != 0)
                Process::Write32(g_outdoor_pos_x, x);
                Process::Write32(g_outdoor_pos_z, z);
        }
        else
        {
            resu = Process::Read32(g_visitor_indoor_x, x);
            resu = Process::Read32(g_visitor_indoor_z, z);
            if (x != 0)
                Process::Write32(g_indoor_pos_x, x);
                Process::Write32(g_indoor_pos_z, z);
        }
        OSD::Notify("Teleporter : Player 1");
    }
    else if(userchoice == 1)
    {
        resu = Process::Read32(g_location, loc);
        if (loc == -1)
        {
            resu = Process::Read32(g_visitor1_outdoor_x, x);
            resu = Process::Read32(g_visitor1_outdoor_z, z);
            if (X != 0)
                Process::Write32(g_outdoor_pos_x, x);
                Process::Write32(g_outdoor_pos_z, z);
        }
        else
        {
            resu = Process::Read32(g_visitor1_indoor_x, x);
            resu = Process::Read32(g_visitor1_indoor_z, z);
            if (x != 0)
                Process::Write32(g_indoor_pos_x, x);
                Process::Write32(g_indoor_pos_z, z);
        }
        OSD::Notify("Teleporter : Player 2");
    }
    else if(userchoice == 2)
    {
        resu = Process::Read32(g_location, loc);
        if (loc == -1)
        {
            resu = Process::Read32(g_visitor2_outdoor_x, x);
            resu = Process::Read32(g_visitor2_outdoor_z, z);
            if (X != 0)
                Process::Write32(g_outdoor_pos_x, x);
                Process::Write32(g_outdoor_pos_z, z);
        }
        else
        {
            resu = Process::Read32(g_visitor2_indoor_x, x);
            resu = Process::Read32(g_visitor2_indoor_z, z);
            if (x != 0)
                Process::Write32(g_indoor_pos_x, x);
                Process::Write32(g_indoor_pos_z, z);
        }
        OSD::Notify("Teleporter : Player 3");
    }
 }

void 	comodifier(MenuEntry *entry)
{	
	{

		{
		u8 	    input;
		u8 	    input1;
		u16 	input2;
		u16 	input3;
		{

	 Keyboard keyboard("Type the dream code numbers you like to have.");
		
		int userchoice = keyboard.Open(input);

         Keyboard keyboard1("");

            int userchoice1 = keyboard.Open(input1);

			 Keyboard keyboard2("");
		
				int userchoice2 = keyboard.Open(input2);

				 Keyboard keyboard3("");
		
				    int userchoice3 = keyboard.Open(input3);
		     	{
					Process::Write16(0x31F2C719, input);
	            }
	            {
				    Process::Write16(0x31F2C714, input1);
	            }
	            {
			        Process::Write16(0x31F2C712, input2);
                }
		        {
			        Process::Write16(0x31F2C710, input3);
				}
			}
		}
	}	
}

   void    roomtp(MenuEntry *entry)
 {
 	u32 	loc;
	bool 	resu;
    
 Keyboard keyboard("Where you want to go?");

    std::vector<std::string> list =
    {
        "A1 House",
        "A2 House",
        "A3 House",
        "A4 House",
        "A5 House",
        "A6 House",
        "A7 House",
        "A8 House",
        "A9 House",
        "Village Office",
        "Return Error",
        "Come to the village",
        "R-Parkers",
        "Police Box Modern",
        "Police Box Classic",
        "Cafe",
        "Working In The Cafe",
        "Fortune Telling",
        "Department Store1",
        "Department Store2",
        "Department Store3",
        "Able Sisters Left",
        "Able Sisters Right",
        "Shoe Shank",
        "The Realtor",
        "Club444",
        "Hair Salon",
        "Museum Center",
        "Museum Fish",
        "Museum Insect",
        "Museum Fossil",
        "Famous Painting",
        "Museum 2F",
        "Museum 2F Upper Left",
        "Museum 2F Bottom Left",
        "Museum 2F Upper Right",
        "Island Indoor",
        "Island Outdoor"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{	
            	Process::Write32(0x00958342, 0xA51B);
            	Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA51B);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 1)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA51C);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA51C);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 2)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA51D);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA51D);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 3)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA51E);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA51E);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 4)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA51F);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA51F);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 5)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA520);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA520);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 6)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA521);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA521);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 7)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA522);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA522);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 8)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA523);
	            Process::Write32(0x33077533, 0x12C);
            }
            else
        	{
        		Process::Write32(0x00958342, 0xA523);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 9)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA523);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA523);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 10)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA528);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA528);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 11)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA52A);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA52A);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 12)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA52B);
	            Process::Write32(0x33077533, 0x12C);
            }
            else
        	{
        		Process::Write32(0x00958342, 0xA52B);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 13)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA530);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA530);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 14)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA531);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA531);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 15)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA532);
	            Process::Write32(0x33077533, 0x12C);
           	}
           	else
        	{
        		Process::Write32(0x00958342, 0xA532);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 16)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA533);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA533);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 17)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA537);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA537);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 18)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA53C);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA53C);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 19)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA53D);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA53D);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 20)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA53E);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA53E);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 21)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA53E);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA53E);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 22)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA540);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA540);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 23)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA540);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA540);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 24)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA541);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA541);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 25)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA547);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA547);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 26)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA548);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA548);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 27)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA549);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA549);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 28)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA54A);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA54A);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 29)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA54D);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA54D);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 30)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA550);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA550);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 31)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA553);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA553);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 32)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA555);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA555);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 33)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA556);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA556);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 34)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA557);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA557);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 35)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA558);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA558);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 36)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA567);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA567);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
        else if(userchoice == 37)
        {
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
	            Process::Write32(0x00958342, 0xA568);
	            Process::Write32(0x33077533, 0x12C);
        	}
        	else
        	{
        		Process::Write32(0x00958342, 0xA568);
            	Process::Write32(0x3307765C, 0xA560); //Faint Indoor
				Process::Write32(0x3307765F, 0xA560);
			}
        }
    }
 }	

    void    MoonJump(MenuEntry *entry)
{
    u32     loc;
    u32     height;
    bool    resu;
    float   outdoor_pos_y;
    float   indoor_pos_y;
    resu = Process::ReadFloat(g_outdoor_pos_y, outdoor_pos_y);
    resu = Process::ReadFloat(g_indoor_pos_y, indoor_pos_y);

    if (Controller::IsKeyDown(Key::L) && Controller::IsKeyDown(Key::DPadUp))
    {
       resu = Process::Read32(g_location, loc);
        resu = Process::Read32(g_outdoor_pos_y, height);
        if (height >= 0x440F0000)
        {
            if (loc == -1)
            {
                Process::Write32(g_outdoor_pos_y, 0x440F0000);
            }
            else
            {
                Process::Write32(g_indoor_pos_y, 0x440F0000);
            }
        }
        else
        {
            if (loc == -1)
            {
                Process::Write16(g_out_grav, 0xFFFF);
                Process::WriteFloat(g_outdoor_pos_y, (outdoor_pos_y + 5.0)); //0.1
            }
            else
            {
                Process::WriteFloat(g_indoor_pos_y, (indoor_pos_y + 30.0)); //6.0
            }
        }   
    }
    if (Controller::IsKeyDown(Key::L) && Controller::IsKeyDown(Key::DPadDown))
    {
         resu = Process::Read32(g_location, loc);
        resu = Process::Read32(g_outdoor_pos_y, height);
        if (height >= 0x440F0000)
        {
            if (loc == -1)
            {
                Process::Write32(g_outdoor_pos_y, 0x440F0000);
            }
            else
            {
                Process::Write32(g_indoor_pos_y, 0x440F0000);
            }
        }
        else
        {
            if (loc == -1)
            {
                Process::Write16(g_out_grav, 0xFFFF);
                Process::WriteFloat(g_outdoor_pos_y, (outdoor_pos_y - 5.0)); //0.1
            }
            else
            {
                Process::WriteFloat(g_indoor_pos_y, (indoor_pos_y - 30.0)); //6.0
            }
        }   
    }
}

   void    canpickupanything(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
        	{
	       		Process::Write32(0x0059A0C4, 0xEA000030);
        	}
        	OSD::Notify("Can Pick Up All Items On");
        }
        else if(userchoice == 1)
        {
        	{
	       		Process::Write32(0x0059A0C4, 0x0A000044);
        	}
        	OSD::Notify("Can Pick Up All Items Off");
        }
    }
 }

    void    canpullanything(MenuEntry *entry)
 {
    
 Keyboard keyboard("Click On to enable and Off to disable.");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
        	{
	       		Process::Write32(0x0059A0C4, 0xEA000019);
        	}
        	OSD::Notify("Can Pull All Items On");
        }
        else if(userchoice == 1)
        {
        	{
	       		Process::Write32(0x0059A0C4, 0x0A000044);
        	}
        	OSD::Notify("Can Pull All Items Off");
        }
    }
 }  

	void	headposition(MenuEntry *entry)
{
	u32 	loc;
	bool 	resu;

	{
	u8     input;
	{
	
 		Keyboard keyboard("Value 0~11.");
	
			int userchoice = keyboard.Open(input);

			resu = Process::Read32(g_location, loc);

			if (loc == -1)
			{
				Process::Write8(0x33077628, input);
			}
			else
			{
				Process::Write8(0x33077754, input);
			}
		}
	}
}

   void    headsize(MenuEntry *entry)
 {
    
 Keyboard keyboard("Choose the size of the Head you like to have.");

    std::vector<std::string> list =
    {
        "Invisible",
        "Normal",
        "Big",
        "Very Big",
        "Gigantic"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
		 	u32 	loc;
			bool 	resu;
        	
        	resu = Process::Read32(g_location, loc);

			if (loc == -1)
        	{
		       	Process::Write32(0x33065EBC, 0x00000000);
		    }
		    else
		    {   	
		       	Process::Write32(0x33065FE8, 0x00000000);
		    }
        }
        else if(userchoice == 1)
        {
		 	u32 	loc;
			bool 	resu;
        	
			resu = Process::Read32(g_location, loc);

			if (loc == -1)
        	{
		       	Process::Write32(0x33065EBC, 0x3F800000);
		    }
		    else
		    {
		       	Process::Write32(0x33065FE8, 0x3F800000);
		    }
        }
        else if(userchoice == 2)
        {
		 	u32 	loc;
			bool 	resu;
        	
			resu = Process::Read32(g_location, loc);

			if (loc == -1)
        	{
	        	Process::Write32(0x33065EBC, 0x40400000);
	        }
	        else
	        {
	        	Process::Write32(0x33065FE8, 0x40400000);
	        }
        }
        else if(userchoice == 3)
        {
		 	u32 	loc;
			bool 	resu;
        	
			resu = Process::Read32(g_location, loc);

			if (loc == -1)
        	{
	        	Process::Write32(0x33065EBC, 0x40800000);
	        }
	        else
	        {
	        	Process::Write32(0x33065FE8, 0x40800000);
	        }
        }
        else if(userchoice == 4)
        {
		 	u32 	loc;
			bool 	resu;
        	
			resu = Process::Read32(g_location, loc);

			if (loc == -1)
        	{
	        	Process::Write32(0x33065EBC, 0x40C00000);
	        }
	        else
	        {
	        	Process::Write32(0x33065FE8, 0x40C00000);
	        }
        }
    }
 }

	void	toolposition(MenuEntry *entry)
{
	u32 	loc;

	{
	u8     input;
	{
	
 		Keyboard keyboard("Value 0~11.");
	
			int userchoice = keyboard.Open(input);

			{
				Process::Write8(0x33077618, input);
			}
		}
	}
}

   void    toolsize(MenuEntry *entry)
 {
    
 Keyboard keyboard("Choose the size of the handhelds you like to have.");

    std::vector<std::string> list =
    {
        "Invisible",
        "Normal",
        "Big",
        "Very Big",
        "Gigantic"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
		    Process::Write32(0x330777B0, 0x00000000);
        }
        else if(userchoice == 1)
        {
		    Process::Write32(0x330777B0, 0x3F800000);
        }
        else if(userchoice == 2)
        {
	        Process::Write32(0x330777B0, 0x40400000);
        }
        else if(userchoice == 3)
        {
	       Process::Write32(0x330777B0, 0x40800000);
        }
        else if(userchoice == 4)
        {
	        Process::Write32(0x330777B0, 0x40C00000);
        }
    }
 }

void    pickseeder(MenuEntry *entry)
    {
        static u16 input = 0; //variable for ID to keyboard
        u8 PlayerIndex; // variable for determining where your player position is
        u32 PlayerOffset; // variable for pointer to player data 


        if (Controller::IsKeyDown(Key::B) && Controller::IsKeyDown(Key::DPadDown)) //keyboard stuff
        {
            Keyboard    keyboard("Type the items ID you like to seed.");
            keyboard.IsHexadecimal(true);
            if (keyboard.Open(input, input) == -1)
            	return;
        }

        Process::Read8(0x82E93EC, PlayerIndex); //gets player position index
        Process::Read32(0xAAE994 + PlayerIndex * 4, PlayerOffset); //makes it so the plugin can read where your player data is in the memory by reading a pointer
        if (PlayerOffset == 0x330773BC || PlayerOffset == 0x330774E8) // checks if you have the player loaded
    		Process::Write32(0x009B517C, input);
	}

    void    duplication(MenuEntry *entry)
{
      u32     dupe;
    if(Controller::IsKeyDown(Key::R))
    {
        dupe = readSlot(0);
        writeSlot(1, dupe);
    }

    if (Controller::IsKeyDown(Key::R) && Controller::IsKeyDown(Key::X))
    {
        for (int i = 0; i < 15; i++)
        {
            if (readSlot(i + 1) == 0x7FFE)
                writeSlot(i + 1, dupe);
        }
    }
}

   void    commands(MenuEntry *entry)
 {


 Keyboard keyboard("Choose what you want.");

    std::vector<std::string> list =
    {
        "Clear Inventory",
        "Clear All Town Items",
        "All The Flowers Watered"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
            for (int i = 0; i < 16; i++)
            {
                writeSlot(i, 0x7FFE);
            }
        }
        else if(userchoice == 1)
        {
    		{
        		for (int i = 0; i < 5000; i++)
        		{
            		Process::Write32(g_town_items + (i * 4), 0x00007FFE);
        		}
    		}
        }
        else if(userchoice == 2)
        {
		          u32     address;
		    u32     item;
		    bool resu;

		    for (address = g_town_items; address < g_town_items + RANGE_TOWN_ITEMS; address += ITEM_BYTES)
		    {
		        resu = Process::Read32(address, item);
		        if (item >= 0xCE && item <= 0xF7)
		        {
		            item -= 0x2F;
		        }
		        if (item >= 0x9F && item <= 0xC8)
		        {
		            item |= 0x40000000;
		            Process::Write32(address, item);
		        }
		    }
        }
    }
 }

void    anim(MenuEntry *entry)
    {
        static u8 input = 0; //variable for ID to keyboard
        u8 PlayerIndex; // variable for determining where your player position is
        u32 PlayerOffset; // variable for pointer to player data
        static bool button = false; 
        {

    	    if (Controller::IsKeyDown(Key::R) && Controller::IsKeyDown(Key::A) && !button) //keyboard stuff
    	    {
    	        Keyboard    keyboard("Type The ID of the animation you like.");
    	        keyboard.IsHexadecimal(true);
    	        if (keyboard.Open(input, input) == -1)
    	    {
            OSD::Notify("Anim");
            button = true;
    	    }
            Process::Read8(0x82E93EC, PlayerIndex); //gets player position index
            Process::Read32(0xAAE994 + PlayerIndex * 4, PlayerOffset); //makes it so the plugin can read where your player data is in the memory by reading a pointer
            if (PlayerOffset == 0x330773BC || PlayerOffset == 0x330774E8) // checks if you have the player loaded
                Process::Write8(PlayerOffset + 0x1A9, input);
        	}
        }
        if (Controller::IsKeyDown(Key::R) && Controller::IsKeyDown(Key::A))
        {
            button = false;
        }
    }

void    offSeeder(MenuEntry *entry)
    {
        static u32 input = 0; //variable for ID to keyboard
        u8 PlayerIndex; // variable for determining where your player position is
        u32 PlayerOffset; // variable for pointer to player data 


        if (Controller::IsKeyDown(Key::B) && Controller::IsKeyDown(Key::DPadDown)) //keyboard stuff
        {
            Keyboard    keyboard("Type the item ID you like to seed.");
            keyboard.IsHexadecimal(true);
            if (keyboard.Open(input, input) == -1)
                return;
        }

        Process::Read8(0x82E93EC, PlayerIndex); //gets player position index
        Process::Read32(0xAAE994 + PlayerIndex * 4, PlayerOffset); //makes it so the plugin can read where your player data is in the memory by reading a pointer
        if (PlayerOffset == 0x330773BC || PlayerOffset == 0x330774E8) // checks if you have the player loaded
            Process::Write32(0x009B5268, input);
    }

void    itemassign(MenuEntry *entry)
    {
        static u32 input = 0; //variable for ID to keyboard
        u8 PlayerIndex; // variable for determining where your player position is
        u32 PlayerOffset; // variable for pointer to player data 


        if (Controller::IsKeyDown(Key::R) && Controller::IsKeyDown(Key::DPadLeft)) //keyboard stuff
        {
            Keyboard    keyboard("Choose an item ID for assigning.");
            keyboard.IsHexadecimal(true);
            if (keyboard.Open(input, input) == -1)
                return;
        }

        Process::Read8(0x82E93EC, PlayerIndex); //gets player position index
        Process::Read32(0xAAE994 + PlayerIndex * 4, PlayerOffset); //makes it so the plugin can read where your player data is in the memory by reading a pointer
        if (PlayerOffset == 0x330773BC || PlayerOffset == 0x330774E8) // checks if you have the player loaded
        	Process::Write16(0x33077C86, input);
    }

void    emote(MenuEntry *entry)
    {
        static u8 input = 0; //variable for ID to keyboard
        u8 PlayerIndex; // variable for determining where your player position is
        u32 PlayerOffset; // variable for pointer to player data 


        if (Controller::IsKeyDown(Key::L) && Controller::IsKeyDown(Key::B)) //keyboard stuff
        {
            Keyboard    keyboard("Choose an emote ID.");
            keyboard.IsHexadecimal(true);
            if (keyboard.Open(input, input) == -1)
        {
        }

        Process::Read8(0x82E93EC, PlayerIndex); //gets player position index
        Process::Read32(0xAAE994 + PlayerIndex * 4, PlayerOffset); //makes it so the plugin can read where your player data is in the memory by reading a pointer
        if (PlayerOffset == 0x330773BC || PlayerOffset == 0x330774E8) // checks if you have the player loaded
            Process::Write8(0x0025E054, input);
        	Process::Write16(0x0025E056, 0xE3A0);
    }
    }

   void    walktalk(MenuEntry *entry)
 {
    
 Keyboard keyboard("");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
		    Process::Write32(0x00655390, 0x1A000000);
        }
        else if(userchoice == 1)
        {
		    Process::Write32(0x00655390, 0x0A000000);
        }
    }
 }

void    morenumberisland(MenuEntry *entry)
{
	Process::Write8(0x00AD7158, 0x00000002);
}

   void    unbreakableflower(MenuEntry *entry)
 {
    
 Keyboard keyboard("");

    std::vector<std::string> list =
    {
        "On",
        "Off"
    };

  keyboard.Populate(list);

    int userchoice = keyboard.Open();

    {
        if(userchoice == 0)
        {
		    Process::Write32(0x00597F58, 0xE3A0001D);
        }
        else if(userchoice == 1)
        {
		    Process::Write32(0x00597F58, 0xEBF5935C);
        }
    }
 }

void    onlineanim(MenuEntry *entry)
    {
        static u8 input = 0; //variable for ID to keyboard
        u8 PlayerIndex; // variable for determining where your player position is
        u32 PlayerOffset; // variable for pointer to player data
        u32 	loc;
		bool 	resu;


        if (Controller::IsKeyDown(Key::R) && Controller::IsKeyDown(Key::B)) //keyboard stuff
        {
            Keyboard    keyboard("Choose an Online Animation.");
            keyboard.IsHexadecimal(true);
            if (keyboard.Open(input, input) == -1)
                return;
        }

        Process::Read8(0x82E93EC, PlayerIndex); //gets player position index
        Process::Read32(0xAAE994 + PlayerIndex * 4, PlayerOffset); //makes it so the plugin can read where your player data is in the memory by reading a pointer
        if (PlayerOffset == 0x330773BC || PlayerOffset == 0x330774E8) // checks if you have the player loaded
        
        resu = Process::Read32(g_location, loc);

        {
        	if (loc == -1)
        	{
            	Process::Write8(0x33077C79, input);
        	}
        	else
        	{
        		Process::Write8(0x33077DA5, input);
        	}
        }
    }

void    Seeder(MenuEntry *entry)
    {
        static u32 input = 0; //variable for ID to keyboard
        u8 PlayerIndex; // variable for determining where your player position is
        u32 PlayerOffset; // variable for pointer to player data 


        if (Controller::IsKeyDown(Key::B) && Controller::IsKeyDown(Key::DPadDown)) //keyboard stuff
        {
            Keyboard    keyboard("Type the item ID you like to seed.");
            keyboard.IsHexadecimal(true);
            if (keyboard.Open(input, input) == -1)
                return;
        }

        Process::Read8(0x82E93EC, PlayerIndex); //gets player position index
        Process::Read32(0xAAE994 + PlayerIndex * 4, PlayerOffset); //makes it so the plugin can read where your player data is in the memory by reading a pointer
        if (PlayerOffset == 0x330773BC || PlayerOffset == 0x330774E8) // checks if you have the player loaded
	    {
	       Process::Write32(0x3200CBA4, input);
	    }
    }

	void	Animations(MenuEntry *entry)
{
	u32 	loc;
	bool 	resu;

		if (Controller::IsKeyDown(Key::L) && Controller::IsKeyDown(Key::A))
		{
		u8     input;
		{
	
 			Keyboard keyboard("Type The ID of the animation you like.");
	
				int userchoice = keyboard.Open(input);

				resu = Process::Read32(g_location, loc);

				if (loc == -1)
				{
					Process::Write8(0x33077567, input);
				}
				else
				{
					Process::Write8(0x33077693, input);
				}
			}
		}
	}
}