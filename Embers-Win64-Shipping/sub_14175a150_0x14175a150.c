// 函数: sub_14175a150
// 地址: 0x14175a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg2[2].d)
int32_t* rbx_3

if (rax.d s< *(arg1 + 0x70))
    rbx_3 = (rax << 4) + *(arg1 + 0x68)

int64_t var_b8
int64_t* result
int64_t zmm0

if (rax.d s>= *(arg1 + 0x70) || rbx_3[3].b == 0 || rbx_3 == 0)
    rbx_3 = sub_14172ea90(arg1 + 0x68, arg2)
else
    int64_t r9 = sx.q(rbx_3[2])
    
    if (r9.d != 0xffffffff)
        if (arg4 != 0)
            int32_t rdx = 0
            void* rcx_1 = r9 * 0x98 + *(arg1 + 0x38)
            int32_t var_b0_1 = *(rcx_1 + 0x28)
            int32_t rax_2 = *(rcx_1 + 0x34)
            var_b8 = *(rcx_1 + 0x20)
            int32_t rcx_2 = 0
            int32_t var_a4_1 = rax_2
            int64_t* rax_3 = &var_b8
            int64_t var_ac_1 = *(rcx_1 + 0x2c)
            
            while (true)
                zmm0 = *(arg3 - &var_b8 + rax_3)
                
                if (zmm0.d f< *rax_3)
                    break
                
                if (zmm0.d f> *(rax_3 + 0xc))
                    break
                
                rcx_2 += 1
                rax_3 += 4
                
                if (rcx_2 s>= 3)
                    result = &var_b8
                    
                    while (true)
                        zmm0 = *(&arg3[3] - &var_b8 + result)
                        
                        if (zmm0.d f< *result)
                            break
                        
                        if (zmm0.d f> *(result + 0xc))
                            break
                        
                        rdx += 1
                        result += 4
                        
                        if (rdx s>= 3)
                            return result
                    
                    break
        
        sub_14174e310(r9 * 0x98 + *(arg1 + 0x38), arg2)
        rbx_3[2] = 0xffffffff

int128_t zmm6
int128_t var_38_1 = zmm6
int128_t zmm7
int128_t var_48_1 = zmm7
uint128_t zmm8
uint128_t var_58_1 = zmm8
int64_t var_94
int64_t* r15_1

if (arg4 == 0)
    int64_t var_a0
    r15_1 = &var_a0
    var_a0 = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff)
    int32_t var_c0_1 = 0xff7fffff
    int32_t var_b0_3 = 0x7f7fffff
    int32_t var_98_1 = 0xff7fffff
    var_94 = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)
    int32_t var_8c_1 = 0x7f7fffff
label_14175a4e3:
    int64_t rax_22 = sx.q(*rbx_3)
    
    if (rax_22.d != 0xffffffff)
        int64_t rcx_28 = *(arg1 + 0x58)
        int32_t rax_26 = r15_1[1].d
        int64_t rdx_12 = rax_22 << 6
        *(rdx_12 + rcx_28 + 0x28) = *r15_1
        zmm0 = *(r15_1 + 0xc)
        *(rdx_12 + rcx_28 + 0x30) = rax_26
        int32_t rax_27 = *(r15_1 + 0x14)
        *(rdx_12 + rcx_28 + 0x34) = zmm0
        *(rdx_12 + rcx_28 + 0x3c) = rax_27
        void* rcx_31 = (sx.q(*rbx_3) << 6) + *(arg1 + 0x58)
        
        if (data_1439b8d44 != 0)
            *(rcx_31 + 0x14) = *(arg2 + 0x14)
            *(rcx_31 + 0x18) = arg2[3].d
            *(rcx_31 + 0x1c) = *(arg2 + 0x1c)
            *(rcx_31 + 0x20) = arg2[4].d
    else
        zmm6 = *arg2
        zmm7 = *(arg2 + 0x10)
        zmm8 = zx.o(arg2[4])
        int64_t rsi_2 = sx.q(*(arg1 + 0x60))
        int32_t rax_23 = (rsi_2 + 1).d
        *(arg1 + 0x60) = rax_23
        
        if (rax_23 s> *(arg1 + 0x64))
            sub_1405c4fe0(arg1 + 0x58)
        
        zmm0 = *r15_1
        int32_t rax_24 = r15_1[1].d
        int128_t* rcx_27 = (rsi_2 << 6) + *(arg1 + 0x58)
        *rcx_27 = zmm6
        rcx_27[1] = zmm7
        rcx_27[2].q = zmm8.q
        *(rcx_27 + 0x28) = zmm0
        rcx_27[3].d = rax_24
        int32_t rax_25 = *(r15_1 + 0x14)
        *(rcx_27 + 0x34) = *(r15_1 + 0xc)
        *(rcx_27 + 0x3c) = rax_25
        *rbx_3 = rsi_2.d
    
    int32_t r9_2 = rbx_3[1]
    
    if (r9_2 != 0xffffffff)
        if (r9_2 + 1 s< *(arg1 + 0x50))
            var_94:4.o = *((sx.q(*(arg1 + 0x50)) << 6) + *(arg1 + 0x48) - 0x30)
            *(*(arg1 + 0x68) + sx.q(var_94:4.d) * 0x10 + 4) = r9_2
            r9_2 = rbx_3[1]
        
        int32_t rdx_13 = *(arg1 + 0x50)
        int32_t rcx_38 = rdx_13 - r9_2 - 1
        
        if (rcx_38 s>= 1)
            rcx_38 = 1
        
        if (rcx_38 != 0)
            memcpy((sx.q(r9_2) << 6) + *(arg1 + 0x48), 
                (sx.q(rdx_13 - rcx_38) << 6) + *(arg1 + 0x48), rcx_38 << 6)
            rdx_13 = *(arg1 + 0x50)
        
        *(arg1 + 0x50) = rdx_13 - 1
        sub_1407c3fe0(arg1 + 0x48)
        rbx_3[1] = 0xffffffff
else
    zmm0.d = arg3[3].d f- *arg3
    float zmm2 = arg3[4] f- arg3[1]
    int128_t zmm1
    zmm1.d = arg3[5].d f- arg3[2]
    
    if (zmm0.d f<= zmm2 || not(zmm0.d f> zmm1.d))
        zmm0 = _mm_max_ss(zmm1.q.d, zmm2)
    
    if (zmm0.d f> *(arg1 + 0x80))
        r15_1 = &var_b8
        int32_t rax_20 = arg3[2]
        var_b8 = *arg3
        int32_t var_b0_2 = rax_20
        int64_t var_ac_2 = *(arg3 + 0xc)
        int32_t var_a4_2 = arg3[5]
        goto label_14175a4e3
    
    int64_t rax_5 = sx.q(rbx_3[1])
    
    if (rax_5.d != 0xffffffff)
        int64_t rcx_9 = *(arg1 + 0x48)
        int64_t rdx_4 = rax_5 << 6
        *(rdx_4 + rcx_9 + 0x28) = *arg3
        *(rdx_4 + rcx_9 + 0x30) = arg3[2]
        *(rdx_4 + rcx_9 + 0x34) = *(arg3 + 0xc)
        *(rdx_4 + rcx_9 + 0x3c) = arg3[5]
        void* rcx_12 = (sx.q(rbx_3[1]) << 6) + *(arg1 + 0x48)
        
        if (data_1439b8d44 != 0)
            *(rcx_12 + 0x14) = *(arg2 + 0x14)
            *(rcx_12 + 0x18) = arg2[3].d
            *(rcx_12 + 0x1c) = *(arg2 + 0x1c)
            *(rcx_12 + 0x20) = arg2[4].d
    else
        zmm6 = *arg2
        zmm7 = *(arg2 + 0x10)
        int32_t r13_1 = arg3[2]
        zmm8 = zx.o(arg2[4])
        int64_t rsi_1 = sx.q(*(arg1 + 0x50))
        uint128_t zmm9 = zx.o(*arg3)
        uint128_t zmm10 = zx.o(*(arg3 + 0xc))
        int32_t rax_6 = (rsi_1 + 1).d
        int32_t r14_1 = arg3[5]
        *(arg1 + 0x50) = rax_6
        
        if (rax_6 s> *(arg1 + 0x54))
            sub_1405c4fe0(arg1 + 0x48)
        
        int128_t* rax_9 = (rsi_1 << 6) + *(arg1 + 0x48)
        *rax_9 = zmm6
        rax_9[1] = zmm7
        rax_9[2].q = zmm8.q
        *(rax_9 + 0x28) = zmm9.q
        *(rax_9 + 0x34) = zmm10.q
        rax_9[3].d = r13_1
        *(rax_9 + 0x3c) = r14_1
        rbx_3[1] = rsi_1.d
    
    int32_t r9_1 = *rbx_3
    
    if (r9_1 != 0xffffffff)
        if (r9_1 + 1 s< *(arg1 + 0x60))
            var_94:4.o = *((sx.q(*(arg1 + 0x60)) << 6) + *(arg1 + 0x58) - 0x30)
            *(*(arg1 + 0x68) + sx.q(var_94:4.d) * 0x10) = r9_1
            r9_1 = *rbx_3
        
        int32_t rdx_5 = *(arg1 + 0x60)
        int32_t rcx_19 = rdx_5 - r9_1 - 1
        
        if (rcx_19 s>= 1)
            rcx_19 = 1
        
        if (rcx_19 != 0)
            memcpy((sx.q(r9_1) << 6) + *(arg1 + 0x58), 
                (sx.q(rdx_5 - rcx_19) << 6) + *(arg1 + 0x58), rcx_19 << 6)
            rdx_5 = *(arg1 + 0x60)
        
        *(arg1 + 0x60) = rdx_5 - 1
        sub_1407c3fe0(arg1 + 0x58)
        *rbx_3 = 0xffffffff
result = zx.q(data_1439b8d5c)

if (*(arg1 + 0x50) s> result.d)
    return sub_14174ed90(arg1)

return result
