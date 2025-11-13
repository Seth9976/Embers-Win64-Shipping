// 函数: sub_141527980
// 地址: 0x141527980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 1
arg2[1] = *arg2
int32_t i_1 = 1

if (*(arg1 + 0x18) s> 1)
    int64_t rbp_1 = 4
    int64_t* r10_1 = 8
    int64_t var_58_1 = 4
    int64_t* arg_18 = 8
    
    do
        int32_t* r9_1 = *(arg1 + 0x28)
        int32_t j = 0
        int32_t j_1 = 0
        
        if (*(r9_1 + rbp_1) s> 0)
            int32_t* r11_1 = nullptr
            int32_t* arg_20 = nullptr
            
            do
                int64_t r14_1 = sx.q(*(r11_1 + *(r10_1 + *(arg1 + 0x20))))
                
                if (r14_1.d s>= 0)
                    int32_t* rdi_1 = arg2[1]
                    int64_t rax_3 = arg2[2]
                    void* rcx_2 = *(*(arg1 + 0xa8) + r10_1) + r11_1
                    
                    if (rax_3 == rdi_1)
                        int64_t rcx_3 = *arg2
                        int64_t rsi_3 = (rdi_1 - rcx_3) s>> 2
                        
                        if (rsi_3 == 0x3fffffffffffffff)
                            sub_14058ac50()
                            noreturn
                        
                        int64_t rax_6 = (rax_3 - rcx_3) s>> 2
                        uint64_t rdx_1 = rax_6 u>> 1
                        int64_t rbp_2
                        
                        if (rax_6 u<= 0x3fffffffffffffff - rdx_1)
                            rbp_2 = rdx_1 + rax_6
                            
                            if (rbp_2 u< rsi_3 + 1)
                                rbp_2 = rsi_3 + 1
                        else
                            rbp_2 = rsi_3 + 1
                        
                        void* rax_7 = public: struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
                            arg2, rbp_2)
                        *(rax_7 + (rsi_3 << 2)) = *rcx_2
                        void* rcx_7 = rax_7
                        int64_t r8_1 = arg2[1]
                        int32_t* rdx_3 = *arg2
                        uint32_t count
                        
                        if (rdi_1 != r8_1)
                            memmove(rcx_7, rdx_3, rdi_1.d - rdx_3.d)
                            count = (arg2[1]).d - rdi_1.d
                            rdx_3 = rdi_1
                            rcx_7 = (rsi_3 << 2) + 4 + rax_7
                        else
                            count = r8_1.d - rdx_3.d
                        
                        memmove(rcx_7, rdx_3, count)
                        std::vector<uint64_t,class std::allocator<uint64_t> >::_Change_array(arg2, 
                            rax_7, rsi_3 + 1, rbp_2)
                        r11_1 = arg_20
                        r10_1 = arg_18
                        j = j_1
                        rbp_1 = var_58_1
                        i = i_1
                    else
                        *rdi_1 = *rcx_2
                        arg2[1] += 4
                    
                    *(r11_1 + *(r10_1 + *(arg1 + 0x20))) = not.d(r14_1.d)
                    int32_t* r8_6 = *(arg1 + 0x28)
                    int64_t* rdi_2 = *(arg1 + 0x20)
                    int32_t r10_2 = 0
                    int32_t rdx_7 = *(*(rdi_2 + r10_1) + (sx.q(*(r8_6 + rbp_1) + j) << 2))
                    
                    if (rdx_7 != r8_6[r14_1] - 1)
                        r10_2 = rdx_7 + 1
                    
                    do
                        int64_t r8_7 = sx.q(r14_1.d)
                        int64_t rcx_14 = sx.q(r10_2)
                        int64_t rax_14 = rdi_2[r8_7]
                        r14_1 = sx.q(*(rax_14 + (rcx_14 << 2)))
                        *(rax_14 + (rcx_14 << 2)) = not.d(r14_1.d)
                        r9_1 = *(arg1 + 0x28)
                        rdi_2 = *(arg1 + 0x20)
                        int32_t rax_18 = r9_1[r8_7] + r10_2
                        r10_2 = 0
                        int32_t rdx_9 = *(rdi_2[r8_7] + (sx.q(rax_18) << 2))
                        
                        if (rdx_9 != r9_1[r14_1] - 1)
                            r10_2 = rdx_9 + 1
                    while (r14_1.d != i)
                    
                    r10_1 = arg_18
                
                j += 1
                r11_1 = &r11_1[1]
                j_1 = j
                arg_20 = r11_1
            while (j s< *(r9_1 + rbp_1))
        
        i += 1
        r10_1 = &r10_1[1]
        rbp_1 += 4
        i_1 = i
        arg_18 = r10_1
        var_58_1 = rbp_1
    while (i s< *(arg1 + 0x18))

return sub_1415282a0(arg1) __tailcall
