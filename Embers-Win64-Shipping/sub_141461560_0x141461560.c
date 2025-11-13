// 函数: sub_141461560
// 地址: 0x141461560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xaad0)
void var_aae8
int64_t rax_1 = __security_cookie ^ &var_aae8
int64_t i_9 = 0x155
void var_aaa0
void* rax_2 = &var_aaa0
int64_t i_6 = 0x155
int64_t i

do
    *(rax_2 - 8) = 0
    *rax_2 = 0
    *(rax_2 + 4) = 0x3f800000
    rax_2 += 0x10
    i = i_6
    i_6 -= 1
while (i != 1)
int64_t i_7 = 0x155
void var_9550
void* rax_3 = &var_9550
int64_t i_1

do
    *(rax_3 - 8) = 0
    *rax_3 = 0
    *(rax_3 + 4) = 0x3f800000
    rax_3 += 0x10
    i_1 = i_7
    i_7 -= 1
while (i_1 != 1)
int64_t i_8 = 0x155
void var_8000
void* rax_4 = &var_8000
int64_t i_2

do
    *(rax_4 - 8) = 0
    *rax_4 = 0
    *(rax_4 + 4) = 0x3f800000
    rax_4 += 0x10
    i_2 = i_8
    i_8 -= 1
while (i_2 != 1)
void var_1570
void* rax_5 = &var_1570
int64_t i_3

do
    *(rax_5 - 8) = 0
    *rax_5 = 0
    *(rax_5 + 4) = 0x3f800000
    rax_5 += 0x10
    i_3 = i_9
    i_9 -= 1
while (i_3 != 1)
void* rsi = *(arg1 + 8)
int32_t i_4 = 0
void var_aaa8

if (*(rsi + 0x10f0) s> 0)
    int64_t r8_1 = 0
    
    do
        r8_1 += 0xa0
        uint64_t rdx_1 = zx.q(i_4) * 2
        uint64_t rcx_1 = zx.q(i_4) << 6
        i_4 += 1
        *(&var_aaa8 + (rdx_1 << 3)) = *(*(rsi + 0x10e8) + r8_1 - 0x90)
        void var_9558
        *(&var_9558 + (rdx_1 << 3)) = *(*(rsi + 0x10e8) + r8_1 - 0x80)
        void var_8008
        *(&var_8008 + (rdx_1 << 3)) = *(*(rsi + 0x10e8) + r8_1 - 0x20)
        int64_t rax_9 = *(rsi + 0x10e8)
        int128_t var_6ab8[0x554]
        var_6ab8[zx.q(i_4) * 4] = *(rax_9 + r8_1 - 0x70)
        var_6aa8
        *(&var_6aa8 + rcx_1) = *(rax_9 + r8_1 - 0x60)
        var_6a98
        *(&var_6a98 + rcx_1) = *(rax_9 + r8_1 - 0x50)
        var_6a88
        *(&var_6a88 + rcx_1) = *(rax_9 + r8_1 - 0x40)
        void var_1578
        *(&var_1578 + (rdx_1 << 3)) = *(*(rsi + 0x10e8) + r8_1 - 0x30)
    while (i_4 s< *(rsi + 0x10f0))

int64_t* rcx_2 = data_143f0f180
void* result = (*(*rcx_2 + 0x100))(rcx_2, *(rsi + 0x48), &var_aaa8, i_4)
int32_t i_5 = 0

if (*(arg1 + 0xa8) s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        void* rdi_1 = *(arg1 + 0xa0)
        sub_1405d16e0(rdi_1 + 0x5050 + rbx_1, *(*(arg1 + 8) + 0x48))
        result = *(rbx_1 + rdi_1)
        *(rbx_1 + rdi_1 + 0x5040) = 0
        *(rbx_1 + rdi_1 + 0x5048) = 0
        
        if ((*(result + 0x28) & 0x80000) != 0)
            int32_t j = 0
            *(rbx_1 + rdi_1 + 0x5040) = *(*(arg1 + 8) + 0x10f8)
            result = *(arg1 + 8)
            *(rbx_1 + rdi_1 + 0x5044) = *(result + 0x10fc)
            
            if (*(rsi + 0x10f0) s> 0)
                int32_t var_aabc_1 = 0x3f800000
                int32_t zmm4_1 = (zx.o(0)).d
                int64_t rcx_7 = 0
                
                do
                    result = *(rsi + 0x10e8)
                    j += 1
                    float zmm1_1[0x4] = *(result + rcx_7 + 0x14)
                    float var_aac8[0x4]
                    var_aac8[0] = (*(result + rcx_7 + 0x10))[0]
                    float zmm2[0x4] = *(result + rcx_7 + 0x18)
                    float zmm3[0x4] = _mm_shuffle_ps(var_aac8, var_aac8, 0xe1)
                    zmm3[0] = zmm1_1[0]
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                    zmm3[0] = zmm2[0]
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                    var_aac8 = zmm3
                    zmm2 =
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(rbx_1 + rdi_1 + 0x340))
                    zmm1_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), 
                        *(rbx_1 + rdi_1 + 0x370))
                    float zmm0_1[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), 
                        *(rbx_1 + rdi_1 + 0x350))
                    zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), 
                        *(rbx_1 + rdi_1 + 0x360))
                    zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0_1), _mm_add_ps(zmm1_1, zmm3))
                    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    zmm2[0] = zmm2[0] f+ *(result + rcx_7 + 0x1c)
                    rcx_7 += 0xa0
                    zmm2 = _mm_max_ss(zmm2[0], zmm4_1)
                    *(rbx_1 + rdi_1 + 0x5048) = zmm2[0]
                    zmm4_1 = zmm2[0]
                while (j s< *(rsi + 0x10f0))
        
        i_5 += 1
        rbx_1 = &rbx_1[0xa48]
    while (i_5 s< *(arg1 + 0xa8))

__security_check_cookie(rax_1 ^ &var_aae8)
return result
