// 函数: sub_1414e7e20
// 地址: 0x1414e7e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* r12
r12.b = 0
char arg_18 = 0

if (*(data_143ee7718 + 4) != 0)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(arg1 + 0xa8) s> 0)
        int64_t* r14_1 = nullptr
        int128_t zmm6
        int128_t var_48_1 = zmm6
        
        do
            int64_t r15_1 = *(arg1 + 0xa0)
            int32_t rbx_1 = *(arg2 + 0x8c)
            int32_t rax_1 = *(r14_1 + r15_1 + 0xad8)
            
            if (rbx_1 != rax_1)
                bool cond:0_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rax_1
                
                if (cond:0_1)
                    void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_2 = &rdx_2[3]
                    
                    if (rax_2 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_2 = &rdx_2[3]
                    
                    *(arg2 + 0x30) = rax_2
                    int64_t* rax_3 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_3 = rdx_2
                    int32_t rax_4 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_2[1]
                    rdx_2[1] = 0
                    *rdx_2 = &data_142f11588
                    rdx_2[2].d = rax_4
                else
                    *(arg2 + 0x90) = rax_1
            
            void* rbp_1 = *(r14_1 + r15_1 + 0x15a8)
            
            if (rbp_1 != 0)
                char rax_5 = sub_1413ffb50(rbp_1 + 0x1068)
                sub_1413ffb50(rbp_1 + 0x1138)
                
                if (rax_5 == 0)
                    r12 = zx.q(arg_18)
                else
                    int128_t zmm0_1 = sub_1413eb6f0(rbp_1 + 0x1138)
                    float zmm0_2 = sub_1413eb6f0(rbp_1 + 0x1068)
                    bool rcx_6 = *(rbp_1 + 0x1214)
                    zmm6.d = zmm0_1.d f+ zmm0_2
                    bool rdx_7
                    float zmm1_1
                    
                    if (rcx_6 == 0)
                        zmm1_1 = *(rbp_1 + 0x1210)
                        *(rbp_1 + 0x120c) = 0
                        
                        zmm0_2 = zmm1_1 != 0f ? 0.100000001f : 1f
                        
                        zmm6.d = zmm6.d f- zmm1_1
                        rdx_7 = false
                        zmm6.d = zmm6.d f* zmm0_2
                        zmm6.d = zmm6.d f+ zmm1_1
                        *(rbp_1 + 0x1210) = zmm6.d
                        
                        if (not(*(*(r14_1 + r15_1) + 0x38) f- *(rbp_1 + 0x1208) f<=
                                *(data_143ee7a48 + 4)))
                            rdx_7 = zmm6.d f> *(data_143ee7828 + 4)
                            *(rbp_1 + 0x1214) = rdx_7
                    else
                        zmm1_1 = *(rbp_1 + 0x120c)
                        *(rbp_1 + 0x1210) = 0
                        
                        zmm0_2 = zmm1_1 != 0f ? 0.100000001f : 1f
                        
                        zmm6.d = zmm6.d f- zmm1_1
                        rdx_7 = rcx_6
                        zmm6.d = zmm6.d f* zmm0_2
                        zmm6.d = zmm6.d f+ zmm1_1
                        *(rbp_1 + 0x120c) = zmm6.d
                        
                        if (not(*(*(r14_1 + r15_1) + 0x38) f- *(rbp_1 + 0x1208) f<=
                                *(data_143ee7a48 + 4)))
                            rdx_7 = zmm6.d f> *(data_143ee7938 + 4)
                            *(rbp_1 + 0x1214) = rdx_7
                    
                    if (rcx_6 != rdx_7)
                        *(rbp_1 + 0x1208) = *(*(r14_1 + r15_1) + 0x38)
                    
                    if (arg_18 != 0 || rdx_7 != 0)
                        r12.b = 1
                        arg_18 = 1
                    else
                        r12.b = 0
                        arg_18 = 0
                
                i = i_1
            
            if (*(arg2 + 0x8c) != rbx_1)
                bool cond:1_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rbx_1
                
                if (cond:1_1)
                    void*** rdx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_13 = &rdx_12[3]
                    
                    if (rax_13 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_13 = &rdx_12[3]
                    
                    *(arg2 + 0x30) = rax_13
                    int64_t* rax_14 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_14 = rdx_12
                    int32_t rax_15 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_12[1]
                    rdx_12[1] = 0
                    *rdx_12 = &data_142f11588
                    rdx_12[2].d = rax_15
                else
                    *(arg2 + 0x90) = rbx_1
            
            arg1 = arg_8
            i += 1
            r14_1 = &r14_1[0xa48]
            i_1 = i
        while (i s< *(arg1 + 0xa8))

return sub_1413a9ef0(&data_143ec4c60, r12.b) __tailcall
