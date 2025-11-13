// 函数: sub_142066820
// 地址: 0x142066820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t var_200 = 0
int64_t var_1f8 = 0
uint64_t var_1a0 = 0
int64_t rsi = 0
int32_t var_198 = 0
int32_t r14 = 0
int64_t var_1b0 = 0
int32_t r12 = 0
int32_t var_1a8 = 0
uint64_t r15 = 0
int64_t var_1c0 = 0
int32_t var_1b8 = 0
int32_t rbx = 0x3819ffe4
int128_t var_e8 = zx.o(0)
int32_t rcx = (*U"1111")[sx.q(arg3)]
int32_t var_130 = rcx
int128_t var_190
__builtin_memset(&var_190, 0, 0x60)
char var_218_1
int128_t var_180
int128_t var_170
int128_t var_160
int128_t var_150
int128_t var_140

if (sub_14076f990(rcx) == 0)
    var_218_1 = r15.b
else
    if (arg2 s> 0)
        sub_1405dadb0(&var_200, arg2)
        r12 = var_1f8:4.d
        r14 = var_1f8.d
        rsi = var_200
    
    int32_t rdi_1 = arg2 + r14
    var_1f8.d = rdi_1
    
    if (rdi_1 s> r12)
        sub_1405a4cf0(&var_200)
        rdi_1 = var_1f8.d
        rsi = var_200
    
    int64_t r12_1 = sx.q(arg2)
    
    if (r12_1.d s> 0)
        int64_t rax_4 = 0
        
        do
            rbx = rbx * 0xbb38435 + 0x3619636b
            *(rsi + (rax_4 << 2)) = rbx
            rax_4 += 1
        while (rax_4 s< r12_1)
    
    if (rdi_1 != 0)
        sub_1405c4a90(&var_1a0, rdi_1, 0)
        r15 = var_1a0
        memcpy(r15, rsi, rdi_1 << 2)
    
    sub_1414f01a0(r15, rdi_1)
    r15 = zx.q((r12_1 << 2).d)
    int128_t* var_220_2
    int128_t zmm1_1
    
    for (int64_t i = 0; i s< 2; i += 1)
        zmm1_1 = data_143dbb1e0
        int128_t var_88
        int128_t* var_220_1 = &var_88
        int64_t* rcx_7 = data_143f0f180
        int32_t rax_6 = (1 << (data_1439c7a34).b) - 1
        int32_t var_78_1 = 1
        var_88 = zx.o(0)
        int128_t var_74_1 = zmm1_1
        int32_t var_64_1 = rax_6
        char var_60_1 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        int64_t* var_1f0
        (*(*rcx_7 + 0x498))(rcx_7, &var_1f0, arg1, zx.q(r15.d), 0x209, var_220_1)
        void* rdi_2 = &var_140 + (i << 3)
        
        if (rdi_2 == &var_1f0)
        label_142066acd:
            int64_t* rbx_3 = var_1f0
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    char rax_19
                    
                    if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                        rax_19 = sub_1405949a0()
                    
                    if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_19 != 0))
                        (**rbx_3)(rbx_3, 1)
                    else
                        bool z_2
                        
                        if (0 == *(rbx_3 + 0xc))
                            *(rbx_3 + 0xc) = 1
                            z_2 = true
                        else
                            *(rbx_3 + 0xc)
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_21 = sub_140a20af0()
                            uint64_t rdx_7 = zx.q(rax_21)
                            void* const rax_22
                            
                            if (rax_21 != 0)
                                rax_22 = *((rdx_7 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_7.d) & 0x3fff) * 0x18
                            else
                                rax_22 = nullptr
                            
                            *(rax_22 + 8) = rbx_3
                            sub_1405a42f0(&data_143f02390, rdx_7.d)
        else
            int64_t* rbx_2 = *rdi_2
            *rdi_2 = var_1f0
            var_1f0 = nullptr
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    char rax_10
                    
                    if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_10 = sub_1405949a0()
                    
                    if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
                        (**rbx_2)(rbx_2, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_2 + 0xc))
                            *(rbx_2 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_2 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_12 = sub_140a20af0()
                            uint64_t rdx_6 = zx.q(rax_12)
                            void* const rax_13
                            
                            if (rax_12 != 0)
                                rax_13 = *((rdx_6 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                            else
                                rax_13 = nullptr
                            
                            *(rax_13 + 8) = rbx_2
                            sub_1405a42f0(&data_143f02390, rdx_6.d)
                
                goto label_142066acd
        
        int64_t* rcx_16 = data_143f0f180
        int64_t rdi_3 = *rdi_2
        var_220_1.b = 0x1c
        int64_t* var_1e8
        (*(*rcx_16 + 0x4b8))(rcx_16, &var_1e8, arg1, rdi_3, 4, var_220_1)
        void* rcx_17 = &var_160 + (i << 3)
        
        if (rcx_17 == &var_1e8)
        label_142066c41:
            int64_t* rbx_5 = var_1e8
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    char rax_39
                    
                    if (rbx_5[2].b == 0 && data_143f0f1d0 == 0)
                        rax_39 = sub_1405949a0()
                    
                    if (rbx_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_39 != 0))
                        (**rbx_5)(rbx_5, 1)
                    else
                        bool z_4
                        
                        if (0 == *(rbx_5 + 0xc))
                            *(rbx_5 + 0xc) = 1
                            z_4 = true
                        else
                            *(rbx_5 + 0xc)
                            z_4 = false
                        
                        if (z_4)
                            int32_t rax_41 = sub_140a20af0()
                            uint64_t rdx_10 = zx.q(rax_41)
                            void* const rax_42
                            
                            if (rax_41 != 0)
                                rax_42 = *((rdx_10 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_10.d) & 0x3fff) * 0x18
                            else
                                rax_42 = nullptr
                            
                            *(rax_42 + 8) = rbx_5
                            sub_1405a42f0(&data_143f02390, rdx_10.d)
        else
            int64_t* rbx_4 = *rcx_17
            *rcx_17 = var_1e8
            var_1e8 = nullptr
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    char rax_30
                    
                    if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                        rax_30 = sub_1405949a0()
                    
                    if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_30 != 0))
                        (**rbx_4)(rbx_4, 1)
                    else
                        bool z_3
                        
                        if (0 == *(rbx_4 + 0xc))
                            *(rbx_4 + 0xc) = 1
                            z_3 = true
                        else
                            *(rbx_4 + 0xc)
                            z_3 = false
                        
                        if (z_3)
                            int32_t rax_32 = sub_140a20af0()
                            uint64_t rdx_9 = zx.q(rax_32)
                            void* const rax_33
                            
                            if (rax_32 != 0)
                                rax_33 = *((rdx_9 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                            else
                                rax_33 = nullptr
                            
                            *(rax_33 + 8) = rbx_4
                            sub_1405a42f0(&data_143f02390, rdx_9.d)
                
                goto label_142066c41
        
        int64_t* rcx_26 = data_143f0f180
        int32_t var_228_2
        var_228_2.b = 0x1c
        int64_t* var_1e0
        (*(*rcx_26 + 0x590))(rcx_26, &var_1e0, arg1, rdi_3, var_228_2)
        void* rcx_27 = &var_180 + (i << 3)
        
        if (rcx_27 == &var_1e0)
        label_142066daa:
            int64_t* rbx_7 = var_1e0
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    char rax_59
                    
                    if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
                        rax_59 = sub_1405949a0()
                    
                    if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_59 != 0))
                        (**rbx_7)(rbx_7, 1)
                    else
                        bool z_6
                        
                        if (0 == *(rbx_7 + 0xc))
                            *(rbx_7 + 0xc) = 1
                            z_6 = true
                        else
                            *(rbx_7 + 0xc)
                            z_6 = false
                        
                        if (z_6)
                            int32_t rax_61 = sub_140a20af0()
                            uint64_t rdx_13 = zx.q(rax_61)
                            void* const rax_62
                            
                            if (rax_61 != 0)
                                rax_62 = *((rdx_13 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_13.d) & 0x3fff) * 0x18
                            else
                                rax_62 = nullptr
                            
                            *(rax_62 + 8) = rbx_7
                            sub_1405a42f0(&data_143f02390, rdx_13.d)
        else
            int64_t* rbx_6 = *rcx_27
            *rcx_27 = var_1e0
            var_1e0 = nullptr
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    char rax_50
                    
                    if (rbx_6[2].b == 0 && data_143f0f1d0 == 0)
                        rax_50 = sub_1405949a0()
                    
                    if (rbx_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_50 != 0))
                        (**rbx_6)(rbx_6, 1)
                    else
                        bool z_5
                        
                        if (0 == *(rbx_6 + 0xc))
                            *(rbx_6 + 0xc) = 1
                            z_5 = true
                        else
                            *(rbx_6 + 0xc)
                            z_5 = false
                        
                        if (z_5)
                            int32_t rax_52 = sub_140a20af0()
                            uint64_t rdx_12 = zx.q(rax_52)
                            void* const rax_53
                            
                            if (rax_52 != 0)
                                rax_53 = *((rdx_12 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_12.d) & 0x3fff) * 0x18
                            else
                                rax_53 = nullptr
                            
                            *(rax_53 + 8) = rbx_6
                            sub_1405a42f0(&data_143f02390, rdx_12.d)
                
                goto label_142066daa
        
        int64_t* rcx_36 = data_143f0f180
        int64_t* var_1d8
        (*(*rcx_36 + 0x498))(rcx_36, &var_1d8, arg1, zx.q(r15.d), 0x209, &var_88)
        void* rdi_4 = &var_150 + (i << 3)
        
        if (rdi_4 == &var_1d8)
        label_142066f22:
            int64_t* rbx_9 = var_1d8
            
            if (rbx_9 != 0)
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    char rax_79
                    
                    if (rbx_9[2].b == 0 && data_143f0f1d0 == 0)
                        rax_79 = sub_1405949a0()
                    
                    if (rbx_9[2].b != 0 || (data_143f0f1d0 == 0 && rax_79 != 0))
                        (**rbx_9)(rbx_9, 1)
                    else
                        bool z_8
                        
                        if (0 == *(rbx_9 + 0xc))
                            *(rbx_9 + 0xc) = 1
                            z_8 = true
                        else
                            *(rbx_9 + 0xc)
                            z_8 = false
                        
                        if (z_8)
                            int32_t rax_81 = sub_140a20af0()
                            uint64_t rdx_16 = zx.q(rax_81)
                            void* const rax_82
                            
                            if (rax_81 != 0)
                                rax_82 = *((rdx_16 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_16.d) & 0x3fff) * 0x18
                            else
                                rax_82 = nullptr
                            
                            *(rax_82 + 8) = rbx_9
                            sub_1405a42f0(&data_143f02390, rdx_16.d)
        else
            int64_t* rbx_8 = *rdi_4
            *rdi_4 = var_1d8
            var_1d8 = nullptr
            
            if (rbx_8 != 0)
                rbx_8[1].d -= 1
                
                if (rbx_8[1].d == 1)
                    char rax_70
                    
                    if (rbx_8[2].b == 0 && data_143f0f1d0 == 0)
                        rax_70 = sub_1405949a0()
                    
                    if (rbx_8[2].b != 0 || (data_143f0f1d0 == 0 && rax_70 != 0))
                        (**rbx_8)(rbx_8, 1)
                    else
                        bool z_7
                        
                        if (0 == *(rbx_8 + 0xc))
                            *(rbx_8 + 0xc) = 1
                            z_7 = true
                        else
                            *(rbx_8 + 0xc)
                            z_7 = false
                        
                        if (z_7)
                            int32_t rax_72 = sub_140a20af0()
                            uint64_t rdx_15 = zx.q(rax_72)
                            void* const rax_73
                            
                            if (rax_72 != 0)
                                rax_73 = *((rdx_15 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_15.d) & 0x3fff) * 0x18
                            else
                                rax_73 = nullptr
                            
                            *(rax_73 + 8) = rbx_8
                            sub_1405a42f0(&data_143f02390, rdx_15.d)
                
                goto label_142066f22
        
        int64_t* rcx_45 = data_143f0f180
        int64_t rdi_5 = *rdi_4
        var_220_2.b = 0x1c
        int64_t* var_1d0
        (*(*rcx_45 + 0x4b8))(rcx_45, &var_1d0, arg1, rdi_5, 4, var_220_2)
        void* rcx_46 = &var_170 + (i << 3)
        
        if (rcx_46 == &var_1d0)
        label_142067096:
            int64_t* rbx_11 = var_1d0
            
            if (rbx_11 != 0)
                rbx_11[1].d -= 1
                
                if (rbx_11[1].d == 1)
                    char rax_99
                    
                    if (rbx_11[2].b == 0 && data_143f0f1d0 == 0)
                        rax_99 = sub_1405949a0()
                    
                    if (rbx_11[2].b != 0 || (data_143f0f1d0 == 0 && rax_99 != 0))
                        (**rbx_11)(rbx_11, 1)
                    else
                        bool z_10
                        
                        if (0 == *(rbx_11 + 0xc))
                            *(rbx_11 + 0xc) = 1
                            z_10 = true
                        else
                            *(rbx_11 + 0xc)
                            z_10 = false
                        
                        if (z_10)
                            int32_t rax_101 = sub_140a20af0()
                            uint64_t rdx_19 = zx.q(rax_101)
                            void* const rax_102
                            
                            if (rax_101 != 0)
                                rax_102 = *((rdx_19 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_19.d) & 0x3fff) * 0x18
                            else
                                rax_102 = nullptr
                            
                            *(rax_102 + 8) = rbx_11
                            sub_1405a42f0(&data_143f02390, rdx_19.d)
        else
            int64_t* rbx_10 = *rcx_46
            *rcx_46 = var_1d0
            var_1d0 = nullptr
            
            if (rbx_10 != 0)
                rbx_10[1].d -= 1
                
                if (rbx_10[1].d == 1)
                    char rax_90
                    
                    if (rbx_10[2].b == 0 && data_143f0f1d0 == 0)
                        rax_90 = sub_1405949a0()
                    
                    if (rbx_10[2].b != 0 || (data_143f0f1d0 == 0 && rax_90 != 0))
                        (**rbx_10)(rbx_10, 1)
                    else
                        bool z_9
                        
                        if (0 == *(rbx_10 + 0xc))
                            *(rbx_10 + 0xc) = 1
                            z_9 = true
                        else
                            *(rbx_10 + 0xc)
                            z_9 = false
                        
                        if (z_9)
                            int32_t rax_92 = sub_140a20af0()
                            uint64_t rdx_18 = zx.q(rax_92)
                            void* const rax_93
                            
                            if (rax_92 != 0)
                                rax_93 = *((rdx_18 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_18.d) & 0x3fff) * 0x18
                            else
                                rax_93 = nullptr
                            
                            *(rax_93 + 8) = rbx_10
                            sub_1405a42f0(&data_143f02390, rdx_18.d)
                
                goto label_142067096
        
        int64_t* rcx_55 = data_143f0f180
        int32_t var_228_4
        var_228_4.b = 0x1c
        int64_t* var_1c8
        (*(*rcx_55 + 0x590))(rcx_55, &var_1c8, arg1, rdi_5, var_228_4)
        void* rcx_56 = &var_190 + (i << 3)
        
        if (rcx_56 == &var_1c8)
        label_1420671fa:
            int64_t* rbx_13 = var_1c8
            
            if (rbx_13 != 0)
                rbx_13[1].d -= 1
                
                if (rbx_13[1].d == 1)
                    char rax_119
                    
                    if (rbx_13[2].b == 0 && data_143f0f1d0 == 0)
                        rax_119 = sub_1405949a0()
                    
                    if (rbx_13[2].b != 0 || (data_143f0f1d0 == 0 && rax_119 != 0))
                        (**rbx_13)(rbx_13, 1)
                    else
                        bool z_12
                        
                        if (0 == *(rbx_13 + 0xc))
                            *(rbx_13 + 0xc) = 1
                            z_12 = true
                        else
                            *(rbx_13 + 0xc)
                            z_12 = false
                        
                        if (z_12)
                            int32_t rax_121 = sub_140a20af0()
                            uint64_t rdx_22 = zx.q(rax_121)
                            void* const rax_122
                            
                            if (rax_121 != 0)
                                rax_122 = *((rdx_22 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_22.d) & 0x3fff) * 0x18
                            else
                                rax_122 = nullptr
                            
                            *(rax_122 + 8) = rbx_13
                            sub_1405a42f0(&data_143f02390, rdx_22.d)
        else
            int64_t* rbx_12 = *rcx_56
            *rcx_56 = var_1c8
            var_1c8 = nullptr
            
            if (rbx_12 != 0)
                rbx_12[1].d -= 1
                
                if (rbx_12[1].d == 1)
                    char rax_110
                    
                    if (rbx_12[2].b == 0 && data_143f0f1d0 == 0)
                        rax_110 = sub_1405949a0()
                    
                    if (rbx_12[2].b != 0 || (data_143f0f1d0 == 0 && rax_110 != 0))
                        (**rbx_12)(rbx_12, 1)
                    else
                        bool z_11
                        
                        if (0 == *(rbx_12 + 0xc))
                            *(rbx_12 + 0xc) = 1
                            z_11 = true
                        else
                            *(rbx_12 + 0xc)
                            z_11 = false
                        
                        if (z_11)
                            int32_t rax_112 = sub_140a20af0()
                            uint64_t rdx_21 = zx.q(rax_112)
                            void* const rax_113
                            
                            if (rax_112 != 0)
                                rax_113 = *((rdx_21 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_21.d) & 0x3fff) * 0x18
                            else
                                rax_113 = nullptr
                            
                            *(rax_113 + 8) = rbx_12
                            sub_1405a42f0(&data_143f02390, rdx_21.d)
                
                goto label_1420671fa
    
    int64_t* rcx_65 = data_143f0f180
    var_220_2.d = 1
    uint32_t count = r15.d
    memcpy((*(*rcx_65 + 0x130))(rcx_65, arg1, var_140.q, 0, r15.d, var_220_2), var_200, count)
    int64_t* rcx_67 = data_143f0f180
    (*(*rcx_67 + 0x138))(rcx_67, arg1, var_140.q)
    int64_t* rcx_68 = data_143f0f180
    var_220_2.d = 1
    memcpy((*(*rcx_68 + 0x130))(rcx_68, arg1, var_150.q, 0, r15.d, var_220_2), var_200, count)
    int64_t* rcx_70 = data_143f0f180
    (*(*rcx_70 + 0x138))(rcx_70, arg1, var_150.q)
    int64_t rax_135 = var_170.q
    int64_t rax_136 = var_190.q
    int64_t var_120_1 = var_160:8.q
    int64_t var_110_1 = var_180:8.q
    zmm1_1 = var_180.q.o
    int64_t var_100_1 = var_170:8.q
    int64_t rax_140 = var_190:8.q
    int128_t var_d8 = var_160.q.o
    int64_t var_f0_1 = rax_140
    int128_t var_b8_1 = rax_135.o
    int128_t var_c8_1 = zmm1_1
    var_220_2.d = arg3
    int128_t var_a8_1 = rax_136.o
    int128_t var_98_1 = var_e8
    int64_t rbx_14 = sx.q(PDB1::OpenEx2W(arg1, &var_d8, 0, 0xffffffff, r12_1.d, var_220_2.d))
    
    if (r12_1.d s> 0)
        sub_1405dadb0(&var_1b0, r12_1.d)
    
    int32_t rcx_73 = r12_1.d + var_1a8
    var_1a8 = rcx_73
    
    if (rcx_73 s> 0)
        sub_1405a4cf0(&var_1b0)
    
    if (r12_1.d s> 0)
        sub_1405dadb0(&var_1c0, r12_1.d)
    
    int32_t rax_143 = r12_1.d + var_1b8
    var_1b8 = rax_143
    
    if (rax_143 s> 0)
        sub_1405a4cf0(&var_1c0)
    
    int64_t* rcx_77 = data_143f0f180
    int64_t rbx_15 = *(&var_140 + (rbx_14 << 3))
    var_220_2.d = 0
    int64_t rax_145 = (*(*rcx_77 + 0x130))(rcx_77, arg1, rbx_15, 0, r15.d, var_220_2)
    int64_t rsi_1 = var_1b0
    memcpy(rsi_1, rax_145, count)
    int64_t* rcx_79 = data_143f0f180
    (*(*rcx_79 + 0x138))(rcx_79, arg1, rbx_15)
    int64_t* rcx_80 = data_143f0f180
    int64_t rbx_16 = *(&var_150 + (rbx_14 << 3))
    var_220_2.d = 0
    int64_t rax_148 = (*(*rcx_80 + 0x130))(rcx_80, arg1, rbx_16, 0, r15.d, var_220_2)
    int64_t rdi_7 = var_1c0
    memcpy(rdi_7, rax_148, count)
    int64_t* rcx_82 = data_143f0f180
    (*(*rcx_82 + 0x138))(rcx_82, arg1, rbx_16)
    int32_t r9_7 = 0
    var_218_1 = 1
    
    if (r12_1.d s> 0)
        uint64_t rax_150 = var_1a0
        int64_t rcx_83 = 0
        int64_t rdi_8 = rdi_7 - rax_150
        
        while (true)
            int32_t r8_21 = *rax_150
            int32_t* rdx_40 = rdi_8 + rax_150
            
            if (*(rdx_40 + rsi_1 - rdi_7) != r8_21 || *rdx_40 != r8_21)
                r15.b = 0
                break
            
            r9_7 += 1
            rcx_83 += 1
            rax_150 += 4
            
            if (rcx_83 s>= r12_1)
                goto label_142067514
            
            continue
        
        var_218_1 = r15.b

label_142067514:
int128_t* rsi_3 = &var_180
int64_t i_1 = 2
int32_t var_210
var_210.q = 2

do
    int64_t* rbx_17 = *(rsi_3 - 8)
    rsi_3 -= 8
    i_1 -= 1
    
    if (rbx_17 != 0)
        int32_t rax_151 = rbx_17[1].d
        rbx_17[1].d -= 1
        
        if (rax_151 == 1)
            char rax_153
            
            if (rbx_17[2].b == rax_151.b - 1 && data_143f0f1d0 == rax_151.b - 1)
                rax_153 = sub_1405949a0()
            
            if (rbx_17[2].b != rax_151.b - 1 || (data_143f0f1d0 == rax_151.b - 1 && rax_153 != 0))
                (**rbx_17)(rbx_17, 1)
            else
                bool z_13
                
                if (0 == *(rbx_17 + 0xc))
                    *(rbx_17 + 0xc) = 1
                    z_13 = true
                else
                    *(rbx_17 + 0xc)
                    z_13 = false
                
                if (z_13)
                    int32_t rax_155 = sub_140a20af0()
                    uint64_t rdx_41 = zx.q(rax_155)
                    void* const rax_156
                    
                    if (rax_155 != 0)
                        rax_156 = *((rdx_41 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_41.d) & 0x3fff) * 0x18
                    else
                        rax_156 = nullptr
                    
                    *(rax_156 + 8) = rbx_17
                    sub_1405a42f0(&data_143f02390, rdx_41.d)
while (i_1 != 0)

int64_t i_2 = 2
int128_t* rsi_4 = &var_170

do
    int64_t* rbx_18 = *(rsi_4 - 8)
    rsi_4 -= 8
    i_2 -= 1
    
    if (rbx_18 != 0)
        int32_t rax_161 = rbx_18[1].d
        rbx_18[1].d -= 1
        
        if (rax_161 == 1)
            char rax_163
            
            if (rbx_18[2].b == rax_161.b - 1 && data_143f0f1d0 == rax_161.b - 1)
                rax_163 = sub_1405949a0()
            
            if (rbx_18[2].b != rax_161.b - 1 || (data_143f0f1d0 == rax_161.b - 1 && rax_163 != 0))
                (**rbx_18)(rbx_18, 1)
            else
                bool z_14
                
                if (0 == *(rbx_18 + 0xc))
                    *(rbx_18 + 0xc) = 1
                    z_14 = true
                else
                    *(rbx_18 + 0xc)
                    z_14 = false
                
                if (z_14)
                    int32_t rax_165 = sub_140a20af0()
                    uint64_t rdx_42 = zx.q(rax_165)
                    void* const rax_166
                    
                    if (rax_165 != 0)
                        rax_166 = *((rdx_42 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_42.d) & 0x3fff) * 0x18
                    else
                        rax_166 = nullptr
                    
                    *(rax_166 + 8) = rbx_18
                    sub_1405a42f0(&data_143f02390, rdx_42.d)
while (i_2 != 0)

int64_t i_3 = 2
int128_t* rsi_5 = &var_160

do
    int64_t* rbx_19 = *(rsi_5 - 8)
    rsi_5 -= 8
    i_3 -= 1
    
    if (rbx_19 != 0)
        int32_t rax_171 = rbx_19[1].d
        rbx_19[1].d -= 1
        
        if (rax_171 == 1)
            char rax_173
            
            if (rbx_19[2].b == rax_171.b - 1 && data_143f0f1d0 == rax_171.b - 1)
                rax_173 = sub_1405949a0()
            
            if (rbx_19[2].b != rax_171.b - 1 || (data_143f0f1d0 == rax_171.b - 1 && rax_173 != 0))
                (**rbx_19)(rbx_19, 1)
            else
                bool z_15
                
                if (0 == *(rbx_19 + 0xc))
                    *(rbx_19 + 0xc) = 1
                    z_15 = true
                else
                    *(rbx_19 + 0xc)
                    z_15 = false
                
                if (z_15)
                    int32_t rax_175 = sub_140a20af0()
                    uint64_t rdx_43 = zx.q(rax_175)
                    void* const rax_176
                    
                    if (rax_175 != 0)
                        rax_176 = *((rdx_43 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_43.d) & 0x3fff) * 0x18
                    else
                        rax_176 = nullptr
                    
                    *(rax_176 + 8) = rbx_19
                    sub_1405a42f0(&data_143f02390, rdx_43.d)
while (i_3 != 0)

int64_t i_4 = 2
int128_t* rsi_6 = &var_150

do
    int64_t* rbx_20 = *(rsi_6 - 8)
    rsi_6 -= 8
    i_4 -= 1
    
    if (rbx_20 != 0)
        int32_t rax_181 = rbx_20[1].d
        rbx_20[1].d -= 1
        
        if (rax_181 == 1)
            char rax_183
            
            if (rbx_20[2].b == rax_181.b - 1 && data_143f0f1d0 == rax_181.b - 1)
                rax_183 = sub_1405949a0()
            
            if (rbx_20[2].b != rax_181.b - 1 || (data_143f0f1d0 == rax_181.b - 1 && rax_183 != 0))
                (**rbx_20)(rbx_20, 1)
            else
                bool z_16
                
                if (0 == *(rbx_20 + 0xc))
                    *(rbx_20 + 0xc) = 1
                    z_16 = true
                else
                    *(rbx_20 + 0xc)
                    z_16 = false
                
                if (z_16)
                    int32_t rax_185 = sub_140a20af0()
                    uint64_t rdx_44 = zx.q(rax_185)
                    void* const rax_186
                    
                    if (rax_185 != 0)
                        rax_186 = *((rdx_44 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_44.d) & 0x3fff) * 0x18
                    else
                        rax_186 = nullptr
                    
                    *(rax_186 + 8) = rbx_20
                    sub_1405a42f0(&data_143f02390, rdx_44.d)
while (i_4 != 0)

int64_t i_5 = 2
int128_t* rsi_7 = &var_140

do
    int64_t* rbx_21 = *(rsi_7 - 8)
    rsi_7 -= 8
    i_5 -= 1
    
    if (rbx_21 != 0)
        int32_t rax_191 = rbx_21[1].d
        rbx_21[1].d -= 1
        
        if (rax_191 == 1)
            char rax_193
            
            if (rbx_21[2].b == rax_191.b - 1 && data_143f0f1d0 == rax_191.b - 1)
                rax_193 = sub_1405949a0()
            
            if (rbx_21[2].b != rax_191.b - 1 || (data_143f0f1d0 == rax_191.b - 1 && rax_193 != 0))
                (**rbx_21)(rbx_21, 1)
            else
                bool z_17
                
                if (0 == *(rbx_21 + 0xc))
                    *(rbx_21 + 0xc) = 1
                    z_17 = true
                else
                    *(rbx_21 + 0xc)
                    z_17 = false
                
                if (z_17)
                    int32_t rax_195 = sub_140a20af0()
                    uint64_t rdx_45 = zx.q(rax_195)
                    void* const rax_196
                    
                    if (rax_195 != 0)
                        rax_196 = *((rdx_45 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_45.d) & 0x3fff) * 0x18
                    else
                        rax_196 = nullptr
                    
                    *(rax_196 + 8) = rbx_21
                    sub_1405a42f0(&data_143f02390, rdx_45.d)
while (i_5 != 0)

int64_t i_6 = var_210.q
int32_t* rdi_9 = &var_130

do
    int64_t* rbx_22 = *(rdi_9 - 8)
    rdi_9 = &rdi_9[-2]
    i_6 -= 1
    
    if (rbx_22 != 0)
        int32_t rax_201 = rbx_22[1].d
        rbx_22[1].d -= 1
        
        if (rax_201 == 1)
            char rax_203
            
            if (rbx_22[2].b == rax_201.b - 1 && data_143f0f1d0 == rax_201.b - 1)
                rax_203 = sub_1405949a0()
            
            if (rbx_22[2].b != rax_201.b - 1 || (data_143f0f1d0 == rax_201.b - 1 && rax_203 != 0))
                (**rbx_22)(rbx_22, 1)
            else
                bool z_18
                
                if (0 == *(rbx_22 + 0xc))
                    *(rbx_22 + 0xc) = 1
                    z_18 = true
                else
                    *(rbx_22 + 0xc)
                    z_18 = false
                
                if (z_18)
                    int32_t rax_205 = sub_140a20af0()
                    uint64_t rdx_46 = zx.q(rax_205)
                    void* const rax_206
                    
                    if (rax_205 != 0)
                        rax_206 = *((rdx_46 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_46.d) & 0x3fff) * 0x18
                    else
                        rax_206 = nullptr
                    
                    *(rax_206 + 8) = rbx_22
                    sub_1405a42f0(&data_143f02390, rdx_46.d)
while (i_6 != 0)

int64_t rcx_108 = var_1c0

if (rcx_108 != 0)
    sub_140a74f90(rcx_108)

int64_t rcx_109 = var_1b0

if (rcx_109 != 0)
    sub_140a74f90(rcx_109)

uint64_t rcx_110 = var_1a0

if (rcx_110 != 0)
    sub_140a74f90(rcx_110)

int64_t rcx_111 = var_200

if (rcx_111 != 0)
    sub_140a74f90(rcx_111)

__security_check_cookie(rax_1 ^ &var_248)
return zx.q(var_218_1)
