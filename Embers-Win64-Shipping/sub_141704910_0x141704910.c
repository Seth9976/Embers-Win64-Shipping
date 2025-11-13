// 函数: sub_141704910
// 地址: 0x141704910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
arg1[1].d = 0x1000505
*arg1 = &data_142fc4328
*(arg1 + 0xc) = 1
void*** rsi = nullptr
arg1[2] = 0
int32_t i = 0
arg1[2] = *arg2
*arg2 = 0
arg1[3].d = arg2[1].d
*(arg1 + 0x1c) = *(arg2 + 0xc)
arg2[1] = 0
__builtin_memcpy(&arg1[4], 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
arg1[7] = 0
float var_58[0x4]
float zmm0[0x4]

if (arg1[3].d s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t* rcx_1 = arg1[2][rdi_1]
        int128_t* rax_6 = (*(*rcx_1 + 0x28))(rcx_1, &var_58)
        float rax_8
        
        if (rdi_1 s<= 0)
            arg1[4] = *rax_6
            arg1[5].d = *(rax_6 + 8)
            *(arg1 + 0x2c) = *(rax_6 + 0xc)
            rax_8 = *(rax_6 + 0x14)
        else
            int64_t zmm2 = *(rax_6 + 4)
            zmm0 = *(rax_6 + 8)
            float temp0_1[0x4] = __minss_xmmss_memss((*rax_6)[0], arg1[4].d)
            int64_t temp0_2 = __minss_xmmss_memss(zmm2.d, *(arg1 + 0x24))
            float temp0_3[0x4] = __minss_xmmss_memss(zmm0[0], arg1[5].d)
            arg1[4] = (_mm_unpacklo_ps(temp0_1, temp0_2)).q
            arg1[5].d = temp0_3[0]
            zmm2 = rax_6[1].d
            zmm0 = *(rax_6 + 0x14)
            float temp0_5[0x4] = __maxss_xmmss_memss((*(rax_6 + 0xc))[0], *(arg1 + 0x2c))
            int64_t temp0_6 = __maxss_xmmss_memss(zmm2.d, arg1[6].d)
            float temp0_7[0x4] = __maxss_xmmss_memss(zmm0[0], *(arg1 + 0x34))
            float temp0_8[0x4] = _mm_unpacklo_ps(temp0_5, temp0_6)
            rax_8 = temp0_7[0]
            *(arg1 + 0x2c) = temp0_8.q
        
        i += 1
        *(arg1 + 0x34) = rax_8
        rdi_1 += 1
    while (i s< arg1[3].d)

int64_t* rdi_2 = arg1[2]
int64_t rax_10 = sx.q(arg1[3].d)
float zmm1[0x4] = data_143dbb0d0
var_58 = data_143dbb0c0
zmm0 = data_143dbb0e0
void* rbp = &rdi_2[rax_10]
int64_t var_78 = 0
int32_t var_70_1 = 0
float var_48[0x4] = zmm1
float var_38[0x4] = zmm0

if (rdi_2 != rbp)
    do
        int64_t* rcx_3 = *rdi_2
        (*(*rcx_3 + 0x70))(rcx_3, &var_78, &var_58, rcx_3)
        rdi_2 = &rdi_2[1]
    while (rdi_2 != rbp)
    
    if (var_70_1 s> 0x20)
        void*** rax_12 = j_sub_140a82f30(0x288)
        
        if (rax_12 != 0)
            rsi = sub_141704d50(rax_12, &var_78)
        
        void var_68
        
        if (&arg1[7] != &var_68)
            void*** rdi_3 = arg1[7]
            arg1[7] = rsi
            
            if (rdi_3 != 0)
                sub_141705ba0(&rdi_3[0x36])
                sub_141705c70(rdi_3)
                j_sub_140a74f90(rdi_3)
        else if (rsi != 0)
            sub_141705ba0(&rsi[0x36])
            sub_141705c70(rsi)
            j_sub_140a74f90(rsi)
    
    int64_t rcx_10 = var_78
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_98)
return arg1
