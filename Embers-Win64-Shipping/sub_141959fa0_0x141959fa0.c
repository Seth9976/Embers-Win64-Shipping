// 函数: sub_141959fa0
// 地址: 0x141959fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
enum ENUM_DISPLAY_SETTINGS_MODE iModeNum = 0
DEVMODEW devMode
memset(&devMode, 0, 0xdc)

if (EnumDisplaySettingsW(nullptr, 0, &devMode) != 0)
    BOOL i
    
    do
        uint32_t dmPelsWidth = devMode.dmPelsWidth
        iModeNum += 1
        
        if (dmPelsWidth u<= 0x28f0)
            uint32_t dmPelsHeight = devMode.dmPelsHeight
            
            if (dmPelsHeight u<= 0x28f0)
                if (arg3 != 0)
                    int32_t r9_1 = arg2[1].d
                    int32_t rcx_1 = 0
                    
                    if (r9_1 s> 0)
                        int32_t* rax_3 = *arg2
                        
                        do
                            if (*rax_3 == dmPelsWidth && rax_3[1] == dmPelsHeight)
                                goto label_14195a0bc
                            
                            rcx_1 += 1
                            rax_3 = &rax_3[3]
                        while (rcx_1 s< r9_1)
                    
                    goto label_14195a065
                
                if (devMode.dmDisplayFrequency u<= 0x28f0)
                label_14195a065:
                    int64_t rdi_1 = sx.q(arg2[1].d)
                    int32_t rax_4 = (rdi_1 + 1).d
                    arg2[1].d = rax_4
                    
                    if (rax_4 s> *(arg2 + 0xc))
                        sub_14083a7e0(arg2)
                    
                    int32_t* rax_5 = *arg2
                    int64_t rcx_3 = rdi_1 * 3
                    *(rax_5 + (rcx_3 << 2)) = 0
                    rax_5[rcx_3 + 2] = 0
                    void* rcx_4 = &(*arg2)[rcx_3]
                    *rcx_4 = devMode.dmPelsWidth
                    *(rcx_4 + 4) = devMode.dmPelsHeight
                    *(rcx_4 + 8) = devMode.dmDisplayFrequency
        
    label_14195a0bc:
        i = EnumDisplaySettingsW(nullptr, iModeNum, &devMode)
    while (i != 0)

char var_108 = 0
sub_141951090(*arg2, arg2[1].d, 0)
int64_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_128)
return result
