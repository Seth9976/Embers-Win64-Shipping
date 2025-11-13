// 函数: sub_141f09920
// 地址: 0x141f09920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
int128_t zmm8
int128_t var_38 = zmm8
void* const* result

if (arg1[0x16] == 0)
    result.b = 0
else
    result = arg1[0x15]
    
    if (result != 0)
    label_141f09975:
        result = sub_142437e30(result, 1, 1)
        
        if ((*(result + 0x22d) & 4) == 0)
            result.b = 1
        else
            void* r8_1 = arg1[0x16]
            int64_t* rbx_1 = *(r8_1 + 0xa0)
            
            if (rbx_1 == 0)
                result.b = 0
            else
                int32_t rax = *(rbx_1 + 0xc)
                void* const rax_7
                
                if (rax s>= data_143e1d9b4)
                    rax_7 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax)
                    uint32_t rdx_2 = zx.d(temp0_1)
                    int32_t rax_2 = temp1_1 + rdx_2
                    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
                
                if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
                    result.b = 0
                else if (*(arg1 + 0xfb) == 0)
                    result.b = 1
                else
                    void* rax_9 = rbx_1[0x26]
                    float var_e0_1
                    float zmm0_1[0x4]
                    float zmm1[0x4]
                    
                    if (rax_9 == 0)
                        int64_t var_e8_1 = data_143dbb1f8.q
                        var_e0_1 = data_143dbb200
                    else
                        zmm1 = *(rax_9 + 0x1d0)
                        int64_t var_e8
                        var_e8.d = zmm1[0]
                        zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        var_e0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                        var_e8:4.d = zmm0_1[0]
                    
                    if (not(var_e0_1[0] f>= *(result + 0x244)))
                        int64_t rax_17
                        
                        if (result[0x49] == 0)
                            rax_17 = sub_141db5980()
                        else
                            void* rax_11 = sub_142496c20()
                            
                            if (rax_11 == 0)
                                rax_17 = sub_141db5980()
                            else
                                void* rdx_4 = result[0x49]
                                int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                                
                                if (rax_12.d s> *(rdx_4 + 0x38)
                                        || *(*(rdx_4 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30
                                        || rdx_4 == 0)
                                    rax_17 = sub_141db5980()
                                else
                                    void* rax_14 = sub_142496c20()
                                    int64_t rax_15
                                    int64_t* rdx_5
                                    
                                    if (rax_14 != 0)
                                        rdx_5 = result[0x49]
                                        rax_15 = sx.q(*(rax_14 + 0x38))
                                    
                                    if (rax_14 == 0 || rax_15.d s> rdx_5[7].d
                                            || *(rdx_5[6] + (rax_15 << 3)) != rax_14 + 0x30)
                                        rdx_5 = nullptr
                                    
                                    rax_17 = sub_141db59c0(rdx_5)
                        
                        (*(*rbx_1 + 0x538))(rbx_1, rax_17)
                        result.b = 0
                    else if (r8_1 == 0 || (*(r8_1 + 0x88) & 1) == 0)
                        result.b = 1
                    else
                        zmm1 = *(r8_1 + 0x110)
                        int128_t zmm3 = *(r8_1 + 0x100)
                        int32_t zmm2 = *(r8_1 + 0x10c)
                        zmm7 = zmm3
                        int128_t zmm5_1 = *(r8_1 + 0x104)
                        zmm3.d = zmm3.d f- zmm2
                        int128_t zmm4_1 = *(r8_1 + 0x108)
                        zmm7.d = zmm7.d f+ zmm2
                        zmm0_1 = *(r8_1 + 0x114)
                        zmm8.d = zmm5_1.d f+ zmm1[0]
                        zmm5_1.d = zmm5_1.d f- zmm1[0]
                        zmm6.d = zmm4_1.d f+ zmm0_1[0]
                        zmm4_1.d = zmm4_1.d f- zmm0_1[0]
                        
                        if (not(zmm3.d f< -1048576f))
                            zmm0_1 = 0x49800000
                        
                        if (zmm3.d f< -1048576f || zmm7.d f> 1048576f || zmm5_1.d f< -1048576f
                                || zmm8.d f> 1048576f || zmm4_1.d f< -1048576f
                                || not(zmm6.d f<= 1048576f))
                            (*(*rbx_1 + 0x540))(zmm0_1, 0xc9800000)
                            sub_141dd6600(rbx_1, 0)
                            void var_c8
                            memset(&var_c8, 0, 0x88)
                            int32_t var_c0_1 = 0x3f800000
                            sub_141f28360(arg1, &var_c8)
                            result.b = 0
                        else
                            result.b = 1
    else
        result = sub_141ee69e0(arg1)
        
        if (result != 0)
            goto label_141f09975
        
        result.b = 0

return result
