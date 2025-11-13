// 函数: sub_142339050
// 地址: 0x142339050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168

if ((*(arg1 + 0xa8) & 1) != 0)
    sub_1423e0c40(arg1 + 0x28, *(arg1 + 0x98), *(arg1 + 0x9c))

int64_t rsi = 0
*(arg1 + 0x294) = 0
int64_t* r15 = *(data_143e29f28 + 0x20)
int32_t var_108 = *(arg1 + 0x98)
int32_t result_1 = *(arg1 + 0x9c)
int32_t result

if (*(arg1 + 0x26f) != 0 || *(arg1 + 0x270) != 0)
    int64_t rax_11 = *(arg1 - 0x10)
    *(arg1 + 0x2e0) = 1
    int64_t* var_d8_1
    
    if ((*(rax_11 + 0x198))(arg1 - 0x10) == 0)
        var_d8_1 = nullptr
    else
        int64_t* rcx_8 = *(data_143f5b298 + 0xaf8)
        
        if (rcx_8 == 0)
            var_d8_1 = nullptr
        else if ((*(*rcx_8 + 0x10))(rcx_8) == 0)
            var_d8_1 = nullptr
        else
            int64_t* rcx_9 = *(data_143f5b298 + 0xaf8)
            int64_t* rax_18 = (*(*rcx_9 + 0xb8))(rcx_9)
            var_d8_1 = rax_18
            
            if (rax_18 != 0)
                (*(*rax_18 + 0x10))(rax_18, arg1 - 0x10, &var_108, &result_1)
                int64_t rdx_6 = *rax_18
                *(arg1 + 0x2e0) = (*(rdx_6 + 0x30))(rax_18, rdx_6)
    
    int32_t i = *(arg1 + 0x2a8)
    int32_t r13_1 = 0
    
    if (i s> 0)
        int64_t* r14_4 = nullptr
        
        do
            if (*(r14_4 + *(arg1 + 0x2a0)) == 0)
                void*** rax_21 = j_sub_140a82f30(0x28)
                void*** rdi_2 = rax_21
                
                if (rax_21 == 0)
                    rdi_2 = nullptr
                else
                    rax_21[1] = 0
                    rax_21[3].d = 0xffffffff
                    *(rax_21 + 0x1c) = 4
                    *rdi_2 = &data_1432381b8
                    rdi_2[2] = &data_1432381d8
                    int64_t var_c0 = 0
                    rdi_2[4] = 0
                    sub_1405d1550(&var_c0)
                
                *(r14_4 + *(arg1 + 0x2a0)) = rdi_2
            
            int64_t rax_23 = *(arg1 + 0x2b0)
            int64_t* rdi_3 = *(r14_4 + rax_23)
            *(r14_4 + rax_23) = 0
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    char rax_25
                    
                    if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
                        rax_25 = sub_1405949a0()
                    
                    if (rdi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_25 != 0))
                        (**rdi_3)(rdi_3, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rdi_3 + 0xc))
                            *(rdi_3 + 0xc) = 1
                            z_1 = true
                        else
                            *(rdi_3 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_27 = sub_140a20af0()
                            void* const rax_28
                            
                            if (rax_27 != 0)
                                rax_28 = *((zx.q(rax_27 u>> 0xe) << 3) + &data_143cf0bf8)
                                    + (zx.q(rax_27) & 0x3fff) * 0x18
                            else
                                rax_28 = nullptr
                            
                            *(rax_28 + 8) = rdi_3
                            sub_1405a42f0(&data_143f02390, rax_27)
            
            int64_t rax_31 = *(arg1 + 0x2c0)
            int64_t* rdi_4 = *(r14_4 + rax_31)
            *(r14_4 + rax_31) = 0
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    char rax_33
                    
                    if (rdi_4[2].b == 0 && data_143f0f1d0 == 0)
                        rax_33 = sub_1405949a0()
                    
                    if (rdi_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_33 != 0))
                        (**rdi_4)(rdi_4, 1)
                    else
                        bool z_2
                        
                        if (0 == *(rdi_4 + 0xc))
                            *(rdi_4 + 0xc) = 1
                            z_2 = true
                        else
                            *(rdi_4 + 0xc)
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_35 = sub_140a20af0()
                            void* const rax_36
                            
                            if (rax_35 != 0)
                                rax_36 = *((zx.q(rax_35 u>> 0xe) << 3) + &data_143cf0bf8)
                                    + (zx.q(rax_35) & 0x3fff) * 0x18
                            else
                                rax_36 = nullptr
                            
                            *(rax_36 + 8) = rdi_4
                            sub_1405a42f0(&data_143f02390, rax_35)
            
            i = *(arg1 + 0x2a8)
            r13_1 += 1
            r14_4 = &r14_4[1]
        while (r13_1 s< i)
    
    int32_t rax_39 = *(arg1 + 0x2e0)
    
    if (i s< rax_39)
        do
            void*** rax_40 = j_sub_140a82f30(0x28)
            void*** rdi_5 = rax_40
            
            if (rax_40 == 0)
                rdi_5 = nullptr
            else
                rax_40[1] = 0
                rax_40[3].d = 0xffffffff
                *(rax_40 + 0x1c) = 4
                *rax_40 = &data_1432381b8
                rdi_5[2] = &data_1432381d8
                int64_t var_b8 = 0
                rdi_5[4] = 0
                sub_1405d1550(&var_b8)
            
            int64_t r14_5 = sx.q(*(arg1 + 0x2a8))
            int32_t rax_41 = (r14_5 + 1).d
            *(arg1 + 0x2a8) = rax_41
            
            if (rax_41 s> *(arg1 + 0x2ac))
                sub_1405a4d70(arg1 + 0x2a0)
            
            *(*(arg1 + 0x2a0) + (r14_5 << 3)) = rdi_5
            int64_t rdi_6 = sx.q(*(arg1 + 0x2b8))
            int32_t rax_42 = (rdi_6 + 1).d
            *(arg1 + 0x2b8) = rax_42
            
            if (rax_42 s> *(arg1 + 0x2bc))
                sub_1405a4d70(arg1 + 0x2b0)
            
            *(*(arg1 + 0x2b0) + (rdi_6 << 3)) = 0
            int64_t rdi_7 = sx.q(*(arg1 + 0x2c8))
            int32_t rax_43 = (rdi_7 + 1).d
            *(arg1 + 0x2c8) = rax_43
            
            if (rax_43 s> *(arg1 + 0x2cc))
                sub_1405a4d70(arg1 + 0x2c0)
            
            i += 1
            *(*(arg1 + 0x2c0) + (rdi_7 << 3)) = 0
        while (i s< *(arg1 + 0x2e0))
    else if (i s> rax_39)
        int64_t rdi_8 = sx.q(*(arg1 + 0x2a8))
        
        if (rax_39 s> rdi_8.d)
            *(arg1 + 0x2a8) = rax_39
            
            if (rax_39 s> *(arg1 + 0x2ac))
                sub_1405a4d70(arg1 + 0x2a0)
            
            memset(*(arg1 + 0x2a0) + (rdi_8 << 3), 0, sx.q(rax_39 - rdi_8.d) << 3)
        else if (rax_39 s< rdi_8.d && rax_39 != rdi_8.d)
            *(arg1 + 0x2a8) = rax_39
            sub_1405c53d0(arg1 + 0x2a0)
        
        int32_t rdx_17 = *(arg1 + 0x2e0)
        int64_t rdi_9 = sx.q(*(arg1 + 0x2b8))
        
        if (rdx_17 s> rdi_9.d)
            *(arg1 + 0x2b8) = rdx_17
            int32_t r15_5 = rdx_17 - rdi_9.d
            
            if (rdx_17 s> *(arg1 + 0x2bc))
                sub_1405a4d70(arg1 + 0x2b0)
            
            if (r15_5 != 0)
                __builtin_memset(*(arg1 + 0x2b0) + (rdi_9 << 3), 0, zx.q(r15_5) << 3)
        else if (rdx_17 s< rdi_9.d)
            sub_142344780(arg1 + 0x2b0, rdx_17, rdi_9.d - rdx_17, 1)
        
        int32_t rdx_19 = *(arg1 + 0x2e0)
        int64_t rdi_12 = sx.q(*(arg1 + 0x2c8))
        
        if (rdx_19 s> rdi_12.d)
            *(arg1 + 0x2c8) = rdx_19
            int32_t r15_7 = rdx_19 - rdi_12.d
            
            if (rdx_19 s> *(arg1 + 0x2cc))
                sub_1405a4d70(arg1 + 0x2c0)
            
            if (r15_7 != 0)
                __builtin_memset(*(arg1 + 0x2c0) + (rdi_12 << 3), 0, zx.q(r15_7) << 3)
        else if (rdx_19 s< rdi_12.d)
            sub_142344780(arg1 + 0x2c0, rdx_19, rdi_12.d - rdx_19, 1)
    
    TEB* gsbase
    
    if (data_143f59128
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f59128)
        
        if (data_143f59128 == 0xffffffff)
            int64_t* rcx_82 = data_143db18d0
            
            if (rcx_82 == 0)
                sub_140a53c40()
                rcx_82 = data_143db18d0
            
            int64_t r8_13
            r8_13.b = 1
            int64_t* rax_102 = (*(*rcx_82 + 0xb0))(rcx_82, u"r.DefaultBackBufferPixelFormat", r8_13)
            int64_t rax_100
            
            if (rax_102 == 0)
                rax_100 = 0
            else
                int64_t rdx_38 = *rax_102
                rax_100 = (*(rdx_38 + 0x58))(rax_102, rdx_38)
            
            data_143f59120 = rax_100
            _Init_thread_footer(&data_143f59128)
    
    char rax_49 = sub_1419800b0(zx.q(sub_142295d40(sub_14229df30(*(data_143f59120 + 4)))))
    int128_t zmm1 = data_143dbb1e0
    int32_t i_1 = *(arg1 + 0x2e0)
    char rdi_15 = rax_49
    int32_t rdx_22 = (1 << (data_1439c7a34).b) - 1
    int128_t var_78 = zx.o(0)
    int32_t r14_9 = 0
    int32_t var_68_1 = 1
    int32_t var_54_1 = rdx_22
    char var_50_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    void* var_e8 = nullptr
    int64_t* var_f8 = nullptr
    int128_t var_64_1 = zmm1
    
    if (i_1 s> 0)
        int64_t r13_2 = 0
        
        do
            int32_t var_118
            
            if (var_d8_1 == 0)
            label_14233973f:
                int64_t* rcx_47 = data_143f0f180
                int64_t* var_e0
                (*(*rcx_47 + 0x560))(rcx_47, &var_e0, &data_143f02b98, zx.q(var_108), result_1, 
                    rax_49, 1, 1, 9, &var_78, var_118)
                int64_t* rdi_17 = var_f8
                var_f8 = var_e0
                var_e0 = nullptr
                
                if (rdi_17 != 0)
                    rdi_17[1].d -= 1
                    
                    if (rdi_17[1].d == 1)
                        char rax_56
                        
                        if (rdi_17[2].b == 0 && data_143f0f1d0 == 0)
                            rax_56 = sub_1405949a0()
                        
                        if (rdi_17[2].b != 0 || (data_143f0f1d0 == 0 && rax_56 != 0))
                            (**rdi_17)(rdi_17, 1)
                        else
                            bool z_3
                            
                            if (0 == *(rdi_17 + 0xc))
                                *(rdi_17 + 0xc) = 1
                                z_3 = true
                            else
                                *(rdi_17 + 0xc)
                                z_3 = false
                            
                            if (z_3)
                                int32_t rax_58 = sub_140a20af0()
                                uint64_t rdx_25 = zx.q(rax_58)
                                void* const rax_59
                                
                                if (rax_58 != 0)
                                    rax_59 = *((rdx_25 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_25.d) & 0x3fff) * 0x18
                                else
                                    rax_59 = nullptr
                                
                                *(rax_59 + 8) = rdi_17
                                sub_1405a42f0(&data_143f02390, rdx_25.d)
                
                sub_1405d16e0(&var_e8, var_f8)
                sub_1405d1550(&var_e0)
            else
                var_118 = 1
                int32_t var_128
                var_128.q = &var_e8
                char var_140
                var_140.d = 1
                int32_t var_148
                var_148.b = rdi_15
                
                if ((*(*var_d8_1 + 0x38))(var_d8_1, zx.q(r14_9), zx.q(var_108), zx.q(result_1), 
                        var_148, var_140, 0, 1, var_128, &var_f8, var_118) == 0)
                    goto label_14233973f
            int64_t rdi_18 = sx.q(r14_9)
            sub_1405d16e0(*(arg1 + 0x2b0) + (rdi_18 << 3), var_e8)
            sub_1405d16e0(*(arg1 + 0x2c0) + (rdi_18 << 3), var_f8)
            int64_t* rdi_19 = *(arg1 + 0x2a0)
            
            if (*(rdi_19 + r13_2) != 0)
                void* rcx_56 = **(arg1 + 0x2c0)
                void* var_b0 = rcx_56
                
                if (rcx_56 != 0)
                    *(rcx_56 + 8) += 1
                    rdi_19 = *(arg1 + 0x2a0)
                
                sub_142376dc0(*(rdi_19 + r13_2), &var_b0, var_108, result_1)
            
            i_1 = *(arg1 + 0x2e0)
            r14_9 += 1
            rdi_15 = rax_49
            r13_2 += 8
        while (r14_9 s< i_1)
    
    if (i_1 s< *(arg1 + 0x2a8))
        int64_t r14_10 = sx.q(i_1) << 3
        
        do
            void* rcx_58 = *(r14_10 + *(arg1 + 0x2a0))
            
            if (rcx_58 != 0)
                int64_t var_a8 = 0
                sub_142376dc0(rcx_58, &var_a8, 0, 0)
            
            int64_t rax_69 = *(arg1 + 0x2b0)
            int64_t* rdi_20 = *(r14_10 + rax_69)
            *(r14_10 + rax_69) = 0
            
            if (rdi_20 != 0)
                rdi_20[1].d -= 1
                
                if (rdi_20[1].d == 1)
                    char rax_71
                    
                    if (rdi_20[2].b == 0 && data_143f0f1d0 == 0)
                        rax_71 = sub_1405949a0()
                    
                    if (rdi_20[2].b != 0 || (data_143f0f1d0 == 0 && rax_71 != 0))
                        (**rdi_20)(rdi_20, 1)
                    else
                        bool z_4
                        
                        if (0 == *(rdi_20 + 0xc))
                            *(rdi_20 + 0xc) = 1
                            z_4 = true
                        else
                            *(rdi_20 + 0xc)
                            z_4 = false
                        
                        if (z_4)
                            int32_t rax_73 = sub_140a20af0()
                            uint64_t rdx_31 = zx.q(rax_73)
                            void* const rax_74
                            
                            if (rax_73 != 0)
                                rax_74 = *((rdx_31 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_31.d) & 0x3fff) * 0x18
                            else
                                rax_74 = nullptr
                            
                            *(rax_74 + 8) = rdi_20
                            sub_1405a42f0(&data_143f02390, rdx_31.d)
            
            int64_t rax_79 = *(arg1 + 0x2c0)
            int64_t* rdi_21 = *(r14_10 + rax_79)
            *(r14_10 + rax_79) = 0
            
            if (rdi_21 != 0)
                rdi_21[1].d -= 1
                
                if (rdi_21[1].d == 1)
                    char rax_81
                    
                    if (rdi_21[2].b == 0 && data_143f0f1d0 == 0)
                        rax_81 = sub_1405949a0()
                    
                    if (rdi_21[2].b != 0 || (data_143f0f1d0 == 0 && rax_81 != 0))
                        (**rdi_21)(rdi_21, 1)
                    else
                        bool z_5
                        
                        if (0 == *(rdi_21 + 0xc))
                            *(rdi_21 + 0xc) = 1
                            z_5 = true
                        else
                            *(rdi_21 + 0xc)
                            z_5 = false
                        
                        if (z_5)
                            int32_t rax_83 = sub_140a20af0()
                            uint64_t rdx_32 = zx.q(rax_83)
                            void* const rax_84
                            
                            if (rax_83 != 0)
                                rax_84 = *((rdx_32 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_32.d) & 0x3fff) * 0x18
                            else
                                rax_84 = nullptr
                            
                            *(rax_84 + 8) = rdi_21
                            sub_1405a42f0(&data_143f02390, rdx_32.d)
            
            i_1 += 1
            r14_10 += 8
        while (i_1 s< *(arg1 + 0x2a8))
    
    *(arg1 + 0x2e4) = 0
    *(arg1 + 0x2a8)
    *(arg1 + 0x2e8) = mods.dp.d(0:1, *(arg1 + 0x2a8))
    sub_1405d16e0(arg1 - 8, **(arg1 + 0x2c0))
    sub_1405d1550(&var_f8)
    result = sub_1405d1550(&var_e8)
else
    if (*(arg1 + 0x2a8) == 0)
        int64_t r14_1 = sx.q(*(arg1 + 0x2a8))
        int32_t rax_5 = (r14_1 + 1).d
        *(arg1 + 0x2a8) = rax_5
        
        if (rax_5 s> *(arg1 + 0x2ac))
            sub_1405a4d70(arg1 + 0x2a0)
        
        *(*(arg1 + 0x2a0) + (r14_1 << 3)) = 0
        int64_t r14_2 = sx.q(*(arg1 + 0x2b8))
        int32_t rax_7 = (r14_2 + 1).d
        *(arg1 + 0x2b8) = rax_7
        
        if (rax_7 s> *(arg1 + 0x2bc))
            sub_1405a4d70(arg1 + 0x2b0)
        
        int64_t rax_8 = *(arg1 + 0x2b0)
        int64_t var_d0 = 0
        *(rax_8 + (r14_2 << 3)) = 0
        sub_1405d1550(&var_d0)
        int64_t r14_3 = sx.q(*(arg1 + 0x2c8))
        int32_t rax_9 = (r14_3 + 1).d
        *(arg1 + 0x2c8) = rax_9
        
        if (rax_9 s> *(arg1 + 0x2cc))
            sub_1405a4d70(arg1 + 0x2c0)
        
        int64_t rax_10 = *(arg1 + 0x2c0)
        int64_t var_c8 = 0
        *(rax_10 + (r14_3 << 3)) = 0
        sub_1405d1550(&var_c8)
    
    *(arg1 + 0x2e0) = 1
    result = sub_1405d16e0(arg1 - 8, nullptr)
    *(arg1 + 0x2e4) = 0

int64_t* rdi_22 = *(arg1 + 0x240)
int64_t* r14_11 = rdi_22

if (rdi_22 != 0)
    result = rdi_22[1].d
    
    if (result != 0)
        rdi_22[1].d = result + 1
        result.b = 1
    
    if (result.b == 0)
        rdi_22 = nullptr
        r14_11 = nullptr

if (r14_11 != 0)
    rsi = *(arg1 + 0x238)

if (rdi_22 != 0)
    rdi_22[1].d += 1

if (r14_11 != 0)
    r14_11[1].d -= 1
    
    if (r14_11[1].d == 1)
        result = (**r14_11)(r14_11)
        int32_t temp9_1 = *(r14_11 + 0xc)
        *(r14_11 + 0xc) -= 1
        
        if (temp9_1 == 1)
            result = (*(*r14_11 + 8))(r14_11, 1)

if (rsi != 0)
    int64_t* rcx_72 = data_143e29f28
    
    if (rdi_22 != 0)
        rdi_22[1].d += 1
    
    int64_t var_98 = rsi
    int64_t* var_90_1 = rdi_22
    
    if (rdi_22 != 0)
        rdi_22[1].d += 1
    
    int64_t var_88
    (*(*rcx_72 + 0x28))(rcx_72, &var_88, &var_98)
    
    if (rdi_22 != 0)
        rdi_22[1].d -= 1
        
        if (rdi_22[1].d == 1)
            (**rdi_22)(rdi_22)
            int32_t temp13_1 = *(rdi_22 + 0xc)
            *(rdi_22 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rdi_22 + 8))(rdi_22, 1)
    
    result = sub_14234d280(arg1 - 0x18, r15, var_88)
    
    if (*(arg1 + 0x26f) != 0 || *(arg1 + 0x270) != 0)
        *(arg1 + 0x294) = var_108
        result = result_1
        *(arg1 + 0x298) = result
    
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            result = (**var_80)(var_80)
            int32_t temp15_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (temp15_1 == 1)
                result = (*(*var_80 + 8))(var_80, 1)

if (rdi_22 != 0)
    rdi_22[1].d -= 1
    
    if (rdi_22[1].d == 1)
        result = (**rdi_22)(rdi_22)
        int32_t temp11_1 = *(rdi_22 + 0xc)
        *(rdi_22 + 0xc) -= 1
        
        if (temp11_1 == 1)
            result = (*(*rdi_22 + 8))(rdi_22, 1)

__security_check_cookie(rax_1 ^ &var_168)
return result
