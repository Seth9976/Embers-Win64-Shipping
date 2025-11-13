// 函数: sub_14149a430
// 地址: 0x14149a430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("WaterPassRenderSingleLayer")
uint64_t r14
r14.b = 0
char arg_8 = 0
void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rdx_2[2]

if (rax u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rdx_2[2]

*(arg2 + 0x30) = rax
int32_t i = 0
int64_t* rax_1 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_1 = rdx_2
*(arg2 + 8) = &rdx_2[1]
rdx_2[1] = 0
*rdx_2 = &data_142da7758

if (*(arg1 + 0xa8) s> 0)
    int64_t r13_1 = 0
    
    do
        int32_t rbx_1 = *(arg2 + 0x8c)
        int64_t* r14_2 = *(arg1 + 0xa0) + r13_1
        int32_t rax_3 = r14_2[0x15b].d
        
        if (rbx_1 != rax_3)
            bool cond:0_1 = *(arg2 + 0x14) u> 0
            *(arg2 + 0x8c) = rax_3
            
            if (cond:0_1)
                void*** rdx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_4 = &rdx_7[3]
                
                if (rax_4 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rdx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_4 = &rdx_7[3]
                
                *(arg2 + 0x30) = rax_4
                int64_t* rax_5 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_5 = rdx_7
                int32_t rax_6 = *(arg2 + 0x8c)
                *(arg2 + 8) = &rdx_7[1]
                rdx_7[1] = 0
                *rdx_7 = &data_142f11588
                rdx_7[2].d = rax_6
            else
                *(arg2 + 0x90) = rax_3
        
        void* rdx_10 = data_1439b70c8
        int64_t var_148 = 0
        void* rax_7 = *arg3
        
        if (rax_7 != 0)
            rdx_10 = rax_7
        
        int128_t zmm3_1 = MRE::CbDoNestedType(arg2, r14_2, data_1439b70c0, 
            arg3[2] + 0x10 + (sx.q(i) << 5), rdx_10, arg3[1], &var_148)
        int32_t var_128_1 = 0x11
        int128_t var_138 = zx.o(0)
        int64_t var_120_1 = r14_2[2]
        int64_t var_108_1 = var_148
        int128_t var_118_1 = zx.o(0)
        int32_t var_100_1 = 0
        sub_1410b79f0(arg4, 0, &var_138)
        
        if ((*(r14_2 + 0x497c) & 2) != 0)
            r14 = zx.q(arg_8)
        else if (*(r14_2 + 0xd7a) != 0)
            if (sub_142391c90(zx.q(r14_2[0x15a].d)) == 0)
            label_14149a6b6:
                sub_141405870(*(arg1 + 8) + 0x20, r14_2, 1)
                
                if (arg5 != 0)
                    char rcx_11
                    
                    if (*(data_143ed9e40 + 4) != 0 || *(data_143f02a68 + 4) != 0)
                        rcx_11 = 0
                    else
                        rcx_11 = 1
                    
                    int64_t* var_158_1
                    var_158_1.b = rcx_11
                    void* rax_17
                    rax_17.b = *(data_143ed9e28 + 4) s> 0
                    void* var_160_1
                    var_160_1.b = rax_17.b
                    void** var_f8
                    sub_141411200(&var_f8, 0, r14_2, arg1, arg2, var_160_1.b, var_158_1.b, &var_138)
                    int32_t var_40_1 = 0x22
                    var_f8 = &data_142f8e488
                    int128_t zmm2_1 = sub_141267530(&r14_2[0x596], &var_f8, arg2)
                    var_f8 = &data_142f8e488
                    sub_14141cd40(&var_f8, 0, zmm2_1, zmm3_1)
                    sub_141412cc0(&var_f8)
                else
                    sub_1410b7b00(arg2, r14_2, arg1, 0)
                    sub_141267530(&r14_2[0x596], nullptr, arg2)
                
                r14.b = arg_8 | *(r14_2 + 0x2e7c) s> 0
                arg_8 = r14.b
            else
                if (*(r14_2 + 0xd7c) != 0)
                    goto label_14149a685
                
                r14 = zx.q(arg_8)
        else
            if (*(r14_2 + 0xd7c) == 0)
                goto label_14149a6b6
            
        label_14149a685:
            
            if (sub_142391c90(zx.q(r14_2[0x15a].d)) != 0)
                r14 = zx.q(arg_8)
            else
                void* rax_13 = *r14_2
                
                if (rax_13 != 0 && *(rax_13 + 8) s> 1)
                    goto label_14149a6b6
                
                r14 = zx.q(arg_8)
        
        sub_1405d1550(&var_148)
        
        if (*(arg2 + 0x8c) != rbx_1)
            bool cond:1_1 = *(arg2 + 0x14) u> 0
            *(arg2 + 0x8c) = rbx_1
            
            if (cond:1_1)
                void*** rdx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_18 = &rdx_17[3]
                
                if (rax_18 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rdx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_18 = &rdx_17[3]
                
                *(arg2 + 0x30) = rax_18
                int64_t* rax_19 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_19 = rdx_17
                int32_t rax_20 = *(arg2 + 0x8c)
                *(arg2 + 8) = &rdx_17[1]
                rdx_17[1] = 0
                *rdx_17 = &data_142f11588
                rdx_17[2].d = rax_20
            else
                *(arg2 + 0x90) = rbx_1
        
        i += 1
        r13_1 += 0x5240
    while (i s< *(arg1 + 0xa8))

void*** rax_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_21 = &rax_23[2]

if (rcx_21 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rax_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_21 = &rax_23[2]

*(arg2 + 0x30) = rcx_21
int64_t* rdx_20 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rdx_20 = rax_23
*(arg2 + 8) = &rax_23[1]
rax_23[1] = 0
*rax_23 = &data_142da7768
sub_140b37f60("WaterPassRenderSingleLayer")
return zx.q(r14.b)
