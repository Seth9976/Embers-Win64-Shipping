// 函数: sub_141e07230
// 地址: 0x141e07230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int128_t zmm8 = arg3
int128_t zmm7 = zx.o(0)
int512_t result

if (arg2 == 0 || 0f f>= arg2[0x12].d)
    result.o = zx.o(0)
else
    char rax_1
    rax_1, result = sub_141e25530(arg2)
    
    if (rax_1 == 0)
        result.o = zx.o(0)
    else
        int64_t rax_2 = *(arg1 + 0x28)
        
        if (rax_2 == 0)
            result.o = zx.o(0)
        else
            int64_t* rcx_1 = arg_10
            int64_t rdx = rcx_1[7]
            
            if (rdx == 0 || rax_2 != rdx)
                result.o = zx.o(0)
            else
                int128_t zmm6
                int128_t var_28_1 = zmm6
                int64_t* var_68
                int64_t** var_58
                
                if (arg6 != 0)
                    sub_141e23510(rcx_1, &var_68)
                    rcx_1 = arg_10
                    int32_t rax_3 = *(arg1 + 0x80)
                    int64_t* rbx_1 = var_68
                    int64_t rdi_1 = sx.q(rax_3 - 1)
                    
                    if (rax_3 - 1 s>= 0)
                        int64_t temp1_1
                        
                        do
                            int64_t* rcx_2 = *(*(arg1 + 0x78) + (rdi_1 << 3))
                            
                            if (rcx_2 != 0)
                                void* rcx_3 = *rcx_2
                                
                                if (rcx_3 != 0 && *sub_141e23510(rcx_3, &var_58) == rbx_1)
                                    sub_141e31c70(*(*(arg1 + 0x78) + (rdi_1 << 3)), &rcx_1[0x15], 1)
                            
                            temp1_1 = rdi_1
                            rdi_1 -= 1
                        while (temp1_1 - 1 s>= 0)
                        rcx_1 = arg_10
                
                if (rcx_1[0x2f].b != 0 || *(rcx_1 + 0x179) != 0)
                    int64_t* rax_7 = *(arg1 + 0x1e0)
                    
                    if (rax_7 != 0)
                        sub_141e31c70(rax_7, &rcx_1[0x15], 1)
                
                int64_t* rax_8 = j_sub_140a82f30(0x1b0)
                
                if (rax_8 != 0)
                    rax_8, zmm7, zmm8 = sub_141e11b40(rax_8, arg1)
                
                int64_t* rdx_6 = arg_10
                int64_t* var_60 = rax_8
                rdx_6[0x12].d
                sub_141e28c10(rax_8, rdx_6)
                int128_t zmm6_1 = sub_141e2dce0(var_60, zmm8.d)
                
                if (not(arg5 f< zmm7.d))
                    zmm7 = _mm_min_ss(zmm6_1.d, arg5)
                
                int64_t* rax_9 = var_60
                rax_9[0x25].d = zmm7.d
                rax_9[6].d = 0xfffffffe
                rax_9[7].d = 0xfffffffe
                int64_t rdi_2 = sx.q(*(arg1 + 0x80))
                int32_t rax_10 = (rdi_2 + 1).d
                *(arg1 + 0x80) = rax_10
                
                if (rax_10 s> *(arg1 + 0x84))
                    sub_1405a4d70(arg1 + 0x78)
                
                *(*(arg1 + 0x78) + (rdi_2 << 3)) = var_60
                var_58 = &arg_10
                void** var_50_1 = &var_60
                sub_140bbe6a0(arg1 + 0x88, &var_68, &var_58, nullptr)
                int64_t* rcx_13 = arg_10
                
                if ((*(*rcx_13 + 0x2d0))(rcx_13) != 0)
                    *(arg1 + 0x1e0) = var_60
                
                var_68 = arg_10
                int128_t zmm6_2
                result, zmm6_2 = sub_1405a9f90(arg1 + 0x48, &var_68)
                
                if (arg4 != 0)
                    zmm8.d = zmm8.d f* *(arg_10 + 0x94)
                    zmm6_2.d = zmm6_2.d f/ zmm8.d
                
                result.o = zmm6_2

return result
