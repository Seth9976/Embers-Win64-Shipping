// 函数: sub_141103160
// 地址: 0x141103160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg3
char arg_20 = 0
sub_140b33630("RenderPrePass")
char arg_8 = 0
int64_t* var_1b0 = &data_143ec4c60
char var_1b8
void* rax_1
uint64_t r12
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
uint128_t zmm9

if (sub_140b011d0() == 0)
label_1411031ee:
    r12.b = 0
    var_1b8 = 0
    char rax_2
    rax_2, arg4, zmm7, zmm8, zmm9 = sub_1410fa690(arg1, arg2, (*r15)(r15[1]))
    arg_20 = rax_2
    arg_8 = 1
    rax_1, zmm6 = sub_1413948c0(&data_143ec4c60, arg2, 0, 1)
else if (data_1439c7a0e != 0)
    if (*(data_143e52308 + 4) == 0)
        goto label_1411031ee
    
    r12.b = 1
    var_1b8 = 1
else
    if (data_143f01c92 != 0 || *(data_143e52308 + 4) == 0)
        goto label_1411031ee
    
    r12.b = 1
    var_1b8 = 1

if (*(arg1 + 0x3d8) != 0)
    if (r12.b == 0 || (*(data_143e52320 + 4) s<= 0 && *(data_143f02a68 + 4) s<= 0))
        rax_1.b = 0
    else
        rax_1.b = 1
    
    int64_t var_188 = arg2
    char var_180_1 = rax_1.b
    int32_t i_2 = 0
    
    if (*(arg1 + 0xa8) s> 0)
        int64_t rcx_3 = 0
        char rdi_1 = arg_8
        int64_t var_198_1 = arg_8.q
        int64_t var_190_1 = 0
        int32_t i
        
        do
            int64_t* r14_2 = *(arg1 + 0xa0) + rcx_3
            int32_t rax_5
            
            if (sub_1422eb5d0(r14_2) != 0)
                void* rax_6 = *(arg1 + 0xa0)
                rax_5 = *(rax_6 + 0xad8) | *(rax_6 + 0x5d18)
            else
                rax_5 = r14_2[0x15b].d
            
            int32_t rbx_1 = *(arg2 + 0x8c)
            
            if (rbx_1 != rax_5)
                bool cond:1_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rax_5
                
                if (cond:1_1)
                    void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_8 = &rdx_4[3]
                    
                    if (rax_8 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_8 = &rdx_4[3]
                    
                    *(arg2 + 0x30) = rax_8
                    int64_t* rax_9 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    r15 = arg3
                    *rax_9 = rdx_4
                    int32_t rax_10 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_4[1]
                    rdx_4[1] = 0
                    *rdx_4 = &data_142f11588
                    rdx_4[2].d = rax_10
                else
                    *(arg2 + 0x90) = rax_5
            
            int64_t var_1a0 = 0
            sub_1410f3090(arg2, r14_2, &var_1a0)
            int32_t var_168_1 = 0x11
            int128_t var_178 = zx.o(0)
            int64_t var_160_1 = r14_2[2]
            int64_t var_148_1 = var_1a0
            var_178.q = data_1439b59c0
            var_178:8.q = data_1439b5400
            int128_t var_158_1 = zx.o(0)
            int32_t var_140_1 = 0
            char var_1d8
            
            if ((*(r14_2 + 0x497c) & 2) != 0)
            label_14110352a:
                
                if (r12.b != 0)
                    sub_1413948c0(&data_143ec4c60, arg2, 0, 1)
            else
                if (*(r14_2 + 0xd7a) == 0)
                    if (*(r14_2 + 0xd7c) == 0)
                        goto label_141103422
                    
                label_1411033f1:
                    
                    if (sub_142391c90(zx.q(r14_2[0x15a].d)) != 0)
                        goto label_14110352a
                    
                    void* rax_17 = *r14_2
                    
                    if (rax_17 == 0 || *(rax_17 + 8) s<= 1)
                        goto label_14110352a
                    
                    goto label_141103422
                
                if (sub_142391c90(zx.q(r14_2[0x15a].d)) != 0)
                    if (*(r14_2 + 0xd7c) == 0)
                        goto label_14110352a
                    
                    goto label_1411033f1
                
            label_141103422:
                sub_141405870(*(arg1 + 8) + 0x20, r14_2, 1)
                
                if (r12.b != 0)
                    int64_t r12_1 = *r15
                    
                    if (r12_1 != 0)
                        var_198_1 = r15[1]
                    
                    r15.b = 0
                    char rcx_13
                    
                    if (*(data_143e52320 + 4) != 0 || *(data_143f02a68 + 4) != 0)
                        rcx_13 = 0
                    else
                        rcx_13 = 1
                    
                    int32_t var_1c0
                    var_1c0.q = &var_178
                    void* rax_21
                    rax_21.b = *(data_143e521f8 + 4) s> 0
                    var_1d8.q = arg2
                    void** var_138
                    sub_141411200(&var_138, zx.q(rdi_1), r14_2, arg1, var_1d8, rax_21.b, rcx_13, 
                        var_1c0)
                    var_138 = &data_142f19940
                    char r8_5
                    int128_t zmm2_1
                    r8_5, zmm2_1 = sub_141267530(&r14_2[0x4e8], &var_138, arg2)
                    
                    if (arg_8 == 0)
                        char rax_22
                        rax_22, zmm2_1, arg4 = sub_1410fa690(arg1, arg2, r8_5)
                        r15 = zx.q(rax_22)
                    
                    var_138 = &data_142f19940
                    sub_14141cd40(&var_138, 1, zmm2_1, arg4)
                    sub_141412cc0(&var_138)
                    
                    if (arg_8 == 0)
                        r12_1(var_198_1)
                    
                    bool cond:3_1
                    
                    if (r15.b == 0)
                        cond:3_1 = arg_20 == r15.b
                        arg_20 = r15.b
                    
                    if (r15.b != 0 || not(cond:3_1))
                        arg_20 = 1
                    
                    r12 = zx.q(var_1b8)
                    arg_8 = 1
                    goto label_14110352a
                
                sub_141108550(arg2, r14_2, arg1, 0)
                sub_141267530(&r14_2[0x4e8], nullptr, arg2)
            
            var_1d8.d = *(arg1 + 0x3d8)
            arg4, zmm7, zmm8, zmm9 = sub_141103c00(arg1, arg2, r14_2, &var_178, var_1d8, 1)
            
            if (r12.b != 0)
                void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_24 = &rcx_23[2]
                
                if (rax_24 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x18)
                    rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_24 = &rcx_23[2]
                
                *(arg2 + 0x30) = rax_24
                int64_t* rax_25 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_25 = rcx_23
                *(arg2 + 8) = &rcx_23[1]
                rcx_23[1] = 0
                *rcx_23 = &data_142d549b8
                *(arg2 + 0x1c4) = 0
                *(arg2 + 0x178) = 0
            
            sub_1405d1550(&var_1a0)
            
            if (*(arg2 + 0x8c) != rbx_1)
                bool cond:2_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rbx_1
                
                if (cond:2_1)
                    void*** rdx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_27 = &rdx_18[3]
                    
                    if (rax_27 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_27 = &rdx_18[3]
                    
                    *(arg2 + 0x30) = rax_27
                    int64_t* rax_28 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_28 = rdx_18
                    int32_t rax_29 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_18[1]
                    rdx_18[1] = 0
                    *rdx_18 = &data_142f11588
                    rdx_18[2].d = rax_29
                else
                    *(arg2 + 0x90) = rbx_1
            
            i = i_2 + 1
            r15 = arg3
            rcx_3 = var_190_1 + 0x5240
            i_2 = i
            var_190_1 = rcx_3
        while (i s< *(arg1 + 0xa8))
    
    zmm6 = sub_141962ac0(&var_188)

char rdi_2

if (arg_8 != 0)
    rdi_2 = arg_20
else
    char rax_30
    rax_30, zmm6, zmm7, zmm8, zmm9 = sub_1410fa690(arg1, arg2, (*r15)(r15[1]))
    rdi_2 = rax_30

if (r12.b != 0)
    zmm6 = sub_1413948c0(&data_143ec4c60, arg2, 0, 1)

if (*(arg1 + 0x3dd) != 0)
    int64_t rax_31 = sx.q(*(arg1 + 0xa8))
    
    if (rax_31.d s> 1)
        void* rcx_36 = *(arg1 + 0xa0)
        uint128_t var_48_1 = zmm6
        uint128_t var_58_1 = zmm7
        uint128_t var_68_1 = zmm8
        uint128_t var_78_1 = zmm9
        var_1b0.o = *(rcx_36 + 0x1598)
        int32_t var_1a4
        int32_t rdx_23 = var_1a4
        int32_t var_1a8
        int32_t r8_10 = var_1a8
        int32_t r9_6 = var_1b0:4.d
        int32_t r10_1 = var_1b0.d
        
        if (rax_31 s> 1)
            void* rcx_37 = rcx_36 + 0x67e0
            int64_t i_3 = rax_31 - 1
            int64_t i_1
            
            do
                int32_t rax_32 = *(rcx_37 - 8)
                rcx_37 += 0x5240
                
                if (r10_1 s<= rax_32)
                    rax_32 = r10_1
                
                r10_1 = rax_32
                int32_t rax_33 = *(rcx_37 - 0x5244)
                
                if (r9_6 s<= rax_33)
                    rax_33 = r9_6
                
                r9_6 = rax_33
                int32_t rax_34 = *(rcx_37 - 0x5240)
                
                if (r8_10 s>= rax_34)
                    rax_34 = r8_10
                
                r8_10 = rax_34
                int32_t rax_35 = *(rcx_37 - 0x523c)
                
                if (rdx_23 s>= rax_35)
                    rax_35 = rdx_23
                
                rdx_23 = rax_35
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        void*** rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        zmm6 = _mm_cvtepi32_ps(zx.o(rdx_23))
        void* rax_36 = &rcx_40[5]
        zmm7 = _mm_cvtepi32_ps(zx.o(r8_10))
        zmm8 = _mm_cvtepi32_ps(zx.o(r9_6))
        zmm9 = _mm_cvtepi32_ps(zx.o(r10_1))
        
        if (rax_36 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_36 = &rcx_40[5]
        
        *(arg2 + 0x30) = rax_36
        void**** rax_37 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_37 = rcx_40
        *(arg2 + 8) = &rcx_40[1]
        rcx_40[1] = 0
        rcx_40[2].d = zmm9.d
        *(rcx_40 + 0x14) = zmm8.d
        *(rcx_40 + 0x1c) = zmm7.d
        rcx_40[4].d = zmm6.d
        *rcx_40 = &data_142d54998
        rcx_40[3].d = 0
        *(rcx_40 + 0x24) = 0x3f800000
    
    sub_14199cb60(arg2, 0, 1, &data_143dbb1e0, 0, zx.o(0).d, 1, 0)

sub_14139bc50(&data_143ec4c60, arg2)
sub_140b37f60("RenderPrePass")
return zx.q(rdi_2)
