// 函数: sub_141ea68a0
// 地址: 0x141ea68a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_648
int64_t rax_1 = __security_cookie ^ &var_648
(*(*arg1 + 0x2b0))()
int32_t var_5e0 = *(arg3 + 0x14)
int32_t rax_4 = arg3[1].d
void* var_5e8 = *(arg3 + 0xc)
void* zmm0 = *arg3
int32_t var_5f0 = rax_4
int64_t rax_5 = *arg1
void* var_5f8 = zmm0
(*(rax_5 + 0x270))(arg1, arg2, &var_5f8, &var_5e8, arg3[3].d.d, arg3, arg3 + 0xc, &arg3[3])
int32_t rax_6 = *(arg3 + 0x14)
var_5f8 = *(arg3 + 0xc)
int64_t* var_610_1 = &arg3[3]
var_5e8 = *arg3
zmm0 = arg3[3].d
var_5f0 = rax_6
int32_t var_5e0_1 = arg3[1].d
int32_t result
int64_t rdx
int128_t zmm6
result, rdx, zmm6 =
    sub_142485b40(arg1, arg2[0], &var_5e8, &var_5f8, zmm0.d, arg3, arg3 + 0xc, var_610_1)
int128_t zmm2_1

if (arg1[6] != 0)
    int32_t var_608 = 0
    void var_5d8
    sub_1422d7fd0(&var_5d8)
    (*(*arg1 + 0x2b8))(arg1, arg2, &var_608, &var_5d8)
    result, rdx, zmm6 = sub_142485c50(arg1, arg2, &var_608, &var_5d8)
    zmm2_1 = var_608
    
    if (not(zmm2_1.d f<= 0f))
        result, rdx, zmm6 = sub_14225d750(arg1[6], &var_5d8, zmm2_1)
    
    int64_t var_a8
    
    if (var_a8 != 0)
        result, rdx = sub_140a74f90(var_a8)

if ((arg1[5].b & 8) == 0)
    goto label_141ea6a2a

if (0f f< arg1[8].d)
label_141ea6a35:
    result = arg1[0xa].d
    
    if (result s<= 0)
        result.b = 0
    else
        int64_t* rbx_1 = arg1[9]
        void* r12_3 = &rbx_1[sx.q(result) * 2]
        float zmm0_1[0x4]
        
        if (rbx_1 != r12_3)
            int128_t var_48_1 = zmm6
            int32_t* rsi_1 = &rbx_1[1]
            int128_t zmm8
            int128_t var_68_1 = zmm8
            
            do
                if (*rbx_1 != 0)
                    zmm8 = arg1[8].d
                    
                    if (sub_140d3e110(rsi_1) != 0)
                        void* rax_11 = sub_140d3c6e0(rsi_1)
                        float zmm5_1[0x4] = 0x3f800000
                        bool cond:1_1 = *(rax_11 + 0x1f0) != 1
                        float zmm1[0x4] = *(rax_11 + 0x1d0)
                        float zmm3 = zmm1[0] f- *arg3
                        zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        zmm0_1[0] = zmm0_1[0] f- *(arg3 + 4)
                        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                        zmm1[0] = zmm1[0] f- arg3[1].d
                        
                        if (not(cond:1_1))
                            zmm5_1 = 0x40000000
                        
                        float zmm4_1 = *(rax_11 + 0x1f4)
                        zmm2_1 = *(rax_11 + 0x1f8)
                        
                        if (not(zmm4_1 f>= zmm2_1.d))
                            zmm2_1.d = zmm2_1.d f- zmm4_1
                            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm0_1[0] = zmm0_1[0] + zmm3 * zmm3
                            zmm0_1[0] = zmm0_1[0] + zmm1[0]
                            zmm3 = (_mm_sqrt_ss(0, zmm0_1[0]) - zmm4_1) f/ zmm2_1.d
                            
                            if (zmm3 >= 0f)
                                zmm0_1 = 0x3f800000
                                zmm0_1[0] = 1f - _mm_min_ss(zmm3, 0x3f800000)
                                zmm0_1 = powf(zmm0_1[0], zmm5_1[0])
                            else
                                zmm0_1 = 0x3f800000
                                zmm0_1[0] = 1f - 0f
                                zmm0_1 = powf(zmm0_1[0], zmm5_1[0])
                        else if (zmm2_1.d f<= 0f)
                            zmm0_1 = 0x3f800000
                        else
                            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm0_1[0] = zmm0_1[0] + zmm3 * zmm3
                            zmm2_1.d = zmm2_1.d f* zmm2_1.d
                            zmm0_1[0] = zmm0_1[0] + zmm1[0]
                            
                            if (zmm0_1[0] f< zmm2_1.d)
                                zmm0_1 = 0x3f800000
                            else
                                zmm0_1 = zx.o(0)
                        
                        zmm8.d = zmm8.d f* zmm0_1[0]
                    
                    int64_t* rcx_10 = *rbx_1
                    (*(*rcx_10 + 0x268))(rcx_10, arg2, zmm8, arg3)
                
                rbx_1 = &rbx_1[2]
                rsi_1 = &rsi_1[4]
            while (rbx_1 != r12_3)
            
            result = arg1[0xa].d
        
        int32_t rbx_2 = result - 1
        
        if (rbx_2 s>= 0)
            int64_t rsi_3 = sx.q(rbx_2) << 4
            int64_t r12_4 = rsi_3
            int64_t r15_2 = sx.q(rbx_2 + 1) << 4
            int32_t temp1_1
            
            do
                zmm0_1 = *(arg1[9] + rsi_3)
                int64_t* rcx_11 = zmm0_1[0].q
                var_5f8.o = zmm0_1
                
                if (rcx_11 == 0)
                label_141ea6c37:
                    int32_t rax_18 = arg1[0xa].d
                    int32_t rcx_14 = rax_18 - rbx_2
                    
                    if (rcx_14 != 1)
                        int64_t rax_17 = arg1[9]
                        memmove(rax_17 + r12_4, rax_17 + r15_2, (rcx_14 - 1) << 4)
                        rax_18 = arg1[0xa].d
                    
                    arg1[0xa].d = rax_18 - 1
                    sub_1405a5010(&arg1[9])
                    void* rdx_4 = var_5f8
                    
                    if (rdx_4 != 0)
                        sub_141eac150(arg1, rdx_4)
                else
                    if ((*(*rcx_11 + 0x278))(rcx_11) != 0)
                        goto label_141ea6c37
                    
                    if (sub_140d3e090(&var_5f0, 1, 0).b != 0)
                        goto label_141ea6c37
                
                r15_2 -= 0x10
                r12_4 -= 0x10
                rsi_3 -= 0x10
                temp1_1 = rbx_2
                rbx_2 -= 1
            while (temp1_1 - 1 s>= 0)
        
        result.b = 0
else
    rdx.b = 1
    (*(*arg1 + 0x290))(arg1, rdx)
label_141ea6a2a:
    
    if (not(0f f>= arg1[8].d))
        goto label_141ea6a35
    
    result.b = 0

__security_check_cookie(rax_1 ^ &var_648)
return result
