// 函数: ?OpenEx2W@PDB1@@SAHPEBGPEBDKJPEAJPEAG_KPEAPEAUPDB@@@Z
// 地址: 0x14206b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t r14 = arg3
int32_t rsi = arg4
int64_t* var_188 = nullptr
int32_t rcx = *(data_143f412e8 + 4)
int32_t rax_2 = *(data_143f41398 + 4)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg5)
int32_t rdx_1 = temp2 & 0x3ff
int32_t rax_5 = temp3 + rdx_1
int32_t rcx_2 = rax_5 s>> 0xa
int32_t r9

if (rcx_2 s<= 0x40)
    r9 = rcx_2
    
    if (rcx_2 == 0)
        r9 = 1
else
    r9 = 0x40

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rcx_2)
int32_t var_118 = 0
int32_t var_10c = (rax_5 & 0x3ff) - rdx_1
int32_t var_114 = divs.dp.d(temp4:temp5, r9)
int32_t var_110 = mods.dp.d(temp4:temp5, r9)
int64_t* rax_12 = std::_Get_future_error_what((*U"1111")[sx.q(arg6)])
void* var_80
sub_1419a2ec0(rax_12, &var_80, &data_143f42c10, 0)
void* r12 = var_80
void* var_78
void* r15 = var_78
void* var_b0 = r12
void* var_a8 = r15
void* var_70
sub_1419a2ec0(rax_12, &var_70, &data_143f42d10, 0)
void* r13 = var_70
void* var_178 = r13
void* var_60
sub_1419a2ec0(rax_12, &var_60, &data_143f42e20, 0)
void* rax_14 = var_60
void* var_50
sub_1419a2ec0(rax_12, &var_50, &data_143f42f30, 0)
void* rax_16 = var_50
int32_t r8_1 = 0xf
int32_t i = 0
int16_t r9_1 = *(r13 + 0x11a)
arg5.w = r9_1
arg6 = 0xf
int32_t i_1 = 0
TEB* gsbase
void* rax_19 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)

do
    if ((rsi & r8_1) != 0)
        int64_t* rcx_9 = data_143f0f180
        int32_t var_1b0_1 = 1
        int64_t rax_20 = *rcx_9
        void* var_1a8
        int64_t* var_180
        
        if (r9_1 == 0)
            int64_t* var_150
            (*(rax_20 + 0xf8))(rcx_9, &var_150, &var_118, &data_143f42ba0, 0, 1, var_1a8)
            int64_t* rbx_1 = var_150
            var_180 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                rbx_1 = var_180
            
            sub_1405d1550(&var_150)
            int64_t* rsi_1 = var_188
            var_188 = rbx_1
            var_180 = nullptr
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    char rax_24
                    
                    if (rsi_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_24 = sub_1405949a0()
                    
                    if (rsi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_24 != 0))
                        (**rsi_1)(rsi_1, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rsi_1 + 0xc))
                            *(rsi_1 + 0xc) = 1
                            z_1 = true
                        else
                            *(rsi_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_26 = sub_140a20af0()
                            void* const rax_27
                            
                            if (rax_26 != 0)
                                rax_27 = *((zx.q(rax_26 u>> 0xe) << 3) + &data_143cf0bf8)
                                    + (zx.q(rax_26) & 0x3fff) * 0x18
                            else
                                rax_27 = nullptr
                            
                            *(rax_27 + 8) = rsi_1
                            sub_1405a42f0(&data_143f02390, rax_26)
            
            sub_1405d1550(&var_180)
        else
            int128_t* rax_21 =
                (*(rax_20 + 0x130))(rcx_9, &data_143f02b98, data_143a2e2c0, 0, 0x20, 1, var_1a8)
            *rax_21 = var_118.o
            rax_21[1] = r9.o
            int64_t* rcx_10 = data_143f0f180
            (*(*rcx_10 + 0x138))(rcx_10, &data_143f02b98, data_143a2e2c0)
        
        int64_t rax_30 = data_143a2e2a0
        int64_t* rsi_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_17 = &rsi_4[1]
        
        if (rcx_17 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x10)
            rsi_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_17 = &rsi_4[1]
        
        *(arg1 + 0x30) = rcx_17
        *rsi_4 = rax_30
        void*** rcx_21 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_31 = &rcx_21[6]
        
        if (rax_31 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_21 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_31 = &rcx_21[6]
        
        *(arg1 + 0x30) = rax_31
        void**** rax_32 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_32 = rcx_21
        *(arg1 + 8) = &rcx_21[1]
        rcx_21[1] = 0
        *rcx_21 = &data_142da7798
        rcx_21[3] = rsi_4
        void* rsi_7 = nullptr
        rcx_21[2].d = 1
        rcx_21[4].d = 2
        *(rcx_21 + 0x24) = 3
        rcx_21[5] = 0
        
        if (r12 != 0)
            int64_t* r14_1 = *(r15 + 0x10)
            int64_t rdx_12 = sx.q(*(r12 + 0x10c))
            int64_t rsi_8 = r14_1[3]
            int64_t r15_1 = rdx_12 << 3
            
            if (*(r15_1 + rsi_8) == 0)
                sub_1419ccf30(r14_1, rdx_12.d)
                rsi_8 = r14_1[3]
            
            rsi_7 = *(r15_1 + rsi_8)
        
        *(arg1 + 0x1b0) = rsi_7
        sub_14198aa60(rsi_7)
        void*** rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_34 = &rcx_29[3]
        
        if (rax_34 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x20)
            rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_34 = &rcx_29[3]
        
        *(arg1 + 0x30) = rax_34
        void**** rax_35 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_35 = rcx_29
        *(arg1 + 8) = &rcx_29[1]
        rcx_29[1] = 0
        *rcx_29 = &data_142dd5b40
        rcx_29[2] = rsi_7
        int64_t r14_2 = data_143a2e2a0
        int64_t r15_2 = *(arg1 + 0x1b0)
        
        if (*(r12 + 0x11a) u> 0)
            uint32_t rsi_9 = zx.d(*(r12 + 0x118))
            void*** rcx_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_37 = &rcx_35[5]
            
            if (rax_37 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_37 = &rcx_35[5]
            
            *(arg1 + 0x30) = rax_37
            void**** rax_38 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_38 = rcx_35
            *(arg1 + 8) = &rcx_35[1]
            rcx_35[1] = 0
            *rcx_35 = &data_142da77d8
            rcx_35[2] = r15_2
            rcx_35[3].d = rsi_9
            rcx_35[4] = r14_2
        
        sub_1419cd1c0(arg1, r12, 1, 1, 1)
        int64_t r14_3 = *(arg1 + 0x1b0)
        
        if (*(r12 + 0x11a) u> 0)
            uint32_t rsi_10 = zx.d(*(r12 + 0x118))
            void*** rcx_42 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_40 = &rcx_42[5]
            
            if (rax_40 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_42 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_40 = &rcx_42[5]
            
            *(arg1 + 0x30) = rax_40
            void**** rax_41 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_41 = rcx_42
            *(arg1 + 8) = &rcx_42[1]
            rcx_42[1] = 0
            *rcx_42 = &data_142da77d8
            rcx_42[2] = r14_3
            rcx_42[3].d = rsi_10
            rcx_42[4] = 0
        
        int64_t rax_43 = data_143a2e2a0
        int64_t* rsi_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_46 = &rsi_13[1]
        
        if (rcx_46 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x10)
            rsi_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_46 = &rsi_13[1]
        
        *(arg1 + 0x30) = rcx_46
        *rsi_13 = rax_43
        void*** rcx_50 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_44 = &rcx_50[6]
        
        if (rax_44 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_50 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_44 = &rcx_50[6]
        
        *(arg1 + 0x30) = rax_44
        *(arg1 + 0x14) += 1
        **(arg1 + 8) = rcx_50
        *(arg1 + 8) = &rcx_50[1]
        rcx_50[1] = 0
        *rcx_50 = &data_142da7798
        rcx_50[2].d = 1
        rcx_50[3] = rsi_13
        rcx_50[4].d = 2
        *(rcx_50 + 0x24) = 3
        rcx_50[5] = 0
        void* var_68
        int64_t* rsi_16 = *(var_68 + 0x10)
        int64_t rdx_14 = sx.q(*(r13 + 0x10c))
        int64_t* rcx_54 = rsi_16[3]
        
        if (rcx_54[rdx_14] == 0)
            sub_1419ccf30(rsi_16, rdx_14.d)
            rcx_54 = rsi_16[3]
        
        void* rsi_17 = rcx_54[rdx_14]
        *(arg1 + 0x1b0) = rsi_17
        sub_14198aa60(rsi_17)
        void*** rcx_59 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_48 = &rcx_59[3]
        
        if (rax_48 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x20)
            rcx_59 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_48 = &rcx_59[3]
        
        *(arg1 + 0x30) = rax_48
        void**** rax_49 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_49 = rcx_59
        *(arg1 + 8) = &rcx_59[1]
        rcx_59[1] = 0
        *rcx_59 = &data_142dd5b40
        rcx_59[2] = rsi_17
        int64_t r14_5 = data_143a2e2a0
        int64_t r15_3 = *(arg1 + 0x1b0)
        
        if (*(r13 + 0x122) u> 0)
            uint32_t rsi_18 = zx.d(*(r13 + 0x120))
            void*** rcx_65 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_51 = &rcx_65[5]
            
            if (rax_51 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_65 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_51 = &rcx_65[5]
            
            *(arg1 + 0x30) = rax_51
            void**** rax_52 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_52 = rcx_65
            *(arg1 + 8) = &rcx_65[1]
            rcx_65[1] = 0
            *rcx_65 = &data_142da77d8
            rcx_65[2] = r15_3
            rcx_65[3].d = rsi_18
            rcx_65[4] = r14_5
        
        int32_t r8_6 = 0
        int64_t rdx_15 = 0
        void* r14_6 = var_178
        int64_t* rax_55 = arg2 + (sx.q(arg_18) << 3)
        int64_t r12_1 = *rax_55
        int64_t r13_1 = data_143a2e2c8
        int64_t r15_4 = *(arg1 + 0x1b0)
        int64_t rsi_19 = sx.q(*(r14_6 + 0xe0))
        
        if (rsi_19 s> 0)
            while (true)
                void* rcx_71 = *(r14_6 + 0xd8)
                
                if ((*(r14_6 + 0xd8) & 1) != 0)
                    rcx_71 = (rcx_71 s>> 1) + r14_6 + 0xd8
                
                if (*(rcx_71 + (rdx_15 << 3)) == data_143f42b90)
                    break
                
                r8_6 += 1
                rdx_15 += 1
                
                if (rdx_15 s>= rsi_19)
                    goto label_14206b8a2
        
        int16_t* rdx_16
        
        if (rsi_19 s<= 0 || r8_6 == 0xffffffff)
        label_14206b8a2:
            
            if (data_143ce8564 s> *(0x14 + *rax_19))
                _Init_thread_header(&data_143ce8564)
                
                if (data_143ce8564 == 0xffffffff)
                    data_143ce8560 = 0xffff
                    _Init_thread_footer(&data_143ce8564)
            
            rdx_16 = &data_143ce8560
        else
            void* rcx_84 = *(r14_6 + 0xe8)
            
            if ((rcx_84.b & 1) != 0)
                rcx_84 = (rcx_84 s>> 1) + r14_6 + 0xe8
            
            rdx_16 = rcx_84 + (sx.q(r8_6) << 1)
        
        int16_t rax_60 = *rdx_16
        
        if (rax_60 != 0xffff)
            int64_t* rsi_20 = var_188
            void*** rcx_74 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_61 = &rcx_74[5]
            
            if (rax_61 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_74 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_61 = &rcx_74[5]
            
            *(arg1 + 0x30) = rax_61
            void**** rax_62 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_62 = rcx_74
            *(arg1 + 8) = &rcx_74[1]
            rcx_74[1] = 0
            rcx_74[3].d = zx.d(rax_60)
            r14_6 = var_178
            *rcx_74 = &data_142da77a8
            rcx_74[2] = r15_4
            rcx_74[4] = rsi_20
        
        if (*(r14_6 + 0x11e) u> 0)
            uint32_t rsi_21 = zx.d(*(r14_6 + 0x11c))
            void*** rcx_80 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_64 = &rcx_80[5]
            
            if (rax_64 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_80 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_64 = &rcx_80[5]
            
            *(arg1 + 0x30) = rax_64
            void**** rax_65 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_65 = rcx_80
            *(arg1 + 8) = &rcx_80[1]
            rcx_80[1] = 0
            *rcx_80 = &data_142d99560
            rcx_80[2] = r15_4
            rcx_80[3].d = rsi_21
            rcx_80[4] = r12_1
        
        if (*(var_178 + 0x11a) u> 0)
            uint32_t rsi_22 = zx.d(*(var_178 + 0x118))
            void*** rcx_88 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_69 = &rcx_88[5]
            
            if (rax_69 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_88 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_69 = &rcx_88[5]
            
            *(arg1 + 0x30) = rax_69
            void**** rax_70 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_70 = rcx_88
            *(arg1 + 8) = &rcx_88[1]
            rcx_88[1] = 0
            *rcx_88 = &data_142d99560
            rcx_88[2] = r15_4
            rcx_88[3].d = rsi_22
            rcx_88[4] = r13_1
        
        sub_1419cd1c0(arg1, var_178, r9, 1, 1)
        int64_t r14_8 = *(arg1 + 0x1b0)
        
        if (*(var_178 + 0x11a) u> 0)
            uint32_t rsi_23 = zx.d(*(var_178 + 0x118))
            void*** rcx_95 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_72 = &rcx_95[5]
            
            if (rax_72 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_95 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_72 = &rcx_95[5]
            
            *(arg1 + 0x30) = rax_72
            void**** rax_73 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_73 = rcx_95
            *(arg1 + 8) = &rcx_95[1]
            rcx_95[1] = 0
            *rcx_95 = &data_142d99560
            rcx_95[2] = r14_8
            rcx_95[3].d = rsi_23
            rcx_95[4] = 0
        
        if (*(var_178 + 0x11e) u> 0)
            uint32_t rsi_24 = zx.d(*(var_178 + 0x11c))
            void*** rcx_101 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_75 = &rcx_101[5]
            
            if (rax_75 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_101 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_75 = &rcx_101[5]
            
            *(arg1 + 0x30) = rax_75
            void**** rax_76 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_76 = rcx_101
            *(arg1 + 8) = &rcx_101[1]
            rcx_101[1] = 0
            *rcx_101 = &data_142d99560
            rcx_101[2] = r14_8
            rcx_101[3].d = rsi_24
            rcx_101[4] = 0
        
        if (*(var_178 + 0x122) u> 0)
            uint32_t rsi_25 = zx.d(*(var_178 + 0x120))
            void*** rcx_107 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_78 = &rcx_107[5]
            
            if (rax_78 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_107 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_78 = &rcx_107[5]
            
            *(arg1 + 0x30) = rax_78
            void**** rax_79 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_79 = rcx_107
            *(arg1 + 8) = &rcx_107[1]
            rcx_107[1] = 0
            *rcx_107 = &data_142da77d8
            rcx_107[2] = r14_8
            rcx_107[3].d = rsi_25
            rcx_107[4] = 0
        
        int64_t rax_81 = data_143a2e2a8
        int64_t rcx_111 = data_143a2e2a0
        int64_t* rsi_28 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_82 = &rsi_28[2]
        
        if (rax_82 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x18)
            rsi_28 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_82 = &rsi_28[2]
        
        *(arg1 + 0x30) = rax_82
        *rsi_28 = rcx_111
        rsi_28[1] = rax_81
        void*** rcx_115 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_84 = &rcx_115[6]
        
        if (rax_84 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_115 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_84 = &rcx_115[6]
        
        int32_t r12_3 = rcx
        *(arg1 + 0x30) = rax_84
        void**** rax_85 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_85 = rcx_115
        *(arg1 + 8) = &rcx_115[1]
        rcx_115[1] = 0
        *rcx_115 = &data_142da7798
        rcx_115[2].d = 2
        rcx_115[3] = rsi_28
        rcx_115[4].d = 2
        *(rcx_115 + 0x24) = 3
        rcx_115[5] = 0
        
        if (r12_3 != 0)
            int32_t* var_170 = nullptr
            int32_t var_168_1 = 0
            sub_1405dadb0(&var_170, 0x400)
            int32_t rax_87 = var_168_1 + 0x400
            var_168_1 = rax_87
            
            if (rax_87 s> 0)
                sub_1405a4cf0(&var_170)
            
            int64_t* rcx_121 = data_143f0f180
            var_1b0_1 = 0
            int64_t rax_89 = (*(*rcx_121 + 0x130))(rcx_121, &data_143f02b98, data_143a2e280, 0, 
                0x1000, 0, var_1a8)
            int32_t* r12_4 = var_170
            memcpy(r12_4, rax_89, 0x1000)
            int64_t* rcx_123 = data_143f0f180
            (*(*rcx_123 + 0x138))(rcx_123, &data_143f02b98, data_143a2e280)
            int32_t* rsi_31 = r12_4
            int64_t j_1 = 0x40
            int64_t j
            
            do
                int64_t var_130 = 0
                int64_t k_1 = 0x10
                int64_t var_128_1 = 0
                int64_t k
                
                do
                    int64_t var_90
                    sub_140a2e390(&var_90, u" %04d", zx.q(*rsi_31))
                    int32_t var_88
                    int32_t r8_12
                    
                    if (var_88 == 0)
                        r8_12 = 0
                    else
                        r8_12 = var_88 - 1
                    
                    sub_140a20ba0(&var_130, var_90, r8_12)
                    int64_t rcx_126 = var_90
                    
                    if (rcx_126 != 0)
                        sub_140a74f90(rcx_126)
                    
                    rsi_31 = &rsi_31[1]
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                int64_t rcx_127 = var_130
                
                if (rcx_127 != 0)
                    sub_140a74f90(rcx_127)
                
                j = j_1
                j_1 -= 1
            while (j != 1)
            
            if (r12_4 != 0)
                sub_140a74f90(r12_4)
            
            r12_3 = rcx
        
        void* rsi_33 = nullptr
        
        if (rax_14 != 0)
            int64_t rdx_21 = sx.q(*(rax_14 + 0x10c))
            void* var_58
            int64_t* r14_9 = *(var_58 + 0x10)
            int64_t* rsi_32 = r14_9[3]
            
            if (rsi_32[rdx_21] == 0)
                sub_1419ccf30(r14_9, rdx_21.d)
                rsi_32 = r14_9[3]
            
            rsi_33 = rsi_32[rdx_21]
        
        *(arg1 + 0x1b0) = rsi_33
        sub_14198aa60(rsi_33)
        void*** rcx_133 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_92 = &rcx_133[3]
        
        if (rax_92 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x20)
            rcx_133 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_92 = &rcx_133[3]
        
        *(arg1 + 0x30) = rax_92
        void**** rax_93 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_93 = rcx_133
        *(arg1 + 8) = &rcx_133[1]
        rcx_133[1] = 0
        *rcx_133 = &data_142dd5b40
        rcx_133[2] = rsi_33
        int64_t r14_10 = data_143a2e2a8
        int64_t r15_6 = *(arg1 + 0x1b0)
        
        if (*(rax_14 + 0x11e) u> 0)
            uint32_t rsi_34 = zx.d(*(rax_14 + 0x11c))
            void*** rcx_139 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_95 = &rcx_139[5]
            
            if (rax_95 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_139 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_95 = &rcx_139[5]
            
            *(arg1 + 0x30) = rax_95
            void**** rax_96 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_96 = rcx_139
            *(arg1 + 8) = &rcx_139[1]
            rcx_139[1] = 0
            *rcx_139 = &data_142da77d8
            rcx_139[2] = r15_6
            rcx_139[3].d = rsi_34
            rcx_139[4] = r14_10
        
        int64_t r14_11 = data_143a2e290
        int64_t r15_7 = *(arg1 + 0x1b0)
        
        if (*(rax_14 + 0x11a) u> 0)
            uint32_t rsi_35 = zx.d(*(rax_14 + 0x118))
            void*** rcx_145 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_98 = &rcx_145[5]
            
            if (rax_98 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_145 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_98 = &rcx_145[5]
            
            *(arg1 + 0x30) = rax_98
            void**** rax_99 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_99 = rcx_145
            *(arg1 + 8) = &rcx_145[1]
            rcx_145[1] = 0
            *rcx_145 = &data_142d99560
            rcx_145[2] = r15_7
            rcx_145[3].d = rsi_35
            rcx_145[4] = r14_11
        
        int32_t var_1b8_1 = 1
        sub_1419cd1c0(arg1, rax_14, 1, 1, 1)
        int64_t r14_12 = *(arg1 + 0x1b0)
        
        if (*(rax_14 + 0x11a) u> 0)
            uint32_t rsi_36 = zx.d(*(rax_14 + 0x118))
            void*** rcx_152 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_101 = &rcx_152[5]
            
            if (rax_101 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_152 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_101 = &rcx_152[5]
            
            *(arg1 + 0x30) = rax_101
            void**** rax_102 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_102 = rcx_152
            *(arg1 + 8) = &rcx_152[1]
            rcx_152[1] = 0
            *rcx_152 = &data_142d99560
            rcx_152[2] = r14_12
            rcx_152[3].d = rsi_36
            rcx_152[4] = 0
        
        if (*(rax_14 + 0x11e) u> 0)
            uint32_t rsi_37 = zx.d(*(rax_14 + 0x11c))
            void*** rcx_158 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_104 = &rcx_158[5]
            
            if (rax_104 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_158 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_104 = &rcx_158[5]
            
            *(arg1 + 0x30) = rax_104
            void**** rax_105 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_105 = rcx_158
            *(arg1 + 8) = &rcx_158[1]
            rcx_158[1] = 0
            *rcx_158 = &data_142da77d8
            rcx_158[2] = r14_12
            rcx_158[3].d = rsi_37
            rcx_158[4] = 0
        
        if (r12_3 != 0)
            sub_142056fb0(&data_143a2e270, 1)
        
        int64_t rax_107 = data_143a2e2a8
        int64_t* rsi_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_162 = &rsi_40[1]
        
        if (rcx_162 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x10)
            rsi_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_162 = &rsi_40[1]
        
        *(arg1 + 0x30) = rcx_162
        *rsi_40 = rax_107
        void*** rcx_166 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_108 = &rcx_166[6]
        
        if (rax_108 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_166 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_108 = &rcx_166[6]
        
        *(arg1 + 0x30) = rax_108
        void**** rax_109 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        void* r12_5 = arg2
        *rax_109 = rcx_166
        *(arg1 + 8) = &rcx_166[1]
        rcx_166[1] = 0
        *rcx_166 = &data_142da7798
        rcx_166[2].d = 1
        int64_t rax_112 = sx.q(arg_18) ^ 1
        rcx_166[3] = rsi_40
        rcx_166[4].d = 0
        int64_t* r14_14 = r12_5 + 0x10 + (rax_112 << 3)
        *(rcx_166 + 0x24) = 3
        rcx_166[5] = 0
        void* r13_3 = r12_5 + (rax_112 << 3)
        int64_t rax_113 = *(r12_5 + (rax_112 << 3) + 0x30)
        int64_t rcx_170 = *r14_14
        int64_t* rsi_45 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        var_180 = r14_14
        int64_t var_140_1 = rcx_170
        void* rax_114 = &rsi_45[2]
        
        if (rax_114 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x18)
            rcx_170 = var_140_1
            rsi_45 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_114 = &rsi_45[2]
        
        *(arg1 + 0x30) = rax_114
        *rsi_45 = rcx_170
        rsi_45[1] = rax_113
        void*** rcx_174 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_116 = &rcx_174[6]
        
        if (rax_116 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_174 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_116 = &rcx_174[6]
        
        *(arg1 + 0x30) = rax_116
        void**** rax_117 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_117 = rcx_174
        *(arg1 + 8) = &rcx_174[1]
        rcx_174[1] = 0
        rcx_174[5] = 0
        *rcx_174 = &data_142da7798
        rcx_174[3] = rsi_45
        void* rsi_48 = nullptr
        rcx_174[2].d = 2
        rcx_174[4].d = 2
        *(rcx_174 + 0x24) = 3
        
        if (rax_16 != 0)
            int64_t rdx_23 = sx.q(*(rax_16 + 0x10c))
            int64_t r12_6 = rdx_23 << 3
            void* var_48
            int64_t* r14_15 = *(var_48 + 0x10)
            int64_t rsi_49 = r14_15[3]
            
            if (*(r12_6 + rsi_49) == 0)
                sub_1419ccf30(r14_15, rdx_23.d)
                rsi_49 = r14_15[3]
            
            rsi_48 = *(r12_6 + rsi_49)
            r12_5 = arg2
            r14_14 = var_180
        
        *(arg1 + 0x1b0) = rsi_48
        sub_14198aa60(rsi_48)
        void*** rcx_182 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_121 = &rcx_182[3]
        
        if (rax_121 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x20)
            rcx_182 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_121 = &rcx_182[3]
        
        *(arg1 + 0x30) = rax_121
        void**** rax_122 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_122 = rcx_182
        *(arg1 + 8) = &rcx_182[1]
        rcx_182[1] = 0
        *rcx_182 = &data_142dd5b40
        rcx_182[2] = rsi_48
        int64_t r15_11
        
        if ((arg6 << 4 & arg4) == 0)
            r15_11 = *(r12_5 + 0x48)
        
        if ((arg6 << 4 & arg4) != 0 || r15_11 == 0)
            r15_11 = *(r13_3 + 0x30)
        else
            int64_t* rsi_52 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rcx_186 = &rsi_52[1]
            
            if (rcx_186 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x10)
                rsi_52 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_186 = &rsi_52[1]
            
            *(arg1 + 0x30) = rcx_186
            *rsi_52 = r15_11
            void*** rcx_190 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_125 = &rcx_190[6]
            
            if (rax_125 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x38)
                rcx_190 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_125 = &rcx_190[6]
            
            *(arg1 + 0x30) = rax_125
            void**** rax_126 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_126 = rcx_190
            *(arg1 + 8) = &rcx_190[1]
            rcx_190[1] = 0
            *rcx_190 = &data_142da7798
            rcx_190[2].d = 1
            rcx_190[3] = rsi_52
            rcx_190[4].d = 2
            *(rcx_190 + 0x24) = 3
            rcx_190[5] = 0
        
        int64_t r14_16 = *r14_14
        int64_t r12_7 = *(arg1 + 0x1b0)
        
        if (*(rax_16 + 0x12a) u> 0)
            uint32_t rsi_55 = zx.d(*(rax_16 + 0x128))
            void*** rcx_196 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_128 = &rcx_196[5]
            
            if (rax_128 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_196 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_128 = &rcx_196[5]
            
            *(arg1 + 0x30) = rax_128
            void**** rax_129 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_129 = rcx_196
            *(arg1 + 8) = &rcx_196[1]
            rcx_196[1] = 0
            *rcx_196 = &data_142da77d8
            rcx_196[2] = r12_7
            rcx_196[3].d = rsi_55
            rcx_196[4] = r14_16
        
        if (*(rax_16 + 0x12e) u> 0)
            uint32_t rsi_56 = zx.d(*(rax_16 + 0x12c))
            void*** rcx_202 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_131 = &rcx_202[5]
            
            if (rax_131 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_202 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_131 = &rcx_202[5]
            
            *(arg1 + 0x30) = rax_131
            void**** rax_132 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_132 = rcx_202
            *(arg1 + 8) = &rcx_202[1]
            rcx_202[1] = 0
            *rcx_202 = &data_142da77d8
            rcx_202[2] = r12_7
            rcx_202[3].d = rsi_56
            rcx_202[4] = r15_11
        
        int64_t r9_3
        
        if (i_1 == 0)
            r9_3 = *(arg2 + 0x40)
        
        uint64_t r14_17
        
        if (i_1 != 0 || r9_3 == 0)
            r14_17 = sx.q(arg_18)
            r9_3 = *(arg2 + (r14_17 << 3) + 0x20)
        else
            r14_17 = zx.q(arg_18)
        
        var_1a8 = data_143a2e2c8
        var_1b0_1.q = &var_188
        var_1b8_1.q = data_143a2e298
        sub_1420697a0(rax_16, arg1, *rax_55, r9_3, 1, var_1b0_1, var_1a8)
        sub_1419cd1c0(arg1, rax_16, r9, 1, 1)
        sub_142071360(rax_16, arg1)
        int64_t* rsi_59 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_137 = &rsi_59[2]
        
        if (rax_137 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x18)
            rsi_59 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_137 = &rsi_59[2]
        
        *(arg1 + 0x30) = rax_137
        *rsi_59 = var_140_1
        rsi_59[1] = rax_113
        void*** rcx_213 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_140 = &rcx_213[6]
        
        if (rax_140 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_213 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_140 = &rcx_213[6]
        
        *(arg1 + 0x30) = rax_140
        i = 0
        void**** rax_141 = *(arg1 + 8)
        r14 = r14_17.d ^ 1
        *(arg1 + 0x14) += 1
        arg_18 = r14
        *rax_141 = rcx_213
        *(arg1 + 8) = &rcx_213[1]
        rcx_213[1] = 0
        *rcx_213 = &data_142da7798
        rcx_213[2].d = 2
        rcx_213[3] = rsi_59
        rcx_213[4].d = 2
        *(rcx_213 + 0x24) = 3
        rcx_213[5] = 0
        
        if (rax_2 != 0)
            break
        
        if (rcx != 0)
            break
        
        r13 = var_178
        r12 = var_b0
        i = i_1
        r8_1 = arg6
        rsi = arg4
        r9_1 = arg5.w
        r15 = var_a8
    
    var_118 += 4
    i += 1
    r8_1 <<= 4
    arg6 = r8_1
    i_1 = i
while (i s< 8)

sub_1405d1550(&var_188, i)
return zx.q(r14)
