// 函数: sub_1411591f0
// 地址: 0x1411591f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
char* rdi = arg6
char* var_2b0 = rdi
uint64_t result
float zmm0_1
zmm0_1, result = tanf(data_1439b5b9c)
int128_t zmm10
zmm10.d = arg4.d f/ (zmm0_1 + 1f)

if (*(arg3 + 0x18b0) s> 0)
    float zmm6[0x4]
    float zmm7[0x4]
    int128_t zmm7_1
    float zmm8[0x4]
    int128_t zmm8_1
    float zmm9_1
    int32_t zmm10_1
    int128_t zmm11_1
    int128_t zmm12_1
    int128_t zmm13_1
    arg5, arg4, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1 =
        sub_141120440(arg1, arg2, arg3, rdi, zmm6, zmm7, zmm8, 4, arg4.d)
    void* rcx_1 = *(arg2 + 0x15b0)
    *(rcx_1 + 0xbf0) = *(arg2 + 0x17e0)
    *(rcx_1 + 0xc30) = *(arg2 + 0x1820)
    *(rcx_1 + 0xc00) = *(arg2 + 0x17f0)
    *(rcx_1 + 0xc40) = *(arg2 + 0x1830)
    *(rcx_1 + 0xc10) = *(arg2 + 0x1800)
    *(rcx_1 + 0xc50) = *(arg2 + 0x1840)
    *(rcx_1 + 0xc20) = *(arg2 + 0x1810)
    *(rcx_1 + 0xc60) = *(arg2 + 0x1850)
    *(rcx_1 + 0xc70) = *(arg2 + 0x1880)
    int128_t zmm0_2
    zmm0_2.d = zmm11_1.d f/ *(arg2 + 0x1880)
    *(rcx_1 + 0xc74) = zmm0_2.d
    *(rcx_1 + 0xc78) = *(arg2 + 0x1884)
    int64_t rax_4 = *(arg2 + 0x1860)
    
    if (rax_4 == 0)
        rax_4 = *(data_143f111a8 + 0x10)
        
        if (rax_4 == 0)
            rax_4 = *(data_143f10e68 + 0x10)
    
    *(rcx_1 + 0xe80) = rax_4
    *(rcx_1 + 0xe88) = data_14396ee58
    int64_t rax_8 = *(arg2 + 0x1868)
    
    if (rax_8 == 0)
        rax_8 = *(data_143f111a8 + 0x10)
        
        if (rax_8 == 0)
            rax_8 = *(data_143f10e68 + 0x10)
    
    *(rcx_1 + 0xe90) = rax_8
    *(rcx_1 + 0xe98) = data_14396ee58
    int64_t rax_12 = *(arg2 + 0x1870)
    
    if (rax_12 == 0)
        rax_12 = *(data_143f111a8 + 0x10)
        
        if (rax_12 == 0)
            rax_12 = *(data_143f10e68 + 0x10)
    
    *(rcx_1 + 0xea0) = rax_12
    *(rcx_1 + 0xea8) = data_14396ee58
    int64_t rax_16 = *(arg2 + 0x1878)
    
    if (rax_16 == 0)
        rax_16 = *(data_143f111a8 + 0x10)
        
        if (rax_16 == 0)
            rax_16 = *(data_143f10e68 + 0x10)
    
    *(rcx_1 + 0xeb0) = rax_16
    *(rcx_1 + 0xeb8) = data_14396ee58
    int64_t* rcx_2 = data_143f0f180
    void* var_270
    (*(*rcx_2 + 0xf8))(rcx_2, &var_270, *(arg2 + 0x15b0), &data_143f55750, 1, 1)
    void* rax_21 = var_270
    void* var_280 = rax_21
    
    if (rax_21 != 0)
        *(rax_21 + 8) += 1
    
    sub_1405d1550(&var_270)
    sub_1405d1600(arg2 + 0x10, &var_280)
    int128_t zmm6_1
    result, zmm6_1 = sub_1405d1550(&var_280)
    sub_1413edcd0(arg3 + 0x20)
    int64_t i_6 = sx.q(*(rdi + 0x20))
    result.b = 0
    int64_t r15_1 = 0
    
    if (i_6 s> 0)
        int64_t rcx_7 = 0
        int64_t i
        
        do
            if (result.b != 0 || *(*(rdi + 0x18) + rcx_7 + 0xb8) s> 0)
                result = 1
            else
                result.b = 0
            
            rcx_7 += 0xc8
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    int64_t i_7 = sx.q(*(rdi + 0x10))
    
    if (i_7 s> 0)
        int64_t rcx_8 = 0
        int64_t i_1
        
        do
            if (result.b != 0 || *(rcx_8 + *(rdi + 8) + 0xb8) s> 0)
                result = 1
            else
                result.b = 0
            
            rcx_8 += 0xc8
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
    
    if (result.b != 0 && data_1439b5be8 != 0)
        int128_t var_58_1 = zmm6_1
        int128_t var_68_1 = zmm7_1
        int128_t var_78_1 = zmm8_1
        int128_t var_b8_1 = zmm12_1
        int128_t var_c8_1 = zmm13_1
        uint64_t rax_23
        int32_t rcx_9
        
        if (data_143e585b8 != 0xffffffff)
            rax_23 = zx.q(*(arg3 + 0x18b0))
            rcx_9 = data_143e585c4
        
        if (data_143e585b8 == 0xffffffff || rcx_9 s< rax_23.d || rcx_9 s> (rax_23 * 3).d)
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(*(arg3 + 0x18b0) * 5)
            data_143e585c4 = (temp5_1 + (temp4_1 & 3)) s>> 2
            sub_14198bce0(&data_143e585b0)
            sub_14198bc10(&data_143e585b0)
        
        sub_14111cff0(&data_143e585c0)
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(data_1439b5bfc)
        int32_t rax_33 = (temp8_1 + (temp7_1 & 0xf)) s>> 4
        char rcx_10
        
        if (*(arg3 + 0x1ab5) == 0 || *(arg3 + 0x18b0) s>= 0x10000)
            rcx_10 = 0
        else
            rcx_10 = 1
        
        if (data_1439b5ef0 != rax_33 || data_1439b5ef4 != rcx_10)
            data_1439b5ef4 = rcx_10
            data_1439b5ef0 = rax_33
            sub_1419ba620(&data_1439b5ee0)
        
        void* rbx_1 = data_1439b5ef8
        
        if (*(rbx_1 + 0x11) == 0)
            if (data_143f0f1c7 != 0)
                int64_t* rcx_11 = data_143f0f180
                (*(*rcx_11 + 0x618))(rcx_11, rbx_1)
            
            *(rbx_1 + 0x11) = 1
        
        void* rbx_2 = data_1439b5f18
        
        if (*(rbx_2 + 0x11) == 0)
            if (data_143f0f1c7 != 0)
                int64_t* rcx_12 = data_143f0f180
                (*(*rcx_12 + 0x618))(rcx_12, rbx_2)
            
            *(rbx_2 + 0x11) = 1
        
        zmm12_1 = 0x3f000000
        zmm13_1 = 0x3e800000
        result.b = data_1439b5bec == 0
        int32_t var_290_1 = result.d
        
        do
            int32_t rbx_4 = *(arg1 + 0x8c)
            void* const r13_1 = 8
            int32_t var_278_1 = rbx_4
            
            if (result.d != 0)
                r13_1 = 0x18
            
            int32_t r9_2 = rbx_4
            void* r13_2 = r13_1 + rdi
            int32_t r10_1 = 0x20
            void* var_250_1 = r13_2
            
            if (rbx_4 != 0)
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_forward(rbx_4)
                r10_1 = temp0_1
            
            int32_t r8_2 = *(&data_1439c7ac0 + (sx.q(divu.dp.d(0:r10_1, data_1439c7a38)) << 2))
            
            while (true)
                int32_t rax_38 = 1 << r10_1.b
                r10_1 = 0x20
                int32_t rax_40 = not.d(rax_38) & r9_2
                r9_2 = rax_40
                
                if (rax_40 != 0)
                    uint64_t rflags_2
                    int32_t temp0_3
                    temp0_3, rflags_2 = _bit_scan_forward(rax_40)
                    r10_1 = temp0_3
                
                if (rax_40 == 0)
                    break
                
                r8_2 |= *(&data_1439c7ac0 + (sx.q(divu.dp.d(0:r10_1, data_1439c7a38)) << 2))
            
            if (rbx_4 != r8_2)
                bool cond:4_1 = *(arg1 + 0x14) u> 0
                *(arg1 + 0x8c) = r8_2
                
                if (cond:4_1)
                    void*** rdx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_43 = &rdx_13[3]
                    
                    if (rax_43 u> *(arg1 + 0x38))
                        sub_140b0e3d0(&arg1[0x30], 0x20)
                        rdx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_43 = &rdx_13[3]
                    
                    *(arg1 + 0x30) = rax_43
                    int64_t* rax_44 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_44 = rdx_13
                    int32_t rax_45 = *(arg1 + 0x8c)
                    *(arg1 + 8) = &rdx_13[1]
                    rdx_13[1] = 0
                    *rdx_13 = &data_142f11588
                    rdx_13[2].d = rax_45
                else
                    *(arg1 + 0x90) = r8_2
            
            int32_t rax_202 = *(r13_2 + 8)
            int32_t rdx_16 = 0
            int32_t var_2b8_1 = 0
            int64_t rcx_18 = 0
            int64_t var_258_1 = 0
            int32_t var_2e0_2
            
            if (rax_202 s> 0)
                do
                    int64_t r13_3 = 0
                    int64_t rcx_19 = rcx_18 * 0xc8
                    int32_t i_5 = 0
                    void* r12_2 = *r13_2 + rcx_19
                    var_280 = r12_2
                    int64_t var_238_1 = 0
                    
                    if (*(r12_2 + 0xb8) s> 0)
                        void* rcx_20 = r12_2 + 0x28
                        int32_t i_2
                        
                        do
                            void* rax_46 = *(rcx_20 + 0x88)
                            
                            if (rax_46 != 0)
                                rcx_20 = rax_46
                            
                            void* r13_5 = r13_3 * 0x2c + rcx_20
                            
                            if ((*(r13_5 + 0x28) & 1) != 0)
                                int64_t rax_47 = data_143e585d0
                                int64_t* rdi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rcx_21 = &rdi_3[1]
                                
                                if (rcx_21 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x10)
                                    rdi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rcx_21 = &rdi_3[1]
                                
                                *(arg1 + 0x30) = rcx_21
                                *rdi_3 = rax_47
                                void*** rcx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_48 = &rcx_25[6]
                                
                                if (rax_48 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x38)
                                    rcx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_48 = &rcx_25[6]
                                
                                *(arg1 + 0x30) = rax_48
                                *(arg1 + 0x14) += 1
                                int64_t var_20c_1 = 0
                                int64_t var_204_1 = 0
                                **(arg1 + 8) = rcx_25
                                *(arg1 + 8) = &rcx_25[1]
                                rcx_25[1] = 0
                                *rcx_25 = &data_142da7798
                                rcx_25[2].d = 1
                                rcx_25[3] = rdi_3
                                rcx_25[4] = 2
                                rcx_25[5] = 0
                                int64_t rdi_6 = data_143e585d0
                                void*** rcx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_51 = &rcx_31[5]
                                
                                if (rax_51 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x30)
                                    rcx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_51 = &rcx_31[5]
                                
                                *(arg1 + 0x30) = rax_51
                                int64_t* rax_52 = *(arg1 + 8)
                                *(arg1 + 0x14) += 1
                                *rax_52 = rcx_31
                                *(arg1 + 8) = &rcx_31[1]
                                rcx_31[1] = 0
                                *rcx_31 = &data_142f115d8
                                rcx_31[2] = rdi_6
                                *(rcx_31 + 0x18) = var_20c_1.o
                                void* var_190
                                sub_1419a2ec0(*(arg2 + 0x5150), &var_190, &data_143e58670, 0)
                                void* r15_2 = var_190
                                void* rdi_7 = nullptr
                                
                                if (r15_2 != 0)
                                    int64_t rdx_18 = sx.q(*(r15_2 + 0x10c))
                                    void* var_188
                                    int64_t* rdi_8 = *(var_188 + 0x10)
                                    int64_t rax_55 = rdi_8[3]
                                    
                                    if (*(rax_55 + (rdx_18 << 3)) == 0)
                                        sub_1419ccf30(rdi_8, rdx_18.d)
                                        rax_55 = rdi_8[3]
                                    
                                    rdi_7 = *(rax_55 + (rdx_18 << 3))
                                
                                *(arg1 + 0x1b0) = rdi_7
                                sub_14198aa60(rdi_7)
                                void*** rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_56 = &rcx_40[3]
                                
                                if (rax_56 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x20)
                                    rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_56 = &rcx_40[3]
                                
                                *(arg1 + 0x30) = rax_56
                                *(arg1 + 0x14) += 1
                                **(arg1 + 8) = rcx_40
                                *(arg1 + 8) = &rcx_40[1]
                                int128_t zmm5_1 = *(r13_5 + 0xc)
                                int128_t zmm4_1 = *(r13_5 + 0x10)
                                arg4 = *(r13_5 + 0x14)
                                zmm8_1.d = zmm4_1.d f- *(r13_5 + 4)
                                zmm7_1.d = zmm5_1.d f- *r13_5
                                zmm5_1.d = zmm5_1.d f+ *r13_5
                                zmm4_1.d = zmm4_1.d f+ *(r13_5 + 4)
                                rcx_40[1] = 0
                                zmm6_1.d = arg4.d f- *(r13_5 + 8)
                                arg4.d = arg4.d f+ *(r13_5 + 8)
                                rcx_40[2] = rdi_7
                                *rcx_40 = &data_142dd5b40
                                void* rax_59 = *(arg1 + 0x1b0)
                                int64_t r9_3 = *(arg2 + 0x10)
                                zmm8_1.d = zmm8_1.d f* zmm8_1.d
                                var_270 = rax_59
                                zmm7_1.d = zmm7_1.d f* zmm7_1.d
                                void* var_2a8 = rax_59
                                zmm6_1.d = zmm6_1.d f* zmm6_1.d
                                zmm8_1.d = zmm8_1.d f+ zmm7_1.d
                                zmm5_1.d = zmm5_1.d f* zmm12_1.d
                                zmm4_1.d = zmm4_1.d f* zmm12_1.d
                                arg4.d = arg4.d f* zmm12_1.d
                                zmm8_1.d = zmm8_1.d f+ zmm6_1.d
                                int32_t var_1f8 = zmm5_1.d
                                int32_t var_1f4_1 = zmm4_1.d
                                int32_t var_1f0_1 = arg4.d
                                zmm8_1.d = zmm8_1.d f* zmm13_1.d
                                int32_t var_1ec_1 = _mm_sqrt_ss((zx.o(0)).d, zmm8_1.d)
                                sub_1410809a0(r15_2, arg1, rax_59, r9_3)
                                void* r12_4 = data_143a2dd48
                                char var_2c0_1 = 0
                                int32_t rcx_45 = *(r12_4 + 0x68)
                                int32_t rax_60 = *(r12_4 + 0x64)
                                int32_t r13_6 = *(r12_4 + 0x60)
                                float* var_2c8
                                var_2c8.d = rcx_45
                                int64_t var_268_1
                                var_268_1.d = rax_60
                                void* var_2d8
                                var_2d8.d = r13_6
                                var_2e0_2.q = r12_4
                                sub_14107ee50(r15_2 + 0x118, arg1, &var_2a8, 
                                    *(arg3 + (sx.q(*(arg3 + 0x18d0)) << 3) + 0x18b8), 
                                    *(arg3 + 0x18b0), var_2e0_2, var_2d8.d, rax_60, var_2c8.b)
                                int64_t rax_62 = data_143e58610
                                int64_t rcx_47 = data_143e585d0
                                int64_t* rdi_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                int64_t rax_63 = data_143e58630
                                int64_t rax_64 = data_143e58650
                                void* rax_65 = &rdi_11[4]
                                
                                if (rax_65 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x28)
                                    rdi_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_65 = &rdi_11[4]
                                
                                *(arg1 + 0x30) = rax_65
                                *rdi_11 = rcx_47
                                rdi_11[1] = rax_62
                                rdi_11[2] = rax_63
                                rdi_11[3] = rax_64
                                void*** rcx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_69 = &rcx_51[6]
                                
                                if (rax_69 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x38)
                                    rcx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_69 = &rcx_51[6]
                                
                                *(arg1 + 0x30) = rax_69
                                void**** rax_70 = *(arg1 + 8)
                                *(arg1 + 0x14) += 1
                                void* r8_5 = var_270
                                int32_t var_218 = r13_6
                                *rax_70 = rcx_51
                                *(arg1 + 8) = &rcx_51[1]
                                rcx_51[1] = 0
                                *rcx_51 = &data_142da7798
                                int32_t var_214_1 = var_268_1.d
                                rcx_51[3] = rdi_11
                                int32_t var_210_1 = rcx_45
                                rcx_51[2].d = 4
                                rcx_51[4].d = 2
                                *(rcx_51 + 0x24) = 3
                                rcx_51[5] = 0
                                var_2e0_2.q = &var_218
                                int32_t var_2e8_3
                                var_2e8_3.q = r12_4
                                sub_1410e8980(r15_2 + 0x13c, arg1, r8_5, &data_143e585c0, 
                                    var_2e8_3, var_2e0_2, 0)
                                int32_t var_2e8_4 = 0
                                float var_248 = zmm9_1 / (tanf(data_1439b5b9c) f+ zmm11_1.d)
                                sub_140741e30(arg1, &var_2a8, r15_2 + 0x16e, &var_248, var_2e8_4)
                                sub_14077c870(arg1, &var_2a8, r15_2 + 0x174, &var_1f8, 0)
                                int32_t var_260
                                
                                if (data_1439b5bec != 0)
                                    int32_t rax_74 = 0
                                    
                                    if (var_290_1 == 1)
                                        rax_74 = 1
                                    
                                    var_260 = rax_74
                                else
                                    var_260 = 2
                                
                                sub_140741e30(arg1, &var_2a8, r15_2 + 0x17a, &var_260, 0)
                                sub_1419cd1c0(arg1, r15_2, 
                                    divu.dp.d(0:(*(arg3 + 0x18b0) - 1 + data_1439b5c0c), 
                                        data_1439b5c0c), 
                                    1, 1)
                                int64_t rdi_14 = *(arg1 + 0x1b0)
                                sub_14077cfd0(r15_2 + 0x118, arg1, rdi_14)
                                sub_14077cfd0(r15_2 + 0x120, arg1, rdi_14)
                                int64_t rdi_15 = *(arg1 + 0x1b0)
                                sub_14077cfd0(r15_2 + 0x13c, arg1, rdi_15)
                                sub_14077cfd0(r15_2 + 0x144, arg1, rdi_15)
                                sub_14077cfd0(r15_2 + 0x14c, arg1, rdi_15)
                                sub_14077cfd0(r15_2 + 0x154, arg1, rdi_15)
                                uint32_t rax_79 = zx.d(*(r15_2 + 0x140))
                                uint32_t rdx_33 = zx.d(*(r15_2 + 0x150))
                                int64_t var_228 = 0
                                
                                if (rax_79 == 0)
                                    rax_79 = 0
                                
                                int32_t var_21c_1 = 0
                                uint32_t rcx_67 = zx.d(*(r15_2 + 0x148))
                                
                                if (rax_79 u>= rcx_67)
                                    rcx_67 = rax_79
                                
                                uint32_t rax_80 = zx.d(*(r15_2 + 0x158))
                                
                                if (rcx_67 u>= rdx_33)
                                    rdx_33 = rcx_67
                                
                                if (rdx_33 u>= rax_80)
                                    rax_80 = rdx_33
                                
                                sub_1405a4d70(&var_228)
                                int64_t r12_5 = var_228
                                memset(r12_5, 0, zx.q(rax_80 + 1) << 3)
                                
                                if (*(r15_2 + 0x142) u> 0)
                                    *(r12_5 + (zx.q(*(r15_2 + 0x140)) << 3)) = data_143e585d0
                                
                                if (*(r15_2 + 0x14a) u> 0)
                                    *(r12_5 + (zx.q(*(r15_2 + 0x148)) << 3)) = data_143e58610
                                
                                if (*(r15_2 + 0x152) u> 0)
                                    *(r12_5 + (zx.q(*(r15_2 + 0x150)) << 3)) = data_143e58630
                                
                                if (*(r15_2 + 0x15a) u> 0)
                                    *(r12_5 + (zx.q(*(r15_2 + 0x158)) << 3)) = data_143e58650
                                
                                int64_t j_2 = sx.q(rax_80 + 1)
                                int64_t* rdi_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                int32_t rdx_35 = (j_2 << 3).d
                                int64_t r15_3 = sx.q(rdx_35)
                                void* rax_85 = rdi_19 + r15_3
                                
                                if (rax_85 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], rdx_35 + 8)
                                    rdi_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_85 = rdi_19 + r15_3
                                
                                *(arg1 + 0x30) = rax_85
                                int64_t j_1 = j_2
                                
                                if (j_2.d s> 0)
                                    int64_t* rcx_75 = rdi_19
                                    int64_t j
                                    
                                    do
                                        *rcx_75 = *(r12_5 - rdi_19 + rcx_75)
                                        rcx_75 = &rcx_75[1]
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                
                                void*** rcx_78 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_87 = &rcx_78[6]
                                
                                if (rax_87 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x38)
                                    rcx_78 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_87 = &rcx_78[6]
                                
                                *(arg1 + 0x30) = rax_87
                                void**** rax_88 = *(arg1 + 8)
                                *(arg1 + 0x14) += 1
                                *rax_88 = rcx_78
                                *(arg1 + 8) = &rcx_78[1]
                                rcx_78[1] = 0
                                *rcx_78 = &data_142da7798
                                rcx_78[2].d = j_2.d
                                rcx_78[3] = rdi_19
                                rcx_78[4].d = 0
                                *(rcx_78 + 0x24) = 3
                                rcx_78[5] = 0
                                
                                if (r12_5 != 0)
                                    sub_140a74f90(r12_5)
                                
                                int64_t rax_90 = data_1439b5f00
                                int64_t* rdi_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                int32_t var_2a0_1
                                var_2a0_1.q = rax_90
                                void* rcx_83 = &rdi_24[1]
                                
                                if (rcx_83 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x10)
                                    rax_90 = var_2a0_1.q
                                    rdi_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rcx_83 = &rdi_24[1]
                                
                                *(arg1 + 0x30) = rcx_83
                                *rdi_24 = rax_90
                                void*** rcx_87 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_91 = &rcx_87[6]
                                
                                if (rax_91 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x38)
                                    rcx_87 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_91 = &rcx_87[6]
                                
                                *(arg1 + 0x30) = rax_91
                                *(arg1 + 0x14) += 1
                                int64_t var_1e8_1 = 0
                                int64_t var_1e0_1 = 0
                                **(arg1 + 8) = rcx_87
                                *(arg1 + 8) = &rcx_87[1]
                                rcx_87[1] = 0
                                *rcx_87 = &data_142da7798
                                rcx_87[2].d = 1
                                rcx_87[3] = rdi_24
                                rcx_87[4].d = 2
                                *(rcx_87 + 0x24) = 3
                                rcx_87[5] = 0
                                int64_t rdi_27 = data_1439b5f00
                                void*** rcx_93 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_94 = &rcx_93[5]
                                
                                if (rax_94 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x30)
                                    rcx_93 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_94 = &rcx_93[5]
                                
                                *(arg1 + 0x30) = rax_94
                                int64_t* rax_95 = *(arg1 + 8)
                                *(arg1 + 0x14) += 1
                                *rax_95 = rcx_93
                                *(arg1 + 8) = &rcx_93[1]
                                rcx_93[1] = 0
                                *rcx_93 = &data_142f115d8
                                rcx_93[2] = rdi_27
                                *(rcx_93 + 0x18) = var_1e8_1.o
                                void* var_180
                                sub_1419a2ec0(*(arg2 + 0x5150), &var_180, &data_143e58770, 0)
                                void* r13_7 = var_180
                                void* rdi_28 = nullptr
                                
                                if (r13_7 != 0)
                                    int64_t rdx_38 = sx.q(*(r13_7 + 0x10c))
                                    void* var_178
                                    int64_t* r15_4 = *(var_178 + 0x10)
                                    int64_t rdi_29 = r15_4[3]
                                    
                                    if (*(rdi_29 + (rdx_38 << 3)) == 0)
                                        sub_1419ccf30(r15_4, rdx_38.d)
                                        rdi_29 = r15_4[3]
                                    
                                    rdi_28 = *(rdi_29 + (rdx_38 << 3))
                                
                                *(arg1 + 0x1b0) = rdi_28
                                sub_14198aa60(rdi_28)
                                void*** rcx_102 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_98 = &rcx_102[3]
                                
                                if (rax_98 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x20)
                                    rcx_102 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_98 = &rcx_102[3]
                                
                                *(arg1 + 0x30) = rax_98
                                void**** rax_99 = *(arg1 + 8)
                                *(arg1 + 0x14) += 1
                                *rax_99 = rcx_102
                                *(arg1 + 8) = &rcx_102[1]
                                rcx_102[1] = 0
                                *rcx_102 = &data_142dd5b40
                                int32_t var_2d0_1
                                var_2d0_1.q = r13_5
                                int64_t var_2d8_1
                                var_2d8_1.d = var_2b8_1
                                rcx_102[2] = rdi_28
                                var_2e0_2.q = var_2b0
                                sub_141144e20(r13_7, arg1, arg3, arg2, zmm9_1, var_2e0_2)
                                int32_t temp22_1
                                int32_t temp23_1
                                temp22_1:temp23_1 = sx.q(*(r13_5 + 0x24) + 0xf)
                                int32_t temp24_1
                                int32_t temp25_1
                                temp24_1:temp25_1 = sx.q(*(r13_5 + 0x20) + 0xf)
                                int32_t temp26_1
                                int32_t temp27_1
                                temp26_1:temp27_1 = sx.q(*(r13_5 + 0x1c) + 0xf)
                                sub_1419cd1c0(arg1, r13_7, ((temp26_1 & 0xf) + temp27_1) s>> 4, 
                                    ((temp24_1 & 0xf) + temp25_1) s>> 4, 
                                    ((temp22_1 & 0xf) + temp23_1) s>> 4)
                                sub_14077cfd0(r13_7 + 0x188, arg1, *(arg1 + 0x1b0))
                                sub_14077cfd0(r13_7 + 0x190, arg1, *(arg1 + 0x1b0))
                                int64_t rax_111 = data_1439b5f00
                                int64_t* rdi_32 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rcx_112 = &rdi_32[1]
                                
                                if (rcx_112 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x10)
                                    rdi_32 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rcx_112 = &rdi_32[1]
                                
                                *(arg1 + 0x30) = rcx_112
                                *rdi_32 = rax_111
                                void*** rcx_116 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_112 = &rcx_116[6]
                                
                                if (rax_112 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x38)
                                    rcx_116 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_112 = &rcx_116[6]
                                
                                *(arg1 + 0x30) = rax_112
                                *(arg1 + 0x14) += 1
                                **(arg1 + 8) = rcx_116
                                *(arg1 + 8) = &rcx_116[1]
                                rcx_116[3] = rdi_32
                                rcx_116[1] = 0
                                *rcx_116 = &data_142da7798
                                rcx_116[2].d = 1
                                rcx_116[4].d = 0
                                *(rcx_116 + 0x24) = 3
                                rcx_116[5] = 0
                                int64_t rax_115 = data_1439b5f20
                                int64_t* rdi_37 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rcx_120 = &rdi_37[1]
                                
                                if (rcx_120 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x10)
                                    rdi_37 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rcx_120 = &rdi_37[1]
                                
                                *(arg1 + 0x30) = rcx_120
                                *rdi_37 = rax_115
                                void*** rcx_124 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_116 = &rcx_124[6]
                                
                                if (rax_116 u> *(arg1 + 0x38))
                                    sub_140b0e3d0(&arg1[0x30], 0x38)
                                    rcx_124 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_116 = &rcx_124[6]
                                
                                *(arg1 + 0x30) = rax_116
                                int32_t r11_1 = 2
                                *(arg1 + 0x14) += 1
                                int64_t r8_25 = 2
                                **(arg1 + 8) = rcx_124
                                *(arg1 + 8) = &rcx_124[1]
                                rcx_124[1] = 0
                                rcx_124[3] = rdi_37
                                void* rdi_40 = nullptr
                                *rcx_124 = &data_142da7798
                                rcx_124[2].d = 1
                                rcx_124[4].d = 0
                                rcx_124[5] = 0
                                *(rcx_124 + 0x24) = 3
                                int32_t rdx_49 = *(r13_5 + 0x1c)
                                int32_t r10_2 = *(r13_5 + 0x20)
                                int32_t rax_119 = *(r13_5 + 0x24)
                                int32_t r9_12
                                
                                if (rdx_49 s>= r10_2 || rdx_49 s>= rax_119)
                                    r9_12 = rax_119
                                    
                                    if (r10_2 s< rdx_49 && r10_2 s< rax_119)
                                        r11_1 = 1
                                        r8_25 = 1
                                else
                                    r11_1 = 0
                                    r8_25 = 0
                                    r9_12 = rax_119
                                
                                int32_t rcx_128 = r9_12
                                int32_t r8_26 = 3
                                
                                if (r10_2 s>= r9_12)
                                    rcx_128 = r10_2
                                
                                if (rdx_49 s>= rcx_128)
                                    rcx_128 = rdx_49
                                
                                if (rcx_128 s>= *(r13_5 + (r8_25 << 2) + 0x1c) << 3)
                                    r8_26 = r11_1
                                
                                int32_t rcx_129
                                
                                if (r8_26 != 3)
                                    rcx_129 = 8
                                    
                                    if (r8_26 == 0)
                                        rcx_129 = 1
                                else
                                    rcx_129 = r8_26 + 1
                                
                                int32_t temp0_7 = divs.dp.d(sx.q(rdx_49 - 1 + rcx_129), rcx_129)
                                int32_t rcx_130
                                
                                if (r8_26 != 3)
                                    rcx_130 = 8
                                    
                                    if (r8_26 == 1)
                                        rcx_130 = 1
                                else
                                    rcx_130 = r8_26 + 1
                                
                                var_2a8.d = divs.dp.d(sx.q(r10_2 - 1 + rcx_130), rcx_130)
                                int32_t rcx_131
                                
                                if (r8_26 != 3)
                                    rcx_131 = 8
                                    
                                    if (r8_26 == 2)
                                        rcx_131 = 1
                                else
                                    rcx_131 = r8_26 + 1
                                
                                int32_t temp0_9 = divs.dp.d(sx.q(r9_12 - 1 + rcx_131), rcx_131)
                                int32_t r13_8 = temp0_9
                                var_268_1.d = temp0_9
                                void* r12_8 = *(*(var_2b0 + 8) + rcx_19 + 0xc0)
                                var_270 = r12_8
                                void*** rcx_151
                                int64_t* rdi_44
                                
                                if (var_290_1 != 1 || data_1439b5bec == 0 || r12_8 == 0)
                                    int64_t* rcx_197 = *(arg2 + 0x5150)
                                    void* rax_173
                                    int64_t rcx_211
                                    
                                    if (r8_26 == 3)
                                        void* var_130
                                        sub_1419a2ec0(rcx_197, &var_130, &data_143e5ff30, 0)
                                        void* rdi_56 = var_130
                                        void* r15_10 = nullptr
                                        void* var_128
                                        
                                        if (rdi_56 != 0)
                                            r15_10 =
                                                sub_1410970c0(*(var_128 + 0x10), *(rdi_56 + 0x10c))
                                        *(arg1 + 0x1b0) = r15_10
                                        sub_14198aa60(r15_10)
                                        void*** rcx_202 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        void* rax_167 = &rcx_202[3]
                                        
                                        if (rax_167 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x20)
                                            rcx_202 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_167 = &rcx_202[3]
                                        
                                        *(arg1 + 0x30) = rax_167
                                        void**** rax_168 = *(arg1 + 8)
                                        *(arg1 + 0x14) += 1
                                        *rax_168 = rcx_202
                                        *(arg1 + 8) = &rcx_202[1]
                                        rcx_202[1] = 0
                                        r12_2 = var_280
                                        *rcx_202 = &data_142dd5b40
                                        rcx_202[2] = r15_10
                                        r15_1 = 0
                                        var_2c0_1.q = r13_5
                                        var_2c8.d = var_2b8_1
                                        var_2d0_1.q = 0
                                        var_2e0_2.q = &var_2b0[0x30]
                                        arg5, arg4 = sub_14113cd80(rdi_56, arg1, arg3, arg2, 
                                            zmm9_1, var_2e0_2, r12_2, var_2d0_1)
                                        sub_1419cd1c0(arg1, rdi_56, temp0_7, var_2a8.d, r13_8)
                                        sub_14077cfd0(rdi_56 + 0x188, arg1, *(arg1 + 0x1b0))
                                        rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rcx_211 = *(*(r12_2 + 0xc0) + 0x18)
                                        rax_173 = &rdi_44[1]
                                        
                                        if (rax_173 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x10)
                                            rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_173 = &rdi_44[1]
                                    else if (r8_26 == 0)
                                        void* var_120
                                        sub_1419a2ec0(rcx_197, &var_120, &data_143e60090, 0)
                                        void* rdi_59 = var_120
                                        void* r15_11 = nullptr
                                        void* var_118
                                        
                                        if (rdi_59 != 0)
                                            r15_11 =
                                                sub_1410970c0(*(var_118 + 0x10), *(rdi_59 + 0x10c))
                                        *(arg1 + 0x1b0) = r15_11
                                        sub_14198aa60(r15_11)
                                        void*** rcx_217 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        void* rax_176 = &rcx_217[3]
                                        
                                        if (rax_176 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x20)
                                            rcx_217 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_176 = &rcx_217[3]
                                        
                                        *(arg1 + 0x30) = rax_176
                                        void**** rax_177 = *(arg1 + 8)
                                        *(arg1 + 0x14) += 1
                                        *rax_177 = rcx_217
                                        *(arg1 + 8) = &rcx_217[1]
                                        rcx_217[1] = 0
                                        r12_2 = var_280
                                        *rcx_217 = &data_142dd5b40
                                        rcx_217[2] = r15_11
                                        r15_1 = 0
                                        var_2c0_1.q = r13_5
                                        var_2c8.d = var_2b8_1
                                        var_2d0_1.q = 0
                                        var_2e0_2.q = &var_2b0[0x30]
                                        arg5, arg4 = sub_14113cd80(rdi_59, arg1, arg3, arg2, 
                                            zmm9_1, var_2e0_2, r12_2, var_2d0_1)
                                        sub_1419cd1c0(arg1, rdi_59, temp0_7, var_2a8.d, r13_8)
                                        sub_14077cfd0(rdi_59 + 0x188, arg1, *(arg1 + 0x1b0))
                                        rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rcx_211 = *(*(r12_2 + 0xc0) + 0x18)
                                        rax_173 = &rdi_44[1]
                                        
                                        if (rax_173 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x10)
                                            rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_173 = &rdi_44[1]
                                    else if (r8_26 != 1)
                                        void* var_100
                                        sub_1419a2ec0(rcx_197, &var_100, &data_143e60350, 0)
                                        void* rdi_65 = var_100
                                        void* r15_13 = nullptr
                                        void* var_f8
                                        
                                        if (rdi_65 != 0)
                                            r15_13 =
                                                sub_1410970c0(*(var_f8 + 0x10), *(rdi_65 + 0x10c))
                                        *(arg1 + 0x1b0) = r15_13
                                        sub_14198aa60(r15_13)
                                        void*** rcx_245 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        void* rax_192 = &rcx_245[3]
                                        
                                        if (rax_192 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x20)
                                            rcx_245 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_192 = &rcx_245[3]
                                        
                                        *(arg1 + 0x30) = rax_192
                                        void**** rax_193 = *(arg1 + 8)
                                        *(arg1 + 0x14) += 1
                                        *rax_193 = rcx_245
                                        *(arg1 + 8) = &rcx_245[1]
                                        rcx_245[1] = 0
                                        r12_2 = var_280
                                        *rcx_245 = &data_142dd5b40
                                        rcx_245[2] = r15_13
                                        r15_1 = 0
                                        var_2c0_1.q = r13_5
                                        var_2c8.d = var_2b8_1
                                        var_2d0_1.q = 0
                                        var_2e0_2.q = &var_2b0[0x30]
                                        arg5, arg4 = sub_14113cd80(rdi_65, arg1, arg3, arg2, 
                                            zmm9_1, var_2e0_2, r12_2, var_2d0_1)
                                        sub_1419cd1c0(arg1, rdi_65, temp0_7, var_2a8.d, r13_8)
                                        sub_14077cfd0(rdi_65 + 0x188, arg1, *(arg1 + 0x1b0))
                                        rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rcx_211 = *(*(r12_2 + 0xc0) + 0x18)
                                        rax_173 = &rdi_44[1]
                                        
                                        if (rax_173 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x10)
                                            rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_173 = &rdi_44[1]
                                    else
                                        void* var_110
                                        sub_1419a2ec0(rcx_197, &var_110, &data_143e601f0, 0)
                                        void* rdi_62 = var_110
                                        void* r15_12 = nullptr
                                        void* var_108
                                        
                                        if (rdi_62 != 0)
                                            r15_12 =
                                                sub_1410970c0(*(var_108 + 0x10), *(rdi_62 + 0x10c))
                                        *(arg1 + 0x1b0) = r15_12
                                        sub_14198aa60(r15_12)
                                        void*** rcx_231 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        void* rax_184 = &rcx_231[3]
                                        
                                        if (rax_184 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x20)
                                            rcx_231 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_184 = &rcx_231[3]
                                        
                                        *(arg1 + 0x30) = rax_184
                                        void**** rax_185 = *(arg1 + 8)
                                        *(arg1 + 0x14) += 1
                                        *rax_185 = rcx_231
                                        *(arg1 + 8) = &rcx_231[1]
                                        rcx_231[1] = 0
                                        r12_2 = var_280
                                        *rcx_231 = &data_142dd5b40
                                        rcx_231[2] = r15_12
                                        r15_1 = 0
                                        var_2c0_1.q = r13_5
                                        var_2c8.d = var_2b8_1
                                        var_2d0_1.q = 0
                                        var_2e0_2.q = &var_2b0[0x30]
                                        arg5, arg4 = sub_14113cd80(rdi_62, arg1, arg3, arg2, 
                                            zmm9_1, var_2e0_2, r12_2, var_2d0_1)
                                        sub_1419cd1c0(arg1, rdi_62, temp0_7, var_2a8.d, r13_8)
                                        sub_14077cfd0(rdi_62 + 0x188, arg1, *(arg1 + 0x1b0))
                                        rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rcx_211 = *(*(r12_2 + 0xc0) + 0x18)
                                        rax_173 = &rdi_44[1]
                                        
                                        if (rax_173 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x10)
                                            rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_173 = &rdi_44[1]
                                    
                                    *(arg1 + 0x30) = rax_173
                                    *rdi_44 = rcx_211
                                    rcx_151 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_198 = &rcx_151[6]
                                    
                                    if (rax_198 u> *(arg1 + 0x38))
                                        sub_140b0e3d0(&arg1[0x30], 0x38)
                                        rcx_151 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_198 = &rcx_151[6]
                                    
                                    *(arg1 + 0x30) = rax_198
                                    *(arg1 + 0x14) += 1
                                else
                                    int64_t* rcx_133 = *(arg2 + 0x5150)
                                    void* rax_142
                                    int64_t rcx_147
                                    
                                    if (r8_26 == 3)
                                        void* var_170
                                        sub_1419a2ec0(rcx_133, &var_170, &data_143e5f9b0, 0)
                                        void* r15_6 = var_170
                                        
                                        if (r15_6 != 0)
                                            int64_t rdx_57 = sx.q(*(r15_6 + 0x10c))
                                            void* var_168
                                            int64_t* r13_9 = *(var_168 + 0x10)
                                            int64_t rdi_41 = r13_9[3]
                                            
                                            if (*(rdi_41 + (rdx_57 << 3)) == 0)
                                                sub_1419ccf30(r13_9, rdx_57.d)
                                                rdi_41 = r13_9[3]
                                            
                                            rdi_40 = *(rdi_41 + (rdx_57 << 3))
                                            r12_8 = var_270
                                            r13_8 = var_268_1.d
                                        
                                        *(arg1 + 0x1b0) = rdi_40
                                        sub_14198aa60(rdi_40)
                                        void*** rcx_138 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        void* rax_136 = &rcx_138[3]
                                        
                                        if (rax_136 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x20)
                                            rcx_138 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_136 = &rcx_138[3]
                                        
                                        *(arg1 + 0x30) = rax_136
                                        int64_t* rax_137 = *(arg1 + 8)
                                        *(arg1 + 0x14) += 1
                                        *rax_137 = rcx_138
                                        *(arg1 + 8) = &rcx_138[1]
                                        rcx_138[1] = 0
                                        *rcx_138 = &data_142dd5b40
                                        rcx_138[2] = rdi_40
                                        var_2c0_1.q = r13_5
                                        var_2c8.d = var_2b8_1
                                        var_2d0_1.q = r12_8
                                        r12_2 = var_280
                                        var_2e0_2.q = &var_2b0[0x30]
                                        arg5, arg4 = sub_14113c3e0(r15_6, arg1, arg3, arg2, zmm9_1, 
                                            var_2e0_2, r12_2, var_2d0_1, var_2c8)
                                        sub_1419cd1c0(arg1, r15_6, temp0_7, var_2a8.d, r13_8)
                                        sub_14077cfd0(r15_6 + 0x188, arg1, *(arg1 + 0x1b0))
                                        rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rcx_147 = *(*(r12_2 + 0xc0) + 0x18)
                                        rax_142 = &rdi_44[1]
                                        
                                        if (rax_142 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x10)
                                            rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_142 = &rdi_44[1]
                                    else if (r8_26 == 0)
                                        void* var_160
                                        sub_1419a2ec0(rcx_133, &var_160, &data_143e5fb10, 0)
                                        void* r15_7 = var_160
                                        
                                        if (r15_7 != 0)
                                            int64_t rdx_62 = sx.q(*(r15_7 + 0x10c))
                                            void* var_158
                                            int64_t* r13_10 = *(var_158 + 0x10)
                                            int64_t rdi_47 = r13_10[3]
                                            
                                            if (*(rdi_47 + (rdx_62 << 3)) == 0)
                                                sub_1419ccf30(r13_10, rdx_62.d)
                                                rdi_47 = r13_10[3]
                                            
                                            rdi_40 = *(rdi_47 + (rdx_62 << 3))
                                            r12_8 = var_270
                                            r13_8 = var_268_1.d
                                        
                                        *(arg1 + 0x1b0) = rdi_40
                                        sub_14198aa60(rdi_40)
                                        void*** rcx_159 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        void* rax_145 = &rcx_159[3]
                                        
                                        if (rax_145 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x20)
                                            rcx_159 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_145 = &rcx_159[3]
                                        
                                        *(arg1 + 0x30) = rax_145
                                        void**** rax_146 = *(arg1 + 8)
                                        *(arg1 + 0x14) += 1
                                        *rax_146 = rcx_159
                                        *(arg1 + 8) = &rcx_159[1]
                                        rcx_159[1] = 0
                                        *rcx_159 = &data_142dd5b40
                                        rcx_159[2] = rdi_40
                                        var_2c0_1.q = r13_5
                                        var_2c8.d = var_2b8_1
                                        var_2d0_1.q = r12_8
                                        r12_2 = var_280
                                        var_2e0_2.q = &var_2b0[0x30]
                                        arg5, arg4 = sub_14113c3e0(r15_7, arg1, arg3, arg2, zmm9_1, 
                                            var_2e0_2, r12_2, var_2d0_1, var_2c8)
                                        sub_1419cd1c0(arg1, r15_7, temp0_7, var_2a8.d, r13_8)
                                        sub_14077cfd0(r15_7 + 0x188, arg1, *(arg1 + 0x1b0))
                                        rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rcx_147 = *(*(r12_2 + 0xc0) + 0x18)
                                        rax_142 = &rdi_44[1]
                                        
                                        if (rax_142 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x10)
                                            rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_142 = &rdi_44[1]
                                    else if (r8_26 != 1)
                                        void* var_140
                                        sub_1419a2ec0(rcx_133, &var_140, &data_143e5fdd0, 0)
                                        void* r15_9 = var_140
                                        
                                        if (r15_9 != 0)
                                            int64_t rdx_72 = sx.q(*(r15_9 + 0x10c))
                                            void* var_138
                                            int64_t* r13_12 = *(var_138 + 0x10)
                                            int64_t rdi_53 = r13_12[3]
                                            
                                            if (*(rdi_53 + (rdx_72 << 3)) == 0)
                                                sub_1419ccf30(r13_12, rdx_72.d)
                                                rdi_53 = r13_12[3]
                                            
                                            rdi_40 = *(rdi_53 + (rdx_72 << 3))
                                            r12_8 = var_270
                                            r13_8 = var_268_1.d
                                        
                                        *(arg1 + 0x1b0) = rdi_40
                                        sub_14198aa60(rdi_40)
                                        void*** rcx_187 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        void* rax_159 = &rcx_187[3]
                                        
                                        if (rax_159 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x20)
                                            rcx_187 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_159 = &rcx_187[3]
                                        
                                        *(arg1 + 0x30) = rax_159
                                        void**** rax_160 = *(arg1 + 8)
                                        *(arg1 + 0x14) += 1
                                        *rax_160 = rcx_187
                                        *(arg1 + 8) = &rcx_187[1]
                                        rcx_187[1] = 0
                                        *rcx_187 = &data_142dd5b40
                                        rcx_187[2] = rdi_40
                                        var_2c0_1.q = r13_5
                                        var_2c8.d = var_2b8_1
                                        var_2d0_1.q = r12_8
                                        r12_2 = var_280
                                        var_2e0_2.q = &var_2b0[0x30]
                                        arg5, arg4 = sub_14113c3e0(r15_9, arg1, arg3, arg2, zmm9_1, 
                                            var_2e0_2, r12_2, var_2d0_1, var_2c8)
                                        sub_1419cd1c0(arg1, r15_9, temp0_7, var_2a8.d, r13_8)
                                        sub_14077cfd0(r15_9 + 0x188, arg1, *(arg1 + 0x1b0))
                                        rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rcx_147 = *(*(r12_2 + 0xc0) + 0x18)
                                        rax_142 = &rdi_44[1]
                                        
                                        if (rax_142 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x10)
                                            rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_142 = &rdi_44[1]
                                    else
                                        void* var_150
                                        sub_1419a2ec0(rcx_133, &var_150, &data_143e5fc70, 0)
                                        void* r15_8 = var_150
                                        
                                        if (r15_8 != 0)
                                            int64_t rdx_67 = sx.q(*(r15_8 + 0x10c))
                                            void* var_148
                                            int64_t* r13_11 = *(var_148 + 0x10)
                                            int64_t rdi_50 = r13_11[3]
                                            
                                            if (*(rdi_50 + (rdx_67 << 3)) == 0)
                                                sub_1419ccf30(r13_11, rdx_67.d)
                                                rdi_50 = r13_11[3]
                                            
                                            rdi_40 = *(rdi_50 + (rdx_67 << 3))
                                            r12_8 = var_270
                                            r13_8 = var_268_1.d
                                        
                                        *(arg1 + 0x1b0) = rdi_40
                                        sub_14198aa60(rdi_40)
                                        void*** rcx_173 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        void* rax_152 = &rcx_173[3]
                                        
                                        if (rax_152 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x20)
                                            rcx_173 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_152 = &rcx_173[3]
                                        
                                        *(arg1 + 0x30) = rax_152
                                        void**** rax_153 = *(arg1 + 8)
                                        *(arg1 + 0x14) += 1
                                        *rax_153 = rcx_173
                                        *(arg1 + 8) = &rcx_173[1]
                                        rcx_173[1] = 0
                                        *rcx_173 = &data_142dd5b40
                                        rcx_173[2] = rdi_40
                                        var_2c0_1.q = r13_5
                                        var_2c8.d = var_2b8_1
                                        var_2d0_1.q = r12_8
                                        r12_2 = var_280
                                        var_2e0_2.q = &var_2b0[0x30]
                                        arg5, arg4 = sub_14113c3e0(r15_8, arg1, arg3, arg2, zmm9_1, 
                                            var_2e0_2, r12_2, var_2d0_1, var_2c8)
                                        sub_1419cd1c0(arg1, r15_8, temp0_7, var_2a8.d, r13_8)
                                        sub_14077cfd0(r15_8 + 0x188, arg1, *(arg1 + 0x1b0))
                                        rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rcx_147 = *(*(r12_2 + 0xc0) + 0x18)
                                        rax_142 = &rdi_44[1]
                                        
                                        if (rax_142 u> *(arg1 + 0x38))
                                            sub_140b0e3d0(&arg1[0x30], 0x10)
                                            rdi_44 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_142 = &rdi_44[1]
                                    
                                    *(arg1 + 0x30) = rax_142
                                    *rdi_44 = rcx_147
                                    rcx_151 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_143 = &rcx_151[6]
                                    
                                    if (rax_143 u> *(arg1 + 0x38))
                                        sub_140b0e3d0(&arg1[0x30], 0x38)
                                        rcx_151 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_143 = &rcx_151[6]
                                    
                                    *(arg1 + 0x30) = rax_143
                                    *(arg1 + 0x14) += 1
                                    r15_1 = 0
                                
                                **(arg1 + 8) = rcx_151
                                *(arg1 + 8) = &rcx_151[1]
                                rcx_151[1] = 0
                                *rcx_151 = &data_142da7798
                                rcx_151[5] = 0
                                *(rcx_151 + 0x24) = 3
                                rcx_151[4].d = 0
                                rcx_151[3] = rdi_44
                                rcx_151[2].d = 1
                            
                            rcx_20 = r12_2 + 0x28
                            i_2 = i_5 + 1
                            r13_3 = var_238_1 + 1
                            i_5 = i_2
                            var_238_1 = r13_3
                        while (i_2 s< *(r12_2 + 0xb8))
                        rdx_16 = var_2b8_1
                    
                    rdx_16 += 1
                    r13_2 = var_250_1
                    rcx_18 = var_258_1 + 1
                    var_2b8_1 = rdx_16
                    var_258_1 = rcx_18
                    rax_202 = *(r13_2 + 8)
                while (rdx_16 s< rax_202)
                
                rbx_4 = var_278_1
            
            int32_t r12_13 = 0
            
            if (rax_202 s> 0)
                do
                    int64_t* rdi_72 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    int64_t rax_204 = *(*(*r13_2 + r15_1 + 0xc0) + 0x18)
                    void* rcx_262 = &rdi_72[1]
                    
                    if (rcx_262 u> *(arg1 + 0x38))
                        sub_140b0e3d0(&arg1[0x30], 0x10)
                        rdi_72 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rcx_262 = &rdi_72[1]
                    
                    *(arg1 + 0x30) = rcx_262
                    *rdi_72 = rax_204
                    void*** rcx_266 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_205 = &rcx_266[6]
                    
                    if (rax_205 u> *(arg1 + 0x38))
                        sub_140b0e3d0(&arg1[0x30], 0x38)
                        rcx_266 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_205 = &rcx_266[6]
                    
                    *(arg1 + 0x30) = rax_205
                    void**** rax_206 = *(arg1 + 8)
                    r12_13 += 1
                    *(arg1 + 0x14) += 1
                    r15_1 += 0xc8
                    *rax_206 = rcx_266
                    *(arg1 + 8) = &rcx_266[1]
                    rcx_266[1] = 0
                    *rcx_266 = &data_142da7798
                    rcx_266[2].d = 1
                    rcx_266[3] = rdi_72
                    rcx_266[4].d = 2
                    *(rcx_266 + 0x24) = 3
                    rcx_266[5] = 0
                    rax_202 = *(r13_2 + 8)
                while (r12_13 s< rax_202)
                
                rbx_4 = var_278_1
                r15_1 = 0
            
            int32_t rcx_270
            
            if (var_290_1 != 0)
                rcx_270 = rax_202
            
            if (var_290_1 == 0 || data_1439b5bec == 0)
                int32_t r12_14 = 0
                rcx_270 = rax_202
                
                if (rax_202 s> 0)
                    int64_t rdx_96 = 0
                    int64_t var_258_2 = 0
                    
                    do
                        void* r15_15 = *r13_2 + rdx_96
                        int32_t i_3 = 0
                        
                        if (*(r15_15 + 0xb8) s> 0)
                            int64_t rdi_75 = 0
                            
                            do
                                void* rax_208 = *(r15_15 + 0xb0)
                                void* rdx_97 = r15_15 + 0x28
                                
                                if (rax_208 != 0)
                                    rdx_97 = rax_208
                                
                                void* rdx_98 = rdx_97 + rdi_75
                                
                                if ((*(rdx_98 + 0x28) & 2) != 0)
                                    var_2e0_2.q = var_2b0
                                    arg5, arg4, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1 =
                                        sub_14111f960(arg2 + 0x50d8, arg1, arg3, arg2, zmm10_1, 
                                        var_2e0_2, r15_15, r12_14, rdx_98)
                                
                                i_3 += 1
                                rdi_75 += 0x2c
                            while (i_3 s< *(r15_15 + 0xb8))
                            
                            rdx_96 = var_258_2
                            r13_2 = var_250_1
                        
                        rcx_270 = *(r13_2 + 8)
                        rdx_96 += 0xc8
                        r12_14 += 1
                        var_258_2 = rdx_96
                    while (r12_14 s< rcx_270)
                    
                    rbx_4 = var_278_1
                    r15_1 = 0
            
            int32_t i_4 = 0
            
            if (rcx_270 s> 0)
                do
                    int64_t* rdi_78 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    int64_t rax_211 = *(*(*r13_2 + r15_1 + 0xc0) + 0x18)
                    void* rcx_273 = &rdi_78[1]
                    
                    if (rcx_273 u> *(arg1 + 0x38))
                        sub_140b0e3d0(&arg1[0x30], 0x10)
                        rdi_78 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rcx_273 = &rdi_78[1]
                    
                    *(arg1 + 0x30) = rcx_273
                    *rdi_78 = rax_211
                    void*** rcx_277 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_212 = &rcx_277[6]
                    
                    if (rax_212 u> *(arg1 + 0x38))
                        sub_140b0e3d0(&arg1[0x30], 0x38)
                        rcx_277 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_212 = &rcx_277[6]
                    
                    *(arg1 + 0x30) = rax_212
                    void**** rax_213 = *(arg1 + 8)
                    i_4 += 1
                    *(arg1 + 0x14) += 1
                    r15_1 += 0xc8
                    *rax_213 = rcx_277
                    *(arg1 + 8) = &rcx_277[1]
                    rcx_277[1] = 0
                    *rcx_277 = &data_142da7798
                    rcx_277[2].d = 1
                    rcx_277[3] = rdi_78
                    rcx_277[4].d = 0
                    *(rcx_277 + 0x24) = 1
                    rcx_277[5] = 0
                while (i_4 s< *(r13_2 + 8))
                
                rbx_4 = var_278_1
                r15_1 = 0
            
            if (*(arg1 + 0x8c) != rbx_4)
                bool cond:7_1 = *(arg1 + 0x14) u> 0
                *(arg1 + 0x8c) = rbx_4
                
                if (cond:7_1)
                    void*** rdx_103 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_216 = &rdx_103[3]
                    
                    if (rax_216 u> *(arg1 + 0x38))
                        sub_140b0e3d0(&arg1[0x30], 0x20)
                        rdx_103 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_216 = &rdx_103[3]
                    
                    *(arg1 + 0x30) = rax_216
                    int64_t* rax_217 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_217 = rdx_103
                    int32_t rax_218 = *(arg1 + 0x8c)
                    *(arg1 + 8) = &rdx_103[1]
                    rdx_103[1] = 0
                    *rdx_103 = &data_142f11588
                    rdx_103[2].d = rax_218
                else
                    *(arg1 + 0x90) = rbx_4
            
            rdi = var_2b0
            result = zx.q(var_290_1 + 1)
            var_290_1 = result.d
        while (result.d s< 2)
        
        if (data_143f0f1c7 != 0)
            result = data_143ed2e18
            
            if (*(result + 4) != 0)
                sub_141123c80(&data_143e585c0)
                sub_141123d20(&data_1439b5ef8)
                result = sub_141123d20(&data_1439b5f18)

if (data_143e5f630 != 0 && *(rdi + 0x20) s> 0)
    result = sub_141137c10(arg1, rdi, arg5, arg4)

__security_check_cookie(rax_1 ^ &var_308)
return result
