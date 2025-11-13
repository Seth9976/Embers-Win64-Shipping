// 函数: sub_1427b7fa0
// 地址: 0x1427b7fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x49) != 0)
    int64_t* rax_2 = (*(*arg1 + 0x280))()
    int64_t rdx_1 = *rax_2
    int64_t* rax_3 = (*(rdx_1 + 0x2d0))(rax_2, rdx_1)
    int64_t rdx_2 = *rax_3
    *(arg1 + 0x4c) = (*(rdx_2 + 0x18))(rax_3, rdx_2)

void* rax_5 = arg1[0x25]
int64_t r12
r12.b = *(arg1 + 0x4c) == 1

if (rax_5 != 0 && arg1[0x26] != 0 && arg1[0x27] != 0)
    *(rax_5 + 0x3c) = r12.b
    *(arg1[0x26] + 0x3c) = r12.b
    *(arg1[0x27] + 0x3c) = r12.b

int64_t rdi = 0

if (arg1[0x14] != 0)
    int64_t r14_1 = 0
    int64_t* rsi_1 = arg1[0x1c]
    uint64_t r15_2 = sx.q(arg1[0x1d].d) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[arg1[0x1d]])
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            void* rcx_2 = &arg1[0x18]
            int32_t arg_8 = *(arg1 + 0x4c)
            int64_t arg_18 = *rsi_1
            void* rax_12 = arg1[0x16]
            
            if (rax_12 != 0)
                rcx_2 = rax_12
            
            arg1[0x14]((*(*rcx_2 + 8))(rcx_2), &arg_18, &arg_8)
            r14_1 += 1
            rsi_1 = &rsi_1[1]
        while (r14_1 != r15_2)

int64_t* rsi_2 = arg1[0x1e]
uint64_t r14_3 = sx.q(arg1[0x1f].d) << 3 u>> 3

if (rsi_2 u> &rsi_2[arg1[0x1f]])
    r14_3 = 0

if (r14_3 != 0)
    do
        sub_141f49a80(*rsi_2, r12.b, 1)
        rdi += 1
        rsi_2 = &rsi_2[1]
    while (rdi != r14_3)

int64_t* rax_18 = (*(*arg1 + 0x280))(arg1)
int64_t rdx_5 = *rax_18
int64_t* rax_19 = (*(rdx_5 + 0x2d0))(rax_18, rdx_5)
int64_t r8_2 = *rax_19
void var_a8
uint64_t result = (*(r8_2 + 0x10))(rax_19, &var_a8, r8_2)
void* rdx_7 = arg1[0x24]

if (rdx_7 != 0)
    result = arg1[0x23]
    
    if (result != 0)
        void* rcx_8 = *(result + 0x130)
        int128_t* rcx_9
        
        if (rcx_8 == 0)
            rcx_9 = &data_143dbb0c0
        else
            rcx_9 = rcx_8 + 0x1c0
        
        float zmm2[0x4] = rcx_9[1]
        float var_b0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
        *(rdx_7 + 0x30) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
        *(rdx_7 + 0x38) = var_b0_1
        int32_t var_90
        float zmm5_1[0x4] = var_90
        int32_t var_94
        float zmm1[0x4] = var_94
        int32_t var_98
        zmm2 = var_98
        float zmm4_1 = zmm5_1[0] + zmm5_1[0]
        void* rcx_10 = arg1[0x24]
        float zmm6[0x4] = zmm1 ^ 0x80000000
        zmm6[0] = zmm6[0] + zmm6[0]
        zmm5_1[0] = zmm5_1[0] * zmm4_1
        int64_t zmm3 = zmm6[0].q
        zmm6[0] = zmm6[0] * zmm1[0]
        int32_t var_8c
        zmm1 = var_8c
        zmm3.d = zmm3.d f* zmm2[0]
        zmm5_1[0] = zmm5_1[0] - zmm6[0]
        zmm6[0] = zmm6[0] * zmm1[0]
        zmm2[0] = zmm2[0] * zmm4_1
        zmm1[0] = zmm1[0] * zmm4_1
        zmm5_1[0] = zmm5_1[0] - 1f
        zmm6[0] = zmm6[0] + zmm2[0]
        zmm3.d = zmm3.d f- zmm1[0]
        *(rcx_10 + 0x3c) = (_mm_unpacklo_ps(zmm5_1, zmm3)).q
        *(rcx_10 + 0x44) = (zmm6 ^ 0x80000000)[0]
        zmm5_1 = var_90
        zmm2 = var_98
        void* rcx_11 = arg1[0x24]
        float zmm8[0x4] = zmm5_1 ^ 0x80000000
        zmm8[0] = zmm8[0] + zmm8[0]
        zmm2[0] = zmm2[0] + zmm2[0]
        zmm3 = zmm8[0].q
        zmm8[0] = zmm8[0] f* var_8c
        zmm2[0] = zmm2[0] f* var_94
        zmm8[0] = zmm8[0] f* var_94
        zmm2[0] = zmm2[0] + zmm8[0]
        zmm3.d = zmm3.d f* zmm5_1[0]
        zmm2[0] = zmm2[0] f* var_8c
        zmm2[0] = zmm2[0] * zmm2[0]
        zmm2[0] = zmm2[0] - zmm8[0]
        zmm3.d = zmm3.d f- zmm2[0]
        float var_b0_3 = zmm2[0]
        zmm3.d = zmm3.d f+ 1f
        *(rcx_11 + 0x48) = (_mm_unpacklo_ps(zmm2, zmm3)).q
        *(rcx_11 + 0x50) = var_b0_3
        float zmm0[0x4] = var_98
        zmm1 = var_94
        zmm5_1 = zmm0 ^ 0x80000000
        zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
        zmm1[0] = zmm1[0] + zmm1[0]
        zmm4_1 = zmm5_1[0] * zmm0[0]
        zmm3.d = zmm1[0].q.d f* var_90
        void* rcx_12 = arg1[0x24]
        zmm1[0] = zmm1[0] f* var_8c
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm5_1[0] = zmm5_1[0] f* var_90
        zmm5_1[0] = zmm5_1[0] f* var_8c
        zmm4_1 = zmm4_1 - zmm1[0]
        zmm1[0] = zmm1[0] - zmm5_1[0]
        zmm5_1[0] = zmm5_1[0] f+ zmm3.d
        result = zx.q(zmm4_1 + 1f)
        *(rcx_12 + 0x54) = (_mm_unpacklo_ps(zmm1, zmm5_1[0].q)).q
        *(rcx_12 + 0x5c) = result.d

return result
