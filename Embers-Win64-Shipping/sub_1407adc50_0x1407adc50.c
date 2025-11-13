// 函数: sub_1407adc50
// 地址: 0x1407adc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int64_t* result
int64_t* var_58

if (rax == data_143ce0570)
    void*** rax_1 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_1 != 0)
        rax_1[1] = arg1
        *rax_1 = &data_142dc0608
        rax_1[3] = sub_140a387b0()
        *rax_1 = &data_142dc0660
    
    result = &var_58
    
    if (&var_58 != arg4)
        if (rax_1 != 0)
            result = (*rax_1)[8](rax_1, arg4)
        else if (arg4[1].d != 0)
            int64_t* rcx_1 = *arg4
            
            if (rcx_1 != 0)
                result = (*(*rcx_1 + 0x38))(rcx_1, 0)
                int64_t* rcx_2 = *arg4
                
                if (rcx_2 != 0)
                    result = sub_140a84c80(rcx_2, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rax_1 != 0)
        (*rax_1)[7](rax_1, 0)
        result = sub_140a84c80(rax_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
else if (rax == data_143ce0578)
    void*** rax_6 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_6 != 0)
        rax_6[1] = arg1
        *rax_6 = &data_142dc06b8
        rax_6[3] = sub_140a387b0()
        *rax_6 = &data_142dc0710
    
    result = &var_58
    
    if (&var_58 != arg4)
        if (rax_6 != 0)
            result = (*rax_6)[8](rax_6, arg4)
        else if (arg4[1].d != 0)
            int64_t* rcx_7 = *arg4
            
            if (rcx_7 != 0)
                result = (*(*rcx_7 + 0x38))(rcx_7, 0)
                int64_t* rcx_8 = *arg4
                
                if (rcx_8 != 0)
                    result = sub_140a84c80(rcx_8, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rax_6 != 0)
        (*rax_6)[7](rax_6, 0)
        result = sub_140a84c80(rax_6, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
else if (rax == data_143ce0580)
    void*** rax_11 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_11 != 0)
        rax_11[1] = arg1
        *rax_11 = &data_142dc0768
        rax_11[3] = sub_140a387b0()
        *rax_11 = &data_142dc07c0
    
    result = &var_58
    
    if (&var_58 != arg4)
        if (rax_11 != 0)
            result = (*rax_11)[8](rax_11, arg4)
        else if (arg4[1].d != 0)
            int64_t* rcx_13 = *arg4
            
            if (rcx_13 != 0)
                result = (*(*rcx_13 + 0x38))(rcx_13, 0)
                int64_t* rcx_14 = *arg4
                
                if (rcx_14 != 0)
                    result = sub_140a84c80(rcx_14, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rax_11 != 0)
        (*rax_11)[7](rax_11, 0)
        result = sub_140a84c80(rax_11, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
else if (rax != data_143ce0588)
    TEB* gsbase
    result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    
    if (data_143ce1a08 s> result.d)
        result = _Init_thread_header(&data_143ce1a08)
        
        if (data_143ce1a08 == 0xffffffff)
            sub_140b58170(&data_143ce1a00, "Attribute", 1)
            result = _Init_thread_footer(&data_143ce1a08)
    
    int64_t* rbx_4 = arg2[5]
    void* rcx_28 = &rbx_4[sx.q(arg2[6].d) * 2]
    
    if (rbx_4 != rcx_28)
        result = data_143ce1a00
        
        do
            if (*rbx_4 == result)
                if (rbx_4 != 0)
                    result = *arg2
                    int64_t rbx_5 = rbx_4[1]
                    int64_t arg_10 = rbx_5
                    int64_t* result_2
                    int32_t var_60
                    
                    if (result == data_143ce0590)
                        int64_t* rcx_29 = *(*(arg3 + 8) + 0x778)
                        int64_t* r10_1 = *rcx_29
                        int64_t* rdx_4 = r10_1
                        result = &r10_1[sx.q(rcx_29[1].d) * 5]
                        
                        if (r10_1 != result)
                            do
                                if (*rdx_4 == rbx_5 && rdx_4[1] == data_14396f0a8
                                        && rdx_4[2].w == data_14396f0b0)
                                    int64_t rax_24
                                    int64_t rdx_6
                                    rdx_6:rax_24 = muls.dp.q(0x6666666666666667, rdx_4 - r10_1)
                                    result = rdx_6 s>> 4 u>> 0x3f
                                    
                                    if (((rdx_4 - r10_1) s/ 0x28).d != 0xffffffff)
                                        result_2 = arg1
                                        var_60.q = rbx_5
                                        void*** rax_26 = sub_140a84c80(0, 0x30, 0)
                                        
                                        if (rax_26 != 0)
                                            int128_t zmm0_1 = result_2.o
                                            *rax_26 = &data_142dc0908
                                            *(rax_26 + 8) = zmm0_1
                                            rax_26[4] = sub_140a387b0()
                                            *rax_26 = &data_142dc0960
                                        
                                        result = &var_58
                                        
                                        if (&var_58 != arg4)
                                            if (rax_26 != 0)
                                                result = (*rax_26)[8](rax_26, arg4)
                                            else if (arg4[1].d != 0)
                                                int64_t* rcx_32 = *arg4
                                                
                                                if (rcx_32 != 0)
                                                    result = (*(*rcx_32 + 0x38))(rcx_32, 0)
                                                    int64_t* rcx_33 = *arg4
                                                    
                                                    if (rcx_33 != 0)
                                                        result = sub_140a84c80(rcx_33, 0, 0)
                                                        *arg4 = result
                                                    
                                                    arg4[1].d = 0
                                        
                                        if (rax_26 != 0)
                                            (*rax_26)[7](rax_26, 0)
                                            result = sub_140a84c80(rax_26, 0, 0)
                                            
                                            if (result != 0)
                                                return sub_140a74f90(result)
                                    
                                    break
                                
                                rdx_4 = &rdx_4[5]
                            while (rdx_4 != result)
                    else if (result == data_143ce0598)
                        int64_t* rcx_37 = *(*(arg3 + 8) + 0x778)
                        int64_t* r10_2 = *rcx_37
                        int64_t* rdx_10 = r10_2
                        result = &r10_2[sx.q(rcx_37[1].d) * 5]
                        
                        if (r10_2 != result)
                            do
                                if (*rdx_10 == rbx_5 && rdx_10[1] == data_14396f098
                                        && rdx_10[2].w == data_14396f0a0)
                                    int64_t rax_33
                                    int64_t rdx_12
                                    rdx_12:rax_33 = muls.dp.q(0x6666666666666667, rdx_10 - r10_2)
                                    result = rdx_12 s>> 4 u>> 0x3f
                                    
                                    if (((rdx_10 - r10_2) s/ 0x28).d != 0xffffffff)
                                        result_2 = arg1
                                        var_60.q = rbx_5
                                        void*** rax_35 = sub_140a84c80(0, 0x30, 0)
                                        
                                        if (rax_35 != 0)
                                            int128_t zmm0_2 = result_2.o
                                            *rax_35 = &data_142dc09b8
                                            *(rax_35 + 8) = zmm0_2
                                            rax_35[4] = sub_140a387b0()
                                            *rax_35 = &data_142dc0a10
                                        
                                        result = &var_58
                                        
                                        if (&var_58 != arg4)
                                            if (rax_35 != 0)
                                                result = (*rax_35)[8](rax_35, arg4)
                                            else if (arg4[1].d != 0)
                                                int64_t* rcx_40 = *arg4
                                                
                                                if (rcx_40 != 0)
                                                    result = (*(*rcx_40 + 0x38))(rcx_40, 0)
                                                    int64_t* rcx_41 = *arg4
                                                    
                                                    if (rcx_41 != 0)
                                                        result = sub_140a84c80(rcx_41, 0, 0)
                                                        *arg4 = result
                                                    
                                                    arg4[1].d = 0
                                        
                                        if (rax_35 != 0)
                                            (*rax_35)[7](rax_35, 0)
                                            result = sub_140a84c80(rax_35, 0, 0)
                                            
                                            if (result != 0)
                                                return sub_140a74f90(result)
                                    
                                    break
                                
                                rdx_10 = &rdx_10[5]
                            while (rdx_10 != result)
                    else if (result == data_143ce05a0)
                        int64_t* rcx_45 = *(*(arg3 + 8) + 0x778)
                        int64_t* r10_3 = *rcx_45
                        int64_t* rdx_16 = r10_3
                        result = &r10_3[sx.q(rcx_45[1].d) * 5]
                        
                        if (r10_3 != result)
                            do
                                if (*rdx_16 == rbx_5 && rdx_16[1] == data_14396f088
                                        && rdx_16[2].w == data_14396f090)
                                    int64_t rax_42
                                    int64_t rdx_18
                                    rdx_18:rax_42 = muls.dp.q(0x6666666666666667, rdx_16 - r10_3)
                                    result = rdx_18 s>> 4 u>> 0x3f
                                    
                                    if (((rdx_16 - r10_3) s/ 0x28).d != 0xffffffff)
                                        result_2 = arg1
                                        var_60.q = rbx_5
                                        void*** rax_44 = sub_140a84c80(0, 0x30, 0)
                                        
                                        if (rax_44 != 0)
                                            int128_t zmm0_3 = result_2.o
                                            *rax_44 = &data_142dc0a68
                                            *(rax_44 + 8) = zmm0_3
                                            rax_44[4] = sub_140a387b0()
                                            *rax_44 = &data_142dc0ac0
                                        
                                        result = &var_58
                                        
                                        if (&var_58 != arg4)
                                            if (rax_44 != 0)
                                                result = (*rax_44)[8](rax_44, arg4)
                                            else if (arg4[1].d != 0)
                                                int64_t* rcx_48 = *arg4
                                                
                                                if (rcx_48 != 0)
                                                    result = (*(*rcx_48 + 0x38))(rcx_48, 0)
                                                    int64_t* rcx_49 = *arg4
                                                    
                                                    if (rcx_49 != 0)
                                                        result = sub_140a84c80(rcx_49, 0, 0)
                                                        *arg4 = result
                                                    
                                                    arg4[1].d = 0
                                        
                                        if (rax_44 != 0)
                                            (*rax_44)[7](rax_44, 0)
                                            result = sub_140a84c80(rax_44, 0, 0)
                                            
                                            if (result != 0)
                                                return sub_140a74f90(result)
                                    
                                    break
                                
                                rdx_16 = &rdx_16[5]
                            while (rdx_16 != result)
                    else
                        int64_t var_48
                        
                        if (result == data_143ce05a8)
                            void* rcx_53 = *(arg3 + 8)
                            int64_t var_40_1 = data_14396f0b8
                            int16_t rax_50 = data_14396f0c0
                            var_48 = rbx_5
                            int16_t var_38_1 = rax_50
                            int32_t var_36_1 = 0xffffffff
                            int64_t var_30_1 = 0
                            int64_t var_28_1 = 0
                            result = sub_14078ea20(*(rcx_53 + 0x778), &var_48)
                            
                            if (result.d != 0xffffffff)
                                var_58 = arg1
                                int64_t var_50_1 = rbx_5
                                result_2 = nullptr
                                int32_t var_60_1 = 0
                                void*** rax_51 = sub_1405978f0(0x28, &result_2)
                                
                                if (rax_51 != 0)
                                    int128_t zmm0_4 = var_58.o
                                    *rax_51 = &data_142dc0b18
                                    *(rax_51 + 8) = zmm0_4
                                    rax_51[4] = sub_140a387b0()
                                    *rax_51 = &data_142dc0b70
                                
                                result = &result_2
                                int64_t* result_1 = result_2
                                
                                if (&result_2 != arg4)
                                    if (var_60_1 != 0 && result_1 != 0)
                                        result = (*(*result_1 + 0x40))(result_1, arg4)
                                    else if (arg4[1].d != 0)
                                        int64_t* rcx_56 = *arg4
                                        
                                        if (rcx_56 != 0)
                                            result = (*(*rcx_56 + 0x38))(rcx_56, 0)
                                            int64_t* rcx_57 = *arg4
                                            
                                            if (rcx_57 != 0)
                                                result = sub_140a84c80(rcx_57, 0, 0)
                                                *arg4 = result
                                            
                                            arg4[1].d = 0
                                
                                if (var_60_1 == 0)
                                    goto label_1407ae519
                                
                                if (result_1 != 0)
                                    (*(*result_1 + 0x38))(result_1, 0)
                                    result = sub_140a84c80(result_1, 0, 0)
                                    result_1 = result
                                label_1407ae519:
                                    
                                    if (result_1 != 0)
                                        return sub_140a74f90(result_1)
                        else
                            void** const rax_60
                            void*** rbx_10
                            
                            if (result == data_143ce05b0)
                                void* rcx_61 = *(arg3 + 8)
                                int64_t var_40_2 = data_14396f0c8
                                int16_t rax_57 = data_14396f0d0
                                var_48 = rbx_5
                                int16_t var_38_2 = rax_57
                                int32_t var_36_2 = 0xffffffff
                                int64_t var_30_2 = 0
                                int64_t var_28_2 = 0
                                result = sub_14078ea20(*(rcx_61 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_2 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_2 = 0
                                    void*** rax_58 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_58
                                    
                                    if (rax_58 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_5 = var_58.o
                                    *rbx_10 = &data_142dc0bc8
                                    *(rbx_10 + 8) = zmm0_5
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc0c20
                                label_1407aee0c:
                                    *rbx_10 = rax_60
                                    sub_1407473e0(arg4, &result_2)
                                    return sub_140745b20(&result_2)
                            else if (result == data_143ce05b8)
                                void* rcx_63 = *(arg3 + 8)
                                int64_t var_40_3 = data_14396f0d8
                                int16_t rax_62 = data_14396f0e0
                                var_48 = rbx_5
                                int16_t var_38_3 = rax_62
                                int32_t var_36_3 = 0xffffffff
                                int64_t var_30_3 = 0
                                int64_t var_28_3 = 0
                                result = sub_14078ea20(*(rcx_63 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_3 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_3 = 0
                                    void*** rax_63 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_63
                                    
                                    if (rax_63 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_6 = var_58.o
                                    *rbx_10 = &data_142dc0c78
                                    *(rbx_10 + 8) = zmm0_6
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc0cd0
                                    goto label_1407aee0c
                            else if (result == data_143ce05c0)
                                void* rcx_65 = *(arg3 + 8)
                                int64_t var_40_4 = data_14396f0e8
                                int16_t rax_66 = data_14396f0f0
                                var_48 = rbx_5
                                int16_t var_38_4 = rax_66
                                int32_t var_36_4 = 0xffffffff
                                int64_t var_30_4 = 0
                                int64_t var_28_4 = 0
                                result = sub_14078ea20(*(rcx_65 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_4 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_4 = 0
                                    void*** rax_67 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_67
                                    
                                    if (rax_67 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_7 = var_58.o
                                    *rbx_10 = &data_142dc0d28
                                    *(rbx_10 + 8) = zmm0_7
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc0d80
                                    goto label_1407aee0c
                            else if (result == data_143ce05c8)
                                void* rcx_67 = *(arg3 + 8)
                                int64_t var_40_5 = data_14396f0f8
                                int16_t rax_70 = data_14396f100
                                var_48 = rbx_5
                                int16_t var_38_5 = rax_70
                                int32_t var_36_5 = 0xffffffff
                                int64_t var_30_5 = 0
                                int64_t var_28_5 = 0
                                result = sub_14078ea20(*(rcx_67 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_5 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_5 = 0
                                    void*** rax_71 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_71
                                    
                                    if (rax_71 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_8 = var_58.o
                                    *rbx_10 = &data_142dc0dd8
                                    *(rbx_10 + 8) = zmm0_8
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc0e30
                                    goto label_1407aee0c
                            else if (result == data_143ce05d0)
                                void* rcx_69 = *(arg3 + 8)
                                int64_t var_40_6 = data_14396f138
                                int16_t rax_74 = data_14396f140
                                var_48 = rbx_5
                                int16_t var_38_6 = rax_74
                                int32_t var_36_6 = 0xffffffff
                                int64_t var_30_6 = 0
                                int64_t var_28_6 = 0
                                result = sub_14078ea20(*(rcx_69 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_6 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_6 = 0
                                    void*** rax_75 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_75
                                    
                                    if (rax_75 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_9 = var_58.o
                                    *rbx_10 = &data_142dc0e88
                                    *(rbx_10 + 8) = zmm0_9
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc0ee0
                                    goto label_1407aee0c
                            else if (result == data_143ce05d8)
                                void* rcx_71 = *(arg3 + 8)
                                int64_t var_40_7 = data_14396f0a8
                                int16_t rax_78 = data_14396f0b0
                                var_48 = rbx_5
                                int16_t var_38_7 = rax_78
                                int32_t var_36_7 = 0xffffffff
                                int64_t var_30_7 = 0
                                int64_t var_28_7 = 0
                                result = sub_14078ea20(*(rcx_71 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_7 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_7 = 0
                                    void*** rax_79 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_79
                                    
                                    if (rax_79 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_10 = var_58.o
                                    *rbx_10 = &data_142dc0f38
                                    *(rbx_10 + 8) = zmm0_10
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc0f90
                                    goto label_1407aee0c
                            else if (result == data_143ce05e0)
                                void* rcx_73 = *(arg3 + 8)
                                int64_t var_40_8 = data_14396f098
                                int16_t rax_82 = data_14396f0a0
                                var_48 = rbx_5
                                int16_t var_38_8 = rax_82
                                int32_t var_36_8 = 0xffffffff
                                int64_t var_30_8 = 0
                                int64_t var_28_8 = 0
                                result = sub_14078ea20(*(rcx_73 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_8 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_8 = 0
                                    void*** rax_83 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_83
                                    
                                    if (rax_83 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_11 = var_58.o
                                    *rbx_10 = &data_142dc0fe8
                                    *(rbx_10 + 8) = zmm0_11
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc1040
                                    goto label_1407aee0c
                            else if (result == data_143ce05e8)
                                void* rcx_75 = *(arg3 + 8)
                                int64_t var_40_9 = data_14396f088
                                int16_t rax_86 = data_14396f090
                                var_48 = rbx_5
                                int16_t var_38_9 = rax_86
                                int32_t var_36_9 = 0xffffffff
                                int64_t var_30_9 = 0
                                int64_t var_28_9 = 0
                                result = sub_14078ea20(*(rcx_75 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_9 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_9 = 0
                                    void*** rax_87 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_87
                                    
                                    if (rax_87 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_12 = var_58.o
                                    *rbx_10 = &data_142dc1098
                                    *(rbx_10 + 8) = zmm0_12
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc10f0
                                    goto label_1407aee0c
                            else if (result == data_143ce05f0)
                                void* rcx_77 = *(arg3 + 8)
                                int64_t var_40_10 = data_14396f0b8
                                int16_t rax_90 = data_14396f0c0
                                var_48 = rbx_5
                                int16_t var_38_10 = rax_90
                                int32_t var_36_10 = 0xffffffff
                                int64_t var_30_10 = 0
                                int64_t var_28_10 = 0
                                result = sub_14078ea20(*(rcx_77 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_10 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_10 = 0
                                    void*** rax_91 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_91
                                    
                                    if (rax_91 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_13 = var_58.o
                                    *rbx_10 = &data_142dc1148
                                    *(rbx_10 + 8) = zmm0_13
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc11a0
                                    goto label_1407aee0c
                            else if (result == data_143ce05f8)
                                void* rcx_79 = *(arg3 + 8)
                                int64_t var_40_11 = data_14396f0c8
                                int16_t rax_94 = data_14396f0d0
                                var_48 = rbx_5
                                int16_t var_38_11 = rax_94
                                int32_t var_36_11 = 0xffffffff
                                int64_t var_30_11 = 0
                                int64_t var_28_11 = 0
                                result = sub_14078ea20(*(rcx_79 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_11 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_11 = 0
                                    void*** rax_95 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_95
                                    
                                    if (rax_95 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_14 = var_58.o
                                    *rbx_10 = &data_142dc11f8
                                    *(rbx_10 + 8) = zmm0_14
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc1250
                                    goto label_1407aee0c
                            else if (result == data_143ce0600)
                                void* rcx_81 = *(arg3 + 8)
                                int64_t var_40_12 = data_14396f0d8
                                int16_t rax_98 = data_14396f0e0
                                var_48 = rbx_5
                                int16_t var_38_12 = rax_98
                                int32_t var_36_12 = 0xffffffff
                                int64_t var_30_12 = 0
                                int64_t var_28_12 = 0
                                result = sub_14078ea20(*(rcx_81 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_12 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_12 = 0
                                    void*** rax_99 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_99
                                    
                                    if (rax_99 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_15 = var_58.o
                                    *rbx_10 = &data_142dc12a8
                                    *(rbx_10 + 8) = zmm0_15
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc1300
                                    goto label_1407aee0c
                            else if (result == data_143ce0608)
                                void* rcx_83 = *(arg3 + 8)
                                int64_t var_40_13 = data_14396f0e8
                                int16_t rax_102 = data_14396f0f0
                                var_48 = rbx_5
                                int16_t var_38_13 = rax_102
                                int32_t var_36_13 = 0xffffffff
                                int64_t var_30_13 = 0
                                int64_t var_28_13 = 0
                                result = sub_14078ea20(*(rcx_83 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_13 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_13 = 0
                                    void*** rax_103 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_103
                                    
                                    if (rax_103 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_16 = var_58.o
                                    *rbx_10 = &data_142dc1358
                                    *(rbx_10 + 8) = zmm0_16
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc13b0
                                    goto label_1407aee0c
                            else if (result == data_143ce0610)
                                void* rcx_85 = *(arg3 + 8)
                                int64_t var_40_14 = data_14396f0f8
                                int16_t rax_106 = data_14396f100
                                var_48 = rbx_5
                                int16_t var_38_14 = rax_106
                                int32_t var_36_14 = 0xffffffff
                                int64_t var_30_14 = 0
                                int64_t var_28_14 = 0
                                result = sub_14078ea20(*(rcx_85 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_14 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_14 = 0
                                    void*** rax_107 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_107
                                    
                                    if (rax_107 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_17 = var_58.o
                                    *rbx_10 = &data_142dc1408
                                    *(rbx_10 + 8) = zmm0_17
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc1460
                                    goto label_1407aee0c
                            else if (result == data_143ce0618)
                                void* rcx_87 = *(arg3 + 8)
                                int64_t var_40_15 = data_14396f138
                                int16_t rax_110 = data_14396f140
                                var_48 = rbx_5
                                int16_t var_38_15 = rax_110
                                int32_t var_36_15 = 0xffffffff
                                int64_t var_30_15 = 0
                                int64_t var_28_15 = 0
                                result = sub_14078ea20(*(rcx_87 + 0x778), &var_48)
                                
                                if (result.d != 0xffffffff)
                                    var_58 = arg1
                                    int64_t var_50_15 = rbx_5
                                    result_2 = nullptr
                                    int32_t var_60_15 = 0
                                    void*** rax_111 = sub_1405978f0(0x28, &result_2)
                                    rbx_10 = rax_111
                                    
                                    if (rax_111 == 0)
                                        sub_1407473e0(arg4, &result_2)
                                        return sub_140745b20(&result_2)
                                    
                                    int128_t zmm0_18 = var_58.o
                                    *rbx_10 = &data_142dc14b8
                                    *(rbx_10 + 8) = zmm0_18
                                    rbx_10[4] = sub_140a387b0()
                                    rax_60 = &data_142dc1510
                                    goto label_1407aee0c
                
                break
            
            rbx_4 = &rbx_4[2]
        while (rbx_4 != rcx_28)
else
    void*** rax_16 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_16 != 0)
        rax_16[1] = arg1
        *rax_16 = &data_142dc0818
        rax_16[3] = sub_140a387b0()
        *rax_16 = &data_142dc0870
    
    result = &var_58
    
    if (&var_58 != arg4)
        if (rax_16 != 0)
            result = (*rax_16)[8](rax_16, arg4)
        else if (arg4[1].d != 0)
            int64_t* rcx_19 = *arg4
            
            if (rcx_19 != 0)
                result = (*(*rcx_19 + 0x38))(rcx_19, 0)
                int64_t* rcx_20 = *arg4
                
                if (rcx_20 != 0)
                    result = sub_140a84c80(rcx_20, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rax_16 != 0)
        (*rax_16)[7](rax_16, 0)
        result = sub_140a84c80(rax_16, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
return result
