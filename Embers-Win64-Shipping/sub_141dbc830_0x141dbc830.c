// 函数: sub_141dbc830
// 地址: 0x141dbc830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    arg3 = rax_2 s>> 0x10
    arg2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
    rax_7 = *(data_143e1d9a0 + (sx.q(arg3) << 3)) + (arg2 << 3)

uint64_t result

if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0)
    result = (*(*arg1 + 0x150))(arg1, arg2, arg3)
    
    if (result != 0)
        char rcx_3 = arg1[0x1e].b
        int128_t zmm6
        int128_t var_18 = zmm6
        int128_t zmm7
        int128_t var_28 = zmm7
        int128_t zmm8
        int128_t var_38 = zmm8
        
        if (rcx_3 == 3 || rcx_3 == 0)
            result = sub_142437e30(result, 1, 1)
            
            if ((*(result + 0x22d) & 4) == 0)
                result.b = 1
            else
                void* rcx_5 = arg1[0x26]
                float var_50_1
                float zmm0_1[0x4]
                float zmm1[0x4]
                
                if (rcx_5 == 0)
                    int64_t var_58_1 = data_143dbb1f8.q
                    var_50_1 = data_143dbb200
                else
                    zmm1 = *(rcx_5 + 0x1d0)
                    int64_t var_58
                    var_58.d = zmm1[0]
                    zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    var_50_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                    var_58:4.d = zmm0_1[0]
                
                if (not(var_50_1[0] f>= *(result + 0x244)))
                    int64_t rax_17
                    
                    if (*(result + 0x248) == 0)
                        rax_17 = sub_141db5980()
                    else
                        void* rax_11 = sub_142496c20()
                        
                        if (rax_11 == 0)
                            rax_17 = sub_141db5980()
                        else
                            void* rdx_2 = *(result + 0x248)
                            int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                            
                            if (rax_12.d s> *(rdx_2 + 0x38)
                                    || *(*(rdx_2 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30
                                    || rdx_2 == 0)
                                rax_17 = sub_141db5980()
                            else
                                void* rax_14 = sub_142496c20()
                                int64_t rax_15
                                int64_t* rdx_3
                                
                                if (rax_14 != 0)
                                    rdx_3 = *(result + 0x248)
                                    rax_15 = sx.q(*(rax_14 + 0x38))
                                
                                if (rax_14 == 0 || rax_15.d s> rdx_3[7].d
                                        || *(rdx_3[6] + (rax_15 << 3)) != rax_14 + 0x30)
                                    rdx_3 = nullptr
                                
                                rax_17 = sub_141db59c0(rdx_3)
                    
                    (*(*arg1 + 0x538))(arg1, rax_17)
                    result.b = 0
                else if (rcx_5 == 0 || (*(rcx_5 + 0x88) & 1) == 0)
                    result.b = 1
                else
                    zmm1 = *(rcx_5 + 0x110)
                    int128_t zmm3 = *(rcx_5 + 0x100)
                    int32_t zmm2 = *(rcx_5 + 0x10c)
                    zmm8 = zmm3
                    int128_t zmm5_1 = *(rcx_5 + 0x104)
                    zmm3.d = zmm3.d f- zmm2
                    int128_t zmm4_1 = *(rcx_5 + 0x108)
                    zmm8.d = zmm8.d f+ zmm2
                    zmm0_1 = *(rcx_5 + 0x114)
                    zmm7.d = zmm5_1.d f+ zmm1[0]
                    zmm5_1.d = zmm5_1.d f- zmm1[0]
                    zmm6.d = zmm4_1.d f+ zmm0_1[0]
                    zmm4_1.d = zmm4_1.d f- zmm0_1[0]
                    
                    if (not(zmm3.d f< -1048576f))
                        zmm0_1 = 0x49800000
                    
                    if (zmm3.d f< -1048576f || zmm8.d f> 1048576f || zmm5_1.d f< -1048576f
                            || zmm7.d f> 1048576f || zmm4_1.d f< -1048576f
                            || not(zmm6.d f<= 1048576f))
                        (*(*arg1 + 0x540))(zmm0_1, 0xc9800000)
                        sub_141dd6600(arg1, 0)
                        sub_141dbef90(arg1)
                        result.b = 0
                    else
                        result.b = 1
        else
            result.b = 1
        
        return result

result.b = 0
return result
