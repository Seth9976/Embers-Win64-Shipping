// 函数: sub_1408e7f80
// 地址: 0x1408e7f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x86]

if (rax != 0)
    int32_t rax_1 = *(rax + 0x48)
    int64_t* r12_1 = nullptr
    *(arg1 + 0x444) = rax_1
    *(arg1 + 0x47c) = 0
    
    if (rax_1 s> 0)
        int32_t i = 1
        
        do
            if (arg1[0x8e].d s<= i - 1)
                int64_t rbx_1 = sx.q(arg1[0x8e].d)
                
                if (i s> rbx_1.d)
                    arg1[0x8e].d = i
                    int32_t j_1 = i - rbx_1.d
                    
                    if (i s> *(arg1 + 0x474))
                        sub_1405fdd60(&arg1[0x8d])
                    
                    int128_t* rdx_3 = rbx_1 * 0x70 + arg1[0x8d]
                    
                    if (j_1 != 0)
                        void* rcx_1 = rdx_3 + 0x4c
                        int32_t j
                        
                        do
                            rcx_1 += 0x70
                            *rdx_3 = data_14399f6e0
                            rdx_3 = &rdx_3[7]
                            rdx_3[-6] = data_14399f6f0
                            rdx_3[-5] = data_14399f700
                            rdx_3[-4] = data_14399f710
                            *(rcx_1 - 0x70) = data_143dbb1f8.q
                            int32_t rax_2 = data_143dbb200
                            *(rcx_1 - 0x68) = rax_2
                            *(rcx_1 - 0x7c) = *(rcx_1 - 0x70)
                            *(rcx_1 - 0x74) = rax_2
                            *(rcx_1 - 0x64) = 0
                            *(rcx_1 - 0x60) = -1
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                else if (i s< rbx_1.d && i != rbx_1.d)
                    arg1[0x8e].d = i
            
            sub_1408e9e40(arg1, i - 1)
            uint128_t zmm0 = sub_141ee8490(arg1)
            int64_t* rcx_5 = *(r12_1 + *(arg1[0x86] + 0x40))
            (*(*rcx_5 + 0x298))(rcx_5)
            i += 1
            arg2 = _mm_max_ss((*(arg1 + 0x47c))[0], zmm0.d)
            r12_1 = &r12_1[1]
            *(arg1 + 0x47c) = arg2[0]
        while (i s<= *(arg1 + 0x444))

return common_cscanf<char>(arg1, arg2) __tailcall
