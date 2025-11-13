// 函数: sub_142043f50
// 地址: 0x142043f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
char rax_2 = *(arg1 + 0xc)
uint32_t rax_3

if (rax_2 != 4)
    rax_3 = zx.d(rax_2)
else
    rax_3 = data_1439c7a08

int32_t rcx = (*U"1111")[sx.q(rax_3)]
int32_t var_88 = rcx
uint64_t result = sub_14076f990(rcx)

if (result.b != 0)
    int64_t i_1 = 2
    void* rdi_1 = arg1 + 0x10
    int64_t i
    
    do
        int128_t zmm1 = data_143dbb1e0
        int128_t var_78
        int128_t* var_b0_1 = &var_78
        int32_t var_68_1 = 1
        int64_t* rcx_2 = data_143f0f180
        int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
        var_78 = zx.o(0)
        int128_t var_64_1 = zmm1
        char var_50_1 = 0
        int32_t var_40_1 = 0
        wchar16 const* const var_48_1 = u"SortOffset"
        int64_t* var_a0
        (*(*rcx_2 + 0x498))(rcx_2, &var_a0, &data_143f02b98, 0x1000, 0x209, var_b0_1)
        
        if (rdi_1 == &var_a0)
        label_1420440ec:
            int64_t* rbx_2 = var_a0
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    char rax_19
                    
                    if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_19 = sub_1405949a0()
                    
                    if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_19 != 0))
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
                            int32_t rax_21 = sub_140a20af0()
                            uint64_t rdx_3 = zx.q(rax_21)
                            void* const rax_22
                            
                            if (rax_21 != 0)
                                rax_22 = *((rdx_3 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                            else
                                rax_22 = nullptr
                            
                            *(rax_22 + 8) = rbx_2
                            sub_1405a42f0(&data_143f02390, rdx_3.d)
        else
            int64_t* rbx_1 = *rdi_1
            *rdi_1 = var_a0
            var_a0 = nullptr
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    char rax_10
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_10 = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
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
                            int32_t rax_12 = sub_140a20af0()
                            uint64_t rdx_2 = zx.q(rax_12)
                            void* const rax_13
                            
                            if (rax_12 != 0)
                                rax_13 = *((rdx_2 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                            else
                                rax_13 = nullptr
                            
                            *(rax_13 + 8) = rbx_1
                            sub_1405a42f0(&data_143f02390, rdx_2.d)
                
                goto label_1420440ec
        
        int64_t* rcx_11 = data_143f0f180
        var_b0_1.b = 0x1c
        int64_t* var_98
        (*(*rcx_11 + 0x4b8))(rcx_11, &var_98, &data_143f02b98, *rdi_1, 4, var_b0_1)
        
        if (rdi_1 + 0x10 == &var_98)
        label_142044244:
            int64_t* rbx_4 = var_98
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    char rax_39
                    
                    if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                        rax_39 = sub_1405949a0()
                    
                    if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_39 != 0))
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
                            int32_t rax_41 = sub_140a20af0()
                            uint64_t rdx_6 = zx.q(rax_41)
                            void* const rax_42
                            
                            if (rax_41 != 0)
                                rax_42 = *((rdx_6 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                            else
                                rax_42 = nullptr
                            
                            *(rax_42 + 8) = rbx_4
                            sub_1405a42f0(&data_143f02390, rdx_6.d)
        else
            int64_t* rbx_3 = *(rdi_1 + 0x10)
            *(rdi_1 + 0x10) = var_98
            var_98 = nullptr
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    char rax_30
                    
                    if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                        rax_30 = sub_1405949a0()
                    
                    if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_30 != 0))
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
                            int32_t rax_32 = sub_140a20af0()
                            uint64_t rdx_5 = zx.q(rax_32)
                            void* const rax_33
                            
                            if (rax_32 != 0)
                                rax_33 = *((rdx_5 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_5.d) & 0x3fff) * 0x18
                            else
                                rax_33 = nullptr
                            
                            *(rax_33 + 8) = rbx_3
                            sub_1405a42f0(&data_143f02390, rdx_5.d)
                
                goto label_142044244
        
        int64_t* rcx_21 = data_143f0f180
        int32_t var_b8_2
        var_b8_2.b = 0x1c
        uint64_t result_1
        (*(*rcx_21 + 0x590))(rcx_21, &result_1, &data_143f02b98, *rdi_1, var_b8_2)
        result = &result_1
        
        if (rdi_1 + 0x20 == &result_1)
        label_142044394:
            uint64_t result_2 = result_1
            
            if (result_2 != 0)
                result = zx.q(*(result_2 + 8))
                *(result_2 + 8) -= 1
                
                if (result.d == 1)
                    char rax_55
                    
                    if (*(result_2 + 0x10) == 0 && data_143f0f1d0 == 0)
                        rax_55 = sub_1405949a0()
                    
                    if (*(result_2 + 0x10) != 0 || (data_143f0f1d0 == 0 && rax_55 != 0))
                        result = (**result_2)(result_2, 1)
                    else
                        result = 0
                        bool z_6
                        
                        if (0 == *(result_2 + 0xc))
                            *(result_2 + 0xc) = 1
                            z_6 = true
                        else
                            result = zx.q(*(result_2 + 0xc))
                            z_6 = false
                        
                        if (z_6)
                            int32_t rax_56 = sub_140a20af0()
                            uint64_t rdx_9 = zx.q(rax_56)
                            void* const rax_57
                            
                            if (rax_56 != 0)
                                rax_57 = *((rdx_9 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                            else
                                rax_57 = nullptr
                            
                            *(rax_57 + 8) = result_2
                            result = sub_1405a42f0(&data_143f02390, rdx_9.d)
        else
            int64_t* rbx_5 = *(rdi_1 + 0x20)
            result = result_1
            *(rdi_1 + 0x20) = result
            result_1 = 0
            
            if (rbx_5 != 0)
                result = zx.q(rbx_5[1].d)
                rbx_5[1].d -= 1
                
                if (result.d == 1)
                    char rax_48
                    
                    if (rbx_5[2].b == 0 && data_143f0f1d0 == 0)
                        rax_48 = sub_1405949a0()
                    
                    if (rbx_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_48 != 0))
                        result = (**rbx_5)(rbx_5, 1)
                    else
                        result = 0
                        bool z_5
                        
                        if (0 == *(rbx_5 + 0xc))
                            *(rbx_5 + 0xc) = 1
                            z_5 = true
                        else
                            result = zx.q(*(rbx_5 + 0xc))
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
                            result = sub_1405a42f0(&data_143f02390, rdx_8.d)
                
                goto label_142044394
        
        rdi_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_d8)
return result
