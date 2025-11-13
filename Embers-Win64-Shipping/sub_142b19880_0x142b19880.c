// 函数: sub_142b19880
// 地址: 0x142b19880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t arg_10
int32_t i_4 = sub_142b6a550(*(arg1 + 0x20), 0, 1, 1, 0, 0, &arg_10)
int32_t i_3 = i_4

if (i_4 s>= 0)
    int32_t i
    
    do
        arg2[1](*arg2, zx.q(rbx))
        
        if (rbx != i_3)
            int16_t rax = arg_10.w
            
            if (*(arg1 + 0x1a) u<= rax && rax u< *(arg1 + 0x1e))
                rax.b &= 6
                
                if (rax.b u> 2)
                    int16_t r15_1
                    
                    if (rbx s>= zx.d(*(arg1 + 8)))
                        uint8_t rdx_1
                        
                        if (rbx s<= 0xffff)
                            rdx_1 = *((sx.q(rbx) s>> 8) + *(arg1 + 0x38))
                        
                        if (rbx s<= 0xffff
                                && (rdx_1 == 0 || (rdx_1 u>> ((rbx s>> 5).b & 7) & 1) == 0))
                            r15_1 = 0
                        else
                            r15_1 = sub_142b1def0(arg1, rbx)
                    else
                        r15_1 = 0
                    
                    int32_t rbx_1 = rbx + 1
                    
                    if (rbx_1 s<= i_3)
                        int64_t rbp_1 = sx.q(rbx_1)
                        
                        do
                            int16_t rdi_1
                            
                            if (rbx_1 s>= zx.d(*(arg1 + 8)))
                                uint8_t rdx_3
                                
                                if (rbx_1 s<= 0xffff)
                                    rdx_3 = *((rbp_1 s>> 8) + *(arg1 + 0x38))
                                
                                if (rbx_1 s<= 0xffff &&
                                        (rdx_3 == 0 || (rdx_3 u>> ((rbx_1 s>> 5).b & 7) & 1) == 0))
                                    rdi_1 = 0
                                else
                                    rdi_1 = sub_142b1def0(arg1, rbx_1)
                            else
                                rdi_1 = 0
                            
                            if (rdi_1 != r15_1)
                                arg2[1](*arg2, zx.q(rbx_1))
                                r15_1 = rdi_1
                            
                            rbx_1 += 1
                            rbp_1 += 1
                        while (rbx_1 s<= i_3)
        
        rbx = i_3 + 1
        i = sub_142b6a550(*(arg1 + 0x20), rbx, 1, 1, 0, 0, &arg_10)
        i_3 = i
    while (i s>= 0)

for (int16_t i_1 = -0x5400; i_1 u< 0xd7a4; i_1 += 0x1c)
    uint32_t i_2 = zx.d(i_1)
    arg2[1](*arg2, zx.q(i_2))
    arg2[1](*arg2, zx.q(i_2 + 1))

return arg2[1](*arg2, 0xd7a4)
