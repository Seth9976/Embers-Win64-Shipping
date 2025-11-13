// 函数: sub_1414c2eb0
// 地址: 0x1414c2eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x10))
void* rbp = arg4
char rcx = ((*U"1111")[result]).b

if (data_1439c8830 != 0)
    result.b = *(arg4 + 0x32) - 1
    
    if (result.b u<= 1)
        result = 1 << rcx
        int64_t rcx_2 = result & data_143f13cb8
        
        if ((data_143f13cc8 & result) == 0 || (*(arg4 + 0x37) & 8) == 0)
            result.b = 0
        else
            result.b = 1
        
        if (rcx_2 == 0 || result.b != 0)
            void* rcx_3 = *(arg1 + 0x18)
            
            if (rcx_3 == 0)
            label_1414c30b5:
                uint64_t* rcx_7 = *(arg2 + 0x80)
                uint64_t rdx_7 = zx.q(*(arg1 + 0x10))
                uint64_t* var_78 = rcx_7
                int64_t* rax_4 = (*(*rcx_7 + 0x40))(rcx_7, rdx_7, &var_78, arg4)
                int64_t* rbx_1 = rax_4
                int64_t rdx_8 = *rax_4
                result.b = (*(rdx_8 + 0x1d8))(rax_4, rdx_8).d u<= 1
                
                if ((*(arg2 + 0x9c) & 8) != 0 && result.b != 0)
                    int64_t rdx_9 = *rbx_1
                    result = (*(rdx_9 + 0x290))(rbx_1, rdx_9)
                    
                    if (result.b == 0)
                        int64_t arg_8
                        result = (*(*rbx_1 + 0x1e8))(rbx_1, &arg_8)
                        
                        if (((*result u>> 0xa).b & 1) == 0)
                            arg_8 = sub_141261c60(arg2)
                            int32_t rax_7 = sub_141261c10(arg2, rbx_1, &arg_8)
                            int32_t rax_8 = sub_141261bd0(arg2, rbx_1, &arg_8)
                            
                            if (sub_142134f80(rbx_1, 0) != 0)
                                int64_t rdx_13 = *rbx_1
                                
                                if ((*(rdx_13 + 0x28))(rbx_1, rdx_13) == 0
                                        && sub_14212f090(rbx_1) == 0)
                                    int64_t* rax_12 = sub_14210f630(0)
                                    int64_t rdx_14 = *rax_12
                                    uint64_t* rax_13 = (*(rdx_14 + 0x280))(rax_12, rdx_14)
                                    uint64_t rdx_15 = zx.q(*(arg1 + 0x10))
                                    var_78 = rax_13
                                    int64_t var_70 = 0
                                    uint64_t r9 = *rax_13
                                    rbx_1 = (*(r9 + 0x40))(rax_13, rdx_15, &var_70, r9)
                            
                            return sub_1414d7430(arg1, arg2, arg3, arg5, rbp, var_78, rbx_1, rax_7, 
                                rax_8)
            else if ((*(arg4 + 0x3b) & 4) != 0)
            label_1414c30a8:
                result = sub_1414d7390(rcx_3, rbp)
                
                if (result.b != 0)
                    goto label_1414c30b5
            else
                void* rcx_4 = *(arg4 + 0x110)
                void* r10_1 = arg4 + 0x80
                int128_t zmm1 = *(r10_1 + 0x10)
                uint32_t var_68[0x4] = *r10_1
                int64_t* r11_2 = *(rcx_4 + 0xf0) + 0x61d8
                int128_t var_58_1 = zmm1
                uint32_t var_48_1[0x4] = *(r10_1 + 0x20)
                int128_t var_38_1 = *(r10_1 + 0x30)
                void* rdx_5
                
                if (r11_2[2].d == *(r11_2 + 0x3c))
                label_1414c2ff3:
                    rdx_5 = nullptr
                else
                    void* r8 = r11_2[9]
                    arg4 = &r11_2[8]
                    int64_t rcx_5 = sx.q(*(rcx_4 + 0x10))
                    
                    if (r8 != 0)
                        arg4 = r8
                    
                    int32_t rax_1 = *(arg4 + (((sx.q(r11_2[0xa].d) - 1) & rcx_5) << 2))
                    
                    if (rax_1 == 0xffffffff)
                    label_1414c2ff3_1:
                        rdx_5 = nullptr
                    else
                        arg4 = r11_2[1]
                        
                        while (true)
                            rdx_5 = sx.q(rax_1) * 0xd0 + arg4
                            
                            if (*rdx_5 == rcx_5.d)
                                break
                            
                            rax_1 = *(rdx_5 + 0xc0)
                            
                            if (rax_1 == 0xffffffff)
                                goto label_1414c2ff3_2
                        
                        if (rax_1 == 0xffffffff)
                        label_1414c2ff3_2:
                            rdx_5 = nullptr
                
                void* rcx_6 = rdx_5 + 0x10
                
                if (rdx_5 == 0)
                    rcx_6 = nullptr
                
                uint32_t zmm0[0x4]
                
                if (rcx_6 != 0)
                    zmm0 = *(rcx_6 + 0x50)
                    zmm1 = *(rcx_6 + 0x60)
                    *(rcx_6 + 0x90) = *r11_2
                    var_68 = zmm0
                    int128_t var_58_2 = zmm1
                    uint32_t var_48_2[0x4] = *(rcx_6 + 0x70)
                    int128_t var_38_2 = *(rcx_6 + 0x80)
                
                int128_t* result_1 = &var_68
                
                for (int64_t i = 0; i s< 4; )
                    int64_t j = 0
                    result = result_1
                    
                    do
                        zmm0 = *(r10_1 - &var_68 + result)
                        zmm0[0] = zmm0[0] f- *result
                        
                        if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
                            rcx_3 = *(arg1 + 0x18)
                            goto label_1414c30a8
                        
                        j += 1
                        result += 4
                    while (j s< 4)
                    
                    i += 1
                    result_1 = &result_1[1]

return result
