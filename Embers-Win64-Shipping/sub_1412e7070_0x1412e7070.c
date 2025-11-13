// 函数: sub_1412e7070
// 地址: 0x1412e7070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool arg_10 = false
char* var_160 = &arg_10
void*** (* var_168)() = j_sub_140597fc0
void* rax
int32_t r8
rax, r8 = sub_140a756e0(&var_168, &data_143958018)
int32_t i = 0
int64_t* var_148 = rax + 0x10
int64_t rcx_1 = *(rax + 0x10)
int64_t rcx_2 = *(rax + 0x20)
char var_130 = 0
int64_t result_1 = *(rax + 0x28)
*(rax + 0x28) = &var_148
int64_t* rax_2 = var_148
rax_2[4].d += 1
int64_t zmm1 = arg4[1].q
var_168.o = *arg4
int32_t var_150 = *(arg4 + 0x18)

if (*(arg2 + 0xa8) s> 0)
    int64_t rbx_1 = 0
    int128_t* r13_1 = arg8
    uint128_t zmm6 = 0x3f000000
    uint128_t zmm7 = zmm1:4.d
    uint128_t zmm8 = zmm1.d
    uint128_t zmm9 = var_160:4.d
    uint128_t zmm10 = var_160.d
    uint128_t zmm11 = var_168:4.d
    int128_t zmm12 = var_168.d
    uint128_t zmm13 = zx.o(0)
    
    do
        void* rax_4 = *(arg2 + 0xa0)
        int128_t zmm2
        zmm2.d = (*(rbx_1 + rax_4 + 0x610)).d f* *(r13_1 + 4)
        uint128_t zmm0
        zmm0.d = (*r13_1).d f* *(rbx_1 + rax_4 + 0x60c)
        zmm1.d = (*(rbx_1 + rax_4 + 0x614)).d f* *(r13_1 + 8)
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        zmm2.d = zmm2.d f- *(r13_1 + 0xc)
        
        if (not(zmm2.d f<= zmm13.d))
            zmm0.d = zmm9.d f- zmm12.d
            zmm1.d = zmm8.q.d f- zmm11.d
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = zmm1.d f* zmm6.d
            var_168.d = zmm0.d
            zmm0.d = zmm7.d f- zmm10.d
            var_168:4.d = zmm1.d
            zmm1.d = zmm12.q.d f+ zmm9.d
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = zmm1.d f* zmm6.d
            var_160.d = zmm0.d
            zmm0.d = zmm11.d f+ zmm8.d
            float var_178 = zmm1.d
            zmm1.d = zmm10.q.d f+ zmm7.d
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = zmm1.d f* zmm6.d
            int32_t var_174_1 = zmm0.d
            int32_t var_170_1 = zmm1.d
            char rax_5
            rax_5, r8, arg5, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
                sub_141f8d780(rax_4 + 0xbf0 + rbx_1, &var_178, &var_168)
            
            if (rax_5 != 0)
                bool rcx_5 = true
                int32_t j = 0
                arg_10 = true
                
                if (*(arg2 + 0xa8) s> 0)
                    int64_t r14 = 0
                    
                    do
                        void* rbx_2 = *(r14 + *(arg2 + 0xa0) + 0x15a8)
                        
                        if (rbx_2 != 0)
                            void* rax_7
                            rax_7, zmm6 = sub_1412526a0(rbx_2 + 0x2c8, *(arg4 + 0x74), arg4 + 0x74)
                            arg3[0x76].d
                            var_168 = rax_7
                            int32_t rax_8 = sub_14141f720()
                            r8 = *(rbx_2 + 0x214) + 1
                            int32_t temp1_1 = mods.dp.d(sx.q(r8), rax_8 + 1)
                            void*** (* rax_11)() = var_168
                            int64_t rdx_4 = *((zx.q(temp1_1) << 4) + rax_11)
                            
                            if (rdx_4 == 0
                                    || *(rax_11 + (zx.q(temp1_1) << 2) + 0x30) != r8 - (rax_8 + 1))
                                rcx_5 = arg_10
                            else
                                int64_t* rcx_10 = data_143f0f180
                                var_178.q = 0
                                int32_t r9
                                r9.b = 1
                                char rax_13
                                rax_13, r8 =
                                    (*(*rcx_10 + 0x328))(rcx_10, rdx_4, &var_178, r9, 0xffffffff)
                                
                                if (rax_13 == 0)
                                    rcx_5 = arg_10
                                else
                                    int64_t rax_14 = var_178.q
                                    rcx_5 = rax_14 != 0
                                    arg_10 = rcx_5
                                    
                                    if (rax_14 != 0)
                                        break
                        
                        j += 1
                        r14 += 0x5240
                    while (j s< *(arg2 + 0xa8))
                    
                    r13_1 = arg8
                
                if (*(arg2 + 0xa8) s<= 0 || rcx_5 != 0)
                    sub_1423cc240(arg1)
                    var_168 = arg3[5]
                    int32_t rax_16 = arg3[0x15].d
                    
                    if (rax_16 s> 1)
                        zmm11 = *(r13_1 + 8)
                        int32_t j_1 = 0
                        zmm13 = *(r13_1 + 4)
                        zmm2 = *(r13_1 + 0xc)
                        float zmm1_1 = zmm11.d f+ zmm11.d
                        float zmm0_1 = zmm2.d
                        arg5 = 0xc0000000
                        int128_t zmm14 = zmm2
                        zmm7.d = zmm13.d f+ zmm13.d
                        int128_t zmm15 = *r13_1
                        zmm2.d = zmm2.d f* zmm1_1
                        int32_t var_10c_1 = 0
                        int32_t var_fc_1 = 0
                        zmm12.d = zmm15.d f+ zmm15.d
                        zmm14.d = zmm14.d f* zmm7.d
                        int32_t var_ec_1 = 0
                        var_178 = zmm2.d
                        zmm2.d = zmm15.d f* -2f
                        int32_t var_dc_1 = 0x3f800000
                        zmm6.d = zmm13.d f* -2f
                        zmm9 = zmm11
                        zmm10.d = zmm11.d f* zmm2.d
                        arg_10.d = zmm0_1 f* zmm12.d
                        zmm0_1 = zmm11.d * zmm1_1
                        float zmm4_1 = zmm13.d f* zmm2.d
                        zmm11.d = zmm11.d f* -2f
                        zmm8.d = 1f - zmm0_1
                        zmm0_1 = zmm13.d f* zmm7.d
                        zmm9.d = zmm9.d f* zmm6.d
                        zmm13.d = zmm13.d f* zmm11.d
                        zmm2.d = 1f - zmm0_1
                        float var_114_1 = zmm15.d f* zmm6.d
                        zmm1_1 = var_178
                        zmm0_1 = zmm15.d f* zmm12.d
                        zmm15.d = zmm15.d f* zmm11.d
                        int32_t var_e4_1 = zmm14.d
                        float zmm5_1 = 1f - zmm0_1
                        zmm0_1 = arg_10.d
                        int32_t var_110_1 = zmm15.d
                        float var_118 = zmm5_1
                        float var_108_1 = zmm4_1
                        int32_t var_104_1 = zmm2.d
                        int32_t var_100_1 = zmm13.d
                        int32_t var_f8_1 = zmm10.d
                        int32_t var_f4_1 = zmm9.d
                        int32_t var_f0_1 = zmm8.d
                        float var_e8_1 = zmm0_1
                        float var_e0_1 = zmm1_1
                        
                        if (rax_16 s> 0)
                            do
                                int64_t rcx_12 = sx.q(j_1) * 0x5240
                                arg5, zmm6, zmm7, zmm8, zmm9 = sub_1422f6d30(rcx_12 + arg3[0x14], 
                                    *(arg2 + 0xa0) + rcx_12, &var_118)
                                j_1 += 1
                            while (j_1 s< arg3[0x15].d)
                    
                    (*(*arg3 + 8))(arg3, arg1)
                    int32_t r9_1 = 0
                    int128_t* r10_2 = arg4
                    *(r10_2 + 0x158) = arg6
                    int32_t rax_20 = arg3[0x15].d
                    
                    if (rax_20 s> 0)
                        int64_t rdx_8 = 0
                        void* r8_6 = r10_2 + 0x104
                        
                        do
                            int64_t rcx_15 = arg3[0x14]
                            r8_6 += 0x10
                            r9_1 += 1
                            rdx_8 += 0x5240
                            *(r8_6 - 0x14) = *(rdx_8 + rcx_15 - 0x3ca8)
                            *(r8_6 - 0x10) = *(rdx_8 + rcx_15 - 0x3ca4)
                            *(r8_6 - 0xc) = *(rdx_8 + rcx_15 - 0x3ca0)
                            *(r8_6 - 8) = *(rdx_8 + rcx_15 - 0x3c9c)
                            rax_20 = arg3[0x15].d
                        while (r9_1 s< rax_20)
                    
                    int32_t j_2 = 0
                    
                    if (rax_20 s> 0)
                        int64_t r14_1 = 0
                        arg_10.q = 0
                        
                        do
                            int32_t rbx_3 = *(arg1 + 0x8c)
                            int64_t* r13_4 = arg3[0x14] + r14_1
                            int32_t rax_25 = r13_4[0x15b].d
                            
                            if (rbx_3 != rax_25)
                                bool cond:1_1 = *(arg1 + 0x14) u> 0
                                *(arg1 + 0x8c) = rax_25
                                
                                if (cond:1_1)
                                    void*** rdx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_26 = &rdx_11[3]
                                    
                                    if (rax_26 u> *(arg1 + 0x38))
                                        zmm6 = sub_140b0e3d0(&arg1[0x30], 0x20)
                                        r10_2 = arg4
                                        rdx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_26 = &rdx_11[3]
                                    
                                    *(arg1 + 0x30) = rax_26
                                    int64_t* rax_27 = *(arg1 + 8)
                                    *(arg1 + 0x14) += 1
                                    r14_1 = arg_10.q
                                    *rax_27 = rdx_11
                                    int32_t rax_28 = *(arg1 + 0x8c)
                                    *(arg1 + 8) = &rdx_11[1]
                                    rdx_11[1] = 0
                                    *rdx_11 = &data_142f11588
                                    rdx_11[2].d = rax_28
                                else
                                    *(arg1 + 0x90) = rax_25
                            
                            void*** (* r9_2)() = var_168
                            
                            if (*(*(arg2 + 8) + 8) s< 3)
                                arg5, zmm6, zmm7, zmm8, zmm9 =
                                    sub_141256ef0(arg1, r13_4, r10_2, r9_2, zmm6, zmm7, zmm8, zmm9)
                            else
                                arg5, zmm6, zmm7, zmm8, zmm9 =
                                    sub_141256800(arg1, r13_4, r10_2, r9_2, zmm6, zmm7, zmm8, zmm9)
                            
                            if (*(arg1 + 0x8c) != rbx_3)
                                bool cond:2_1 = *(arg1 + 0x14) u> 0
                                *(arg1 + 0x8c) = rbx_3
                                
                                if (cond:2_1)
                                    void*** rdx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_30 = &rdx_17[3]
                                    
                                    if (rax_30 u> *(arg1 + 0x38))
                                        zmm6 = sub_140b0e3d0(&arg1[0x30], 0x20)
                                        rdx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_30 = &rdx_17[3]
                                    
                                    *(arg1 + 0x30) = rax_30
                                    int64_t* rax_31 = *(arg1 + 8)
                                    *(arg1 + 0x14) += 1
                                    *rax_31 = rdx_17
                                    int32_t rax_32 = *(arg1 + 0x8c)
                                    *(arg1 + 8) = &rdx_17[1]
                                    rdx_17[1] = 0
                                    *rdx_17 = &data_142f11588
                                    rdx_17[2].d = rax_32
                                else
                                    *(arg1 + 0x90) = rbx_3
                            
                            r10_2 = arg4
                            r14_1 += 0x5240
                            j_2 += 1
                            arg_10.q = r14_1
                        while (j_2 s< arg3[0x15].d)
                    
                    int64_t r12_1 = *(arg7 + 0x10)
                    int64_t* rax_35 = (*(*(arg6 + 0x48) + 8))(arg6 + 0x48)
                    void*** rbx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    int64_t* r15_1 = *rax_35
                    void* rax_36 = &rbx_6[0xa]
                    
                    if (rax_36 u> *(arg1 + 0x38))
                        sub_140b0e3d0(&arg1[0x30], 0x58)
                        rbx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_36 = &rbx_6[0xa]
                    
                    *(arg1 + 0x30) = rax_36
                    *(arg1 + 0x14) += 1
                    **(arg1 + 8) = rbx_6
                    *(arg1 + 8) = &rbx_6[1]
                    rbx_6[1] = 0
                    *rbx_6 = &data_142d56628
                    rbx_6[2].d = *arg9
                    *(rbx_6 + 0x14) = arg9[1]
                    rbx_6[3].d = arg9[2]
                    *(rbx_6 + 0x1c) = arg9[3]
                    rbx_6[4].d = arg9[4]
                    *(rbx_6 + 0x24) = arg9[5]
                    rbx_6[5].d = arg9[6]
                    *(rbx_6 + 0x2c) = arg9[7]
                    rbx_6[6].d = arg9[8]
                    *(rbx_6 + 0x34) = arg9[9]
                    rbx_6[7].d = arg9[0xa]
                    *(rbx_6 + 0x3c) = arg9[0xb]
                    rbx_6[8] = r15_1
                    rbx_6[9] = r12_1
                    
                    if ((*(*r15_1 + 8))(r15_1) == 0)
                        int64_t* rcx_25 = rbx_6[8]
                        
                        if ((*(*rcx_25 + 0x18))(rcx_25) == 0)
                            int64_t* rcx_26 = rbx_6[8]
                            
                            if ((*(*rcx_26 + 0x20))(rcx_26) == 0)
                                int64_t* rcx_27 = rbx_6[8]
                                (*(*rcx_27 + 0x10))(rcx_27)
                    
                    int64_t* rcx_28 = rbx_6[9]
                    int64_t rax_59
                    rax_59, r8 = (*(*rcx_28 + 8))(rcx_28)
                    
                    if (rax_59 == 0)
                        int64_t* rcx_29 = rbx_6[9]
                        int64_t rax_61
                        rax_61, r8 = (*(*rcx_29 + 0x18))(rcx_29)
                        
                        if (rax_61 == 0)
                            int64_t* rcx_30 = rbx_6[9]
                            int64_t rax_63
                            rax_63, r8 = (*(*rcx_30 + 0x20))(rcx_30)
                            
                            if (rax_63 == 0)
                                int64_t* rcx_31 = rbx_6[9]
                                (*(*rcx_31 + 0x10))(rcx_31)
                
                break
        
        i += 1
        rbx_1 += 0x5240
    while (i s< *(arg2 + 0xa8))

r8.b = 1
int64_t result = sub_1414336b0(arg1, arg3, r8.b, arg5)

if (var_130 == 0)
    int64_t* rax_65 = var_148
    char var_130_1 = 1
    rax_65[4].d -= 1
    int64_t* rcx_33 = var_148
    
    if (rcx_2 != rcx_33[2])
        sub_140b16b40(rcx_33, rcx_2)
        rcx_33 = var_148
    
    *rcx_33 = rcx_1
    result = result_1
    var_148[3] = result

return result
