// 函数: sub_1407b2230
// 地址: 0x1407b2230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t* result = __security_cookie ^ &var_d8
int64_t* result_2 = result

for (int64_t* i = arg1 + 0x20; i != &i[8]; i = &i[4])
    int128_t zmm1 = data_143dbb1e0
    wchar16 const* const var_48_1 = u"SkeletalMeshGpuDynamicBuffer"
    int64_t* rcx_1 = data_143f0f180
    int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
    uint64_t rax_3 = zx.q(*(arg1 + 0x18))
    int128_t var_78 = zx.o(0)
    int32_t var_68_1 = 1
    int128_t var_64_1 = zmm1
    char var_50_1 = 0
    int32_t var_40_1 = 0
    int64_t* var_a0
    (*(*rcx_1 + 0x498))(rcx_1, &var_a0, &data_143f02b98, zx.q((rax_3 * 3).d << 4), 0x202, &var_78)
    
    if (i == &var_a0)
    label_1407b239e:
        int64_t* rbx_2 = var_a0
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                char rax_15
                
                if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                    rax_15 = sub_1405949a0()
                
                if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_15 != 0))
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
                        int32_t rax_17 = sub_140a20af0()
                        uint64_t rdx_3 = zx.q(rax_17)
                        void* const rax_18
                        
                        if (rax_17 != 0)
                            rax_18 = *((rdx_3 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                        else
                            rax_18 = nullptr
                        
                        *(rax_18 + 8) = rbx_2
                        sub_1405a42f0(&data_143f02390, rdx_3.d)
    else
        int64_t* rbx_1 = *i
        *i = var_a0
        var_a0 = nullptr
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_6
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_6 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
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
                        int32_t rax_8 = sub_140a20af0()
                        uint64_t rdx_2 = zx.q(rax_8)
                        void* const rax_9
                        
                        if (rax_8 != 0)
                            rax_9 = *((rdx_2 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                        else
                            rax_9 = nullptr
                        
                        *(rax_9 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rdx_2.d)
            
            goto label_1407b239e
    
    int64_t* rcx_10 = data_143f0f180
    int128_t* var_b0_1
    var_b0_1.b = 1
    int64_t* var_98
    (*(*rcx_10 + 0x4b8))(rcx_10, &var_98, &data_143f02b98, *i, 0x10, var_b0_1)
    
    if (&i[1] == &var_98)
    label_1407b24f6:
        int64_t* rbx_4 = var_98
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                char rax_35
                
                if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                    rax_35 = sub_1405949a0()
                
                if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_35 != 0))
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
                        int32_t rax_37 = sub_140a20af0()
                        uint64_t rdx_6 = zx.q(rax_37)
                        void* const rax_38
                        
                        if (rax_37 != 0)
                            rax_38 = *((rdx_6 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                        else
                            rax_38 = nullptr
                        
                        *(rax_38 + 8) = rbx_4
                        sub_1405a42f0(&data_143f02390, rdx_6.d)
    else
        int64_t* rbx_3 = i[1]
        i[1] = var_98
        var_98 = nullptr
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                char rax_26
                
                if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                    rax_26 = sub_1405949a0()
                
                if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_26 != 0))
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
                        int32_t rax_28 = sub_140a20af0()
                        uint64_t rdx_5 = zx.q(rax_28)
                        void* const rax_29
                        
                        if (rax_28 != 0)
                            rax_29 = *((rdx_5 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_5.d) & 0x3fff) * 0x18
                        else
                            rax_29 = nullptr
                        
                        *(rax_29 + 8) = rbx_3
                        sub_1405a42f0(&data_143f02390, rdx_5.d)
            
            goto label_1407b24f6
    
    int64_t* rcx_20 = data_143f0f180
    int64_t* var_90
    (*(*rcx_20 + 0x498))(rcx_20, &var_90, &data_143f02b98, 
        zx.q((*(arg1 + 0x10) + *(arg1 + 0x14)) << 5), 0x202, &var_78)
    
    if (&i[2] == &var_90)
    label_1407b2662:
        int64_t* rbx_6 = var_90
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                char rax_55
                
                if (rbx_6[2].b == 0 && data_143f0f1d0 == 0)
                    rax_55 = sub_1405949a0()
                
                if (rbx_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_55 != 0))
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
                        int32_t rax_57 = sub_140a20af0()
                        uint64_t rdx_9 = zx.q(rax_57)
                        void* const rax_58
                        
                        if (rax_57 != 0)
                            rax_58 = *((rdx_9 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                        else
                            rax_58 = nullptr
                        
                        *(rax_58 + 8) = rbx_6
                        sub_1405a42f0(&data_143f02390, rdx_9.d)
    else
        int64_t* rbx_5 = i[2]
        i[2] = var_90
        var_90 = nullptr
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                char rax_46
                
                if (rbx_5[2].b == 0 && data_143f0f1d0 == 0)
                    rax_46 = sub_1405949a0()
                
                if (rbx_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_46 != 0))
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
                        int32_t rax_48 = sub_140a20af0()
                        uint64_t rdx_8 = zx.q(rax_48)
                        void* const rax_49
                        
                        if (rax_48 != 0)
                            rax_49 = *((rdx_8 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_8.d) & 0x3fff) * 0x18
                        else
                            rax_49 = nullptr
                        
                        *(rax_49 + 8) = rbx_5
                        sub_1405a42f0(&data_143f02390, rdx_8.d)
            
            goto label_1407b2662
    
    int64_t* rcx_29 = data_143f0f180
    int128_t* var_b0_2
    var_b0_2.b = 1
    int64_t* result_1
    (*(*rcx_29 + 0x4b8))(rcx_29, &result_1, &data_143f02b98, i[2], 0x10, var_b0_2)
    result = &result_1
    
    if (&i[3] == &result_1)
    label_1407b27cc:
        int64_t* result_3 = result_1
        
        if (result_3 != 0)
            result = zx.q(result_3[1].d)
            result_3[1].d -= 1
            
            if (result.d == 1)
                char rax_71
                
                if (result_3[2].b == 0 && data_143f0f1d0 == 0)
                    rax_71 = sub_1405949a0()
                
                if (result_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_71 != 0))
                    result = (**result_3)(result_3, 1)
                else
                    result = nullptr
                    bool z_8
                    
                    if (0 == *(result_3 + 0xc))
                        *(result_3 + 0xc) = 1
                        z_8 = true
                    else
                        result = zx.q(*(result_3 + 0xc))
                        z_8 = false
                    
                    if (z_8)
                        int32_t rax_72 = sub_140a20af0()
                        uint64_t rdx_12 = zx.q(rax_72)
                        void* const rax_73
                        
                        if (rax_72 != 0)
                            rax_73 = *((rdx_12 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_12.d) & 0x3fff) * 0x18
                        else
                            rax_73 = nullptr
                        
                        *(rax_73 + 8) = result_3
                        result = sub_1405a42f0(&data_143f02390, rdx_12.d)
    else
        int64_t* rbx_7 = i[3]
        result = result_1
        i[3] = result
        result_1 = nullptr
        
        if (rbx_7 != 0)
            result = zx.q(rbx_7[1].d)
            rbx_7[1].d -= 1
            
            if (result.d == 1)
                char rax_64
                
                if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
                    rax_64 = sub_1405949a0()
                
                if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_64 != 0))
                    result = (**rbx_7)(rbx_7, 1)
                else
                    result = nullptr
                    bool z_7
                    
                    if (0 == *(rbx_7 + 0xc))
                        *(rbx_7 + 0xc) = 1
                        z_7 = true
                    else
                        result = zx.q(*(rbx_7 + 0xc))
                        z_7 = false
                    
                    if (z_7)
                        int32_t rax_65 = sub_140a20af0()
                        uint64_t rdx_11 = zx.q(rax_65)
                        void* const rax_66
                        
                        if (rax_65 != 0)
                            rax_66 = *((rdx_11 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_11.d) & 0x3fff) * 0x18
                        else
                            rax_66 = nullptr
                        
                        *(rax_66 + 8) = rbx_7
                        result = sub_1405a42f0(&data_143f02390, rdx_11.d)
            
            goto label_1407b27cc

__security_check_cookie(result_2 ^ &var_d8)
return result
