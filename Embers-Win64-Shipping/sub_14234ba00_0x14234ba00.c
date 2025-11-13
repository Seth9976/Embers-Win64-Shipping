// 函数: sub_14234ba00
// 地址: 0x14234ba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (*(arg1 + 0x108) s> 0)
    int64_t r15_1 = 0
    int64_t r12_1 = 0
    
    do
        if (arg2 != 0)
            int64_t* r8_2 = *(arg1 + 0x100) + r15_1
            result = *(**r8_2 + r12_1)
            
            if (*(result + 0xec) u> 0)
                void* rdx = nullptr
                
                if (i s>= 0 && i s< *(arg2 + 0x578))
                    rdx = *(arg2 + 0x570) + sx.q(i) * 0x28
                
                result = sub_14234bbc0(r8_2, rdx)
                void* rcx_2 = *(arg2 + 0x3e8)
                
                if (rcx_2 != 0)
                    int64_t* rcx_3 = *(rcx_2 + 0x108)
                    result = (*(*rcx_3 + 0x260))(rcx_3)
                    
                    if (result != 0)
                        void* rbx_1 = *(arg1 + 0x58)
                        
                        if (rbx_1 != 0)
                            void* var_50_1 = rbx_1
                            char rax_4 = sub_140a80f40()
                            
                            if (rax_4 != 0)
                                result = sub_1420725e0(result, rbx_1)
                            else if (data_143f138f4 != rax_4)
                            label_14234bb0b:
                                void var_48
                                int64_t* rax_6 = sub_142333540(&var_48, nullptr, 0xff)
                                *(*rax_6 + 0x10) = result.o
                                void* rcx_6 = *rax_6
                                int32_t r8_3 = rax_6[2].d
                                int64_t* rdx_2 = rax_6[1]
                                int64_t* rbx_2 = *(rcx_6 + 0x28)
                                int64_t* arg_18 = rbx_2
                                int32_t* rdi_2 = &rbx_2[9]
                                
                                if (rbx_2 != 0)
                                    *rdi_2 += 1
                                    rbx_2 = arg_18
                                
                                result = sub_1405e48c0(rcx_6, rdx_2, r8_3, 1)
                                
                                if (rbx_2 != 0)
                                    result = zx.q(*rdi_2)
                                    *rdi_2 -= 1
                                    
                                    if (result.d == 1)
                                        result = sub_140a2f6e0(arg_18)
                            else if (data_143de5480 == rax_4)
                                result = sub_1420725e0(result, rbx_1)
                            else
                                uint32_t rax_5
                                rax_5.b = GetCurrentThreadId() == data_143de5470
                                
                                if (rax_5.b == 0)
                                    goto label_14234bb0b
                                
                                result = sub_1420725e0(result, rbx_1)
        
        i += 1
        r12_1 += 8
        r15_1 += 0xb0
    while (i s< *(arg1 + 0x108))

return result
