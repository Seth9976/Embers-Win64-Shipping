// 函数: sub_141acd950
// 地址: 0x141acd950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_4 = 0
uint128_t zmm6 = 0x3f800000
uint64_t i_5 = zx.q(arg3)
int64_t rbx = sx.q(arg3)
int128_t var_c8
__builtin_memset(&var_c8, 0, 0x18)
int32_t zmm0

if (arg3 != 0)
    if (rbx s> divs.dp.q(sx.o(0x7fffffffffffffff), rbx))
        j_sub_140a82f30(-1)
    
    sub_141ad7590(&var_c8, rbx * rbx, rbx, rbx)
    int64_t var_b8
    int64_t rcx_1 = var_b8
    int64_t rdx_4 = 0
    
    if (rcx_1 s> 0)
        int32_t* r8_1 = var_c8.q
        
        do
            int64_t i = 0
            
            if (var_c8:8.q s> 0)
                int32_t* rcx_2 = r8_1
                
                do
                    if (i != rdx_4)
                        zmm0 = (zx.o(0)).d
                    else
                        zmm0 = 0x3f800000
                    
                    *rcx_2 = zmm0
                    i += 1
                    rcx_2 = &rcx_2[1]
                while (i s< var_c8:8.q)
                
                rcx_1 = var_b8
            
            rdx_4 += 1
            r8_1 = &r8_1[var_c8:8.q]
        while (rdx_4 s< rcx_1)

if (i_5.d s> 0)
    int64_t j_1 = 0
    int64_t r10_1 = 0
    i_4 = i_5
    int64_t rdi_1 = rbx
    uint64_t i_1
    
    do
        int64_t j = j_1
        
        if (j_1 s< rbx)
            if (rdi_1 s>= 4)
                void* r11_3 = *arg2 + 8 + (r10_1 << 2)
                r10_1 = r10_1 + ((rbx - 3 - j_1 - 1) u>> 2 << 2) + 4
                
                do
                    zmm0 = *(r11_3 - 8)
                    r11_3 += 0x10
                    *(var_c8.q + ((var_c8:8.q * j_1 + j) << 2)) = zmm0
                    *(var_c8.q + ((var_c8:8.q * j + j_1) << 2)) = zmm0
                    int32_t zmm1 = *(r11_3 - 0x14)
                    *(var_c8.q + ((var_c8:8.q * j_1 + j) << 2) + 4) = zmm1
                    *(var_c8.q + (((j + 1) * var_c8:8.q + j_1) << 2)) = zmm1
                    zmm0 = *(r11_3 - 0x10)
                    *(var_c8.q + ((var_c8:8.q * j_1 + j) << 2) + 8) = zmm0
                    *(var_c8.q + (((j + 2) * var_c8:8.q + j_1) << 2)) = zmm0
                    zmm1 = *(r11_3 - 0xc)
                    *(var_c8.q + ((var_c8:8.q * j_1 + j) << 2) + 0xc) = zmm1
                    int64_t rcx_25 = (j + 3) * var_c8:8.q
                    j += 4
                    *(var_c8.q + ((rcx_25 + j_1) << 2)) = zmm1
                while (j s< rbx - 3)
            
            if (j s< rbx)
                int32_t* rdx_5 = *arg2 + (r10_1 << 2)
                r10_1 += rbx - j
                
                do
                    zmm0 = *rdx_5
                    rdx_5 = &rdx_5[1]
                    *(var_c8.q + ((var_c8:8.q * j_1 + j) << 2)) = zmm0
                    int64_t rcx_31 = j * var_c8:8.q
                    j += 1
                    *(var_c8.q + ((rcx_31 + j_1) << 2)) = zmm0
                while (j s< rbx)
        
        j_1 += 1
        rdi_1 -= 1
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int32_t i_6 = i_5.d * i_5.d
arg1[1].d = i_4.d

if (*(arg1 + 0xc) != i_6)
    sub_1405dadb0(arg1, i_6)

if (i_6 s> 0)
    uint64_t i_3 = zx.q(i_6)
    uint64_t i_2
    
    do
        int64_t rdi_2 = sx.q(arg1[1].d)
        int32_t rax_21 = (rdi_2 + 1).d
        arg1[1].d = rax_21
        
        if (rax_21 s> *(arg1 + 0xc))
            sub_1406105e0(arg1)
        
        int32_t* rdx_8 = *arg1 + (rdi_2 << 2)
        
        if (rdx_8 != 0)
            *rdx_8 = i_4.d
        
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

bool cond:0 = var_c8:8.q == 0
int64_t var_b0 = *arg1
int64_t var_a8 = rbx
int64_t var_a0 = rbx

if (not(cond:0))
    int32_t* var_90
    zmm6 = sub_141a872e0(&var_90, &var_c8)
    int64_t var_80
    int64_t rdx_10 = var_80
    int64_t var_88
    
    if (rdx_10 s>= var_88)
        rdx_10 = var_88
    
    float zmm0_1
    
    if (rdx_10 != 0)
        int32_t* r9_3 = var_90
        int64_t rcx_39 = 1
        zmm0_1 = *r9_3
        
        while (rcx_39 s< rdx_10)
            int64_t rax_26 = (var_88 + 1) * rcx_39
            rcx_39 += 1
            zmm0_1 = zmm0_1 f* r9_3[rax_26]
    else
        zmm0_1 = zmm6.d
    
    char var_54
    zmm6.d = _mm_cvtepi32_ps(zx.o(sx.d(var_54))).d f* zmm0_1
    int64_t var_68
    free(var_68)
    int64_t var_78
    free(var_78)
    free(var_90)

if (__andps_xmmxud_memxud(zmm6, data_142d3f770).d f> 9.99999994e-09f)
    int128_t* arg_8 = &var_c8
    sub_141ad76c0(&var_b0, &arg_8)
    rbx.b = 1
else
    rbx.b = 0

free(var_c8.q)
return zx.q(rbx.b)
