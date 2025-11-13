// 函数: sub_14148bc20
// 地址: 0x14148bc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t i_2 = 0
int32_t rcx = *(arg2 + 0x6c)
*(arg2 + 0x68) = 0
int32_t rdx = 0

if (rcx != 8)
    sub_140869520(arg2, 8)
    rdx = *(arg2 + 0x68)
    rcx = *(arg2 + 0x6c)

*(arg2 + 0x68) = rdx + 8

if (rdx + 8 s> rcx)
    sub_14085a560(arg2, rdx)

int64_t r10 = 0
int64_t i_4 = 2
int64_t i

do
    for (int64_t j = 0; j s< 2; j += 1)
        int64_t k = 0
        int64_t rsi_1 = j + (r10 << 1)
        int32_t r11_1 = 1
        
        do
            int32_t zmm2
            
            if (k == 0)
                zmm2 = *(arg1 + 0x14)
            else
                zmm2 = *(arg1 + 8)
            
            int64_t zmm1
            
            if (j == 0)
                zmm1 = arg1[1].d
            else
                zmm1 = *(arg1 + 4)
            
            float zmm0[0x4]
            
            if (r10 == 0)
                zmm0 = *(arg1 + 0xc)
            else
                zmm0 = *arg1
            
            void* rax_1 = *(arg2 + 0x60)
            void* rdx_1 = arg2
            float temp0_1[0x4] = _mm_unpacklo_ps(zmm0, zmm1)
            
            if (rax_1 != 0)
                rdx_1 = rax_1
            
            int64_t rcx_3 = (k + (rsi_1 << 1)) * 3
            *(rdx_1 + (rcx_3 << 2)) = temp0_1.q
            *(rdx_1 + (rcx_3 << 2) + 8) = zmm2
            
            if (r11_1 == 0)
                zmm2 = *(arg1 + 0x14)
            else
                zmm2 = *(arg1 + 8)
            
            if (j == 0)
                zmm1 = arg1[1].d
            else
                zmm1 = *(arg1 + 4)
            
            if (r10 == 0)
                zmm0 = *(arg1 + 0xc)
            else
                zmm0 = *arg1
            
            void* rax_4 = *(arg2 + 0x60)
            void* rdx_2 = arg2
            float temp0_2[0x4] = _mm_unpacklo_ps(zmm0, zmm1)
            
            if (rax_4 != 0)
                rdx_2 = rax_4
            
            void* rax_6 = (rsi_1 << 1) + 1 + k
            r11_1 += 2
            k += 2
            void* rcx_4 = rax_6 * 3
            *(rdx_2 + (rcx_4 << 2)) = temp0_2.q
            *(rdx_2 + (rcx_4 << 2) + 8) = zmm2
        while (k s< 2)
    
    r10 += 1
    i = i_4
    i_4 -= 1
while (i != 1)
int32_t rcx_5 = *(arg3 + 0x3c)
int32_t rdx_3 = 0
*(arg3 + 0x38) = 0

if (rcx_5 != 0xc)
    sub_140809860(arg3, (i_4 + 0xc).d)
    rdx_3 = *(arg3 + 0x38)
    rcx_5 = *(arg3 + 0x3c)

*(arg3 + 0x38) = rdx_3 + 0xc

if (rdx_3 + 0xc s> rcx_5)
    sub_140809140(arg3, rdx_3)

int16_t r11_2 = 0
int16_t arg_12

for (int16_t i_1 = 3; i_1 u< 0xb; )
    void* rax_9 = *(arg3 + 0x30)
    uint64_t r8_1 = zx.q(r11_2) << 2
    void* rcx_8 = arg3
    arg_12 = i_1 - 2
    
    if (rax_9 != 0)
        rcx_8 = rax_9
    
    int16_t i_3 = i_1
    *(rcx_8 + (r8_1 << 2)) = (i_1 - 3).d
    void* rcx_9 = arg3
    void* rax_11 = *(arg3 + 0x30)
    int16_t arg_22 = i_1 - 1
    
    if (rax_11 != 0)
        rcx_9 = rax_11
    
    int16_t var_36_1 = i_1 - 3
    *(rcx_9 + (r8_1 << 2) + 4) = (i_1 - 2).d
    void* rcx_10 = arg3
    void* rax_13 = *(arg3 + 0x30)
    
    if (rax_13 != 0)
        rcx_10 = rax_13
    
    *(rcx_10 + (r8_1 << 2) + 8) = i_1.d
    void* rcx_11 = arg3
    void* rax_15 = *(arg3 + 0x30)
    
    if (rax_15 != 0)
        rcx_11 = rax_15
    
    int32_t rax_16 = (i_1 - 1).d
    r11_2 += 1
    i_1 += 4
    *(rcx_11 + (r8_1 << 2) + 0xc) = rax_16

int64_t rdx_7 = 0x20
int32_t result

do
    arg_12 = i_2 + 4
    rdx_7 += 4
    void* rax_18 = *(arg3 + 0x30)
    void* rcx_12 = arg3
    
    if (rax_18 != 0)
        rcx_12 = rax_18
    
    result = i_2.d
    i_2 += 1
    *(rcx_12 + rdx_7 - 4) = result
while (i_2 u< 4)

return result
