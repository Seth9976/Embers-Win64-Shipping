// 函数: sub_142be5260
// 地址: 0x142be5260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg2[6]
int32_t rax = (*(arg1 + 0x2a0))(arg1, 0x67617370, arg2, 0)
int32_t arg_8 = rax

if (rax == 0)
    rax = sub_142b96500(arg2, rax + 4)
    arg_8 = rax
    
    if (rax == 0)
        *(arg1 + 0x2f8) = sub_142b967c0(arg2)
        *(arg1 + 0x2fa) = sub_142b967c0(arg2)
        sub_142b96620(arg2)
        
        if (*(arg1 + 0x2f8) u>= 2)
            *(arg1 + 0x2fa) = 0
            return 8
        
        uint64_t i_1 = zx.q(*(arg1 + 0x2fa))
        *(arg1 + 0x300) = sub_142b99a90(rbp, 4, 0, i_1.d, 0, &arg_8)
        rax = arg_8
        
        if (rax == 0)
            rax = sub_142b96500(arg2, (i_1 << 2).d)
            arg_8 = rax
            
            if (rax == 0)
                void* rbx_1 = *(arg1 + 0x300)
                
                if (i_1.d != 0)
                    uint64_t i
                    
                    do
                        *rbx_1 = sub_142b967c0(arg2)
                        *(rbx_1 + 2) = sub_142b967c0(arg2)
                        rbx_1 += 4
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                sub_142b96620(arg2)
                return arg_8

return rax
