// 函数: sub_14105c560
// 地址: 0x14105c560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg2
int64_t rdi = arg6
void* i = arg1
int64_t r10 = sx.q(*(arg1 + 0x3c)) * 5
uint64_t r12_2 = zx.q(arg5 + 0xff) & 0xffffff00
void* rcx = arg1 + 0x70
uint32_t temp0 = divu.dp.d(0:(arg4[4]), *((r10 << 3) + 0x1439c85e8))
int32_t var_180 = r12_2.d
int32_t* rsi = arg4
uint32_t j_2 = divu.dp.d(0:(arg4[5]), *((r10 << 3) + &data_1439c85ec))
void* var_e8 = rcx
uint32_t j_3 = j_2
int32_t rdx_3 = (r12_2.d * j_2 + 0x1ff) & 0xfffffe00
void* rax_7 = i + 0x68
int32_t var_17c = rdx_3
int32_t result

do
    void* rcx_1 = *rcx
    void* var_168 = rcx_1
    int32_t result_1 = 0
    int64_t zmm0 = (zx.o(0)).q
    int64_t* var_148_1 = nullptr
    int16_t var_108_1 = 0xff00
    int32_t var_140_1 = 0
    int64_t var_138
    __builtin_memset(&var_138, 0, 0x2c)
    int64_t rax_8
    int512_t zmm0_1
    rax_8, zmm0_1 = sub_1410130c0(rcx_1 + 0x7c0, rdx_3, 0x200, &var_168)
    int64_t rbx_1 = rax_8
    uint32_t count = (&data_1439c85f4)[r10 * 2] * temp0
    
    if (j_3 != 0)
        uint64_t j_1 = zx.q(j_2)
        uint64_t j
        
        do
            memcpy(rbx_1, rdi, count)
            rdi += zx.q(arg5)
            rbx_1 += r12_2
            j = j_1
            j_1 -= 1
        while (j != 1)
        rsi = arg4
        r14 = arg2
        j_3 = j_2
        r12_2 = zx.q(var_180)
    
    int32_t var_d8_1 = rsi[5]
    int32_t var_dc_1 = rsi[4]
    int32_t var_d4_1 = 1
    int32_t var_ac_1 = 0
    int32_t var_b0_1 = r12_2.d
    zmm0_1.o = (&data_1439c85fc)[r10 * 2].o
    int128_t var_c0_1 = zmm0_1.o
    int64_t var_118
    zmm0_1.o = var_118.o
    int64_t var_78 = *(*(i + 0xc0) + 0x20)
    int32_t var_70_1 = 0
    int64_t var_a8 = *(zmm0 + 0x20)
    int32_t var_a0_1 = 1
    int128_t var_98_1 = zmm0_1.o
    
    if (sub_14105aef0(r14) == 0)
        sub_14105c9a0(rax_7, &var_78, *rsi, rsi[1], 0, &var_a8)
    else
        void*** rax_22 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_7 = &rax_22[0x1e]
        
        if (rcx_7 u> *(r14 + 0x38))
            sub_140b0e3d0(r14 + 0x30, 0xf8)
            rax_22 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_7 = &rax_22[0x1e]
        
        *(r14 + 0x30) = rcx_7
        *(r14 + 0x14) += 1
        **(r14 + 8) = rax_22
        *(r14 + 8) = &rax_22[1]
        int32_t r8_1 = rsi[1]
        int32_t rdx_5 = *rsi
        rax_22[1] = 0
        *rax_22 = &data_142f01af8
        rax_22[2] = rax_7
        zmm0_1.o = var_78.o
        *(rax_22 + 0x18) = zmm0_1.o
        *(rax_22 + 0x28) = arg3.o
        int128_t var_58
        zmm0_1.o = var_58
        rax_22[9].d = rdx_5
        *(rax_22 + 0x4c) = r8_1
        *(rax_22 + 0x38) = zmm0_1.o
        rax_22[0xa].d = 0
        zmm0_1.o = var_a8.o
        *(rax_22 + 0x58) = zmm0_1.o
        *(rax_22 + 0x68) = var_98_1
        int128_t var_b8
        zmm0_1.o = var_b8
        *(rax_22 + 0x78) = zmm0_1.o
        rax_22[0x11] = 0
        rax_22[0x12].d = 0
        __builtin_memset(&rax_22[0x13], 0, 0x50)
        rax_22[0x1d].w = 0xff00
        int64_t* rcx_12 = rax_22[3]
        (*(*rcx_12 + 8))(rcx_12)
        sub_14105b290(&rax_22[0x11], &var_168, zmm0_1)
    
    void* rax_26 = *(i + 0x120)
    i = rax_26 - 0x68
    result = result_1
    
    if (rax_26 == 0)
        i = nullptr
    
    int64_t rcx_15
    
    if (result == 1)
    label_14105c8ba:
        rcx_15 = zmm0
        
        if (*(rcx_15 + 0xfe) == 0)
        label_14105c8f3:
            result = *(rcx_15 + 8)
            *(rcx_15 + 8) -= 1
            
            if (result == 1 && rcx_15 != 0)
                result = (**rcx_15)(rcx_15, 1)
        else
            result = sub_141049740(rcx_15)
    else if (result == 2)
        int32_t var_110
        
        if (var_108_1:1.b != 1)
            result = sub_14101be70(var_148_1, &var_168)
        else
            result = sub_14101bf40(var_148_1, zmm0, var_140_1, var_110)
    else if (result s> 4)
        if (result s<= 6)
            rcx_15 = zmm0
            
            if (*(rcx_15 + 0xfe) == 0)
                goto label_14105c8f3
            
            int32_t rax_27 = 0
            
            if (0 == *(rcx_15 + 8))
                *(rcx_15 + 8) = 0
            else
                rax_27 = *(rcx_15 + 8)
            
            rcx_15 = zmm0
            
            if (rax_27 != 1)
                goto label_14105c8f3
            
            result = sub_141049740(rcx_15)
        else if (result == 7)
            goto label_14105c8ba
    rdx_3 = var_17c
    rcx = var_e8
    rdi = arg6
while (i != 0)

return result
