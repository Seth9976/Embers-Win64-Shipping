// 函数: sub_1421f5f50
// 地址: 0x1421f5f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char result_2 = *(arg1 + 0xc)
uint64_t result

if (result_2 != 4)
    result = zx.q(result_2)
else
    result = zx.q(data_1439c7a08)

if (result.d s>= 1)
    for (int64_t i = 0; i s< 2; i += 1)
        int128_t zmm1 = data_143dbb1e0
        int32_t r9_1 = *(arg1 + 0x70)
        int64_t* rcx_1 = data_143f0f180
        int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
        wchar16 const* const var_48_1 = u"PartialSortKeyBuffer"
        int128_t var_78
        int128_t* var_c0_1 = &var_78
        var_78 = zx.o(0)
        int32_t var_68_1 = 1
        int128_t var_64_1 = zmm1
        int32_t var_54_1 = rax_3
        char var_50_1 = 0
        int32_t var_40_1 = 0
        int64_t* var_b0
        (*(*rcx_1 + 0x498))(rcx_1, &var_b0, &data_143f02b98, zx.q(r9_1 << 2), 0x209, var_c0_1)
        void* rdi_2 = arg1 + 0x10 + (i << 3)
        
        if (rdi_2 == &var_b0)
        label_1421f60f1:
            int64_t* rbx_2 = var_b0
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    char rax_16
                    
                    if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_16 = sub_1405949a0()
                    
                    if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_16 != 0))
                        (**rbx_2)(rbx_2, 1)
                    else
                        bool z_2
                        
                        if (0 == *(rbx_2 + 0xc))
                            *(rbx_2 + 0xc) = 1
                            z_2 = true
                        else
                            *(rbx_2 + 0xc)
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_18 = sub_140a20af0()
                            uint64_t rdx_3 = zx.q(rax_18)
                            void* const rax_19
                            
                            if (rax_18 != 0)
                                rax_19 = *((rdx_3 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                            else
                                rax_19 = nullptr
                            
                            *(rax_19 + 8) = rbx_2
                            sub_1405a42f0(&data_143f02390, rdx_3.d)
        else
            int64_t* rbx_1 = *rdi_2
            *rdi_2 = var_b0
            var_b0 = nullptr
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    char rax_7
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_7 = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
                        (**rbx_1)(rbx_1, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_9 = sub_140a20af0()
                            uint64_t rdx_2 = zx.q(rax_9)
                            void* const rax_10
                            
                            if (rax_9 != 0)
                                rax_10 = *((rdx_2 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                            else
                                rax_10 = nullptr
                            
                            *(rax_10 + 8) = rbx_1
                            sub_1405a42f0(&data_143f02390, rdx_2.d)
                
                goto label_1421f60f1
        
        int64_t* rcx_10 = data_143f0f180
        var_c0_1.b = 0x1c
        int64_t* var_a8
        (*(*rcx_10 + 0x4b8))(rcx_10, &var_a8, &data_143f02b98, *rdi_2, 4, var_c0_1)
        void* rcx_12 = arg1 + 0x20 + (i << 3)
        
        if (rcx_12 == &var_a8)
        label_1421f624d:
            int64_t* rbx_4 = var_a8
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    char rax_36
                    
                    if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                        rax_36 = sub_1405949a0()
                    
                    if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_36 != 0))
                        (**rbx_4)(rbx_4, 1)
                    else
                        bool z_4
                        
                        if (0 == *(rbx_4 + 0xc))
                            *(rbx_4 + 0xc) = 1
                            z_4 = true
                        else
                            *(rbx_4 + 0xc)
                            z_4 = false
                        
                        if (z_4)
                            int32_t rax_38 = sub_140a20af0()
                            uint64_t rdx_6 = zx.q(rax_38)
                            void* const rax_39
                            
                            if (rax_38 != 0)
                                rax_39 = *((rdx_6 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                            else
                                rax_39 = nullptr
                            
                            *(rax_39 + 8) = rbx_4
                            sub_1405a42f0(&data_143f02390, rdx_6.d)
        else
            int64_t* rbx_3 = *rcx_12
            *rcx_12 = var_a8
            var_a8 = nullptr
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    char rax_27
                    
                    if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                        rax_27 = sub_1405949a0()
                    
                    if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_27 != 0))
                        (**rbx_3)(rbx_3, 1)
                    else
                        bool z_3
                        
                        if (0 == *(rbx_3 + 0xc))
                            *(rbx_3 + 0xc) = 1
                            z_3 = true
                        else
                            *(rbx_3 + 0xc)
                            z_3 = false
                        
                        if (z_3)
                            int32_t rax_29 = sub_140a20af0()
                            uint64_t rdx_5 = zx.q(rax_29)
                            void* const rax_30
                            
                            if (rax_29 != 0)
                                rax_30 = *((rdx_5 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_5.d) & 0x3fff) * 0x18
                            else
                                rax_30 = nullptr
                            
                            *(rax_30 + 8) = rbx_3
                            sub_1405a42f0(&data_143f02390, rdx_5.d)
                
                goto label_1421f624d
        
        int64_t* rcx_21 = data_143f0f180
        int32_t var_c8_2
        var_c8_2.b = 0x1c
        int64_t* var_a0
        (*(*rcx_21 + 0x590))(rcx_21, &var_a0, &data_143f02b98, *rdi_2, var_c8_2)
        void* rcx_23 = arg1 + 0x30 + (i << 3)
        
        if (rcx_23 == &var_a0)
        label_1421f63a1:
            int64_t* rbx_6 = var_a0
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    char rax_56
                    
                    if (rbx_6[2].b == 0 && data_143f0f1d0 == 0)
                        rax_56 = sub_1405949a0()
                    
                    if (rbx_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_56 != 0))
                        (**rbx_6)(rbx_6, 1)
                    else
                        bool z_6
                        
                        if (0 == *(rbx_6 + 0xc))
                            *(rbx_6 + 0xc) = 1
                            z_6 = true
                        else
                            *(rbx_6 + 0xc)
                            z_6 = false
                        
                        if (z_6)
                            int32_t rax_58 = sub_140a20af0()
                            uint64_t rdx_9 = zx.q(rax_58)
                            void* const rax_59
                            
                            if (rax_58 != 0)
                                rax_59 = *((rdx_9 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                            else
                                rax_59 = nullptr
                            
                            *(rax_59 + 8) = rbx_6
                            sub_1405a42f0(&data_143f02390, rdx_9.d)
        else
            int64_t* rbx_5 = *rcx_23
            *rcx_23 = var_a0
            var_a0 = nullptr
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    char rax_47
                    
                    if (rbx_5[2].b == 0 && data_143f0f1d0 == 0)
                        rax_47 = sub_1405949a0()
                    
                    if (rbx_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_47 != 0))
                        (**rbx_5)(rbx_5, 1)
                    else
                        bool z_5
                        
                        if (0 == *(rbx_5 + 0xc))
                            *(rbx_5 + 0xc) = 1
                            z_5 = true
                        else
                            *(rbx_5 + 0xc)
                            z_5 = false
                        
                        if (z_5)
                            int32_t rax_49 = sub_140a20af0()
                            uint64_t rdx_8 = zx.q(rax_49)
                            void* const rax_50
                            
                            if (rax_49 != 0)
                                rax_50 = *((rdx_8 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_8.d) & 0x3fff) * 0x18
                            else
                                rax_50 = nullptr
                            
                            *(rax_50 + 8) = rbx_5
                            sub_1405a42f0(&data_143f02390, rdx_8.d)
                
                goto label_1421f63a1
        
        int64_t* rcx_32 = data_143f0f180
        wchar16 const* const var_48_2 = u"PartialSortVertexBuffer"
        int64_t* var_98
        (*(*rcx_32 + 0x498))(rcx_32, &var_98, &data_143f02b98, zx.q(*(arg1 + 0x70) << 2), 0x209, 
            &var_78)
        void* rdi_4 = arg1 + 0x40 + (i << 3)
        
        if (rdi_4 == &var_98)
        label_1421f6511:
            int64_t* rbx_8 = var_98
            
            if (rbx_8 != 0)
                rbx_8[1].d -= 1
                
                if (rbx_8[1].d == 1)
                    char rax_76
                    
                    if (rbx_8[2].b == 0 && data_143f0f1d0 == 0)
                        rax_76 = sub_1405949a0()
                    
                    if (rbx_8[2].b != 0 || (data_143f0f1d0 == 0 && rax_76 != 0))
                        (**rbx_8)(rbx_8, 1)
                    else
                        bool z_8
                        
                        if (0 == *(rbx_8 + 0xc))
                            *(rbx_8 + 0xc) = 1
                            z_8 = true
                        else
                            *(rbx_8 + 0xc)
                            z_8 = false
                        
                        if (z_8)
                            int32_t rax_78 = sub_140a20af0()
                            uint64_t rdx_12 = zx.q(rax_78)
                            void* const rax_79
                            
                            if (rax_78 != 0)
                                rax_79 = *((rdx_12 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_12.d) & 0x3fff) * 0x18
                            else
                                rax_79 = nullptr
                            
                            *(rax_79 + 8) = rbx_8
                            sub_1405a42f0(&data_143f02390, rdx_12.d)
        else
            int64_t* rbx_7 = *rdi_4
            *rdi_4 = var_98
            var_98 = nullptr
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    char rax_67
                    
                    if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
                        rax_67 = sub_1405949a0()
                    
                    if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_67 != 0))
                        (**rbx_7)(rbx_7, 1)
                    else
                        bool z_7
                        
                        if (0 == *(rbx_7 + 0xc))
                            *(rbx_7 + 0xc) = 1
                            z_7 = true
                        else
                            *(rbx_7 + 0xc)
                            z_7 = false
                        
                        if (z_7)
                            int32_t rax_69 = sub_140a20af0()
                            uint64_t rdx_11 = zx.q(rax_69)
                            void* const rax_70
                            
                            if (rax_69 != 0)
                                rax_70 = *((rdx_11 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_11.d) & 0x3fff) * 0x18
                            else
                                rax_70 = nullptr
                            
                            *(rax_70 + 8) = rbx_7
                            sub_1405a42f0(&data_143f02390, rdx_11.d)
                
                goto label_1421f6511
        
        int64_t* rcx_41 = data_143f0f180
        int128_t* var_c0_2
        var_c0_2.b = 0x1c
        int64_t* var_90
        (*(*rcx_41 + 0x4b8))(rcx_41, &var_90, &data_143f02b98, *rdi_4, 4, var_c0_2)
        void* rcx_43 = arg1 + 0x50 + (i << 3)
        
        if (rcx_43 == &var_90)
        label_1421f666d:
            int64_t* rbx_10 = var_90
            
            if (rbx_10 != 0)
                rbx_10[1].d -= 1
                
                if (rbx_10[1].d == 1)
                    char rax_96
                    
                    if (rbx_10[2].b == 0 && data_143f0f1d0 == 0)
                        rax_96 = sub_1405949a0()
                    
                    if (rbx_10[2].b != 0 || (data_143f0f1d0 == 0 && rax_96 != 0))
                        (**rbx_10)(rbx_10, 1)
                    else
                        bool z_10
                        
                        if (0 == *(rbx_10 + 0xc))
                            *(rbx_10 + 0xc) = 1
                            z_10 = true
                        else
                            *(rbx_10 + 0xc)
                            z_10 = false
                        
                        if (z_10)
                            int32_t rax_98 = sub_140a20af0()
                            uint64_t rdx_15 = zx.q(rax_98)
                            void* const rax_99
                            
                            if (rax_98 != 0)
                                rax_99 = *((rdx_15 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_15.d) & 0x3fff) * 0x18
                            else
                                rax_99 = nullptr
                            
                            *(rax_99 + 8) = rbx_10
                            sub_1405a42f0(&data_143f02390, rdx_15.d)
        else
            int64_t* rbx_9 = *rcx_43
            *rcx_43 = var_90
            var_90 = nullptr
            
            if (rbx_9 != 0)
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    char rax_87
                    
                    if (rbx_9[2].b == 0 && data_143f0f1d0 == 0)
                        rax_87 = sub_1405949a0()
                    
                    if (rbx_9[2].b != 0 || (data_143f0f1d0 == 0 && rax_87 != 0))
                        (**rbx_9)(rbx_9, 1)
                    else
                        bool z_9
                        
                        if (0 == *(rbx_9 + 0xc))
                            *(rbx_9 + 0xc) = 1
                            z_9 = true
                        else
                            *(rbx_9 + 0xc)
                            z_9 = false
                        
                        if (z_9)
                            int32_t rax_89 = sub_140a20af0()
                            uint64_t rdx_14 = zx.q(rax_89)
                            void* const rax_90
                            
                            if (rax_89 != 0)
                                rax_90 = *((rdx_14 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_14.d) & 0x3fff) * 0x18
                            else
                                rax_90 = nullptr
                            
                            *(rax_90 + 8) = rbx_9
                            sub_1405a42f0(&data_143f02390, rdx_14.d)
                
                goto label_1421f666d
        
        int64_t* rcx_52 = data_143f0f180
        int32_t var_c8_4
        var_c8_4.b = 0x1c
        uint64_t result_1
        (*(*rcx_52 + 0x590))(rcx_52, &result_1, &data_143f02b98, *rdi_4, var_c8_4)
        void* rcx_54 = arg1 + 0x60 + (i << 3)
        result = &result_1
        
        if (rcx_54 == &result_1)
        label_1421f67c1:
            uint64_t result_3 = result_1
            
            if (result_3 != 0)
                result = zx.q(*(result_3 + 8))
                *(result_3 + 8) -= 1
                
                if (result.d == 1)
                    char rax_112
                    
                    if (*(result_3 + 0x10) == 0 && data_143f0f1d0 == 0)
                        rax_112 = sub_1405949a0()
                    
                    if (*(result_3 + 0x10) != 0 || (data_143f0f1d0 == 0 && rax_112 != 0))
                        result = (**result_3)(result_3, 1)
                    else
                        result = 0
                        bool z_12
                        
                        if (0 == *(result_3 + 0xc))
                            *(result_3 + 0xc) = 1
                            z_12 = true
                        else
                            result = zx.q(*(result_3 + 0xc))
                            z_12 = false
                        
                        if (z_12)
                            int32_t rax_113 = sub_140a20af0()
                            uint64_t rdx_18 = zx.q(rax_113)
                            void* const rax_114
                            
                            if (rax_113 != 0)
                                rax_114 = *((rdx_18 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_18.d) & 0x3fff) * 0x18
                            else
                                rax_114 = nullptr
                            
                            *(rax_114 + 8) = result_3
                            result = sub_1405a42f0(&data_143f02390, rdx_18.d)
        else
            int64_t* rbx_11 = *rcx_54
            result = result_1
            *rcx_54 = result
            result_1 = 0
            
            if (rbx_11 != 0)
                result = zx.q(rbx_11[1].d)
                rbx_11[1].d -= 1
                
                if (result.d == 1)
                    char rax_105
                    
                    if (rbx_11[2].b == 0 && data_143f0f1d0 == 0)
                        rax_105 = sub_1405949a0()
                    
                    if (rbx_11[2].b != 0 || (data_143f0f1d0 == 0 && rax_105 != 0))
                        result = (**rbx_11)(rbx_11, 1)
                    else
                        result = 0
                        bool z_11
                        
                        if (0 == *(rbx_11 + 0xc))
                            *(rbx_11 + 0xc) = 1
                            z_11 = true
                        else
                            result = zx.q(*(rbx_11 + 0xc))
                            z_11 = false
                        
                        if (z_11)
                            int32_t rax_106 = sub_140a20af0()
                            uint64_t rdx_17 = zx.q(rax_106)
                            void* const rax_107
                            
                            if (rax_106 != 0)
                                rax_107 = *((rdx_17 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_17.d) & 0x3fff) * 0x18
                            else
                                rax_107 = nullptr
                            
                            *(rax_107 + 8) = rbx_11
                            result = sub_1405a42f0(&data_143f02390, rdx_17.d)
                
                goto label_1421f67c1

__security_check_cookie(rax_1 ^ &var_e8)
return result
