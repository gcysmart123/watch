#include "keyproc.h"
#include "menu.h"

code struct Menu_def MenuProc[]={
{0,  1, 0, 0,0,main_menu},  //主屏幕显示

{1, 15,13,2, 0,menu1},   //"呼叫器注册"    
{2, 16,1, 3, 0,menu2},   //"删除呼叫器"   
{3, 64,2, 4, 0,menu3},   //"键位设置",
{4, 28,3, 5, 0,menu4},   //"工作模式"    
{5, 30,4, 6, 0,menu5},   //"显示方式"    
{6, 41,5, 7, 0,menu6},   //"提示方式"
{7, 32,6, 8, 0,menu7},   //"提示时间"    
{8, 35,7, 9, 0,menu8},   //"消号时间" 
{9, 38,8, 10,0,menu9},   //"循环时间"
{10,44,9, 11,0,menu10},  //"时间日期设置"

{11,50,10,12,0,menu11},  //"键盘设置" 
    
{12,51,11,13,0,menu12},  //"语言设置"     
{13,62,12,1, 0,menu14},  //“恢复出厂设置”

{14,0,0,0,0,0},

{15,15,15,15,1,menu2_AddCaller},        //第二层，注册呼叫器
{16,18,17,17,2,menu_RF_remove_single},  //第二层，删除呼叫器
{17,19,16,16,2,menu_RF_remove_all},      
{18,18,18,18,16,do_del_RF_single},      //删除单个呼叫器
{19,19,19,19,17,menu3_DelCaller},       //删除全部呼叫器

{20,23,21,22,64,menu10_sub1},       //第二层，键位功能设主菜单
{21,23,21,22,64,menu10_sub1_up},    //第二层，键位功能设置，
{22,23,21,22,64,menu10_sub1_down},
{23,25,24,24,20,menu10_sbu1_1},    //键位功能设置->设置XX区键位功能
{24,26,23,23,20,menu10_sbu1_2},    //键位功能设置->复制到XX区
{25,25,25,25,23,menu10_sbu1_set},
{26,26,27,27,24,menu10_sbu1_yes},    
{27,24,26,26,24,menu10_sbu1_no},

{28,28,29,29,4,Menu_Mode_Set_1},  //模式设置,单键模式
{29,29,28,28,4,Menu_Mode_Set_2},  //模式设置,多键模式

{30,30,31,31,5,menu4_LiveView},   //即时显示
{31,31,30,30,5,menu4_Queue},      //排队显示

{32,32,33,34,7,menu7_promptTime}, //提示时间
{33,32,33,34,7,menu7_sub2_up},    //提示时间+
{34,32,33,34,7,menu7_sub2_down},  //提示时间- 

{35,35,36,37,8,menu5_sub1},       //第二层，销号时间设置
{36,35,36,37,8,menu5_sub1_up},    //第二层，销号时间设置, 上翻
{37,35,36,37,8,menu5_sub1_down},  //第二层，销号时间设置，下翻 

{38,38,39,40,9,menu6_sub1},       //第二层，循环时间设置
{39,38,39,40,9,menu6_sub1_up},    //第二层，循环时间设置, 上翻
{40,38,39,40,9,menu6_sub1_down},  //第二层，循环时间设置，下翻
  
{41,41,43,42,6,menu7_sub2_Light},   //第三层, /*呼叫提示设置*/
{42,42,41,43,6,menu7_sub2_Shake},
{43,43,42,41,6,menu7_sub2_Sound},  
  
  //时间日期设置
{44,45,44,44,10,menu_4_sub1_1},    //第二层，时间日期设置---->时
{45,46,45,45,10,menu_4_sub1_2},    //第二层，时间日期设置---->分
{46,47,46,46,10,menu_4_sub1_3},    //第二层，时间日期设置---->秒
{47,48,47,47,10,menu_4_sub1_4},    //第二层，时间日期设置---->年
{48,49,48,48,10,menu_4_sub1_5},    //第二层，时间日期设置---->月
{49,44,49,49,10,menu_4_sub1_6},    //第二层，时间日期设置---->日 

{50,50,50,50,11,Menu11_KeyBoard},  //键盘设置

{51,51,52,52,12,menu12_Chinese},   //第三层，语言设置
{52,52,51,51,12,menu12_English},   //第三层，语言设置

{53,61,12,1,0,menu_factory_eset}, //第二层, /*恢复出厂设置*/


{54,1,55,56,57,menu_RF_list},  //接收RF列表显示
{55,1,55,56,57,menu_RF_up},
{56,1,55,56,57,menu_RF_down},
{57,1,55,56,57,menu_RF_del},


{58,58,60,59,0,RF_Power_Set},    //开/关信号
{59,59,58,60,0,PowerDown_Set},   //关机                
{60,60,59,58,0,Rest_Set},        //重启


{61,61,62,62,13,menu11_sbu1_yes},   //恢复出厂设置，是                
{62,13,61,61,13,menu11_sbu1_no},    //恢复出厂设置，否
{63,63,63,63,0,PowerDown_Set_sjz},   //关机 
/*sjz 20160305*/
{64,20,65,65,3,menu10_sub1_area_set},    //第二层，键位功能设置，
{65,66,64,64,3,menu10_sub1_type_set},
{66,69,67,68,65,menu10_sub2},
{67,69,67,68,66,menu10_sub2_up},    //第二层，键位功能设置，
{68,69,67,68,66,menu10_sub2_down},
{69,69,69,69,66,menu10_sub2_enter},
};
