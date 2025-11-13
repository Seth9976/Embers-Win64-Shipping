// 函数: sub_141505ee0
// 地址: 0x141505ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
void* r14 = arg4

if (*(arg1 + 0x90) u<= 0)
    return 

do
    uint64_t rax = *(arg1 + 0x70)
    int32_t rbp_1 = *arg3
    int64_t i_1 = sx.q(i)
    
    if (*(rax + (i_1 << 3)) == rbp_1)
        int32_t rcx = *(rax + (i_1 << 3) + 4)
        int32_t r11_2 = rcx & 0xffffff
        int32_t rcx_2 = rcx u>> 0x18 & 0xf
        
        if (rcx_2 u<= arg6)
            int32_t rax_2 = r11_2 & 0x55555555
            int32_t r10_2 = *(r14 + 0xc) << rcx_2.b
            int32_t rdx_3 = (rax_2 u>> 1 ^ rax_2) & 0x33333333
            int32_t rax_6 = (rdx_3 u>> 2 ^ rdx_3) & 0xf0f0f0f
            int32_t rdx_7 = (rax_6 u>> 4 ^ rax_6) & 0xff00ff
            int32_t rax_12 = r11_2 u>> 1 & 0x55555555
            int32_t r9_1 = (zx.d((rdx_7 u>> 8).w) ^ zx.d(rdx_7.w)) * r10_2
            int32_t rdx_11 = (rax_12 u>> 1 ^ rax_12) & 0x33333333
            int32_t rax_16 = (rdx_11 u>> 2 ^ rdx_11) & 0xf0f0f0f
            int32_t rdx_15 = (rax_16 u>> 4 ^ rax_16) & 0xff00ff
            int32_t rdx_17 = *(r14 + 0x10) << rcx_2.b
            int32_t r8_1 = zx.d((rdx_15 u>> 8 ^ rdx_15).w) * r10_2
            
            if (r9_1 - rdx_17 s<= arg5[2] && *arg5 s<= rdx_17 + r9_1 + r10_2
                    && r8_1 - rdx_17 s<= arg5[3] && arg5[1] s<= r8_1 + rdx_17 + r10_2)
                uint64_t r14_3 = zx.q(i.w)
                
                if (*(*(arg1 + 0x48) + (r14_3 << 1)) != 0xffff)
                    sub_14151c0b0(arg1, arg2, r14_3.w, 0)
                    *(*(arg1 + 0x40) + (r14_3 << 2)) = 0
                    int16_t rdx_20 = *(*(arg1 + 0x48) + (r14_3 << 1))
                    
                    if (rdx_20 == 0 || *(*(arg1 + 0x40) + (
                            zx.q(*(*(arg1 + 0x38) + (zx.q(((zx.d(rdx_20) - 1) s>> 1).w) << 1)))
                            << 2)) u<= 0)
                        sub_141505070(arg1 + 0x28, rdx_20)
                    else
                        sub_14151c590(arg1 + 0x28, rdx_20)
                else
                    int64_t rbp_2 = sx.q(arg7[1].d)
                    int32_t arg_c = rcx_2 << 0x18 | r11_2
                    int32_t rax_20 = (rbp_2 + 1).d
                    arg7[1].d = rax_20
                    
                    if (rax_20 s> *(arg7 + 0xc))
                        sub_1405a4d70(arg7)
                    
                    *(*arg7 + (rbp_2 << 3)) = rbp_1.q
            
            r14 = arg4
    
    i += 1
while (i u< *(arg1 + 0x90))
