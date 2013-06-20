/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001053619704_1351276808_init();
    work_m_00000000002018157712_2381739659_init();
    work_m_00000000002352219457_1621107508_init();
    work_m_00000000001373379337_3017244303_init();
    work_m_00000000001051389652_0399521239_init();
    work_m_00000000001051389652_3076129341_init();
    work_m_00000000002942145352_1098446607_init();
    work_m_00000000000263758990_2987726008_init();
    work_m_00000000002385348472_2725559894_init();
    work_m_00000000002993223807_3027548060_init();
    work_m_00000000001340414366_3856312063_init();
    work_m_00000000004140475218_3505899711_init();
    work_m_00000000002510317187_2864889816_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002510317187_2864889816");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
