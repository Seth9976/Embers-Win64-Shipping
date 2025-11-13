// 函数: sub_14195a120
// 地址: 0x14195a120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t rdi = 0
uint32_t dmPelsWidth_1 = 0
uint32_t dmPelsHeight_1 = 0
enum ENUM_DISPLAY_SETTINGS_MODE iModeNum = 0
DEVMODEW devMode
memset(&devMode, 0, 0xdc)
BOOL i = EnumDisplaySettingsW(nullptr, 0, &devMode)

if (i == 0)
    *arg2 = 0
    *arg3 = 0
else
    do
        uint32_t dmPelsHeight = devMode.dmPelsHeight
        iModeNum += 1
        uint32_t dmPelsWidth = devMode.dmPelsWidth
        
        if (rdi == 0)
        label_14195a1d4:
            dmPelsWidth_1 = dmPelsWidth
            dmPelsHeight_1 = dmPelsHeight
            rdi = 1
        else
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(dmPelsWidth - *arg2)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(dmPelsWidth_1 - *arg2)
            
            if ((temp1_1 ^ temp0_1) - temp0_1 s<= (temp3_1 ^ temp2_1) - temp2_1)
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(dmPelsHeight - *arg3)
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(dmPelsHeight_1 - *arg3)
                
                if ((temp5_1 ^ temp4_1) - temp4_1 s<= (temp7_1 ^ temp6_1) - temp6_1)
                    goto label_14195a1d4
        
        i = EnumDisplaySettingsW(nullptr, iModeNum, &devMode)
    while (i != 0)
    
    *arg2 = dmPelsWidth_1
    *arg3 = dmPelsHeight_1

__security_check_cookie(rax_1 ^ &var_138)
return i
