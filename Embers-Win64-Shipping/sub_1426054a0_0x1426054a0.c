// 函数: sub_1426054a0
// 地址: 0x1426054a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t* r13 = arg4
int32_t* var_100 = arg4
uint64_t result

if ((*(arg3 + 0x1f) & 0xc0) != 0x40)
    uint64_t rax_4 = zx.q(*(arg3 + 0x1e))
    int32_t i_3 = 0
    int64_t r11_1 = 0
    uint64_t r14_1 = zx.q(rax_4.d)
    int32_t r12_3 = ((arg3 - *(arg2 + 0x10)) s>> 5).d
    void var_d0
    
    if (rax_4.d u>= 4)
        int64_t r8_1 = *(arg2 + 0x18)
        void* r9 = arg3 + 6
        int64_t i_4 = ((rax_4 - 4) u>> 2) + 1
        void* rdx_1 = &var_d0
        r11_1 = i_4 << 2
        int64_t i
        
        do
            uint64_t rax_5 = zx.q(*(r9 - 2))
            rdx_1 += 0x30
            r9 += 8
            uint64_t rcx_1 = rax_5 * 3
            *(rdx_1 - 0x38) = *(r8_1 + (rcx_1 << 2))
            *(rdx_1 - 0x34) = *(r8_1 + (rcx_1 << 2) + 4)
            *(rdx_1 - 0x30) = *(r8_1 + (rcx_1 << 2) + 8)
            uint64_t rcx_2 = zx.q(*(r9 - 8)) * 3
            *(rdx_1 - 0x2c) = *(r8_1 + (rcx_2 << 2))
            *(rdx_1 - 0x28) = *(r8_1 + (rcx_2 << 2) + 4)
            *(rdx_1 - 0x24) = *(r8_1 + (rcx_2 << 2) + 8)
            uint64_t rcx_3 = zx.q(*(r9 - 6)) * 3
            *(rdx_1 - 0x20) = *(r8_1 + (rcx_3 << 2))
            *(rdx_1 - 0x1c) = *(r8_1 + (rcx_3 << 2) + 4)
            *(rdx_1 - 0x18) = *(r8_1 + (rcx_3 << 2) + 8)
            uint64_t rcx_4 = zx.q(*(r9 - 4)) * 3
            *(rdx_1 - 0x14) = *(r8_1 + (rcx_4 << 2))
            *(rdx_1 - 0x10) = *(r8_1 + (rcx_4 << 2) + 4)
            *(rdx_1 - 0xc) = *(r8_1 + (rcx_4 << 2) + 8)
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    if (r11_1 s< r14_1)
        int64_t r8_2 = *(arg2 + 0x18)
        int64_t i_5 = r14_1 - r11_1
        void* rdx_2 = &var_d0 + r11_1 * 0xc
        void* r9_2 = arg3 + 4 + (r11_1 << 1)
        int64_t i_1
        
        do
            uint64_t rax_22 = zx.q(*r9_2)
            rdx_2 += 0xc
            r9_2 += 2
            uint64_t rcx_5 = rax_22 * 3
            *(rdx_2 - 0x14) = *(r8_2 + (rcx_5 << 2))
            *(rdx_2 - 0x10) = *(r8_2 + (rcx_5 << 2) + 4)
            *(rdx_2 - 0xc) = *(r8_2 + (rcx_5 << 2) + 8)
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    *arg5 = *r13
    arg5[1] = r13[1]
    arg5[2] = r13[2]
    void var_f0
    void var_d8
    int32_t var_88[0x6]
    
    if (sub_142608ee0(r13, &var_d8, r14_1.d, &var_f0, &var_88) == 0)
        float zmm7_1 = 3.40282347e+38f
        int32_t rcx_7 = r14_1.d
        uint64_t r9_4 = 0xffffffff
        int32_t r8_4 = 0
        int64_t i_2 = 0
        float zmm0_1
        float zmm1_1
        float zmm2_1
        float zmm3_1
        
        if (rcx_7 u>= 4)
            do
                zmm3_1 = *(&var_f0 + (i_2 << 2))
                int32_t rax_30 = r8_4 + 1
                void var_ec
                zmm2_1 = *(&var_ec + (i_2 << 2))
                int32_t rcx_8 = r8_4
                void var_e8
                zmm1_1 = *(&var_e8 + (i_2 << 2))
                int32_t var_e4[0x3]
                zmm0_1 = var_e4[i_2]
                float temp0_3 = _mm_min_ss(zmm3_1, zmm7_1)
                
                if (zmm7_1 <= zmm3_1)
                    rcx_8 = r9_4.d
                
                r9_4 = zx.q(r8_4 + 3)
                float temp0_4 = _mm_min_ss(zmm2_1, temp0_3)
                
                if (temp0_3 <= zmm2_1)
                    rax_30 = rcx_8
                
                int32_t rcx_9 = r8_4 + 2
                float temp0_5 = _mm_min_ss(temp0_4, zmm1_1)
                
                if (temp0_4 <= zmm1_1)
                    rcx_9 = rax_30
                
                float temp0_6 = _mm_min_ss(zmm0_1, temp0_5)
                
                if (temp0_5 <= zmm0_1)
                    r9_4 = zx.q(rcx_9)
                
                r8_4 += 4
                i_2 += 4
                zmm7_1 = temp0_6
            while (i_2 s< r14_1 - 3)
            
            rcx_7 = r14_1.d
        
        while (i_2 s< r14_1)
            zmm0_1 = *(&var_f0 + (i_2 << 2))
            int32_t rax_31 = r8_4
            float temp0_7 = _mm_min_ss(zmm0_1, zmm7_1)
            
            if (zmm7_1 <= zmm0_1)
                rax_31 = r9_4.d
            
            r8_4 += 1
            i_2 += 1
            r9_4 = zx.q(rax_31)
            zmm7_1 = temp0_7
        
        int64_t r8_5 = sx.q((r9_4 * 3).d)
        zmm0_1 = *(&var_d8 + (r8_5 << 2))
        void var_d4
        zmm2_1 = *(&var_d4 + (r8_5 << 2))
        int64_t rcx_10 = sx.q(mods.dp.d(sx.q((r9_4 + 1).d), rcx_7) * 3)
        zmm3_1 = var_88[sx.q(r9_4.d)]
        zmm1_1 = (*(&var_d8 + (rcx_10 << 2)) - zmm0_1) * zmm3_1 + zmm0_1
        zmm0_1 = *(&var_d4 + (rcx_10 << 2)) - zmm2_1
        *arg5 = zmm1_1
        zmm1_1 = *(&var_d0 + (r8_5 << 2))
        zmm0_1 = zmm0_1 * zmm3_1 + zmm2_1
        zmm2_1 = *(&var_d0 + (rcx_10 << 2)) - zmm1_1
        arg5[1] = zmm0_1
        arg5[2] = zmm2_1 * zmm3_1 + zmm1_1
    
    int32_t var_108
    
    if (*(arg3 + 0x1f) u>= 0x40)
        void var_cc
        void var_c0
        result = sub_1426076f0(arg5, &var_d8, &var_c0, &var_cc, &var_108)
        
        if (result.b != 0)
            arg5[1] = var_108
        else
            void var_b4
            result = sub_1426076f0(arg5, &var_cc, &var_c0, &var_b4, &var_108)
            
            if (result.b != 0)
                arg5[1] = var_108
    else
        int64_t r12_4 = *(arg2 + 0x28)
        uint64_t r15_1 = zx.q(r12_3) * 3
        result = zx.q(*(r12_4 + (r15_1 << 2) + 9))
        
        if (result.d != 0)
            uint32_t r14_2 = zx.d(*(arg3 + 0x1e))
            result = zx.q(*(r12_4 + (r15_1 << 2) + 4))
            
            do
                char* r8_7 = zx.q((result.d + i_3) << 2) + *(arg2 + 0x38)
                char rax_40 = *r8_7
                int32_t* r11_2
                
                if (rax_40 u>= r14_2.b)
                    r11_2 = *(arg2 + 0x30)
                        + (zx.q((zx.d(rax_40) - r14_2 + *(r12_4 + (r15_1 << 2))) * 3) << 2)
                else
                    r11_2 = *(arg2 + 0x18) + zx.q(*(arg3 + (zx.q(rax_40) << 1) + 4)) * 0xc
                
                char rax_47 = r8_7[1]
                int128_t* r10_5
                
                if (rax_47 u>= r14_2.b)
                    r10_5 = *(arg2 + 0x30)
                        + (zx.q((zx.d(rax_47) - r14_2 + *(r12_4 + (r15_1 << 2))) * 3) << 2)
                else
                    r10_5 = *(arg2 + 0x18) + zx.q(*(arg3 + (zx.q(rax_47) << 1) + 4)) * 0xc
                
                char rax_54 = r8_7[2]
                int32_t* r9_5
                
                if (rax_54 u>= r14_2.b)
                    r9_5 = *(arg2 + 0x30)
                        + (zx.q((zx.d(rax_54) - r14_2 + *(r12_4 + (r15_1 << 2))) * 3) << 2)
                else
                    r9_5 = *(arg2 + 0x18) + zx.q(*(arg3 + (zx.q(rax_54) << 1) + 4)) * 0xc
                
                if (sub_1426076f0(var_100, r11_2, r10_5, r9_5, &var_108) != 0)
                    result = arg5
                    *(result + 4) = var_108
                    break
                
                i_3 += 1
                result = zx.q(*(r12_4 + (r15_1 << 2) + 4))
            while (i_3 s< zx.d(*(r12_4 + (r15_1 << 2) + 9)))
else
    int64_t r8 = *(arg2 + 0x18)
    uint64_t rdx = zx.q(*(arg3 + 4)) * 3
    result = zx.q(*(arg3 + 6))
    int128_t zmm8 = *(r8 + (rdx << 2))
    float zmm1 = zmm8.d - *arg4
    float zmm2 = *(r8 + (rdx << 2) + 4) - arg4[1]
    uint64_t rcx = result * 3
    float zmm0 = *(r8 + (rdx << 2) + 8) - arg4[2]
    int128_t zmm6 = *(r8 + (rcx << 2))
    zmm2 = zmm2 * zmm2 + zmm1 * zmm1
    zmm1 = zmm6.d - *arg4
    zmm6.d = zmm6.d f- zmm8.d
    zmm2 = zmm2 + zmm0 * zmm0
    zmm0 = *(r8 + (rcx << 2) + 8) - arg4[2]
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm2)
    zmm2 = *(r8 + (rcx << 2) + 4) - arg4[1]
    zmm0 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0) + temp0_1[0]
    temp0_1[0] = temp0_1[0] / zmm0
    zmm6.d = zmm6.d f* temp0_1[0]
    zmm6.d = zmm6.d f+ zmm8.d
    *arg5 = zmm6.d
    arg5[1] =
        (*(r8 + (rcx << 2) + 4) f- *(r8 + (rdx << 2) + 4)) * temp0_1[0] f+ *(r8 + (rdx << 2) + 4)
    arg5[2] =
        (*(r8 + (rcx << 2) + 8) f- *(r8 + (rdx << 2) + 8)) * temp0_1[0] f+ *(r8 + (rdx << 2) + 8)

__security_check_cookie(rax_1 ^ &var_138)
return result
