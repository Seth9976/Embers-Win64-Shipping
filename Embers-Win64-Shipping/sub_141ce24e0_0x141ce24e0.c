// 函数: sub_141ce24e0
// 地址: 0x141ce24e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
int64_t* r9 = *(arg1 + 0xe0) + sx.q(arg2) * 0x28
int64_t rdx_1 = sx.q(arg3)
int64_t rax_2 = *r9
int64_t result_2 = sx.q(*(rax_2 + (rdx_1 << 2)))
*(rax_2 + (rdx_1 << 2)) = rdi.d
int32_t* rcx = r9[2]
int32_t* arg_8 = rcx
int64_t result = &rcx[sx.q(r9[3].d)]
int64_t result_1 = result

if (rcx != result)
    result = result_2
    
    do
        int64_t rbx_1 = sx.q(*rcx)
        int64_t r12_3 = (rbx_1 << 4) + *(arg1 + 0xa8)
        
        for (int64_t i = 0; i s< 3; i += 1)
            if (*(r12_3 + (i << 2)) == result_2.d)
                int64_t rcx_1 = result * 3
                int64_t rax_4 = *(arg1 + 0x38)
                int32_t* r8 = *(rax_4 + (rcx_1 << 3) + 8)
                void* r14_1 = rax_4 + (rcx_1 << 3)
                int64_t r9_1 = sx.q(*(r14_1 + 0x10))
                int32_t* rax_5 = r8
                void* rdx_2 = &r8[r9_1]
                
                if (r8 != rdx_2)
                    do
                        if (*rax_5 == rbx_1.d)
                            int32_t rax_7 = ((rax_5 - r8) s>> 2).d
                            
                            if (rax_7 != 0xffffffff)
                                void* rcx_3 = &r8[sx.q(rax_7)]
                                memmove(rcx_3, rcx_3 + 4, (r9_1.d - rax_7 - 1) << 2)
                                *(r14_1 + 0x10) -= 1
                            
                            break
                        
                        rax_5 = &rax_5[1]
                    while (rax_5 != rdx_2)
                
                int64_t rax_8 = *(arg1 + 0x38)
                int64_t rcx_4 = rdi * 3
                int64_t rbp_1 = sx.q(*(rax_8 + (rcx_4 << 3) + 0x10))
                void* r14_2 = rax_8 + (rcx_4 << 3)
                int32_t rax_9 = (rbp_1 + 1).d
                *(r14_2 + 0x10) = rax_9
                
                if (rax_9 s> *(r14_2 + 0x14))
                    sub_1405a4cf0(r14_2 + 8)
                
                *(*(r14_2 + 8) + (rbp_1 << 2)) = rbx_1.d
                result = result_2
                *(r12_3 + (i << 2)) = rdi.d
        
        rcx = &arg_8[1]
        arg_8 = rcx
    while (rcx != result_1)

return result
