// 函数: sub_142319ae0
// 地址: 0x142319ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)

if (data_143de542d == 0)
    sub_142310f50(arg1)

if (sub_140cdd6a0(arg1) s< 0x181)
    void* rbx_1 = arg1[4]
    
    if (rbx_1 != 0)
        void* rax_1 = sub_140bdf2e0()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* rbx_2 = *(rbx_1 + 0x118)
            
            if (rbx_2 != 0)
                void* rax_4 = sub_142452380()
                void* rdx_2 = *(rbx_2 + 0x10)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30
                        && *(rbx_2 + 0x130) == 0)
                    int64_t* i = arg1[5]
                    
                    for (void* r14_1 = &i[sx.q(arg1[6].d)]; i != r14_1; i = &i[1])
                        void* rbp_1 = *i
                        int32_t rcx_4
                        rcx_4.b = *(rbp_1 + 0x8c) == 0
                        
                        if ((rcx_4.b & sub_140b5b8a0(*(rbp_1 + 0x88), 0)) != 0)
                            void* rbx_4 = *(rbp_1 + 0x30)
                            
                            if (rbx_4 != 0)
                                void* rax_9 = sub_1425881f0()
                                void* rdx_3 = *(rbx_4 + 0x10)
                                int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                                
                                if (rax_10.d s<= *(rdx_3 + 0x38)
                                        && *(*(rdx_3 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                                    int64_t zmm0_1 = *(rbx_4 + 0x134)
                                    int32_t rax_12 = *(rbx_4 + 0x13c)
                                    int64_t var_38 = zmm0_1
                                    
                                    if (zmm0_1.d f!= 1f || var_38:4.d.d f!= 1f || rax_12.d f!= 1f)
                                        rax_12.b = 1
                                    else
                                        rax_12.b = 0
                                    
                                    if (rax_12.b != 0)
                                        int32_t var_20_1 = 0x3f800000
                                        var_38 = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
                                        int32_t var_30_2 = 0x3f800000
                                        sub_141f49070(rbx_4, &var_38)
                            
                            break

uint64_t result = sub_140cdd6a0(arg1)

if (result.d s< 0x1ee && arg1[6].d s> 0)
    arg1[8].d = 0
    
    if (*(arg1 + 0x44) s<= 0xffffffff)
        sub_1405c5570(&arg1[7], 0)
    
    void** rdi_1 = arg1[5]
    int64_t rsi_1 = 0
    result = &rdi_1[arg1[6]]
    uint64_t r15_2 = sx.q(arg1[6].d) << 3 u>> 3
    
    if (rdi_1 u> result)
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            void* rcx_9 = *rdi_1
            
            if (rcx_9 != 0)
                int64_t var_28
                result = sub_1422e46c0(rcx_9, &var_28)
                uint64_t result_1 = result
                int64_t rbp_2 = sx.q(*(result + 8))
                
                if (rbp_2.d != 0)
                    int32_t rcx_10 = arg1[8].d
                    int32_t rdx_6 = rcx_10 + rbp_2.d
                    
                    if (rdx_6 s> *(arg1 + 0x44))
                        sub_1405c5570(&arg1[7], rdx_6)
                        rcx_10 = arg1[8].d
                    
                    result = memmove(arg1[7] + (sx.q(rcx_10) << 3), *result_1, (rbp_2 << 3).d)
                    *(result_1 + 8) = 0
                    arg1[8].d += rbp_2.d
                
                int64_t rcx_14 = var_28
                
                if (rcx_14 != 0)
                    result = sub_140a74f90(rcx_14)
            
            rdi_1 = &rdi_1[1]
            rsi_1 += 1
        while (rsi_1 != r15_2)

return result
