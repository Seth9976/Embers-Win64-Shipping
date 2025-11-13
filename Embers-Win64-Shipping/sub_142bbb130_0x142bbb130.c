// 函数: sub_142bbb130
// 地址: 0x142bbb130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_142b97060(arg1, 0, arg4)

if (rax == 0)
    int32_t rbp_1 = 0
    int16_t rdi_1 = 0
    int32_t arg_20
    int16_t rax_1 = sub_142b96f00(arg1, &arg_20)
    rax = arg_20
    
    if (rax == 0)
        if (0x7fff + rax_1 u<= 1)
            sub_142b96dd0(arg1, &arg_20)
            rax = arg_20
        
        rdi_1 = rax_1
    
    if (rax == 0)
        if (rdi_1 != 0x8001)
            rax = sub_142b97060(arg1, 0, arg4)
        
        if (rdi_1 == 0x8001 || rax == 0)
            rax = sub_142b96500(arg1, arg3.d)
            
            if (rax == 0)
                if (memcmp(arg1[7], arg2, arg3) != 0)
                    rbp_1 = 2
                
                sub_142b96620(arg1)
                return rbp_1

return rax
