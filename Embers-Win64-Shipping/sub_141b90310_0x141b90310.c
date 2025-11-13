// 函数: sub_141b90310
// 地址: 0x141b90310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_68 = 0
int64_t* r15 = arg2
char r13 = *(arg1 + 0x108)
void** (* var_a8)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = arg2
bool var_b8
void*** result
void*** result_1

if (r13 != 2)
    int64_t* rcx_3 = *(arg1 + 0x138)
    int64_t rax_2 = *rcx_3
    int32_t var_88
    void* rcx_11
    int32_t var_98
    int64_t var_60
    float zmm2[0x4]
    
    if (r13 != 3)
        int64_t* rax_17 = (*(rax_2 + 0x188))(rcx_3)
        int64_t rdx_11 = *rax_17
        int32_t rax_18 = (*rdx_11)(rax_17, rdx_11)
        uint128_t zmm6 = zx.o(*(arg1 + 0x134))
        int64_t* rcx_13 = *(arg1 + 0x138)
        var_b8 = rax_18 == 0
        zmm6 = _mm_cvtepi32_ps(zmm6)
        int64_t var_90
        int32_t rsi_3
        void** (* r14_2)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
        void** (* r15_2)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
        
        if (r13 != 0)
            r15_2 = *(arg1 + 0x140)
            var_68 = zmm6.d
            char var_64_1 = 1
            var_60 = 0
            int32_t var_58_1 = 0
            
            if (r15_2 != 0)
                *(r15_2 + 8) += 1
            
            void*** result_4 = sub_140698a90(rcx_13)
            result_1 = result_4
            result_4[0xe].d = zmm6.d
            *(result_4 + 0x74) = 1
            sub_140692f90(&result_4[0xf], &var_60)
            r14_2 = var_a8
            rsi_3 = 0xc
        else
            r14_2 = *(arg1 + 0x140)
            var_98 = zmm6.d
            char var_94_1 = 1
            var_90 = 0
            var_88 = 0
            
            if (r14_2 != 0)
                *(r14_2 + 8) += 1
            
            void*** result_3 = sub_140ea2880(rcx_13)
            result_1 = result_3
            result_3[0xe].d = zmm6.d
            *(result_3 + 0x74) = 1
            sub_140692f90(&result_3[0xf], &var_90)
            r15_2 = var_a8
            rsi_3 = 3
        
        if ((rsi_3.b & 8) != 0)
            rsi_3 &= 0xfffffff7
            
            if (r15_2 != 0)
                int32_t temp6_1 = *(r15_2 + 8)
                *(r15_2 + 8) -= 1
                
                if (temp6_1 == 1)
                    (**r15_2)(r15_2)
                    int32_t temp31_1 = *(r15_2 + 0xc)
                    *(r15_2 + 0xc) -= 1
                    
                    if (temp31_1 == 1)
                        (*(*r15_2 + 8))(r15_2, 1)
        
        if ((rsi_3.b & 4) != 0)
            rsi_3 &= 0xfffffffb
            sub_140745b20(&var_60)
        
        if ((rsi_3.b & 2) != 0)
            rsi_3 &= 0xfffffffd
            
            if (r14_2 != 0)
                int32_t temp39_1 = *(r14_2 + 8)
                *(r14_2 + 8) -= 1
                
                if (temp39_1 == 1)
                    (**r14_2)(r14_2)
                    int32_t temp42_1 = *(r14_2 + 0xc)
                    *(r14_2 + 0xc) -= 1
                    
                    if (temp42_1 == 1)
                        (*(*r14_2 + 8))(r14_2, 1)
        
        if ((1 & rsi_3.b) != 0)
            sub_140745b20(&var_90)
        
        result_1[4].b = *(arg1 + 0x130)
        *(result_1 + 0x21) = *(arg1 + 0x131)
        int32_t* rax_25 = sub_141b9ebe0(&var_98, arg1 + 0x128)
        result_1[5].d = *rax_25
        result_1[6].d = rax_25[2]
        *(result_1 + 0x34) = rax_25[3].b
        sub_140692f90(&result_1[7], &rax_25[4])
        sub_140745b20(&var_88)
        bool rax_26 = var_b8
        int32_t zmm1_2 = (zx.o(0)).d
        
        if (r13 == 0 || rax_26 != 0)
            zmm2 = zx.o(0)
        else
            zmm2 = *(arg1 + 0x110)
        
        if (r13 == 0 && rax_26 == 0)
            zmm1_2 = *(arg1 + 0x10c)
        
        var_90 = 0
        rcx_11 = &result_1[0xc]
        float zmm0_2[0x4] = var_98.o
        result_1[0xb].b = 1
        zmm0_2[0] = zmm1_2
        float temp0_7[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xe1)
        temp0_7[0] = zmm2[0]
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xe1)
        var_98.o = temp0_8
        *(result_1 + 0x48) = temp0_8
    else
        int64_t* rax_3 = (*(rax_2 + 0x188))(rcx_3)
        int64_t rdx = *rax_3
        int32_t rax_4 = (*rdx)(rax_3, rdx)
        int64_t* rsi_1 = *(arg1 + 0x140)
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        void*** result_2 = sub_140de7320(*(arg1 + 0x138), 0xffffffff)
        var_68.q = result_2
        result_1 = result_2
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp5_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        int32_t zmm4_1 = (zx.o(0)).d
        char r15_1 = *(arg1 + 0x130)
        char rsi_2 = *(arg1 + 0x131)
        float zmm1_1[0x4] = data_143dbb1f0.d
        zmm2 = data_143dbb1f0:4.d
        float zmm0_1[0x4]
        
        if (*(arg1 + 0x120) s<= 0)
            zmm0_1 = *(arg1 + 0x10c)
            rsi_2 = 3
            bool cond:2_1 = zmm0_1[0] f>= zmm4_1
            r15_1 = 3
            zmm1_1 = zmm0_1
            zmm2 = _mm_cvtepi32_ps(zx.o(rax_4))
            
            if (cond:2_1)
                r15_1 = 1
            
            bool cond:3_1 = zmm4_1 f<= *(arg1 + 0x110)
            zmm1_1[0] = zmm1_1[0] * zmm2[0]
            zmm2[0] = zmm2[0] f* *(arg1 + 0x110)
            
            if (cond:3_1)
                rsi_2 = 1
        else
            int32_t i = 0
            
            if (rax_4 s>= 4)
                int32_t rcx_8 = *(arg1 + 0x120)
                int32_t r13_1 = 2
                int64_t r11_1 = *(arg1 + 0x118)
                
                do
                    int32_t i_1 = i
                    i += 4
                    int64_t r9_1 = sx.q(mods.dp.d(sx.q(i_1), rcx_8))
                    zmm2[0] = zmm2[0] f+ *(r11_1 + (r9_1 << 3) + 4)
                    zmm0_1 = *(r11_1 + (r9_1 << 3))
                    int64_t r8_1 = sx.q(mods.dp.d(sx.q(r13_1 - 1), rcx_8))
                    zmm0_1[0] = zmm0_1[0] + zmm1_1[0]
                    int32_t rax_12 = r13_1 + 1
                    zmm1_1 = zmm0_1
                    int64_t rcx_9 = sx.q(mods.dp.d(sx.q(r13_1), rcx_8))
                    r13_1 += 4
                    zmm1_1[0] = zmm1_1[0] f+ *(r11_1 + (r8_1 << 3))
                    zmm2[0] = zmm2[0] f+ *(r11_1 + (r8_1 << 3) + 4)
                    int32_t temp1_4 = mods.dp.d(sx.q(rax_12), *(arg1 + 0x120))
                    zmm1_1[0] = zmm1_1[0] f+ *(r11_1 + (rcx_9 << 3))
                    int64_t rax_14 = sx.q(temp1_4)
                    zmm2[0] = zmm2[0] f+ *(r11_1 + (rcx_9 << 3) + 4)
                    rcx_8 = *(arg1 + 0x120)
                    zmm1_1[0] = zmm1_1[0] f+ *(r11_1 + (rax_14 << 3))
                    zmm2[0] = zmm2[0] f+ *(r11_1 + (rax_14 << 3) + 4)
                while (i s< rax_4 - 3)
                
                result_1 = var_68.q
            
            if (i s< rax_4)
                int32_t r8_2 = *(arg1 + 0x120)
                int64_t rcx_10 = *(arg1 + 0x118)
                
                do
                    int32_t i_2 = i
                    i += 1
                    int64_t rax_16 = sx.q(mods.dp.d(sx.q(i_2), r8_2))
                    zmm1_1[0] = zmm1_1[0] f+ *(rcx_10 + (rax_16 << 3))
                    zmm2[0] = zmm2[0] f+ *(rcx_10 + (rax_16 << 3) + 4)
                while (i s< rax_4)
        
        bool cond:4_1 = zmm1_1[0] f< zmm4_1
        *(result_1 + 0x24) = r15_1
        *(result_1 + 0x25) = rsi_2
        var_68.o = zx.o(0)
        float zmm3[0x4]
        
        if (cond:4_1)
            zmm3 = zmm1_1
            zmm1_1 = var_68
            zmm3 ^= 0x80000000
        else
            zmm3 = var_60.d
        
        int32_t var_5c
        
        if (zmm2[0] f< zmm4_1)
            zmm0_1 = zmm2
            char var_64
            zmm2 = var_64.d
            zmm0_1 ^= 0x80000000
        else
            zmm0_1 = var_5c
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
        rcx_11 = &result_1[8]
        temp0_2[0] = zmm2[0]
        result_1[7].b = 1
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
        temp0_3[0] = zmm3[0]
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
        temp0_4[0] = zmm0_1[0]
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
        var_98.o = temp0_5
        *(result_1 + 0x28) = temp0_5
    var_88.b = 1
    int64_t var_80 = 0
    int32_t var_78_1 = 0
    sub_1407473e0(rcx_11, &var_80)
    result = sub_140745b20(&var_80)
    r15 = var_a8
else
    int64_t* rdi_1 = *(arg1 + 0x140)
    uint32_t rsi = zx.d(*(arg1 + 0x131))
    uint32_t r14 = zx.d(*(arg1 + 0x130))
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    result = sub_140f2ace0(*(arg1 + 0x138))
    result_1 = result
    result[0xb].b = 0
    result[4].d = r14
    *(result + 0x24) = rsi
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)

if (result_1 != 0)
    var_b8 = false
    char* var_a0_1 = &var_b8
    var_a8 = sub_141b970e0
    sub_141befea0(r15, &var_68, &var_a8)
    int64_t* rsi_4 = result_1[3]
    
    if (rsi_4 != 0)
        rsi_4[1].d += 1
    
    sub_140e0dfc0(result_1)
    uint128_t zmm1_3 = var_68.o
    var_a8.o = zmm1_3
    int64_t* rdi_2 = _mm_bsrli_si128(zmm1_3, 8).q
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    if (&var_a8 != &result_1[2])
        uint128_t zmm0_3 = *(result_1 + 0x10)
        *(result_1 + 0x10) = zmm1_3
        var_a8.o = zmm0_3
    
    if (var_a0_1 != 0)
        int32_t temp38_1 = *(var_a0_1 + 8)
        *(var_a0_1 + 8) -= 1
        
        if (temp38_1 == 1)
            (**var_a0_1)(var_a0_1)
            int32_t temp41_1 = *(var_a0_1 + 0xc)
            *(var_a0_1 + 0xc) -= 1
            
            if (temp41_1 == 1)
                (*(*var_a0_1 + 8))(var_a0_1, 1)
    
    result = sub_140de7bf0(result_1)
    
    if (rsi_4 != 0)
        rsi_4[1].d -= 1
        
        if (rsi_4[1].d == 1)
            result = (**rsi_4)(rsi_4)
            int32_t temp44_1 = *(rsi_4 + 0xc)
            *(rsi_4 + 0xc) -= 1
            
            if (temp44_1 == 1)
                result = (*(*rsi_4 + 8))(rsi_4, 1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            result = (**rdi_2)(rdi_2)
            int32_t temp45_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp45_1 == 1)
                return (*(*rdi_2 + 8))(rdi_2, 1)

return result
