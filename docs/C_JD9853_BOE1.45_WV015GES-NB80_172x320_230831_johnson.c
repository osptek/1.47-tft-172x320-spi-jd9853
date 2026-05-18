//JD9853_BOE1.45_WV015GES-NB80_172x320_230831_johnson.c

//SET_PASSWD 
SSD_Start();
SSD_CMD(0xDF);
SSD_PAR(0x98);
SSD_PAR(0x53);
SSD_Stop();

SSD_Start();
SSD_CMD(0xB2);
SSD_PAR(0x23);
SSD_Stop();

SSD_Start();
SSD_CMD(0xB7);
SSD_PAR(0x00);
SSD_PAR(0x47);
SSD_PAR(0x00);
SSD_PAR(0x6F);
SSD_Stop();


SSD_Start();
SSD_CMD(0xBB);
SSD_PAR(0x1C);
SSD_PAR(0x1A);
SSD_PAR(0x55);
SSD_PAR(0x73);
SSD_PAR(0x63);
SSD_PAR(0xF0);
SSD_Stop();

SSD_Start();
SSD_CMD(0xC0);
SSD_PAR(0x44);
SSD_PAR(0xA4);
SSD_Stop();

SSD_Start();
SSD_CMD(0xC1);
SSD_PAR(0x12);
SSD_Stop();

SSD_Start();
SSD_CMD(0xC3);
SSD_PAR(0x7D);
SSD_PAR(0x07);
SSD_PAR(0x14);
SSD_PAR(0x06);
SSD_PAR(0xCF);
SSD_PAR(0x71);
SSD_PAR(0x72);
SSD_PAR(0x77);
SSD_Stop();

SSD_Start();
SSD_CMD(0xC4);
SSD_PAR(0x00);//00=60Hz 06=57Hz 08=51Hz
SSD_PAR(0x00);
SSD_PAR(0xA0);//LN=320  Line
SSD_PAR(0x79);
SSD_PAR(0x0B);
SSD_PAR(0x0A);
SSD_PAR(0x16);
SSD_PAR(0x79);
SSD_PAR(0x0B);
SSD_PAR(0x0A);
SSD_PAR(0x16);
SSD_PAR(0x82);
SSD_Stop();

//SET_R_GAMMA 20230718 VOP5.25 G2.2
SSD_Start();
SSD_CMD(0xC8);
SSD_PAR(0x3F);
SSD_PAR(0x32);
SSD_PAR(0x29);
SSD_PAR(0x29);
SSD_PAR(0x27);
SSD_PAR(0x2B);
SSD_PAR(0x27);
SSD_PAR(0x28);
SSD_PAR(0x28);
SSD_PAR(0x26);
SSD_PAR(0x25);
SSD_PAR(0x17);
SSD_PAR(0x12);
SSD_PAR(0x0D);
SSD_PAR(0x04);
SSD_PAR(0x00);
SSD_PAR(0x3F);
SSD_PAR(0x32);
SSD_PAR(0x29);
SSD_PAR(0x29);
SSD_PAR(0x27);
SSD_PAR(0x2B);
SSD_PAR(0x27);
SSD_PAR(0x28);
SSD_PAR(0x28);
SSD_PAR(0x26);
SSD_PAR(0x25);
SSD_PAR(0x17);
SSD_PAR(0x12);
SSD_PAR(0x0D);
SSD_PAR(0x04);
SSD_PAR(0x00);
SSD_Stop();

SSD_Start();
SSD_CMD(0xD0);
SSD_PAR(0x04);
SSD_PAR(0x06);
SSD_PAR(0x6B);
SSD_PAR(0x0F);
SSD_PAR(0x00);
SSD_Stop();

SSD_Start();
SSD_CMD(0xD7);
SSD_PAR(0x00);
SSD_PAR(0x30);
SSD_Stop();

SSD_Start();
SSD_CMD(0xE6);
SSD_PAR(0x14);
SSD_Stop();

SSD_Start();
SSD_CMD(0xDE);
SSD_PAR(0x01);
SSD_Stop();

SSD_Start();
SSD_CMD(0xB7);
SSD_PAR(0x03);
SSD_PAR(0x13);
SSD_PAR(0xEF);
SSD_PAR(0x35);
SSD_PAR(0x35);
SSD_Stop();

SSD_Start();
SSD_CMD(0xC1);
SSD_PAR(0x14);
SSD_PAR(0x15);
SSD_PAR(0xC0);
SSD_Stop();

SSD_Start();
SSD_CMD(0xC2);
SSD_PAR(0x06);
SSD_PAR(0x3A);
SSD_Stop();

SSD_Start();
SSD_CMD(0xC4);
SSD_PAR(0x72);
SSD_PAR(0x12);
SSD_Stop();

SSD_Start();
SSD_CMD(0xBE);
SSD_PAR(0x00);
SSD_Stop();

SSD_Start();
SSD_CMD(0xDE);
SSD_PAR(0x02);
SSD_Stop();

SSD_Start();
SSD_CMD(0xE5);
SSD_PAR(0x00);
SSD_PAR(0x02);
SSD_PAR(0x00);
SSD_Stop();

SSD_Start();
SSD_CMD(0xE5);
SSD_PAR(0x01);
SSD_PAR(0x02);
SSD_PAR(0x00);
SSD_Stop();

SSD_Start();
SSD_CMD(0xDE);
SSD_PAR(0x00);
SSD_Stop();

SSD_Start();
SSD_CMD(0x35);
SSD_PAR(0x00);
SSD_Stop();

SSD_Start();
SSD_CMD(0x3A);
SSD_PAR(0x06);//06=RGB666；05=RGB565
SSD_Stop();

SSD_Start();
SSD_CMD(0x2A);
SSD_PAR(0x00);
SSD_PAR(0x22);//Start_X=34
SSD_PAR(0x00);
SSD_PAR(0xCD);//End_X=205
SSD_Stop();

SSD_Start();
SSD_CMD(0x2B);
SSD_PAR(0x00);
SSD_PAR(0x00);//Start_Y=0
SSD_PAR(0x01);
SSD_PAR(0x3F);//End_Y=319
SSD_Stop();

SSD_Start();
SSD_CMD(0x11);
SSD_Stop();

Delayms(120);

SSD_Start();
SSD_CMD(0xDE);
SSD_PAR(0x02);
SSD_Stop();

SSD_Start();
SSD_CMD(0xE5);
SSD_PAR(0x00);
SSD_PAR(0x02);
SSD_PAR(0x00);
SSD_Stop();

SSD_Start();
SSD_CMD(0xDE);
SSD_PAR(0x00);
SSD_Stop();

SSD_Start();
SSD_CMD(0x29);
SSD_Stop();

Delayms(10);

//20230831 ADD RAMBIST setting
//20230718 johnson first release

