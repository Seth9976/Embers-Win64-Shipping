// 函数: sub_141759c10
// 地址: 0x141759c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg2[1].d)
int32_t* rsi_3

if (rax.d s< *(arg1 + 0x70))
    rsi_3 = (rax << 4) + *(arg1 + 0x68)

uint64_t var_a8
uint64_t var_9c
int128_t* result
uint128_t zmm0

if (rax.d s>= *(arg1 + 0x70) || rsi_3[3].b == 0 || rsi_3 == 0)
    rsi_3 = sub_14172ea90(arg1 + 0x68, arg2)
else
    int64_t r10_1 = sx.q(rsi_3[2])
    
    if (r10_1.d != 0xffffffff)
        if (arg4 != 0)
            int64_t r8_2 = *(arg1 + 0x38) + 0x28 + (r10_1 << 6)
            int128_t* rax_1 = arg3
            int32_t rcx_2 = 0
            int32_t* r9_1 = r8_2 - arg3
            int32_t rdx = 0
            
            while (true)
                zmm0 = *rax_1
                
                if (zmm0.d f< *(r9_1 + rax_1))
                    break
                
                if (zmm0.d f> *(r9_1 + rax_1 + 0xc))
                    break
                
                rdx += 1
                rax_1 += 4
                
                if (rdx s>= 3)
                    result = &arg3[3]
                    int32_t* r8_3 = r8_2 - result
                    
                    while (true)
                        zmm0 = *result
                        
                        if (zmm0.d f< *(r8_3 + result))
                            break
                        
                        if (zmm0.d f> *(r8_3 + result + 0xc))
                            break
                        
                        rcx_2 += 1
                        result += 4
                        
                        if (rcx_2 s>= 3)
                            return result
                    
                    break
        
        var_a8.o = *arg2
        uint64_t var_88_1 = arg2[2].q
        var_9c:4.o = arg2[1]
        sub_14174e100((r10_1 << 6) + *(arg1 + 0x38), &var_a8)
        rsi_3[2] = 0xffffffff

int128_t zmm6
int128_t var_38_1 = zmm6
int128_t zmm7
int128_t var_48_1 = zmm7
uint128_t zmm8
uint128_t var_58_1 = zmm8
uint64_t* r15_1

if (arg4 == 0)
    r15_1 = &var_a8
    var_a8 = (_mm_unpacklo_ps(0xff7fffff, 0xff7fffff)).q
    int32_t var_d0_1 = 0xff7fffff
    int32_t var_c4_2 = 0x7f7fffff
    int32_t var_a0_1 = 0xff7fffff
    var_9c = (_mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)).q
    int32_t var_94_1 = 0x7f7fffff
label_141759f9b:
    int64_t rax_20 = sx.q(*rsi_3)
    
    if (rax_20.d != 0xffffffff)
        int64_t rcx_27 = *(arg1 + 0x58)
        int32_t rax_24 = r15_1[1].d
        int64_t rdx_12 = rax_20 << 6
        *(rdx_12 + rcx_27 + 0x28) = *r15_1
        zmm0 = zx.o(*(r15_1 + 0xc))
        *(rdx_12 + rcx_27 + 0x30) = rax_24
        int32_t rax_25 = *(r15_1 + 0x14)
        *(rdx_12 + rcx_27 + 0x34) = zmm0.q
        *(rdx_12 + rcx_27 + 0x3c) = rax_25
        void* rcx_30 = (sx.q(*rsi_3) << 6) + *(arg1 + 0x58)
        
        if (data_1439b8d44 != 0)
            *(rcx_30 + 0x14) = *(arg2 + 0x14)
            *(rcx_30 + 0x18) = *(arg2 + 0x18)
            *(rcx_30 + 0x1c) = *(arg2 + 0x1c)
            *(rcx_30 + 0x20) = arg2[2].d
    else
        zmm6 = *arg2
        zmm7 = arg2[1]
        zmm8 = zx.o(arg2[2].q)
        int64_t rbx_2 = sx.q(*(arg1 + 0x60))
        int32_t rax_21 = (rbx_2 + 1).d
        *(arg1 + 0x60) = rax_21
        
        if (rax_21 s> *(arg1 + 0x64))
            sub_1405c4fe0(arg1 + 0x58)
        
        zmm0 = zx.o(*r15_1)
        int32_t rax_22 = r15_1[1].d
        int128_t* rcx_26 = (rbx_2 << 6) + *(arg1 + 0x58)
        *rcx_26 = zmm6
        rcx_26[1] = zmm7
        rcx_26[2].q = zmm8.q
        *(rcx_26 + 0x28) = zmm0.q
        rcx_26[3].d = rax_22
        int32_t rax_23 = *(r15_1 + 0x14)
        *(rcx_26 + 0x34) = *(r15_1 + 0xc)
        *(rcx_26 + 0x3c) = rax_23
        *rsi_3 = rbx_2.d
    
    int32_t r9_3 = rsi_3[1]
    
    if (r9_3 != 0xffffffff)
        if (r9_3 + 1 s< *(arg1 + 0x50))
            var_9c:4.o = *((sx.q(*(arg1 + 0x50)) << 6) + *(arg1 + 0x48) - 0x30)
            *(*(arg1 + 0x68) + sx.q(var_9c:4.d) * 0x10 + 4) = r9_3
            r9_3 = rsi_3[1]
        
        int32_t rdx_13 = *(arg1 + 0x50)
        int32_t rcx_37 = rdx_13 - r9_3 - 1
        
        if (rcx_37 s>= 1)
            rcx_37 = 1
        
        if (rcx_37 != 0)
            memcpy((sx.q(r9_3) << 6) + *(arg1 + 0x48), 
                (sx.q(rdx_13 - rcx_37) << 6) + *(arg1 + 0x48), rcx_37 << 6)
            rdx_13 = *(arg1 + 0x50)
        
        *(arg1 + 0x50) = rdx_13 - 1
        sub_1407c3fe0(arg1 + 0x48)
        rsi_3[1] = 0xffffffff
else
    zmm0.d = arg3[3].d f- *arg3
    float zmm2 = arg3[4] f- arg3[1]
    uint128_t zmm1
    zmm1.d = arg3[5].d f- arg3[2]
    
    if (zmm0.d f<= zmm2 || not(zmm0.d f> zmm1.d))
        zmm0 = _mm_max_ss(zmm1.d, zmm2)
    
    if (zmm0.d f> *(arg1 + 0x80))
        uint64_t var_cc
        r15_1 = &var_cc
        int32_t rax_18 = arg3[2]
        var_cc = *arg3
        int32_t var_c4_1 = rax_18
        uint64_t var_c0_1 = *(arg3 + 0xc)
        int32_t var_b8_1 = arg3[5]
        goto label_141759f9b
    
    int64_t rax_3 = sx.q(rsi_3[1])
    
    if (rax_3.d != 0xffffffff)
        int64_t rcx_8 = *(arg1 + 0x48)
        int64_t rdx_4 = rax_3 << 6
        *(rdx_4 + rcx_8 + 0x28) = *arg3
        *(rdx_4 + rcx_8 + 0x30) = arg3[2]
        *(rdx_4 + rcx_8 + 0x34) = *(arg3 + 0xc)
        *(rdx_4 + rcx_8 + 0x3c) = arg3[5]
        void* rcx_11 = (sx.q(rsi_3[1]) << 6) + *(arg1 + 0x48)
        
        if (data_1439b8d44 != 0)
            *(rcx_11 + 0x14) = *(arg2 + 0x14)
            *(rcx_11 + 0x18) = *(arg2 + 0x18)
            *(rcx_11 + 0x1c) = *(arg2 + 0x1c)
            *(rcx_11 + 0x20) = arg2[2].d
    else
        zmm6 = *arg2
        zmm7 = arg2[1]
        int32_t r13_1 = arg3[2]
        zmm8 = zx.o(arg2[2].q)
        int64_t rbx_1 = sx.q(*(arg1 + 0x50))
        uint128_t zmm9 = zx.o(*arg3)
        uint128_t zmm10 = zx.o(*(arg3 + 0xc))
        int32_t rax_4 = (rbx_1 + 1).d
        int32_t r14_1 = arg3[5]
        *(arg1 + 0x50) = rax_4
        
        if (rax_4 s> *(arg1 + 0x54))
            sub_1405c4fe0(arg1 + 0x48)
        
        int128_t* rax_7 = (rbx_1 << 6) + *(arg1 + 0x48)
        *rax_7 = zmm6
        rax_7[1] = zmm7
        rax_7[2].q = zmm8.q
        *(rax_7 + 0x28) = zmm9.q
        *(rax_7 + 0x34) = zmm10.q
        rax_7[3].d = r13_1
        *(rax_7 + 0x3c) = r14_1
        rsi_3[1] = rbx_1.d
    
    int32_t r9_2 = *rsi_3
    
    if (r9_2 != 0xffffffff)
        if (r9_2 + 1 s< *(arg1 + 0x60))
            var_9c:4.o = *((sx.q(*(arg1 + 0x60)) << 6) + *(arg1 + 0x58) - 0x30)
            *(*(arg1 + 0x68) + sx.q(var_9c:4.d) * 0x10) = r9_2
            r9_2 = *rsi_3
        
        int32_t rdx_5 = *(arg1 + 0x60)
        int32_t rcx_18 = rdx_5 - r9_2 - 1
        
        if (rcx_18 s>= 1)
            rcx_18 = 1
        
        if (rcx_18 != 0)
            memcpy((sx.q(r9_2) << 6) + *(arg1 + 0x58), 
                (sx.q(rdx_5 - rcx_18) << 6) + *(arg1 + 0x58), rcx_18 << 6)
            rdx_5 = *(arg1 + 0x60)
        
        *(arg1 + 0x60) = rdx_5 - 1
        sub_1407c3fe0(arg1 + 0x58)
        *rsi_3 = 0xffffffff
result = zx.q(data_1439b8d5c)

if (*(arg1 + 0x50) s> result.d)
    return sub_14174eba0(arg1)

return result
