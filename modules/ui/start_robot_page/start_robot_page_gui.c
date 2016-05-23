/******************************************************************************/
/* This file has been generated by the uGFX-Studio                            */
/*                                                                            */
/* http://ugfx.org                                                            */
/******************************************************************************/

#include "colors.h"
#include "widgetstyles.h"
#include "gui.h"
#include "custom_draw.h"

// GListeners
GListener gl;

// GHandles
GHandle ghContainerPage0;
GHandle ghContainer1;
GHandle ghProgressbar1;
GHandle ghContainer2;
GHandle ghProgressbar2;
GHandle ghContainer3;
GHandle ghContainer4;
GHandle ghLabelm0;
GHandle ghLabelm1;
GHandle ghLabelm2;
GHandle ghLabelm3;
GHandle ghLabelm4;
GHandle ghLabelm5;
GHandle ghLabel2;
GHandle ghLabelM2_Setpoint;
GHandle ghLabelM4_Setpoint;
GHandle ghLabelM0_Setpoint;
GHandle ghLabelM1_Setpoint;
GHandle ghLabelM3_Setpoint;
GHandle ghLabelM5_Setpoint;
GHandle ghLabelM6_Setpoint;
GHandle ghLabelM7_Setpoint;
GHandle ghLabelm7;
GHandle ghLabelm6;
GHandle ghLabele1;
GHandle ghLabele3;
GHandle ghLabelM0_Feedback;
GHandle ghLabelM1_Feedback;
GHandle ghLabelM2_Feedback;
GHandle ghLabelM3_Feedback;
GHandle ghLabelM4_Feedback;
GHandle ghLabelM5_Feedback;
GHandle ghLabelM6_Feedback;
GHandle ghLabelM7_Feedback;
GHandle ghLabelM0_Current;
GHandle ghLabelM1_Current;
GHandle ghLabelM2_Current;
GHandle ghLabelM3_Current;
GHandle ghLabelM4_Current;
GHandle ghLabelM5_Current;
GHandle ghLabelM6_Current;
GHandle ghLabelM7_Current;
GHandle ghLabele2;
GHandle ghLabele4;
GHandle ghLabelE1_count;
GHandle ghLabelE2_count;
GHandle ghLabelE3_count;
GHandle ghLabelE4_count;
GHandle ghConsole;
GHandle ghButtonStop;
GHandle ghButton1;
GHandle ghButton2;
GHandle ghButton3;
GHandle ghCheckboxMotor;
GHandle ghCheckboxEncoder;
GHandle ghLabelTimer;
GHandle ghButtonBack;
GHandle ghLabel35;
GHandle ghCheckboxDS4;
GHandle ghLabelCPU;
GHandle ghLabelCPU_VAL;
GHandle ghLabelMotorVolt;
GHandle ghLabelMotorVolt_VAL;
GHandle ghLabelMBVolt;
GHandle ghLabelMBVolt_VAL;
GHandle ghLabellp_avg;
GHandle ghLabellp_max;
GHandle ghLabelcomm_avg;
GHandle ghLabelcomm_max;
GHandle ghLabellp_max_val;
GHandle ghLabelcomm_avg_val;
GHandle ghLabelcomm_max_val;
GHandle ghLabellp_avg_val;
GHandle ghLabelloop;
GHandle ghLabelcomm;
GHandle ghLabelstat;
GHandle ghLabelprofile_name;

// Fonts
font_t dejavu_sans_16_anti_aliased;
font_t dejavu_sans_10;
font_t dejavu_sans_12_anti_aliased;
font_t dejavu_sans_24_anti_aliased;
font_t dejavu_sans_32_anti_aliased;

static void createPagePage0(void)
{
	GWidgetInit wi;
	gwinWidgetClearInit(&wi);


	// create container widget: ghContainerPage0
	wi.g.show = FALSE;
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 800;
	wi.g.height = 480;
	wi.g.parent = 0;
	wi.text = "Container";
	wi.customDraw = 0;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghContainerPage0 = gwinContainerCreate(0, &wi, 0);

	// create container widget: ghContainer2
	wi.g.show = TRUE;
	wi.g.x = 440;
	wi.g.y = 260;
	wi.g.width = 170;
	wi.g.height = 220;
	wi.g.parent = ghContainerPage0;
	wi.text = "Container1";
	wi.customDraw = gwinContainerDraw_Std;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghContainer2 = gwinContainerCreate(0, &wi, GWIN_CONTAINER_BORDER);

	// create container widget: ghContainer4
	wi.g.show = TRUE;
	wi.g.x = 240;
	wi.g.y = 20;
	wi.g.width = 280;
	wi.g.height = 230;
	wi.g.parent = ghContainerPage0;
	wi.text = "Container4";
	wi.customDraw = gwinContainerDraw_Std;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghContainer4 = gwinContainerCreate(0, &wi, 0);

	// create container widget: ghContainer3
	wi.g.show = TRUE;
	wi.g.x = 630;
	wi.g.y = 260;
	wi.g.width = 170;
	wi.g.height = 220;
	wi.g.parent = ghContainerPage0;
	wi.text = "Container1";
	wi.customDraw = gwinContainerDraw_Std;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghContainer3 = gwinContainerCreate(0, &wi, GWIN_CONTAINER_BORDER);

	// create container widget: ghContainer1
	wi.g.show = TRUE;
	wi.g.x = 250;
	wi.g.y = 260;
	wi.g.width = 170;
	wi.g.height = 220;
	wi.g.parent = ghContainerPage0;
	wi.text = "Container1";
	wi.customDraw = gwinContainerDraw_Std;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghContainer1 = gwinContainerCreate(0, &wi, GWIN_CONTAINER_BORDER);

	// Create progressbar widget: ghProgressbar1
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 20;
	wi.g.width = 20;
	wi.g.height = 170;
	wi.g.parent = ghContainer1;
	wi.text = "Progressbar1";
	wi.customDraw = gwinProgressbarDraw_Std;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghProgressbar1 = gwinProgressbarCreate(0, &wi);
	gwinProgressbarSetRange(ghProgressbar1, 0, 100);
	gwinProgressbarSetPosition(ghProgressbar1, 25);
	gwinSetFont(ghProgressbar1, dejavu_sans_10);
	gwinRedraw(ghProgressbar1);

	// Create progressbar widget: ghProgressbar2
	wi.g.show = TRUE;
	wi.g.x = 20;
	wi.g.y = 90;
	wi.g.width = 130;
	wi.g.height = 20;
	wi.g.parent = ghContainer2;
	wi.text = "Progressbar2";
	wi.customDraw = gwinProgressbarDraw_Std;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghProgressbar2 = gwinProgressbarCreate(0, &wi);
	gwinProgressbarSetRange(ghProgressbar2, 0, 100);
	gwinProgressbarSetPosition(ghProgressbar2, 25);

	// Create label widget: ghLabelm0
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 30;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "M0 :";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelm0 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelm0, FALSE);
	gwinSetFont(ghLabelm0, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelm0);

	// Create label widget: ghLabelm1
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 50;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "M1 :";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelm1 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelm1, FALSE);
	gwinSetFont(ghLabelm1, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelm1);

	// Create label widget: ghLabelm2
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 70;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "M2 :";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelm2 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelm2, FALSE);
	gwinSetFont(ghLabelm2, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelm2);

	// Create label widget: ghLabelm3
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 90;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "M3 :";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelm3 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelm3, FALSE);
	gwinSetFont(ghLabelm3, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelm3);

	// Create label widget: ghLabelm4
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 110;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "M4 :";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelm4 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelm4, FALSE);
	gwinSetFont(ghLabelm4, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelm4);

	// Create label widget: ghLabelm5
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 130;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "M5 :";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelm5 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelm5, FALSE);
	gwinSetFont(ghLabelm5, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelm5);

	// Create label widget: ghLabel2
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 10;
	wi.g.width = 270;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "Motor  SetPoint  FeedBack  Current(mA)";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel2 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel2, FALSE);
	gwinSetFont(ghLabel2, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabel2);

	// Create label widget: ghLabelM2_Setpoint
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 70;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m2_set[8] = "\0";
  wi.customParam = buf_m2_set;
	wi.customStyle = 0;
	ghLabelM2_Setpoint = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM2_Setpoint, FALSE);
	gwinSetFont(ghLabelM2_Setpoint, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM2_Setpoint);

	// Create label widget: ghLabelM4_Setpoint
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 110;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m4_set[8] = "\0";
  wi.customParam = buf_m4_set;
	wi.customStyle = 0;
	ghLabelM4_Setpoint = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM4_Setpoint, FALSE);
	gwinSetFont(ghLabelM4_Setpoint, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM4_Setpoint);

	// Create label widget: ghLabelM0_Setpoint
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 30;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
	wi.customDraw = gwinLabelDrawJustifiedRight;
  wi.customDraw = CustomLabelDraw;
  char buf_m0_set[8] = "\0";
  wi.customParam = buf_m0_set;
	ghLabelM0_Setpoint = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM0_Setpoint, FALSE);
	gwinSetFont(ghLabelM0_Setpoint, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM0_Setpoint);

	// Create label widget: ghLabelM1_Setpoint
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 50;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m1_set[8] = "\0";
  wi.customParam = buf_m1_set;
	wi.customStyle = 0;
	ghLabelM1_Setpoint = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM1_Setpoint, FALSE);
	gwinSetFont(ghLabelM1_Setpoint, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM1_Setpoint);

	// Create label widget: ghLabelM3_Setpoint
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 90;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m3_set[8] = "\0";
  wi.customParam = buf_m3_set;
	wi.customStyle = 0;
	ghLabelM3_Setpoint = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM3_Setpoint, FALSE);
	gwinSetFont(ghLabelM3_Setpoint, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM3_Setpoint);

	// Create label widget: ghLabelM5_Setpoint
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 130;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m5_set[8] = "\0";
  wi.customParam = buf_m5_set;
	wi.customStyle = 0;
	ghLabelM5_Setpoint = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM5_Setpoint, FALSE);
	gwinSetFont(ghLabelM5_Setpoint, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM5_Setpoint);

	// Create label widget: ghLabelM6_Setpoint
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 150;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m6_set[8] = "\0";
  wi.customParam = buf_m6_set;
	wi.customStyle = 0;
	ghLabelM6_Setpoint = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM6_Setpoint, FALSE);
	gwinSetFont(ghLabelM6_Setpoint, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM6_Setpoint);

	// Create label widget: ghLabelM7_Setpoint
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 170;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m7_set[8] = "\0";
  wi.customParam = buf_m7_set;
	wi.customStyle = 0;
	ghLabelM7_Setpoint = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM7_Setpoint, FALSE);
	gwinSetFont(ghLabelM7_Setpoint, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM7_Setpoint);

	// Create label widget: ghLabelm7
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 170;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "M7 :";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelm7 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelm7, FALSE);
	gwinSetFont(ghLabelm7, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelm7);

	// Create label widget: ghLabelm6
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 150;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "M6 :";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelm6 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelm6, FALSE);
	gwinSetFont(ghLabelm6, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelm6);

	// Create label widget: ghLabele1
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 190;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "E1 : ";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabele1 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabele1, FALSE);
	gwinSetFont(ghLabele1, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabele1);

	// Create label widget: ghLabele3
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 210;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "E3 :";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabele3 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabele3, FALSE);
	gwinSetFont(ghLabele3, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabele3);

	// Create label widget: ghLabelM0_Feedback
	wi.g.show = TRUE;
	wi.g.x = 120;
	wi.g.y = 30;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m0_feed[8] = "\0";
  wi.customParam = buf_m0_feed;
	wi.customStyle = 0;
	ghLabelM0_Feedback = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM0_Feedback, FALSE);
	gwinSetFont(ghLabelM0_Feedback, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM0_Feedback);

	// Create label widget: ghLabelM1_Feedback
	wi.g.show = TRUE;
	wi.g.x = 120;
	wi.g.y = 50;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m1_feed[8] = "\0";
  wi.customParam = buf_m1_feed;
	wi.customStyle = 0;
	ghLabelM1_Feedback = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM1_Feedback, FALSE);
	gwinSetFont(ghLabelM1_Feedback, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM1_Feedback);

	// Create label widget: ghLabelM2_Feedback
	wi.g.show = TRUE;
	wi.g.x = 120;
	wi.g.y = 70;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m2_feed[8] = "\0";
  wi.customParam = buf_m2_feed;
	wi.customStyle = 0;
	ghLabelM2_Feedback = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM2_Feedback, FALSE);
	gwinSetFont(ghLabelM2_Feedback, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM2_Feedback);

	// Create label widget: ghLabelM3_Feedback
	wi.g.show = TRUE;
	wi.g.x = 120;
	wi.g.y = 90;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m3_feed[8] = "\0";
  wi.customParam = buf_m3_feed;
	wi.customStyle = 0;
	ghLabelM3_Feedback = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM3_Feedback, FALSE);
	gwinSetFont(ghLabelM3_Feedback, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM3_Feedback);

	// Create label widget: ghLabelM4_Feedback
	wi.g.show = TRUE;
	wi.g.x = 120;
	wi.g.y = 110;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m4_feed[8] = "\0";
  wi.customParam = buf_m4_feed;
	wi.customStyle = 0;
	ghLabelM4_Feedback = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM4_Feedback, FALSE);
	gwinSetFont(ghLabelM4_Feedback, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM4_Feedback);

	// Create label widget: ghLabelM5_Feedback
	wi.g.show = TRUE;
	wi.g.x = 120;
	wi.g.y = 130;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m5_feed[8] = "\0";
  wi.customParam = buf_m5_feed;
	wi.customStyle = 0;
	ghLabelM5_Feedback = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM5_Feedback, FALSE);
	gwinSetFont(ghLabelM5_Feedback, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM5_Feedback);

	// Create label widget: ghLabelM6_Feedback
	wi.g.show = TRUE;
	wi.g.x = 120;
	wi.g.y = 150;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m6_feed[8] = "\0";
  wi.customParam = buf_m6_feed;
	wi.customStyle = 0;
	ghLabelM6_Feedback = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM6_Feedback, FALSE);
	gwinSetFont(ghLabelM6_Feedback, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM6_Feedback);

	// Create label widget: ghLabelM7_Feedback
	wi.g.show = TRUE;
	wi.g.x = 120;
	wi.g.y = 170;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_m7_feed[8] = "\0";
  wi.customParam = buf_m7_feed;
	wi.customStyle = 0;
	ghLabelM7_Feedback = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM7_Feedback, FALSE);
	gwinSetFont(ghLabelM7_Feedback, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM7_Feedback);

	// Create label widget: ghLabelM0_Current
	wi.g.show = TRUE;
	wi.g.x = 190;
	wi.g.y = 30;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "00000";
  wi.customDraw = CustomLabelDraw;
  char buf_m0_current[8] = "\0";
  wi.customParam = buf_m0_current;
	wi.customStyle = 0;
	ghLabelM0_Current = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM0_Current, FALSE);
	gwinSetFont(ghLabelM0_Current, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM0_Current);

	// Create label widget: ghLabelM1_Current
	wi.g.show = TRUE;
	wi.g.x = 190;
	wi.g.y = 50;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "00000";
  wi.customDraw = CustomLabelDraw;
  char buf_m1_current[8] = "\0";
  wi.customParam = buf_m1_current;
	wi.customStyle = 0;
	ghLabelM1_Current = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM1_Current, FALSE);
	gwinSetFont(ghLabelM1_Current, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM1_Current);

	// Create label widget: ghLabelM2_Current
	wi.g.show = TRUE;
	wi.g.x = 190;
	wi.g.y = 70;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "00000";
  wi.customDraw = CustomLabelDraw;
  char buf_m2_current[8] = "\0";
  wi.customParam = buf_m2_current;
	wi.customStyle = 0;
	ghLabelM2_Current = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM2_Current, FALSE);
	gwinSetFont(ghLabelM2_Current, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM2_Current);

	// Create label widget: ghLabelM3_Current
	wi.g.show = TRUE;
	wi.g.x = 190;
	wi.g.y = 90;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "00000";
  wi.customDraw = CustomLabelDraw;
  char buf_m3_current[8] = "\0";
  wi.customParam = buf_m3_current;
	wi.customStyle = 0;
	ghLabelM3_Current = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM3_Current, FALSE);
	gwinSetFont(ghLabelM3_Current, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM3_Current);

	// Create label widget: ghLabelM4_Current
	wi.g.show = TRUE;
	wi.g.x = 190;
	wi.g.y = 110;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "00000";
  wi.customDraw = CustomLabelDraw;
  char buf_m4_current[8] = "\0";
  wi.customParam = buf_m4_current;
	wi.customStyle = 0;
	ghLabelM4_Current = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM4_Current, FALSE);
	gwinSetFont(ghLabelM4_Current, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM4_Current);

	// Create label widget: ghLabelM5_Current
	wi.g.show = TRUE;
	wi.g.x = 190;
	wi.g.y = 130;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "00000";
  wi.customDraw = CustomLabelDraw;
  char buf_m5_current[8] = "\0";
  wi.customParam = buf_m5_current;
	wi.customStyle = 0;
	ghLabelM5_Current = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM5_Current, FALSE);
	gwinSetFont(ghLabelM5_Current, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM5_Current);

	// Create label widget: ghLabelM6_Current
	wi.g.show = TRUE;
	wi.g.x = 190;
	wi.g.y = 150;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "00000";
  wi.customDraw = CustomLabelDraw;
  char buf_m6_current[8] = "\0";
  wi.customParam = buf_m6_current;
	wi.customStyle = 0;
	ghLabelM6_Current = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM6_Current, FALSE);
	gwinSetFont(ghLabelM6_Current, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM6_Current);

	// Create label widget: ghLabelM7_Current
	wi.g.show = TRUE;
	wi.g.x = 190;
	wi.g.y = 170;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "00000";
  wi.customDraw = CustomLabelDraw;
  char buf_m7_current[8] = "\0";
  wi.customParam = buf_m7_current;
	wi.customStyle = 0;
	ghLabelM7_Current = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelM7_Current, FALSE);
	gwinSetFont(ghLabelM7_Current, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelM7_Current);

	// Create label widget: ghLabele2
	wi.g.show = TRUE;
	wi.g.x = 150;
	wi.g.y = 190;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "E2 : ";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabele2 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabele2, FALSE);
	gwinSetFont(ghLabele2, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabele2);

	// Create label widget: ghLabele4
	wi.g.show = TRUE;
	wi.g.x = 150;
	wi.g.y = 210;
	wi.g.width = 30;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "E4 :";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabele4 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabele4, FALSE);
	gwinSetFont(ghLabele4, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabele4);

	// Create label widget: ghLabelE1_count
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 190;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_e1[8] = "\0";
  wi.customParam = buf_e1;
	wi.customStyle = 0;
	ghLabelE1_count = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelE1_count, FALSE);
	gwinSetFont(ghLabelE1_count, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelE1_count);

	// Create label widget: ghLabelE2_count
	wi.g.show = TRUE;
	wi.g.x = 190;
	wi.g.y = 190;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_e2[8] = "\0";
  wi.customParam = buf_e2;
	wi.customStyle = 0;
	ghLabelE2_count = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelE2_count, FALSE);
	gwinSetFont(ghLabelE2_count, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelE2_count);

	// Create label widget: ghLabelE3_count
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 210;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
  wi.customDraw = CustomLabelDraw;
  char buf_e3[8] = "\0";
  wi.customParam = buf_e3;
	wi.customStyle = 0;
	ghLabelE3_count = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelE3_count, FALSE);
	gwinSetFont(ghLabelE3_count, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelE3_count);

	// Create label widget: ghLabelE4_count
	wi.g.show = TRUE;
	wi.g.x = 190;
	wi.g.y = 210;
	wi.g.width = 50;
	wi.g.height = 20;
	wi.g.parent = ghContainer4;
	wi.text = "+0000";
	wi.customDraw = CustomLabelDraw;
	char buf_e4[8] = "\0";
	wi.customParam = buf_e4;
	wi.customStyle = 0;
	ghLabelE4_count = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelE4_count, FALSE);
	gwinSetFont(ghLabelE4_count, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghLabelE4_count);

	// Create console widget: ghConsole
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 30;
	wi.g.width = 220;
	wi.g.height = 140;
	wi.g.parent = ghContainerPage0;
	ghConsole = gwinConsoleCreate(0, &wi.g);
	gwinSetColor(ghConsole, silver_studio);
	gwinSetBgColor(ghConsole, black_studio);
	gwinSetFont(ghConsole, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghConsole);

	// create button widget: ghButtonStop
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 410;
	wi.g.width = 110;
	wi.g.height = 60;
	wi.g.parent = ghContainerPage0;
	wi.text = "Stop";
	wi.customDraw = gwinButtonDraw_Normal;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghButtonStop = gwinButtonCreate(0, &wi);
	gwinSetFont(ghButtonStop, dejavu_sans_24_anti_aliased);
	gwinRedraw(ghButtonStop);

	// create button widget: ghButton1
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 260;
	wi.g.width = 80;
	wi.g.height = 30;
	wi.g.parent = ghContainerPage0;
	wi.text = "Profile";
	wi.customDraw = gwinButtonDraw_Normal;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghButton1 = gwinButtonCreate(0, &wi);

	// create button widget: ghButton2
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 310;
	wi.g.width = 80;
	wi.g.height = 30;
	wi.g.parent = ghContainerPage0;
	wi.text = "Button2";
	wi.customDraw = gwinButtonDraw_Normal;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghButton2 = gwinButtonCreate(0, &wi);

	// create button widget: ghButton3
	wi.g.show = TRUE;
	wi.g.x = 10;
	wi.g.y = 360;
	wi.g.width = 80;
	wi.g.height = 30;
	wi.g.parent = ghContainerPage0;
	wi.text = "Reset";
	wi.customDraw = gwinButtonDraw_Normal;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghButton3 = gwinButtonCreate(0, &wi);

	// Create label widget: ghLabelTimer
	wi.g.show = TRUE;
	wi.g.x = 50;
	wi.g.y = 190;
	wi.g.width = 120;
	wi.g.height = 40;
	wi.g.parent = ghContainerPage0;
	wi.text = "00:00";
	wi.customDraw = gwinLabelDrawJustifiedCenter;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabelTimer = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabelTimer, FALSE);
	gwinSetFont(ghLabelTimer, dejavu_sans_32_anti_aliased);
	gwinRedraw(ghLabelTimer);

	// create button widget: ghButtonBack
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 80;
	wi.g.height = 30;
	wi.g.parent = ghContainerPage0;
	wi.text = "Back";
	wi.customDraw = gwinButtonDraw_Normal;
	wi.customParam = 0;
	wi.customStyle = &black;
	ghButtonBack = gwinButtonCreate(0, &wi);

	// Create label widget: ghLabel35
	wi.g.show = TRUE;
	wi.g.x = 580;
	wi.g.y = 0;
	wi.g.width = 220;
	wi.g.height = 220;
	wi.g.parent = ghContainerPage0;
	wi.text = "Label35";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = &black;
	ghLabel35 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel35, FALSE);

	// create checkbox widget: ghCheckboxDS4
	wi.g.show = TRUE;
	wi.g.x = 130;
	wi.g.y = 450;
	wi.g.width = 100;
	wi.g.height = 20;
	wi.g.parent = ghContainerPage0;
	wi.text = "DS4 Online";
	wi.customDraw = gwinCheckboxDraw_CheckOnRight;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghCheckboxDS4 = gwinCheckboxCreate(0, &wi);
	gwinCheckboxCheck(ghCheckboxDS4, FALSE);
	gwinSetFont(ghCheckboxDS4, dejavu_sans_12_anti_aliased);
	gwinRedraw(ghCheckboxDS4);

  // Create label widget: ghLabelCPU
  wi.g.show = TRUE;
  wi.g.x = 90;
  wi.g.y = 0;
  wi.g.width = 40;
  wi.g.height = 30;
  wi.g.parent = ghContainerPage0;
  wi.text = "CPU:";
  wi.customDraw = gwinLabelDrawJustifiedRight;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelCPU = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelCPU, FALSE);
  gwinSetFont(ghLabelCPU, dejavu_sans_16_anti_aliased);
  gwinRedraw(ghLabelCPU);

  // Create label widget: ghLabelCPU_VAL
  wi.g.show = TRUE;
  wi.g.x = 130;
  wi.g.y = 0;
  wi.g.width = 30;
  wi.g.height = 30;
  wi.g.parent = ghContainerPage0;
  wi.text = "00";
  wi.customDraw = CustomLabelDraw;
  char buf_cpu[8] = "\0";
  wi.customParam = buf_cpu;
  wi.customStyle = 0;
  ghLabelCPU_VAL = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelCPU_VAL, FALSE);
  gwinSetFont(ghLabelCPU_VAL, dejavu_sans_16_anti_aliased);
  gwinRedraw(ghLabelCPU_VAL);

  // Create label widget: ghLabelMotorVolt
  wi.g.show = TRUE;
  wi.g.x = 180;
  wi.g.y = 0;
  wi.g.width = 140;
  wi.g.height = 30;
  wi.g.parent = ghContainerPage0;
  wi.text = "Motor Voltage:";
  wi.customDraw = gwinLabelDrawJustifiedLeft;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelMotorVolt = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelMotorVolt, FALSE);
  gwinSetFont(ghLabelMotorVolt, dejavu_sans_16_anti_aliased);
  gwinRedraw(ghLabelMotorVolt);

  // Create label widget: ghLabelMBVolt
  wi.g.show = TRUE;
  wi.g.x = 390;
  wi.g.y = 0;
  wi.g.width = 110;
  wi.g.height = 30;
  wi.g.parent = ghContainerPage0;
  wi.text = "MB Voltage:";
  wi.customDraw = gwinLabelDrawJustifiedLeft;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelMBVolt = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelMBVolt, FALSE);
  gwinSetFont(ghLabelMBVolt, dejavu_sans_16_anti_aliased);
  gwinRedraw(ghLabelMBVolt);

  // Create label widget: ghLabelMBVolt_VAL
  wi.g.show = TRUE;
  wi.g.x = 500;
  wi.g.y = 0;
  wi.g.width = 50;
  wi.g.height = 30;
  wi.g.parent = ghContainerPage0;
  wi.text = "00.0V";
  wi.customDraw = gwinLabelDrawJustifiedRight;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelMBVolt_VAL = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelMBVolt_VAL, FALSE);
  gwinSetFont(ghLabelMBVolt_VAL, dejavu_sans_16_anti_aliased);
  gwinRedraw(ghLabelMBVolt_VAL);

  // Create label widget: ghLabelMotorVolt_VAL
  wi.g.show = TRUE;
  wi.g.x = 320;
  wi.g.y = 0;
  wi.g.width = 50;
  wi.g.height = 30;
  wi.g.parent = ghContainerPage0;
  wi.text = "00.0V";
  wi.customDraw = gwinLabelDrawJustifiedRight;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelMotorVolt_VAL = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelMotorVolt_VAL, FALSE);
  gwinSetFont(ghLabelMotorVolt_VAL, dejavu_sans_16_anti_aliased);
  gwinRedraw(ghLabelMotorVolt_VAL);

  // Create label widget: ghLabellp_avg
  wi.g.show = TRUE;
  wi.g.x = 0;
  wi.g.y = 60;
  wi.g.width = 70;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "Avg";
  wi.customDraw = gwinLabelDrawJustifiedLeft;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabellp_avg = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabellp_avg, FALSE);
  gwinSetFont(ghLabellp_avg, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabellp_avg);

  // Create label widget: ghLabellp_max
  wi.g.show = TRUE;
  wi.g.x = 0;
  wi.g.y = 80;
  wi.g.width = 70;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "Max";
  wi.customDraw = gwinLabelDrawJustifiedLeft;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabellp_max = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabellp_max, FALSE);
  gwinSetFont(ghLabellp_max, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabellp_max);

  // Create label widget: ghLabelcomm_avg
  wi.g.show = TRUE;
  wi.g.x = 0;
  wi.g.y = 130;
  wi.g.width = 70;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "Avg";
  wi.customDraw = gwinLabelDrawJustifiedLeft;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelcomm_avg = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelcomm_avg, FALSE);
  gwinSetFont(ghLabelcomm_avg, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabelcomm_avg);

  // Create label widget: ghLabelcomm_max
  wi.g.show = TRUE;
  wi.g.x = 0;
  wi.g.y = 150;
  wi.g.width = 70;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "Max";
  wi.customDraw = gwinLabelDrawJustifiedLeft;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelcomm_max = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelcomm_max, FALSE);
  gwinSetFont(ghLabelcomm_max, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabelcomm_max);

  // Create label widget: ghLabellp_max_val
  wi.g.show = TRUE;
  wi.g.x = 100;
  wi.g.y = 80;
  wi.g.width = 60;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "10000";
  wi.customDraw = CustomLabelDraw;
  char buf_lp_max[8] = "\0";
  wi.customParam = buf_lp_max;
  wi.customStyle = 0;
  ghLabellp_max_val = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabellp_max_val, FALSE);
  gwinSetFont(ghLabellp_max_val, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabellp_max_val);

  // Create label widget: ghLabelcomm_avg_val
  wi.g.show = TRUE;
  wi.g.x = 100;
  wi.g.y = 130;
  wi.g.width = 60;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "10000";
  wi.customDraw = CustomLabelDraw;
  char buf_comm_avg[8] = "\0";
  wi.customParam = buf_comm_avg;
  wi.customStyle = 0;
  ghLabelcomm_avg_val = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelcomm_avg_val, FALSE);
  gwinSetFont(ghLabelcomm_avg_val, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabelcomm_avg_val);

  // Create label widget: ghLabelcomm_max_val
  wi.g.show = TRUE;
  wi.g.x = 100;
  wi.g.y = 150;
  wi.g.width = 60;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "10000";
  wi.customDraw = CustomLabelDraw;
  char buf_comm_max[8] = "\0";
  wi.customParam = buf_comm_max;
  wi.customStyle = 0;
  ghLabelcomm_max_val = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelcomm_max_val, FALSE);
  gwinSetFont(ghLabelcomm_max_val, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabelcomm_max_val);

  // Create label widget: ghLabellp_avg_val
  wi.g.show = TRUE;
  wi.g.x = 100;
  wi.g.y = 60;
  wi.g.width = 60;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "10000";
  wi.customDraw = CustomLabelDraw;
  char buf_lp_avg[8] = "\0";
  wi.customParam = buf_lp_avg;
  wi.customStyle = 0;
  ghLabellp_avg_val = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabellp_avg_val, FALSE);
  gwinSetFont(ghLabellp_avg_val, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabellp_avg_val);

  // Create label widget: ghLabelloop
  wi.g.show = TRUE;
  wi.g.x = 0;
  wi.g.y = 40;
  wi.g.width = 170;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "Loop roundtrip(us)";
  wi.customDraw = gwinLabelDrawJustifiedLeft;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelloop = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelloop, FALSE);
  gwinSetFont(ghLabelloop, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabelloop);

  // Create label widget: ghLabelcomm
  wi.g.show = TRUE;
  wi.g.x = 0;
  wi.g.y = 110;
  wi.g.width = 170;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "Comm roundtrip(us)";
  wi.customDraw = gwinLabelDrawJustifiedLeft;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelcomm = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelcomm, FALSE);
  gwinSetFont(ghLabelcomm, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabelcomm);

  // Create label widget: ghLabelstat
  wi.g.show = TRUE;
  wi.g.x = 0;
  wi.g.y = 10;
  wi.g.width = 120;
  wi.g.height = 20;
  wi.g.parent = ghContainer3;
  wi.text = "RT Loop Stat";
  wi.customDraw = gwinLabelDrawJustifiedLeft;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelstat = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelstat, FALSE);
  gwinSetFont(ghLabelstat, dejavu_sans_12_anti_aliased);
  gwinRedraw(ghLabelstat);

  // Create label widget: ghLabelprofile_name
  wi.g.show = TRUE;
  wi.g.x = 100;
  wi.g.y = 260;
  wi.g.width = 130;
  wi.g.height = 30;
  wi.g.parent = ghContainerPage0;
  wi.text = "Profile name ";
  wi.customDraw = gwinLabelDrawJustifiedLeft;
  wi.customParam = 0;
  wi.customStyle = 0;
  ghLabelprofile_name = gwinLabelCreate(0, &wi);
  gwinLabelSetBorder(ghLabelprofile_name, FALSE);
}

void guiShowPage(unsigned pageIndex)
{
	// Hide all pages
	gwinHide(ghContainerPage0);

	// Show page selected page
	switch (pageIndex) {
	case 0:
		gwinShow(ghContainerPage0);
		break;

	default:
		break;
	}
}

void guiCreate(void)
{
	GWidgetInit wi;

	// Prepare fonts
	dejavu_sans_16_anti_aliased = gdispOpenFont("DejaVuSansMono_Bold16");
	dejavu_sans_10 = gdispOpenFont("DejaVuSans10");
	dejavu_sans_12_anti_aliased = gdispOpenFont("DejaVuSansMono12");
	dejavu_sans_24_anti_aliased = gdispOpenFont("DejaVuSans24_aa");
	dejavu_sans_32_anti_aliased = gdispOpenFont("DejaVuSans32_aa");

	// Prepare images

	// GWIN settings
	gwinWidgetClearInit(&wi);
	gwinSetDefaultFont(dejavu_sans_16_anti_aliased);
	gwinSetDefaultStyle(&white, FALSE);
	gwinSetDefaultColor(black_studio);
	gwinSetDefaultBgColor(white_studio);

	// Create all the display pages
	createPagePage0();

	// Select the default display page
	guiShowPage(0);

	// Console sample text
	gwinPrintf(ghConsole, "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet");
}

void guiEventLoop(void)
{
	GEvent* pe;

	while (1) {
		// Get an event
		pe = geventEventWait(&gl, 0);
		switch (pe->type) {
		}

	}
}

