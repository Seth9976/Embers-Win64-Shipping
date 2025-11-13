// 函数: sub_1414df210
// 地址: 0x1414df210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8
int128_t var_48 = zmm8
int128_t zmm9
int128_t var_58 = zmm9
int64_t r14 = *(sub_14139bef0(arg1) + 0x37c)
uint32_t rsi_1 = (r14 u>> 0x20).d
void** const rax_30
int64_t* rcx_7
void* rax_20
int128_t zmm6
int128_t zmm7

if (sub_1422eb5d0(arg2) != 0)
    if (*(arg2 + 0xd7b) == 0)
        zmm6.d = float.s(zx.q(divs.dp.d(sx.q(*(arg2 + 0x15a4) * rsi_1), rsi_1)))
        zmm7.d = float.s(zx.q(divu.dp.d(0:(*(arg3 + 0x3b8) * r14.d), r14.d)))
        rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_38 = &rcx_7[5]
        
        if (rax_38 u> *(arg1 + 0x38))
            zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_38 = &rcx_7[5]
        
        *(arg1 + 0x30) = rax_38
        int64_t** rax_39 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_39 = rcx_7
        rax_20 = &rcx_7[1]
        *(arg1 + 8) = rax_20
        rcx_7[2] = 0
        goto label_1414df4ae
    
    void* rcx_11 = *(arg3 + 0xa0)
    zmm6.d = float.s(zx.q(*(rcx_11 + 0x67e4)))
    zmm7.d = float.s(zx.q(*(rcx_11 + 0x15a4)))
    zmm8.d = float.s(zx.q(*(rcx_11 + 0x67e0)))
    zmm9.d = float.s(zx.q(*(rcx_11 + 0x15a0)))
    int128_t zmm10
    zmm10.d = float.s(zx.q(*(rcx_11 + 0x67d8)))
    rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int128_t zmm11
    zmm11.d = float.s(zx.q(*(rcx_11 + 0x1598)))
    void* rax_27 = &rcx_7[7]
    
    if (rax_27 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x40)
        rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_27 = &rcx_7[7]
    
    *(arg1 + 0x30) = rax_27
    int64_t** rax_28 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_28 = rcx_7
    *(arg1 + 8) = &rcx_7[1]
    rcx_7[2].d = zmm11.d
    *(rcx_7 + 0x14) = zmm10.d
    rcx_7[1] = 0
    rax_30 = &data_142f115a8
    *(rcx_7 + 0x24) = zmm9.d
    rcx_7[5].d = zmm8.d
    *(rcx_7 + 0x2c) = zmm7.d
    rcx_7[6].d = zmm6.d
    rcx_7[3] = 0
    rcx_7[4].d = 0
    *(rcx_7 + 0x34) = 0x3f800000
else
    zmm6.d = float.s(zx.q(divs.dp.d(sx.q(*(arg2 + 0x15a4) * rsi_1), rsi_1)))
    zmm7.d = float.s(zx.q(divs.dp.d(sx.q(*(arg2 + 0x15a0) * r14.d), r14.d)))
    zmm8.d = float.s(zx.q(divs.dp.d(sx.q(*(arg2 + 0x159c) * rsi_1), rsi_1)))
    zmm9.d = float.s(zx.q(divs.dp.d(sx.q(*(arg2 + 0x1598) * r14.d), r14.d)))
    rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_18 = &rcx_7[5]
    
    if (rax_18 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_18 = &rcx_7[5]
    
    *(arg1 + 0x30) = rax_18
    int64_t* rax_19 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_19 = rcx_7
    rax_20 = &rcx_7[1]
    *(arg1 + 8) = rax_20
    rcx_7[2].d = zmm9.d
    *(rcx_7 + 0x14) = zmm8.d
label_1414df4ae:
    *rax_20 = 0
    rax_30 = &data_142d54998
    *(rcx_7 + 0x24) = 0x3f800000
    rcx_7[4].d = zmm6.d
    *(rcx_7 + 0x1c) = zmm7.d
    rcx_7[3].d = 0
*rcx_7 = rax_30
*arg4 = data_14395da00
uint64_t rax_41 = zx.q(arg5)

if (rax_41.d == 0)
    rax_41 = data_1439b53d0
    arg4[1] = rax_41
    arg4[7].d = 0
else if (rax_41.d == 1)
    int64_t rax_42 = data_1439b5400
    arg4[1] = rax_42
    arg4[7].d = 0
    return rax_42

return rax_41
