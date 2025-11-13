// 函数: sub_1423d4680
// 地址: 0x1423d4680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x1c0)
wchar16 const* const rax_1

if (rax s> 0)
    rax.b = rax == *(arg2 + 0x1d0)
    
    if (rax.b != 0)
        void* rcx_6 = *(arg2 + 0x278)
        int64_t rax_5 = *(rcx_6 + 0x128)
        int32_t r12 = 0
        int16_t* var_b8
        int32_t var_b0
        int16_t* var_a8
        int64_t var_98
        uint64_t arg_10
        
        if (rax_5 != 0)
            arg_10 = *(sub_140d21d80(*(rcx_6 + 0x30)) + 0x18)
            sub_140b63b70(&arg_10, &var_b8)
            sub_140b63b70(*(arg2 + 0x1b8), &var_a8)
            void* rax_7 = *(arg2 + 0x278)
            int64_t* i = *(rax_7 + 0x98)
            
            for (void* rsi_1 = &i[sx.q(*(rax_7 + 0xa0))]; i != rsi_1; i = &i[1])
                void* rdi_1 = *i
                
                if (rdi_1 != 0)
                    void* rax_9 = sub_14252ce80()
                    void* rdx_4 = *(rdi_1 + 0x10)
                    int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                    
                    if (rax_10.d s<= *(rdx_4 + 0x38)
                            && *(*(rdx_4 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                        int64_t* rax_12 = sub_1420e4db0(rdi_1, &var_98)
                        
                        if (&var_b8 != rax_12)
                            int16_t* rcx_13 = var_b8
                            
                            if (rcx_13 != 0)
                                sub_140a74f90(rcx_13)
                            
                            var_b8 = *rax_12
                            *rax_12 = 0
                            var_b0 = rax_12[1].d
                            int32_t var_ac_1 = *(rax_12 + 0xc)
                            rax_12[1] = 0
                        
                        int64_t rcx_15 = var_98
                        
                        if (rcx_15 != 0)
                            sub_140a74f90(rcx_15)
                        
                        break
            
            sub_142003490()
            data_143a2dfc0:4.d += 1
            int64_t r14
            r14.b = 0
            int32_t rcx_16 = data_143a2dfc0:4.d
            int32_t rax_15 = data_143a2dfb8.d
            int64_t rdi_2 = sx.q(rax_15 - 1)
            
            if (rax_15 - 1 s>= 0)
                int64_t rbx_3 = rdi_2 << 4
                int64_t temp1_1
                
                do
                    int64_t* rax_17 = data_143a2dfb0
                    
                    if (*(rax_17 + rbx_3 + 8) == 0)
                        r14.b = 1
                    else
                        int64_t* rcx_17 = *(rax_17 + rbx_3)
                        
                        if (rcx_17 == 0)
                            r14.b = 1
                        else if ((*(*rcx_17 + 0x50))(rcx_17, &var_b8, &var_a8) == 0)
                            r14.b = 1
                    
                    rbx_3 -= 0x10
                    temp1_1 = rdi_2
                    rdi_2 -= 1
                while (temp1_1 - 1 s>= 0)
                rcx_16 = data_143a2dfc0:4.d
            
            data_143a2dfc0:4.d = rcx_16 - 1
            
            if (r14.b != 0)
                sub_140599630(&data_143a2dfb0, 0)
            
            int16_t* rcx_18 = var_a8
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            int16_t* rcx_19 = var_b8
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
        
        void** var_88
        sub_1405ab8c0(&var_88)
        int64_t var_78 = 0
        var_88 = &data_1433427d0
        int64_t var_70 = 0
        int64_t rdx_7
        
        if (*(arg2 + 0x208) s> 0)
            int64_t rax_21
            int64_t r8_3
            rax_21, r8_3 = sub_140d41340()
            r8_3.b = 1
            int32_t* var_68
            sub_1409aa070(&var_68, rax_21, r8_3, 0x10, 0)
            int64_t* var_58
            int64_t* r8_4 = var_58
            
            if (r8_4 != 0)
                int32_t var_60
                int32_t rdi_3 = var_60
                
                while (true)
                    if (r8_4 != 0)
                        void* r13_1 = *r8_4
                        
                        if (r13_1 != 0)
                            void* rax_22 = sub_142527690()
                            rdx_7 = *(r13_1 + 0x10)
                            int64_t rax_23 = sx.q(*(rax_22 + 0x38))
                            
                            if (rax_23.d s<= *(rdx_7 + 0x38)
                                    && *(*(rdx_7 + 0x30) + (rax_23 << 3)) == rax_22 + 0x30)
                                int32_t i_1 = 0
                                
                                if (*(arg2 + 0x208) s> 0)
                                    int64_t rsi_2 = 0
                                    
                                    do
                                        if (*(sub_140d21d80(r13_1) + 0x18)
                                                == *(*(arg2 + 0x200) + rsi_2)
                                                && (*(*(arg2 + 0x200) + rsi_2 + 8) & 3) != 0)
                                            int64_t rbx_5 = sx.q(var_70.d)
                                            int32_t rax_27 = (rbx_5 + 1).d
                                            var_70.d = rax_27
                                            
                                            if (rax_27 s> var_70:4.d)
                                                sub_1405a4d70(&var_78)
                                            
                                            *(var_78 + (rbx_5 << 3)) = r13_1
                                            break
                                        
                                        i_1 += 1
                                        rsi_2 += 0x10
                                    while (i_1 s< *(arg2 + 0x208))
                    
                    int32_t* rcx_26 = var_68
                    int32_t r9_1 = rcx_26[9]
                    
                    while (true)
                        int32_t rax_29 = rdi_3 + 1
                        int16_t var_60_1 = rax_29.w
                        rdi_3 = rax_29
                        
                        if (rax_29 s>= r9_1)
                            goto label_1423d4ad0
                        
                        void* rax_34
                        
                        while (true)
                            uint32_t rcx_27 = zx.d(var_60_1)
                            int32_t rax_30 = rdi_3
                            
                            if (rdi_3 s< 0)
                                rax_30 = rdi_3 + 0xffff
                                rcx_27 -= 0x10000
                            
                            int64_t rcx_28 = sx.q(rcx_27) * 3
                            int64_t rax_33 = *(*(rcx_26 + 0x10) + (sx.q(rax_30 s>> 0x10) << 3))
                            r8_4 = rax_33 + (rcx_28 << 3)
                            rax_34 = *(rax_33 + (rcx_28 << 3))
                            
                            if (rax_34 != 0)
                                break
                            
                            int32_t rax_35 = rdi_3 + 1
                            var_60_1 = rax_35.w
                            rdi_3 = rax_35
                            
                            if (rax_35 s>= r9_1)
                                goto label_1423d4ad0
                        
                        rcx_26 = var_68
                        int32_t var_48
                        
                        if ((*(rax_34 + 8) & var_48) == 0)
                            int32_t rax_42 = *(rax_34 + 0xc)
                            int64_t rax_46
                            
                            if (rax_42 s>= data_143e1d9b4)
                                rax_46 = 0
                            else
                                uint32_t rdx_10 = zx.d(rax_42.w)
                                
                                if (rax_42 s< 0)
                                    rax_42 += 0xffff
                                    rdx_10 -= 0x10000
                                
                                rax_46 = *(data_143e1d9a0 + (sx.q(rax_42 s>> 0x10) << 3))
                                    + sx.q(rdx_10) * 0x18
                            
                            rcx_26 = var_68
                            int32_t var_44
                            
                            if ((*(rax_46 + 8) & var_44) == 0)
                                break
        
    label_1423d4ad0:
        uint64_t* rcx_30 = *(arg2 + 0x278) + 0x580
        rcx_30[1].d = 0
        
        if (*(rcx_30 + 0xc) != 0)
            sub_140638c50(rcx_30, 0)
        
        void* rax_36 = *(arg2 + 0x278)
        int64_t rdi_4 = 0
        int64_t** rbx_6 = *(rax_36 + 0x98)
        uint64_t rsi_4 = sx.q(*(rax_36 + 0xa0)) << 3 u>> 3
        
        if (rbx_6 u> &rbx_6[sx.q(*(rax_36 + 0xa0))])
            rsi_4 = 0
        
        if (rsi_4 != 0)
            do
                int64_t* rcx_31 = *rbx_6
                
                if (rcx_31 != 0)
                    rdx_7.b = 1
                    sub_1420ee130(rcx_31, rdx_7.b)
                
                rbx_6 = &rbx_6[1]
                rdi_4 += 1
            while (rdi_4 != rsi_4)
        
        rdx_7.b = 1
        sub_140cb0ba0(0, rdx_7.b)
        void* r13_2 = nullptr
        int32_t i_2 = 0
        int64_t rbx_8 = **(arg2 + 0x1b8)
        *(*(arg2 + 0x278) + 0x590) = rbx_8
        
        if (*(arg2 + 0x1d0) s> 0)
            int64_t* rdi_5 = nullptr
            
            do
                void* rsi_5 = *(rdi_5 + *(arg2 + 0x1c8))
                
                if (rsi_5 != 0 && rbx_8 == *(sub_140d21d80(rsi_5) + 0x18))
                    r13_2 = rsi_5
                    break
                
                i_2 += 1
                rdi_5 = &rdi_5[1]
            while (i_2 s< *(arg2 + 0x1d0))
        
        arg_10 = *(sub_140d21d80(r13_2) + 0x18)
        sub_140b63b70(&arg_10, &var_b8)
        int16_t* const r8_6 = &data_142d40450
        
        if (var_b0 != 0)
            r8_6 = var_b8
        
        sub_140a2e390(&var_a8, u"LevelStreamingPersistent_%s", r8_6)
        void* rsi_6 = *(arg2 + 0x278)
        int16_t* rdx_12 = &data_142d40450
        int32_t var_a0
        
        if (var_a0 != 0)
            rdx_12 = var_a8
        
        void arg_20
        uint64_t rdi_6 = *sub_140b58260(&arg_20, rdx_12, 1)
        uint32_t rcx_44
        rcx_44.b = (rdi_6 u>> 0x20).d == 0
        
        if ((rcx_44.b & sub_140b5b8a0(rdi_6.d, 0)) != 0)
            sub_140d19010(rsi_6, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        int64_t var_e0 = 0
        int32_t var_e8 = 0
        void* rax_51 = sub_140d2dfc0(sub_14252ce80(), rsi_6, rdi_6, 0, 0, 0, 0, 0, 0)
        int16_t* rcx_47 = var_a8
        int64_t* rdi_7 = rax_51
        
        if (rcx_47 != 0)
            sub_140a74f90(rcx_47)
        
        int16_t* rcx_48 = var_b8
        
        if (rcx_48 != 0)
            sub_140a74f90(rcx_48)
        
        sub_14242c7b0(*(arg2 + 0x278), rdi_7)
        sub_1420ee280(rdi_7, r13_2)
        sub_1420ee550(rdi_7, rbx_8)
        void* r14_1 = *(r13_2 + 0x20)
        int32_t rbx_9 = 0
        int16_t* r13_3 = nullptr
        var_b8 = nullptr
        int32_t var_ac_2 = 0
        int32_t rax_52 = *(r14_1 + 0xa0)
        
        if (rax_52 s> 0)
            sub_1405a4d70(&var_b8)
            r13_3 = var_b8
            r12 = rax_52
        else if (rax_52 s< 0 && rax_52 != 0)
            sub_1405c53d0(&var_b8)
            r13_3 = var_b8
            r12 = rax_52
        
        int32_t rdi_8 = *(r14_1 + 0xa0)
        int32_t rdi_9 = rdi_8 - 1
        
        if (rdi_8 - 1 s>= 0)
            int64_t rsi_7 = sx.q(rdi_9) << 3
            int32_t temp4_1
            
            do
                int64_t* rbx_10 = *(rsi_7 + *(r14_1 + 0x98))
                (*(*rbx_10 + 0x138))(rbx_10, 0, *(arg2 + 0x278), 0x11)
                sub_142441b70(r14_1, rdi_9)
                temp4_1 = rdi_9
                rdi_9 -= 1
                *(rsi_7 + r13_3) = rbx_10
                rsi_7 -= 8
            while (temp4_1 - 1 s>= 0)
            rbx_9 = 0
        
        void* rcx_56 = *(arg2 + 0x278)
        var_a8 = r13_3
        int32_t var_a0_1 = r12
        var_98.o = var_a8.o
        sub_14242c860(rcx_56, &var_98)
        void* rcx_57 = *(arg2 + 0x278)
        int64_t r13_4 = 0
        int64_t* r12_1 = *(rcx_57 + 0x98)
        uint64_t rdi_11 = sx.q(*(rcx_57 + 0xa0)) << 3 u>> 3
        
        if (r12_1 u> &r12_1[sx.q(*(rcx_57 + 0xa0))])
            rdi_11 = 0
        
        arg_10 = rdi_11
        int16_t* rdx_20
        
        if (rdi_11 != 0)
            uint64_t rax_58 = rdi_11
            
            do
                int64_t* rdi_12 = *r12_1
                
                if (rdi_12 != 0)
                    int32_t i_3 = 0
                    
                    if (*(arg2 + 0x1c0) s> 0)
                        int64_t r14_2 = 0
                        
                        do
                            int64_t* rbx_11 = *(arg2 + 0x1b8)
                            int64_t* rax_59
                            rax_59, rdx_20 = sub_1420e4d10(rdi_12, &arg_20)
                            
                            if (*(rbx_11 + r14_2) == *rax_59)
                                rdx_20.b = 1
                                (*(*rdi_12 + 0x260))(rdi_12, rdx_20)
                                sub_1420ee450(rdi_12, 1)
                                char rax_65
                                rax_65, rdx_20 = sub_14243af00(*(arg2 + 0x278))
                                
                                if (rax_65 != 0)
                                    char rax_67 = (*(*rdi_12 + 0x268))(rdi_12)
                                    int64_t rdx_26 = *rdi_12
                                    char rax_68 = (*(rdx_26 + 0x270))(rdi_12, rdx_26)
                                    sub_1424373a0(*(arg2 + 0x278), &var_a8)
                                    int32_t rcx_68 = var_a0_1
                                    
                                    while (true)
                                        rdx_20 = var_a8
                                        int64_t* rax_69
                                        
                                        if (rcx_68 s< 0 || rcx_68 s>= *(rdx_20 + 8))
                                            rax_69.b = 0
                                        else
                                            rax_69.b = 1
                                        
                                        if (rax_69.b == 0)
                                            break
                                        
                                        rax_69 = sub_140d3c6e0(*rdx_20 + (sx.q(rcx_68) << 3))
                                        
                                        if (rax_69 != 0)
                                            var_e0.d = rdi_12[0x16].d
                                            var_e8.b = *(rdi_12 + 0xba) u>> 7
                                            sub_142271ca0(rax_69, rdi_12, rax_67, rax_68, 0, 0)
                                        
                                        rcx_68 = var_a0_1 + 1
                                        var_a0_1 = rcx_68
                                
                                break
                            
                            i_3 += 1
                            r14_2 += 8
                        while (i_3 s< *(arg2 + 0x1c0))
                        
                        rax_58 = arg_10
                        rbx_9 = 0
                
                r12_1 = &r12_1[1]
                r13_4 += 1
            while (r13_4 != rax_58)
            
            rcx_57 = *(arg2 + 0x278)
        
        rdx_20.b = 2
        sub_142435600(rcx_57, rdx_20.b)
        int64_t* rax_61 = sub_142435f50(*(arg2 + 0x278))
        
        if (rax_61 != 0)
            int64_t r8_9 = *rax_61
            (*(r8_9 + 0x48))(rax_61, 0, r8_9)
        
        sub_140cb0ba0(0, 1)
        char rdx_23
        
        if (*(arg2 + 0x208) s<= 0)
            rdx_23 = 2
        else
            int64_t* rsi_8 = *(arg2 + 0x200)
            void* r12_4 = &rsi_8[sx.q(*(arg2 + 0x208)) * 2]
            
            if (rsi_8 != r12_4)
                do
                    void* rax_62 = *(arg2 + 0x278)
                    void** i_4 = *(rax_62 + 0x98)
                    
                    for (void* r14_3 = &i_4[sx.q(*(rax_62 + 0xa0))]; i_4 != r14_3; i_4 = &i_4[1])
                        void* rcx_61 = *i_4
                        int64_t* rax_63
                        int64_t rbx_12
                        
                        if (rcx_61 != 0)
                            rbx_12 = *rsi_8
                            rax_63 = sub_1420e4d10(rcx_61, &arg_10)
                        
                        if (rcx_61 == 0 || *rax_63 != rbx_12)
                            rax_63.b = 0
                        else
                            rax_63.b = 1
                        
                        if (rax_63.b != 0)
                            if (i_4 != 0)
                                int64_t* rcx_74 = *i_4
                                (*(*rcx_74 + 0x260))(rcx_74, rsi_8[1].b & 1)
                                sub_1420ee450(*i_4, (rsi_8[1].d u>> 1).b & 1)
                                sub_1420ee190(*i_4, *(rsi_8 + 0xc))
                            
                            break
                    
                    rsi_8 = &rsi_8[2]
                while (rsi_8 != r12_4)
                
                rbx_9 = 0
            
            bool cond:11_1 = *(arg2 + 0x20c) == 0
            *(arg2 + 0x208) = 0
            
            if (not(cond:11_1))
                sub_1405a5410(arg2 + 0x200, 0)
            
            rdx_23 = 1
        
        sub_142435600(*(arg2 + 0x278), rdx_23)
        *(*(arg2 + 0x278) + 0x4dc) = 3
        bool cond:13 = *(arg2 + 0x1c4) == 0
        *(arg2 + 0x1c0) = 0
        
        if (not(cond:13))
            sub_140638c50(arg2 + 0x1b8, 0)
        
        bool cond:10 = *(arg2 + 0x1d4) == 0
        *(arg2 + 0x1d0) = 0
        
        if (not(cond:10))
            sub_1405c5570(arg2 + 0x1c8, 0)
        
        if (*(arg2 + 0x1d8) != &data_142d40450)
            int32_t rax_73 = *(arg2 + 0x1e4)
            *(arg2 + 0x1e0) = 0
            
            if (rax_73 != 0)
                sub_1405947f0(arg2 + 0x1d8, 0)
                rax_73 = *(arg2 + 0x1e4)
                rbx_9 = *(arg2 + 0x1e0)
            
            if (rbx_9 s> rax_73)
                sub_140594770(arg2 + 0x1d8)
        
        void*** rax_74 = sub_141f88540()
        void** rdx_35 = *rax_74
        rdx_35[6](rax_74, rdx_35)
        
        if (rax_5 != 0)
            sub_142003490()
            sub_140599090(&data_143a2dfc8)
        
        int16_t* rcx_84 = var_b8
        
        if (rcx_84 != 0)
            sub_140a74f90(rcx_84)
        
        int64_t rcx_85 = var_78
        
        if (rcx_85 != 0)
            sub_140a74f90(rcx_85)
        
        void* rcx_86 = data_143e1a338
        var_88 = &data_142d44d70
        char var_80
        
        if (rcx_86 != 0 && var_80 != 0)
            sub_140bb6e00(rcx_86, &var_88)
        
        void** const rax_75
        rax_75.b = 1
        return rax_75
    
    if (*(arg2 + 0x1d8) != u"Map change is not ready yet")
        int32_t rcx_3 = 0
        bool cond:1_1 = *(arg2 + 0x1e4) == 0x1c
        *(arg2 + 0x1e0) = 0
        
        if (not(cond:1_1))
            sub_1405947f0(arg2 + 0x1d8, 0x1c)
            rcx_3 = *(arg2 + 0x1e0)
        
        *(arg2 + 0x1e0) = rcx_3 + 0x1c
        
        if (rcx_3 + 0x1c s> *(arg2 + 0x1e4))
            sub_140594770(arg2 + 0x1d8)
        
        rax_1 = *(arg2 + 0x1d8)
        __builtin_memcpy(rax_1, u"Map change is not ready ", 0x30)
        *(rax_1 + 0x30) = 0x7400650079
else if (*(arg2 + 0x1d8) != u"No map change is being prepared")
    int32_t rcx = 0
    bool cond:0 = *(arg2 + 0x1e4) == 0x20
    *(arg2 + 0x1e0) = 0
    
    if (not(cond:0))
        sub_1405947f0(arg2 + 0x1d8, 0x20)
        rcx = *(arg2 + 0x1e0)
    
    *(arg2 + 0x1e0) = rcx + 0x20
    
    if (rcx + 0x20 s> *(arg2 + 0x1e4))
        sub_140594770(arg2 + 0x1d8)
    
    __builtin_memcpy(*(arg2 + 0x1d8), u"No map change is being prepared", 0x40)
    int64_t rax_3
    rax_3.b = 0
    return rax_3

rax_1.b = 0
return rax_1
