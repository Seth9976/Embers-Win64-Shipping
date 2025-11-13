// 函数: sub_141f6fd20
// 地址: 0x141f6fd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f23e50(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
int32_t result
uint128_t zmm6
result, zmm6 = sub_140b4e7c0(arg2, &data_1439a93f8)

if (result s< 6 && (arg2[5].b & 1) != 0)
    sub_141ae6560(arg1 + 0x408, arg1 + 0x470)
    sub_141f51ba0(arg1 + 0x420, arg1 + 0x488)
    sub_141ae6560(arg1 + 0x438, arg1 + 0x4a0)
    result = sub_141f51b20(arg1 + 0x450, arg1 + 0x4b8)

if (arg2[8].d s>= 0x1c4)
    return result

int64_t rsi_1 = sx.q(*(arg1 + 0x410))

if (*(arg1 + 0x4e1) != 0)
    void* r9_1 = *(arg1 + 0x408)
    int64_t rdx_4 = rsi_1
    int64_t rax_1 = rsi_1 * 0x2c
    
    if (not((*(rax_1 + r9_1 - 0x28)).d f!= *(r9_1 + 4))
            && not((*(rax_1 + r9_1 - 0x24)).d f!= *(r9_1 + 8))
            && not((*(rax_1 + r9_1 - 0x20)).d f!= *(r9_1 + 0xc)))
        int32_t rcx_6 = *(arg1 + 0x410)
        rsi_1 = zx.q(rsi_1.d - 1)
        int32_t rax_3 = rcx_6 - rsi_1.d
        
        if (rax_3 != 1)
            memmove(sx.q(rsi_1.d) * 0x2c + r9_1, rdx_4 * 0x2c + r9_1, (rax_3 - 1) * 0x2c)
            rcx_6 = *(arg1 + 0x410)
        
        *(arg1 + 0x410) = rcx_6 - 1

*(arg1 + 0x428) = 0

if (rsi_1.d s> *(arg1 + 0x42c))
    sub_1405a5310(arg1 + 0x420, rsi_1.d)

*(arg1 + 0x440) = 0

if (rsi_1.d s> *(arg1 + 0x444))
    sub_141846c50(arg1 + 0x438, rsi_1.d)

float var_38

if (rsi_1.d s> 0)
    uint128_t var_28_1 = zmm6
    var_38 = 1f
    int32_t var_34_1 = 0x3f800000
    zmm6 = zx.o(var_38.q)
    int32_t var_30_1 = 0x3f800000
    uint64_t i_1 = zx.q(rsi_1.d)
    uint64_t i
    
    do
        int64_t rsi_2 = sx.q(*(arg1 + 0x428))
        int32_t rax_8 = (rsi_2 + 1).d
        *(arg1 + 0x428) = rax_8
        
        if (rax_8 s> *(arg1 + 0x42c))
            sub_1405c5060(arg1 + 0x420)
        
        int32_t* rcx_14 = rsi_2 * 0x50 + *(arg1 + 0x420)
        *rcx_14 = 0
        *(rcx_14 + 0x10) = data_14399f720
        *(rcx_14 + 0x20) = data_14399f720
        *(rcx_14 + 0x30) = data_14399f720
        rcx_14[0x10].b = 1
        int64_t rsi_3 = sx.q(*(arg1 + 0x440))
        int32_t rax_9 = (rsi_3 + 1).d
        *(arg1 + 0x440) = rax_9
        
        if (rax_9 s> *(arg1 + 0x444))
            sub_140ac0cd0(arg1 + 0x438)
        
        int32_t* rcx_17 = rsi_3 * 0x2c + *(arg1 + 0x438)
        *(rcx_17 + 4) = zmm6.q
        rcx_17[3] = 0x3f800000
        *rcx_17 = 0
        *(rcx_17 + 0x10) = data_143dbb1f8.q
        rcx_17[6] = data_143dbb200
        *(rcx_17 + 0x1c) = data_143dbb1f8.q
        rcx_17[9] = data_143dbb200
        rcx_17[0xa].b = 1
        i = i_1
        i_1 -= 1
    while (i != 1)

float zmm1_1[0x4] = *(arg1 + 0x1e0)
int32_t r9_2 = *(arg1 + 0x4d4)
char r8_2 = *(arg1 + 0x4dc)
char rdx_11 = *(arg1 + 0x4e1)
uint128_t zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
char rax_12 = *(arg1 + 0x4e2)
int32_t var_34_2 = zmm0_1.d
zmm0_1 = *(arg1 + 0x4e4)
var_38 = zmm1_1[0]
float var_30_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
return sub_141f771f0(arg1 + 0x408, rdx_11, r8_2, r9_2, rax_12, zmm0_1.d, &var_38)
