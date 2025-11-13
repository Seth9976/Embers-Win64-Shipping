// 函数: sub_1410af220
// 地址: 0x1410af220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("RenderBasePass")
uint64_t rbx
rbx.b = 0
int64_t rdx_1 = *(arg2 + 0x30) + 7
char var_178 = 0
void*** rdx_2 = rdx_1 & 0xfffffffffffffff8
void* rax = &rdx_2[2]

if (rax u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rdx_2[2]

*(arg2 + 0x30) = rax
int64_t* rax_1 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_1 = rdx_2
*(arg2 + 8) = &rdx_2[1]
rdx_2[1] = 0
*rdx_2 = &data_142da7758

if (arg6 == 0)
    int32_t rax_5 = arg3 & 0xfffffffd
    int64_t var_170
    int128_t var_158
    
    if (arg5 == 0)
        int32_t i = 0
        
        if (*(arg1 + 0xa8) s> 0)
            int64_t rcx_28 = 0
            int64_t var_160_2 = 0
            
            do
                int32_t rbx_1 = *(arg2 + 0x8c)
                int64_t* rdi_3 = *(arg1 + 0xa0) + rcx_28
                int32_t rax_25 = rdi_3[0x15b].d
                
                if (rbx_1 != rax_25)
                    bool cond:0_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_25
                    
                    if (cond:0_1)
                        void*** rdx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_26 = &rdx_28[3]
                        
                        if (rax_26 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_26 = &rdx_28[3]
                        
                        *(arg2 + 0x30) = rax_26
                        int64_t* rax_27 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_27 = rdx_28
                        int32_t rax_28 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_28[1]
                        rdx_28[1] = 0
                        *rdx_28 = &data_142f11588
                        rdx_28[2].d = rax_28
                    else
                        *(arg2 + 0x90) = rax_25
                
                var_170 = 0
                MRE::CbDoNestedType(arg2, rdi_3, arg4, nullptr, nullptr, nullptr, &var_170)
                int64_t var_140_2 = rdi_3[2]
                int64_t var_128_2 = var_170
                var_158 = zx.o(0)
                int32_t var_148_2 = 0x11
                int128_t var_138_2 = zx.o(0)
                int32_t var_120_2 = 0
                sub_1410b79f0(arg3, 0, &var_158)
                char rax_31 = sub_1410c2550(rdi_3)
                
                if (rax_31 != 0)
                    sub_141405870(*(arg1 + 8) + 0x20, rdi_3, 1)
                    sub_1410b7b00(arg2, rdi_3, arg1, 0)
                    sub_141267530(&rdi_3[0x522], nullptr, arg2)
                
                sub_1410b1a70(arg1, arg2, rdi_3, arg3, &var_158, &var_178)
                
                if (rax_31 != 0 && (*(*rdi_3 + 0x2c) & 0x2000) != 0)
                    sub_1410b79f0(rax_5, 0, &var_158)
                    sub_1410b7b00(arg2, rdi_3, arg1, 0)
                    sub_141267530(&rdi_3[0x55c], nullptr, arg2)
                
                sub_1405d1550(&var_170)
                
                if (*(arg2 + 0x8c) != rbx_1)
                    bool cond:2_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rbx_1
                    
                    if (cond:2_1)
                        void*** rdx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_37 = &rdx_38[3]
                        
                        if (rax_37 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_37 = &rdx_38[3]
                        
                        *(arg2 + 0x30) = rax_37
                        int64_t* rax_38 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_38 = rdx_38
                        int32_t rax_39 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_38[1]
                        rdx_38[1] = 0
                        *rdx_38 = &data_142f11588
                        rdx_38[2].d = rax_39
                    else
                        *(arg2 + 0x90) = rbx_1
                
                i += 1
                rcx_28 = var_160_2 + 0x5240
                var_160_2 = rcx_28
            while (i s< *(arg1 + 0xa8))
            
            rbx = zx.q(var_178)
    else
        void* rax_6
        
        if (*(data_143e2d618 + 4) s> 0 || *(data_143f02a68 + 4) s> 0)
            rax_6.b = 1
        else
            rax_6.b = 0
        
        uint64_t var_118 = arg2
        char var_110_1 = rax_6.b
        int32_t i_2 = 0
        
        if (*(arg1 + 0xa8) s> 0)
            int64_t rdx_6 = 0
            int64_t var_160_1 = 0
            int32_t i_1
            
            do
                rbx = zx.q(*(arg2 + 0x8c))
                uint64_t r12_2 = *(arg1 + 0xa0) + rdx_6
                int32_t rax_7 = *(r12_2 + 0xad8)
                
                if (rbx.d != rax_7)
                    bool cond:1_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_7
                    
                    if (cond:1_1)
                        void*** rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_8 = &rdx_9[3]
                        
                        if (rax_8 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_8 = &rdx_9[3]
                        
                        *(arg2 + 0x30) = rax_8
                        int64_t* rax_9 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_9 = rdx_9
                        int32_t rax_10 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_9[1]
                        rdx_9[1] = 0
                        *rdx_9 = &data_142f11588
                        rdx_9[2].d = rax_10
                    else
                        *(arg2 + 0x90) = rax_7
                
                var_170 = 0
                uint64_t var_1a8_1 = 0
                int128_t zmm3_1 =
                    MRE::CbDoNestedType(arg2, r12_2, arg4, nullptr, nullptr, nullptr, &var_170)
                int32_t var_148_1 = 0x11
                var_158 = zx.o(0)
                int64_t var_140_1 = *(r12_2 + 0x10)
                int64_t var_128_1 = var_170
                int128_t var_138_1 = zx.o(0)
                int32_t var_120_1 = 0
                sub_1410b79f0(arg3, 0, &var_158)
                char rax_13 = sub_1410c2550(r12_2)
                int64_t* var_198_1
                void** var_f8
                
                if (rax_13 != 0)
                    sub_141405870(*(arg1 + 8) + 0x20, r12_2, 1)
                    void* rcx_9
                    
                    if (*(data_143e2d618 + 4) != 0 || *(data_143f02a68 + 4) != 0)
                        rcx_9.b = 0
                    else
                        rcx_9.b = 1
                    
                    var_198_1.b = rcx_9.b
                    sub_141411200(&var_f8, zx.q(arg6), r12_2, arg1, arg2, 0, var_198_1.b, &var_158)
                    var_f8 = &data_142f11cf8
                    int32_t var_40_1 = arg3
                    int128_t zmm2_1 = sub_141267530(r12_2 + 0x2910, &var_f8, arg2)
                    var_f8 = &data_142f11cf8
                    sub_14141cd40(&var_f8, 0, zmm2_1, zmm3_1)
                    sub_141412cc0(&var_f8)
                
                int128_t var_108 = data_142d3f660
                char var_188_1 = 0
                int128_t* var_190_2 = &var_108
                var_198_1.b = 0
                var_1a8_1.d = arg3
                sub_141393b50(&data_143ec4c60, arg2, 1, 1, var_1a8_1.d, nullptr, 0)
                int128_t zmm3_2 = sub_1410b1a70(arg1, arg2, r12_2, arg3, &var_158, &var_178)
                sub_141096650(arg2)
                
                if (rax_13 != 0 && (*(*r12_2 + 0x2c) & 0x2000) != 0)
                    sub_1410b79f0(rax_5, 0, &var_158)
                    char rcx_18
                    
                    if (*(data_143e2d618 + 4) != 0 || *(data_143f02a68 + 4) != 0)
                        rcx_18 = 0
                    else
                        rcx_18 = 1
                    
                    var_198_1.b = rcx_18
                    void* rax_20
                    rax_20.b = *(data_143e2d600 + 4) s> 0
                    char* var_1a0_1
                    var_1a0_1.b = rax_20.b
                    sub_141411200(&var_f8, zx.q(arg6), r12_2, arg1, arg2, var_1a0_1.b, 0, &var_158)
                    var_f8 = &data_142f11cf8
                    int32_t var_40_2 = rax_5
                    int128_t zmm2_2 = sub_141267530(r12_2 + 0x2ae0, &var_f8, arg2)
                    var_f8 = &data_142f11cf8
                    sub_14141cd40(&var_f8, 0, zmm2_2, zmm3_2)
                    sub_141412cc0(&var_f8)
                
                sub_1405d1550(&var_170)
                
                if (*(arg2 + 0x8c) != rbx.d)
                    bool cond:3_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rbx.d
                    
                    if (cond:3_1)
                        void*** rdx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_22 = &rdx_23[3]
                        
                        if (rax_22 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_22 = &rdx_23[3]
                        
                        *(arg2 + 0x30) = rax_22
                        int64_t* rax_23 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_23 = rdx_23
                        int32_t rax_24 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_23[1]
                        rdx_23[1] = 0
                        *rdx_23 = &data_142f11588
                        rdx_23[2].d = rax_24
                    else
                        *(arg2 + 0x90) = rbx.d
                
                i_1 = i_2 + 1
                rdx_6 = var_160_1 + 0x5240
                i_2 = i_1
                var_160_1 = rdx_6
            while (i_1 s< *(arg1 + 0xa8))
        
        rbx.b = 1
        sub_141962ac0(&var_118)
else
    rbx = zx.q(sub_141233df0(arg1, arg2))

void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_33 = &rcx_46[2]

if (rax_33 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_33 = &rcx_46[2]

*(arg2 + 0x30) = rax_33
int64_t* rax_34 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_34 = rcx_46
*(arg2 + 8) = &rcx_46[1]
rcx_46[1] = 0
*rcx_46 = &data_142da7768
sub_140b37f60("RenderBasePass")
return zx.q(rbx.b)
