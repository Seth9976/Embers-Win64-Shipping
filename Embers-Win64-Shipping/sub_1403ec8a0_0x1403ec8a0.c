// 函数: sub_1403ec8a0
// 地址: 0x1403ec8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_728
int64_t rax_1 = __security_cookie ^ &var_728
int64_t i_7 = sx.q(*(arg1 + 0x11fc))
void* var_690 = arg4
int64_t i_6 = i_7
void var_d8
float zmm0

if (i_7.d s> 0)
    int64_t j_4 = sx.q(*(arg1 + 0x1234))
    void* r9 = &var_d8
    void* r10_1 = arg2 + 0x1f4
    int64_t i
    
    do
        if (j_4 s> 0)
            void* rcx = r9
            int32_t* rdx = r10_1
            int64_t j_2 = j_4
            int64_t j
            
            do
                zmm0 = *rdx
                rcx += 2
                rdx = &rdx[1]
                *(rcx - 2) = (int.d(zmm0 * 8192f)).w
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        r9 += 0x20
        r10_1 += 0x40
        i = i_6
        i_6 -= 1
    while (i != 1)

int64_t i_5 = i_7
void var_678
void var_668
void var_658

if (i_7.d s> 0)
    int32_t* r8 = arg2 + 0x2f4
    int64_t i_1
    
    do
        zmm0 = r8[4]
        float zmm1 = *r8
        r8 = &r8[1]
        int32_t rdx_1 = int.d(zmm0 * 16384f)
        zmm0 = r8[0xf] f* 16384f
        int16_t rax_4 = (int.d(zmm1 * 16384f)).w
        zmm1 = r8[0x13] f* 16384f
        *(&var_678 - arg2 + r8 - 0x2f8) = rdx_1 << 0x10 | zx.d(rax_4)
        *(r8 + &var_658 - arg2 - 0x2f8) = int.d(zmm0)
        *(r8 + &var_668 - arg2 - 0x2f8) = int.d(zmm1)
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

int32_t rax_7 = (i_7 * 5).d
int64_t r9_1 = 0
int64_t i_2 = 0
int32_t r12 = int.d(*(arg2 + 0x354) * 1024f)

if (rax_7 s> 0)
    void* rdx_4 = arg2 + 0x90
    
    do
        zmm0 = *rdx_4
        i_2 += 1
        rdx_4 += 4
        void var_14a
        *(&var_14a + (i_2 << 1)) = (int.d(zmm0 * 16384f)).w
    while (i_2 s< sx.q(rax_7))

int64_t j_5 = sx.q(*(arg1 + 0x1238))
void var_118
void* r10_3 = &var_118
void* r11_1 = arg2 + 0x10
int64_t i_4 = 2
int64_t i_3

do
    if (j_5 s> 0)
        void* rcx_2 = r10_3
        void* rdx_5 = r11_1
        int64_t j_3 = j_5
        int64_t j_1
        
        do
            zmm0 = *rdx_5
            rcx_2 += 2
            rdx_5 += 4
            *(rcx_2 - 2) = (int.d(zmm0 * 4096f)).w
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
    
    r10_3 += 0x20
    r11_1 += 0x40
    i_3 = i_4
    i_4 -= 1
while (i_3 != 1)
int64_t rcx_3 = 0
void var_688

if (i_7.d s> 0)
    do
        int64_t rax_10 = arg2 - &var_688 + (rcx_3 << 2)
        rcx_3 += 1
        *(&var_690:4 + (rcx_3 << 2)) = int.d(*(&var_688 + rax_10) * 65536f)
    while (rcx_3 s< i_7)

int32_t r8_2

if (*(arg3 + 0x1d) != 2)
    r8_2 = 0
else
    r8_2 = sx.d(*(&data_1436fc870 + (sx.q(*(arg3 + 0x21)) << 1)))

int64_t rdx_8 = sx.q(*(arg1 + 0x1200))
void var_648

if (rdx_8 s> 0)
    do
        void* rax_13 = arg6 - &var_648 + (r9_1 << 2)
        r9_1 += 1
        void var_64c
        *(&var_64c + (r9_1 << 2)) = int.d(*(&var_648 + rax_13) * 8f)
    while (r9_1 s< rdx_8)

int64_t result
void var_148

if (*(arg1 + 0x122c) s> 1 || *(arg1 + 0x1260) s> 0)
    result = sub_14040e0b0(arg1, var_690, arg3, &var_648, arg5, &var_118, &var_148, &var_d8, 
        &var_668, &var_658, &var_678, &var_688, arg2 + 0xe4, r12, r8_2)
else
    result = sub_14040cdf0(arg1, var_690, arg3, &var_648, arg5, &var_118, &var_148, &var_d8, 
        &var_668, &var_658, &var_678, &var_688, arg2 + 0xe4, r12, r8_2)
__security_check_cookie(rax_1 ^ &var_728)
return result
