// 函数: sub_141a1ceb0
// 地址: 0x141a1ceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int32_t entry_r8

if ((*(arg1 + 0x38) & 2) != 0)
    zmm6 = sub_141a12530(arg1 + 0x150, arg1, entry_r8)
int32_t i_3 = 0
int32_t r12 = *(*(arg1 + 0x108) + 8)
void* rax_4

if (data_1439cc088 == data_1439cc0b4)
labelid_31:
    rax_4 = nullptr
else
    void* rdx_2 = data_1439cc0c0
    void* rax_2 = &data_1439cc0b8
    int64_t r9_1 = sx.q(*(arg1 + 0x594))
    
    if (rdx_2 != 0)
        rax_2 = rdx_2
    
    int32_t rax_3 = *(rax_2 + (((sx.q(data_1439cc0c8) - 1) & r9_1) << 2))
    
    if (rax_3 == 0xffffffff)
    label_141a1cf57:
        rax_4 = nullptr
    else
        int64_t r8 = data_1439cc080
        int64_t rcx_4
        
        while (true)
            rcx_4 = sx.q(rax_3)
            int64_t rdx_3 = rcx_4 * 3
            
            if (*(r8 + (rdx_3 << 3)) == r9_1.d)
                break
            
            rax_3 = *(r8 + (rdx_3 << 3) + 0x10)
            
            if (rax_3 == 0xffffffff)
                goto label_141a1cf57_2
        
        if (rax_3 == 0xffffffff)
        label_141a1cf57_1:
            rax_4 = nullptr
        else
            void* rax_7 = r8 + rcx_4 * 0x18
            
            if (rax_7 == 0)
            label_141a1cf57_2:
                rax_4 = nullptr
            else
                rax_4 = *(rax_7 + 8)

*(arg1 + 0x598) = rax_4

if (rax_4 == 0)
    void* rcx_5 = *(*(arg1 + 0x6a0) + 0x10)
    int32_t r14_1
    
    if (rcx_5 == 0)
        r14_1 = 0
    else
        r14_1 = *(rcx_5 + 8)
    
    void*** rax_8 = j_sub_140a82f30(0x80)
    void*** rax_9
    
    if (rax_8 == 0)
        rax_9 = nullptr
    else
        rax_9, zmm6 = sub_1419fc770(rax_8, *(arg1 + 0x594), *(arg1 + 0x4a0), *(arg1 + 0x49c), 
            *(*(arg1 + 0x108) + 8), 0, r14_1)
    
    *(arg1 + 0x598) = rax_9
    sub_1419f6440(&data_1439cc080, arg1 + 0x594, arg1 + 0x598)
    rax_4 = *(arg1 + 0x598)

*(rax_4 + 8) += 1
int64_t* rcx_8 = **(arg1 + 0x6a0)
(*(*rcx_8 + 0x28))(rcx_8)
void*** rax_12 = j_sub_140a82f30(0x178)
void*** rsi = rax_12

if (rax_12 == 0)
    rsi = nullptr
else
    sub_1419fc9a0(rax_12, r12.b)
    *rsi = &data_143021e38
    rsi[0x28] = 0
    rsi[0x29] = 0
    rsi[0x2e].d = 0
    *(rsi + 0x174) = 2

int32_t i = 0
int32_t var_3c = 0x70c00
int32_t var_40 = 0
int32_t var_40_1 = 0
var_3c:1.w = 0x70c
*(rsi + 0x140) = (**(arg1 + 0x6a0)).o
var_3c:3.b = 0

do
    int64_t r13_1 = sx.q(rsi[0x2e].d)
    int64_t rcx_11 = **(arg1 + 0x6a0)
    var_3c.b = (i.b + 1) << 2
    int32_t rax_16 = (r13_1 + 1).d
    rsi[0x2e].d = rax_16
    
    if (rax_16 s> *(rsi + 0x174))
        sub_141a1f9b0(&rsi[0x2a])
    
    i += 1
    *(rsi + r13_1 * 0x10 + 0x150) = rcx_11.o
while (i u< 2)

(*rsi)[5](rsi)
*(arg1 + 0x5a0) = rsi

if (sub_1419ba670(r12) != 0)
    void*** rax_21 = j_sub_140a82f30(0x178)
    void*** rsi_1 = rax_21
    
    if (rax_21 == 0)
        rsi_1 = nullptr
    else
        sub_1419fc9a0(rax_21, r12.b)
        rsi_1[0x28] = 0
        rsi_1[0x29] = 0
        rsi_1[0x2e].d = 0
        *(rsi_1 + 0x174) = 2
        *rsi_1 = &data_1430220b8
    
    int32_t i_1 = 0
    int32_t var_3c_1 = 0x70c00
    int32_t var_40_2 = 0
    int32_t var_40_3 = 0
    var_3c_1:1.w = 0x70c
    *(rsi_1 + 0x140) = (**(arg1 + 0x6a0)).o
    var_3c_1:3.b = 0
    
    do
        int64_t r13_2 = sx.q(rsi_1[0x2e].d)
        int64_t rcx_17 = **(arg1 + 0x6a0)
        var_3c_1.b = (i_1.b + 1) << 2
        int32_t rax_25 = (r13_2 + 1).d
        rsi_1[0x2e].d = rax_25
        
        if (rax_25 s> *(rsi_1 + 0x174))
            sub_141a1f9b0(&rsi_1[0x2a])
        
        i_1 += 1
        *(rsi_1 + r13_2 * 0x10 + 0x150) = rcx_17.o
    while (i_1 u< 2)
    
    (*rsi_1)[5](rsi_1)
    *(arg1 + 0x5a8) = rsi_1

(*(*(arg1 + 0x628) + 0x28))(arg1 + 0x628)
int64_t r14_2 = sx.q(*(arg1 + 0x658))
int32_t i_4 = sx.d(*(arg1 + 0x448)) + 1
int32_t rax_30 = i_4 + r14_2.d
*(arg1 + 0x658) = rax_30

if (rax_30 s> *(arg1 + 0x65c))
    sub_1405c4ec0(arg1 + 0x650)

uint64_t result = *(arg1 + 0x650)
int64_t rdx_11 = result + r14_2 * 0x28

if (i_4 != 0)
    result = &data_143020dc0
    int32_t i_2
    
    do
        *(rdx_11 + 8) = 0xffffffff
        *(rdx_11 + 0xc) = 4
        *rdx_11 = &data_143020dc0
        *(rdx_11 + 0x10) = 2
        *(rdx_11 + 0x18) = 0
        *(rdx_11 + 0x20) = 0
        rdx_11 += 0x28
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (*(arg1 + 0x448) s>= 0)
    int128_t var_38_1 = zmm6
    int64_t r14_3 = 0
    int64_t var_48_1
    var_48_1:4.d = 0
    
    do
        int64_t* rcx_24 = *(arg1 + 0x650) + r14_3
        (*(*rcx_24 + 0x28))(rcx_24)
        int64_t* rsi_4 = *(arg1 + 0x650) + r14_3
        int32_t rax_34 = (*(arg1 + 0x4a4) s>> i_3.b) - 1
        uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(i_3))
        int128_t* rax_35 = rsi_4[4]
        var_48_1.d = zmm2.d
        uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_34))
        int32_t var_40_4 = zmm1.d
        int128_t zmm0_1
        zmm0_1.d = 1f f/ zmm1.d
        int32_t var_3c_2 = zmm0_1.d
        
        if (rax_35 == 0)
            rax_35 = sub_140a82f30(0x10, 0x10)
            rsi_4[4] = rax_35
        
        *rax_35 = var_48_1.o
        sub_1419ba620(rsi_4)
        result = zx.q(sx.d(*(arg1 + 0x448)))
        i_3 += 1
        r14_3 += 0x28
    while (i_3 s<= result.d)

return result
