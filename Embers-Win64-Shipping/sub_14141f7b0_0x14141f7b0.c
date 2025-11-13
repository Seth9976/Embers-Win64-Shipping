// 函数: sub_14141f7b0
// 地址: 0x14141f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r15 = *(arg3 + 0x1d58)
int64_t result = 0
int64_t result_1 = 0
void* r11 = arg2
void* r10 = arg1

if (r15 != 0 && data_1439b6d0c != 0)
    bool cond:0_1 = data_143eceb3c == 0
    void** const var_d8 = &data_142f29fd0
    int128_t zmm8 = zx.o(0)
    void* var_d0_1 = arg2
    void* var_c8_1 = arg2
    int64_t var_c0_1 = (zx.o(0)).q
    int64_t var_b0_1 = 0
    uint64_t var_140
    int64_t var_120
    int64_t var_110
    int32_t var_f0
    int32_t arg_20
    uint128_t zmm0
    uint128_t zmm1
    uint128_t zmm2
    uint128_t zmm3
    
    if (not(cond:0_1) && data_143eceb40 == 0)
        int32_t i = 0
        
        if (r15[0xa] s> 0)
            uint128_t zmm6
            uint128_t var_58_1 = zmm6
            int64_t rsi_1 = 0x10
            uint128_t zmm7
            uint128_t var_68_1 = zmm7
            int128_t zmm9 = 0x3f000000
            
            do
                int32_t* rax_1 = *(r15 + 0x20)
                int32_t j = 0
                
                if (*(rax_1 + rsi_1) s> 0)
                    int32_t* rbx_1 = nullptr
                    
                    do
                        int64_t rax_2 = *(rsi_1 + rax_1 - 8)
                        zmm7 = r15[2]
                        uint128_t zmm5
                        zmm5.d = zmm7.d f+ *(rbx_1 + rax_2)
                        zmm7.d = zmm7.d f+ *(rbx_1 + rax_2 + 4)
                        zmm6.d = (*(rbx_1 + rax_2 + 8)).d f+ r15[3]
                        var_140 = *(rbx_1 + rax_2)
                        int32_t rax_3 = *(rbx_1 + rax_2 + 8)
                        float zmm4 = var_140.d
                        zmm3 = var_140:4.d
                        zmm1.d = zmm7.d f- zmm3.d
                        int32_t var_134
                        var_134.q = (_mm_unpacklo_ps(zmm5, zmm7.q)).q
                        zmm3.d = zmm3.d f+ zmm7.d
                        zmm2 = rax_3
                        zmm0.d = zmm5.d f- zmm4
                        zmm1.d = zmm1.d f* zmm9.d
                        int32_t var_12c_1 = zmm6.d
                        zmm0.d = zmm0.d f* zmm9.d
                        char var_128_1 = 1
                        var_110.d = zmm0.d
                        zmm0.d = zmm6.d f- zmm2.d
                        zmm3.d = zmm3.d f* zmm9.d
                        zmm2.d = zmm2.d f+ zmm6.d
                        var_110:4.d = zmm1.d
                        var_120.d = (zmm4 f+ zmm5.d) f* zmm9.d
                        var_120:4.d = zmm3.d
                        zmm0.d = zmm0.d f* zmm9.d
                        zmm2.d = zmm2.d f* zmm9.d
                        int32_t var_108_1 = zmm0.d
                        int32_t var_118_1 = zmm2.d
                        char rax_5
                        rax_5, zmm8, zmm9 = sub_141f8d780(r11 + 0xbf0, &var_120, &var_110)
                        
                        if (rax_5 != 0)
                            arg_20 = 0xff3232ff
                            sub_140acc920(&var_f0, &arg_20)
                            zmm8, zmm9 =
                                sub_14229ae30(&var_d8, &var_140, &var_f0, 0, zmm8.d, zmm8.d, 0)
                        
                        rax_1 = *(r15 + 0x20)
                        j += 1
                        rbx_1 = &rbx_1[4]
                    while (j s< *(rax_1 + rsi_1))
                    
                    r11 = arg2
                
                i += 1
                rsi_1 += 0x28
            while (i s< r15[0xa])
            
            r10 = arg1
    
    zmm0.d = 1f f/ r15[2]
    int32_t r8_2 = r15[4]
    zmm2.d = (*(r11 + 0x610)).d f- r15[1]
    zmm3.d = (*(r11 + 0x60c)).d f- *r15
    zmm2.d = zmm2.d f* zmm0.d
    zmm3.d = zmm3.d f* zmm0.d
    zmm2.d f- zmm8.d
    int32_t rcx_3
    rcx_3.b = zmm2.d f< zmm8.d
    int32_t temp14_1
    int32_t temp15_1
    temp14_1:temp15_1 = sx.q(mods.dp.d(sx.q(divs.dp.d(sx.q(int.d(zmm2.d) - rcx_3), r8_2)), r15[5]))
    zmm3.d f- zmm8.d
    int32_t rcx_4
    rcx_4.b = zmm3.d f< zmm8.d
    int32_t i_1 = 0
    int32_t i_2 = 0
    int32_t temp28_1
    int32_t temp29_1
    temp28_1:temp29_1 = sx.q(mods.dp.d(sx.q(divs.dp.d(sx.q(int.d(zmm3.d) - rcx_4), r8_2)), r15[5]))
    int32_t rdi_5 = ((temp15_1 ^ temp14_1) - temp14_1) * r8_2 + (temp29_1 ^ temp28_1) - temp28_1
    int32_t var_154_1 = rdi_5
    int64_t rsi_2 = sx.q(rdi_5) * 5
    int64_t rax_23 = *(r15 + 0x20)
    var_120 = rsi_2
    var_110 = rax_23
    
    if (*(rax_23 + (rsi_2 << 3) + 0x10) s> 0)
        void* r14 = arg3
        int32_t* r12_1 = nullptr
        
        do
            int64_t r13_2 = *(rax_23 + (rsi_2 << 3) + 8)
            zmm1 = r15[2]
            zmm2.d = zmm1.d f+ *(r12_1 + r13_2)
            zmm1.d = zmm1.d f+ *(r12_1 + r13_2 + 4)
            zmm3.d = (*(r12_1 + r13_2 + 8)).d f+ r15[3]
            var_140 = *(r12_1 + r13_2)
            zmm0 = *(r11 + 0x60c)
            char var_128_2 = 1
            int32_t var_12c_2 = zmm3.d
            int32_t var_134_1 = zmm2.d
            int32_t var_130_1 = zmm1.d
            
            if (zmm0.d f<= var_140.d || zmm0.d f>= zmm2.d)
            label_14141fd09:
                
                if (data_143eceb40 != 0)
                    int32_t var_158 = 0xff3232ff
                    void var_98
                    sub_140acc920(&var_98, &var_158)
                    zmm8 = sub_14229ae30(&var_d8, &var_140, &var_98, 0, zmm8.d, zmm8.d, 0)
                    r11 = arg2
            else
                zmm0 = *(r11 + 0x610)
                
                if (zmm0.d f<= var_140:4.d || zmm0.d f>= zmm1.d)
                    goto label_14141fd09
                
                zmm0 = *(r11 + 0x614)
                
                if (zmm0.d f<= *(r12_1 + r13_2 + 8) || zmm0.d f>= zmm3.d)
                    goto label_14141fd09
                
                int64_t rdx_11 = *(r10 + 0x188)
                int64_t result_2
                
                if (rdx_11 == 0 || *(r10 + 0x190) != *(*(r14 + 0x1d58) + 0x18)
                        || *(r10 + 0x194) != rdi_5
                        || *(r10 + 0x198) != zx.d(*(r12_1 + r13_2 + 0xc)))
                    uint64_t rdi_6 = zx.q(*(r12_1 + r13_2 + 0xc)) * 3
                    int64_t rsi_3 = *(*(r15 + 0x20) + (rsi_2 << 3) + 0x18)
                    *(r10 + 0x194) = var_154_1
                    *(r10 + 0x198) = zx.d(*(r12_1 + r13_2 + 0xc))
                    *(r10 + 0x190) = *(*(arg3 + 0x1d58) + 0x18)
                    void* r14_1
                    
                    if (*(rsi_3 + (rdi_6 << 3)) == 0)
                        r14_1 = rsi_3 + ((rdi_6 + 1) << 3)
                    else
                        r14_1 = r10 + 0x178
                        *(r14_1 + 8) = 0
                        
                        if (*(r14_1 + 0xc) s<= 0xffffffff)
                            sub_1405c5510(r14_1, 0)
                        
                        int32_t rcx_10 = *(rsi_3 + (rdi_6 << 3) + 4) + *(r14_1 + 8)
                        *(r14_1 + 8) = rcx_10
                        
                        if (rcx_10 s> *(r14_1 + 0xc))
                            sub_1405daba0(r14_1)
                        
                        int32_t rbx_2 = *(rsi_3 + (rdi_6 << 3) + 0x10)
                        char* rdi_7 = *(rsi_3 + (rdi_6 << 3) + 8)
                        int128_t* rsi_4 = *r14_1
                        void var_e0
                        var_f0 = *sub_140b5e500(&var_e0, 0x101)
                        int32_t var_ec_1 = 0
                        zmm8 = sub_140b02330(var_f0.q, rsi_4, *(rsi_3 + (rdi_6 << 3) + 4), rdi_7, 
                            rbx_2, 0)
                        r10 = arg1
                        i_1 = i_2
                    
                    rdi_5 = var_154_1
                    *(r10 + 0x188) = r14_1
                    result_2 = zx.q(*(r12_1 + r13_2 + 0xe)) + *r14_1
                    r14 = arg3
                    rsi_2 = var_120
                else
                    result_2 = zx.q(*(r12_1 + r13_2 + 0xe)) + *rdx_11
                
                result_1 = result_2
                
                if (data_143eceb40 == 0)
                    break
                
                arg_20 = 0xff32ff32
                void var_a8
                sub_140acc920(&var_a8, &arg_20)
                zmm8 = sub_14229ae30(&var_d8, &var_140, &var_a8, 1, zmm8.d, zmm8.d, 0)
                r11 = arg2
            
            rax_23 = var_110
            i_1 += 1
            r10 = arg1
            r12_1 = &r12_1[4]
            i_2 = i_1
        while (i_1 s< *(rax_23 + (rsi_2 << 3) + 0x10))
        
        result = result_1
    
    if (var_c0_1 != 0)
        int32_t temp30_1 = *(var_c0_1 + 8)
        *(var_c0_1 + 8) -= 1
        
        if (temp30_1 == 1)
            int64_t r8_5 = *var_c0_1
            (*r8_5)(var_c0_1, 1, r8_5)

return result
