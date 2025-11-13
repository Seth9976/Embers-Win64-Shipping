// 函数: sub_141c96c40
// 地址: 0x141c96c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* r12 = *arg2
int64_t rbp = sx.q(arg3)
int64_t r14 = 0
uint64_t result = &r12[arg2[1]]
uint64_t r13_1 = sx.q(arg2[1].d) << 3 u>> 3

if (r12 u> result)
    r13_1 = 0

if (r13_1 != 0)
    do
        int64_t* rdi_1 = *arg1
        int64_t* r15_1 = *r12
        void* rcx = *rdi_1
        result = sub_141cac900(rcx, r15_1, rcx, rdi_1[1])
        
        if (result != 0)
            void arg_10
            result = sub_141c9fdc0(rdi_1[2], &arg_10, result)
            
            if (*result != 0xffffffff)
                int64_t* rbx_1 = rdi_1[3]
                int64_t rsi_1 = sx.q(rbx_1[1].d)
                int32_t rax_1 = (rsi_1 + 1).d
                rbx_1[1].d = rax_1
                
                if (rax_1 s> *(rbx_1 + 0xc))
                    sub_1405a4d70(rbx_1)
                
                *(*rbx_1 + (rsi_1 << 3)) = r15_1
                int64_t* r9_2 = rdi_1[4]
                result = zx.q(r9_2[1].d)
                int32_t* rcx_6
                
                if (result.d == *(r9_2 + 0x34))
                label_141c96d3f:
                    rcx_6 = nullptr
                else
                    void* rcx_3 = r9_2[8]
                    void* r8_2 = &r9_2[7]
                    
                    if (rcx_3 != 0)
                        r8_2 = rcx_3
                    
                    result = zx.q(*(r8_2 + (((sx.q(r9_2[9].d) - 1) & rbp) << 2)))
                    
                    if (result.d == 0xffffffff)
                    label_141c96d3f_1:
                        rcx_6 = nullptr
                    else
                        while (true)
                            rcx_6 = (sx.q(result.d) << 4) + *r9_2
                            
                            if (*rcx_6 == rbp.d)
                                break
                            
                            result = zx.q(rcx_6[2])
                            
                            if (result.d == 0xffffffff)
                                goto label_141c96d3f_2
                        
                        if (result.d == 0xffffffff)
                        label_141c96d3f_2:
                            rcx_6 = nullptr
                
                rcx_6[1] += 1
        
        arg1 = arg_8
        r12 = &r12[1]
        r14 += 1
    while (r14 != r13_1)

return result
