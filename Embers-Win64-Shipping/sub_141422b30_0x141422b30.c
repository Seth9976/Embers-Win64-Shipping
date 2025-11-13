// 函数: sub_141422b30
// 地址: 0x141422b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_1422f6770(arg1 + 0x10) == 0)
    void* rdx = *(arg1 + 0xa0)
    void* r8_1 = sx.q(*(arg1 + 0xa8)) * 0x5240 + rdx
    
    if (rdx != r8_1)
        void* rcx_1 = rdx + 0x15a4
        
        do
            rdx += 0x5240
            *(rcx_1 - 0xc) = *(rcx_1 - 0x134c)
            *(rcx_1 - 8) = *(rcx_1 - 0x1348)
            *(rcx_1 - 4) = *(rcx_1 - 0x1344)
            *rcx_1 = *(rcx_1 - 0x1340)
            rcx_1 += 0x5240
        while (rdx != r8_1)
    
    return sub_1414195b0(arg1)

int32_t rdx_1 = *(arg1 + 0xa8)
int32_t r14 = 0
int64_t var_68 = 0
int64_t var_60 = 0

if (rdx_1 s> 0)
    sub_1405dadb0(&var_68, rdx_1)

void* rdi = *(arg1 + 0xa0)
void* r15_1 = sx.q(*(arg1 + 0xa8)) * 0x5240 + rdi
int128_t zmm6
int128_t var_58 = zmm6

while (rdi != r15_1)
    if (sub_1413197e0(rdi) == 0 && (*(rdi + 0xd75) == 0 || *(arg1 + 0x3b0) s< 3))
        *(rdi + 0x1520) = 0
    
    int64_t rsi_1 = sx.q(var_60.d)
    int32_t rax_9 = (rsi_1 + 1).d
    var_60.d = rax_9
    
    if (rax_9 s> var_60:4.d)
        sub_1405a4cf0(&var_68)
    
    rdi += 0x5240
    *(var_68 + (rsi_1 << 2)) = 0x3f800000

int64_t* rcx_6 = *(arg1 + 0x98)
(*(*rcx_6 + 0x18))(rcx_6, &var_68)
int32_t rcx_7 = *(arg1 + 0xa8)
int32_t r15_2 = 0

if (rcx_7 s> 0)
    int64_t rdi_1 = 0
    float* r12_1 = nullptr
    
    do
        int64_t rsi_2 = *(arg1 + 0xa0)
        int32_t rcx_8 = *(rdi_1 + rsi_2 + 0x258)
        float zmm2 = *(r12_1 + var_68) f* *(arg1 + 0x8c)
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(*(rdi_1 + rsi_2 + 0x260) - rcx_8)).d f* zmm2
        zmm1.d = zmm1.d f+ zmm1.d
        int64_t arg_8
        arg_8.d = neg.d(int.d(-0.5f f- zmm1.d) s>> 1)
        zmm1.d =
            _mm_cvtepi32_ps(zx.o(*(rdi_1 + rsi_2 + 0x264) - *(rdi_1 + rsi_2 + 0x25c))).d f* zmm2
        zmm1.d = zmm1.d f+ zmm1.d
        float zmm0_1 = -0.5f f- zmm1.d
        zmm1.d = _mm_cvtepi32_ps(zx.o(rcx_8)).d f* zmm2
        int32_t r13_3 = neg.d(int.d(zmm0_1) s>> 1)
        zmm1.d = zmm1.d f+ zmm1.d
        zmm0_1 = -0.5f f- zmm1.d
        zmm1.d = _mm_cvtepi32_ps(zx.o(*(rdi_1 + rsi_2 + 0x25c))).d f* zmm2
        int32_t arg_18 = neg.d(int.d(zmm0_1) s>> 1)
        zmm1.d = zmm1.d f+ zmm1.d
        int32_t arg_1c = neg.d(int.d(-0.5f f- zmm1.d) s>> 1)
        int32_t arg_10
        sub_1419a97d0(&arg_18, &arg_10)
        
        if (*(data_143ed2cc8 + 4) != 0)
            zmm1.d = _mm_cvtepi32_ps(zx.o(*(rdi_1 + rsi_2 + 0x264))).d f* *(arg1 + 0x8c)
            zmm1.d = zmm1.d f+ zmm1.d
            arg2 = neg.d((int.d(-0.5f f- zmm1.d) s>> 1) + r13_3)
        
        *(rdi_1 + rsi_2 + 0x1598) = arg_10
        *(rdi_1 + rsi_2 + 0x159c) = arg2
        int64_t rax_33 = arg_10.q
        *(rdi_1 + rsi_2 + 0x15a0) = arg_8.d + rax_33.d
        *(rdi_1 + rsi_2 + 0x15a4) = rax_33:4.d + r13_3
        
        if (*(rdi_1 + rsi_2 + 0x1524) == 1
                && (*(rdi_1 + rsi_2 + 0x1520) != 2 || *(arg1 + 0x3b0) s< 3))
            *(rdi_1 + rsi_2 + 0x1524) = 0
        
        rcx_7 = *(arg1 + 0xa8)
        r15_2 += 1
        rdi_1 += 0x5240
        r12_1 = &r12_1[1]
    while (r15_2 s< rcx_7)

void* rdx_5 = *(arg1 + 0xa0)
int64_t rax_36 = *(rdx_5 + 0x1598)
int64_t r9 = sx.q(rcx_7)
int32_t r8_2 = rax_36.d
int32_t rdx_6

if (r9 s<= 1)
    rdx_6 = rax_36:4.d
else
    void* rcx_12 = rdx_5 + 0x67dc
    int64_t i_2 = r9 - 1
    rdx_6 = rax_36:4.d
    int64_t i
    
    do
        int32_t rax_37 = *(rcx_12 - 4)
        rcx_12 += 0x5240
        
        if (r8_2 s<= rax_37)
            rax_37 = r8_2
        
        r8_2 = rax_37
        int32_t rax_38 = *(rcx_12 - 0x5240)
        
        if (rdx_6 s<= rax_38)
            rax_38 = rdx_6
        
        rdx_6 = rax_38
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx_7 = *(arg1 + 0xa8)

int32_t i_1 = 0

if (rcx_7 s> 0)
    int64_t rcx_13 = 0
    
    do
        int64_t rax_39 = *(arg1 + 0xa0)
        rcx_13 += 0x5240
        i_1 += 1
        *(rcx_13 + rax_39 - 0x3ca8) -= r8_2
        *(rcx_13 + rax_39 - 0x3ca4) -= rdx_6
        *(rcx_13 + rax_39 - 0x3ca0) -= r8_2
        *(rcx_13 + rax_39 - 0x3c9c) -= rdx_6
    while (i_1 s< *(arg1 + 0xa8))

int64_t result = sub_1414195b0(arg1)
void* rcx_15 = data_143f5b298

if (*(rcx_15 + 0xaf8) != 0 && *(arg1 + 0xa8) s> 0)
    int64_t rdi_2 = 0
    
    while (true)
        int64_t rdx_7 = *(arg1 + 0xa0)
        int64_t* rcx_16 = *(rcx_15 + 0xaf8)
        result = (*(*rcx_16 + 0x88))(rcx_16, zx.q(*(rdi_2 + rdx_7 + 0xad0)), rdx_7 + 0x1598 + rdi_2)
        r14 += 1
        rdi_2 += 0x5240
        
        if (r14 s>= *(arg1 + 0xa8))
            break
        
        rcx_15 = data_143f5b298

int64_t rcx_17 = var_68

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
