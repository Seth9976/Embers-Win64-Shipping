// 函数: sub_1410f4d70
// 地址: 0x1410f4d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (data_143f0f21f == 0)
    result.b = 0
else
    uint64_t rcx = zx.q(data_143f0f1a0)
    
    if (((*(sx.q(rcx.d) * 0x14 + &data_143f025fc) u>> 0x13).b & 1) == 0
            || not(test_bit(data_143f13cd8, rcx)))
        result.b = 0
    else
        result = zx.q(*(arg1 + 0xa8))
        
        if (result.d == 0)
            result.b = 0
        else
            int64_t r14
            r14.b = 0
            int64_t r15
            r15.b = 0
            int32_t i = 0
            
            if (result.d s<= 0)
                result.b = 0
            else
                do
                    int64_t rbx_1 = sx.q(i) * 0x5240
                    r14.b |= sub_1410ed8e0(*(arg1 + 8), *(arg1 + 0xa0) + rbx_1)
                    result.b = sub_1410ee7c0(*(arg1 + 0xa0) + rbx_1).b == 0
                    i += 1
                    r15.b |= result.b
                while (i s< *(arg1 + 0xa8))
                
                if (r14.b == 0)
                    result.b = 0
                else
                    int32_t r9_1
                    result, r9_1 = sub_1410f8230()
                    
                    if (result.d != 0 || r15.b != 0)
                        char arg_18
                        
                        if (*(data_143e51c48 + 4) != 0)
                            arg_18 = 1
                        
                        if (*(data_143e51c48 + 4) == 0 || data_143f0f221 == 0)
                            arg_18 = 0
                        
                        int32_t i_3 = 0
                        int32_t i_1 = 0
                        int64_t* var_108
                        int64_t* var_100
                        
                        if (*(arg1 + 0xa8) s> 0)
                            int64_t r12_1 = 0
                            
                            do
                                void* rdx_2 = *(arg1 + 8)
                                int64_t* rdi_2 = *(arg1 + 0xa0) + r12_1
                                int64_t var_b8 = 0
                                int32_t var_b0_1 = 0
                                int64_t var_a8_1 = 1
                                int64_t var_a0_1 = 1
                                int32_t var_78_1 = rdi_2[0xa3a].d
                                var_a8_1.d = 2
                                var_a0_1.d = 2
                                var_b8.o = rdi_2[0xa39].o
                                int64_t var_f8 = 0
                                int32_t var_f0_1 = 0
                                sub_1413ef1f0(rdi_2, rdx_2, &var_f8, r9_1)
                                int64_t r8_3
                                int32_t r9_2
                                r8_3, r9_2 = sub_1413ef450(rdi_2, &var_f8)
                                int64_t r8_4
                                int32_t r9_3
                                r8_4, r9_3 = MRE::FAddClassDep(rdi_2, &var_f8, r8_3, r9_2)
                                sub_1413ef610(rdi_2, &var_f8, r8_4, r9_3, 0)
                                sub_1413ef0b0(rdi_2, &var_f8)
                                int64_t r8_5
                                int32_t r9_4
                                r8_5, r9_4 = sub_1413a0b80(rdi_2, &var_f8)
                                sub_1413ef730(rdi_2, &var_f8, r8_5, r9_4)
                                sub_1413a09b0(rdi_2, &var_f8)
                                sub_14128c840(rdi_2, &var_f8)
                                int64_t* rcx_13 = data_143f0f180
                                int64_t* var_e8
                                (*(*rcx_13 + 0x6f8))(rcx_13, &var_e8, &var_b8)
                                
                                if (&rdi_2[0xa3d] == &var_e8)
                                label_1410f5035:
                                    int64_t* rbx_3 = var_e8
                                    
                                    if (rbx_3 != 0)
                                        rbx_3[1].d -= 1
                                        
                                        if (rbx_3[1].d == 1)
                                            char rax_19
                                            
                                            if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                                                rax_19 = sub_1405949a0()
                                            
                                            if (rbx_3[2].b != 0
                                                    || (data_143f0f1d0 == 0 && rax_19 != 0))
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
                                                    uint64_t rdx_13 = zx.q(rax_21)
                                                    void* const rax_22
                                                    
                                                    if (rax_21 != 0)
                                                        rax_22 = *((rdx_13 u>> 0xe << 3) +
                                                            &data_143cf0bf8)
                                                            + (zx.q(rdx_13.d) & 0x3fff) * 0x18
                                                    else
                                                        rax_22 = nullptr
                                                    
                                                    *(rax_22 + 8) = rbx_3
                                                    sub_1405a42f0(&data_143f02390, rdx_13.d)
                                else
                                    int64_t* rbx_2 = rdi_2[0xa3d]
                                    rdi_2[0xa3d] = var_e8
                                    var_e8 = nullptr
                                    
                                    if (rbx_2 != 0)
                                        rbx_2[1].d -= 1
                                        
                                        if (rbx_2[1].d == 1)
                                            char rax_10
                                            
                                            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                                                rax_10 = sub_1405949a0()
                                            
                                            if (rbx_2[2].b != 0
                                                    || (data_143f0f1d0 == 0 && rax_10 != 0))
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
                                                    uint64_t rdx_12 = zx.q(rax_12)
                                                    void* const rax_13
                                                    
                                                    if (rax_12 != 0)
                                                        rax_13 = *((rdx_12 u>> 0xe << 3) +
                                                            &data_143cf0bf8)
                                                            + (zx.q(rdx_12.d) & 0x3fff) * 0x18
                                                    else
                                                        rax_13 = nullptr
                                                    
                                                    *(rax_13 + 8) = rbx_2
                                                    sub_1405a42f0(&data_143f02390, rdx_12.d)
                                        
                                        goto label_1410f5035
                                
                                if (var_f0_1 != 0)
                                    void* var_70
                                    sub_1419a2ec0(rdi_2[0xa2a], &var_70, &data_143ec8770, 0)
                                    void* rax_27 = var_70
                                    int64_t rcx_24 = 0
                                    
                                    if (rax_27 != 0)
                                        int64_t rdx_15 = sx.q(*(rax_27 + 0x10c))
                                        void* var_68
                                        int64_t* rbx_4 = *(var_68 + 0x10)
                                        int64_t* rax_29 = rbx_4[3]
                                        
                                        if (rax_29[rdx_15] == 0)
                                            sub_1419ccf30(rbx_4, rdx_15.d)
                                            rax_29 = rbx_4[3]
                                        
                                        rcx_24 = rax_29[rdx_15]
                                        i_3 = 0
                                    
                                    int64_t var_60 = var_f8
                                    int32_t var_58_1 = var_f0_1
                                    rdi_2[0xa3e] = sub_1413d1e20(arg1, arg2, rdi_2, &var_60, rcx_24)
                                
                                int64_t* rax_33 = sub_1422c6ca0(arg2)
                                int64_t* rbx_5 = rdi_2[0xa42]
                                rdi_2[0xa42] = rax_33
                                
                                if (rax_33 != 0)
                                    int64_t rdx_17 = *rax_33
                                    (*(rdx_17 + 0x30))(rax_33, rdx_17)
                                
                                if (rbx_5 != 0)
                                    (*(*rbx_5 + 0x38))(rbx_5)
                                
                                int64_t* r9_6 = rdi_2[0xa42]
                                
                                if (r9_6 == 0)
                                    int64_t* rax_35 = data_1439b70c8
                                    rdi_2[0xa42] = rax_35
                                    r9_6 = rax_35
                                    
                                    if (rax_35 != 0)
                                        (*(*rax_35 + 0x30))(r9_6)
                                        r9_6 = rdi_2[0xa42]
                                
                                int64_t* rcx_31 = data_143f0f180
                                int16_t var_d7_1 = 0x100
                                int64_t var_d4_1 = 0
                                char var_d8 = *(r9_6[2] + 0x3c)
                                int32_t var_cc_1 = 0
                                char* var_108_2 = &var_d8
                                int64_t* var_e0
                                (*(*rcx_31 + 0x5d0))(rcx_31, &var_e0, &data_143f02b98)
                                
                                if (&rdi_2[0xa43] == &var_e0)
                                label_1410f52c2:
                                    int64_t* rbx_7 = var_e0
                                    
                                    if (rbx_7 != 0)
                                        rbx_7[1].d -= 1
                                        
                                        if (rbx_7[1].d == 1)
                                            char rax_50
                                            
                                            if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
                                                rax_50 = sub_1405949a0()
                                            
                                            if (rbx_7[2].b != 0
                                                    || (data_143f0f1d0 == 0 && rax_50 != 0))
                                                (**rbx_7)(rbx_7, 1)
                                            else
                                                bool z_4
                                                
                                                if (0 == *(rbx_7 + 0xc))
                                                    *(rbx_7 + 0xc) = 1
                                                    z_4 = true
                                                else
                                                    *(rbx_7 + 0xc)
                                                    z_4 = false
                                                
                                                if (z_4)
                                                    int32_t rax_52 = sub_140a20af0()
                                                    uint64_t rdx_20 = zx.q(rax_52)
                                                    void* const rax_53
                                                    
                                                    if (rax_52 != 0)
                                                        rax_53 = *((rdx_20 u>> 0xe << 3) +
                                                            &data_143cf0bf8)
                                                            + (zx.q(rdx_20.d) & 0x3fff) * 0x18
                                                    else
                                                        rax_53 = nullptr
                                                    
                                                    *(rax_53 + 8) = rbx_7
                                                    sub_1405a42f0(&data_143f02390, rdx_20.d)
                                else
                                    int64_t* rbx_6 = rdi_2[0xa43]
                                    rdi_2[0xa43] = var_e0
                                    var_e0 = nullptr
                                    
                                    if (rbx_6 != 0)
                                        rbx_6[1].d -= 1
                                        
                                        if (rbx_6[1].d == 1)
                                            char rax_41
                                            
                                            if (rbx_6[2].b == 0 && data_143f0f1d0 == 0)
                                                rax_41 = sub_1405949a0()
                                            
                                            if (rbx_6[2].b != 0
                                                    || (data_143f0f1d0 == 0 && rax_41 != 0))
                                                (**rbx_6)(rbx_6, 1)
                                            else
                                                bool z_3
                                                
                                                if (0 == *(rbx_6 + 0xc))
                                                    *(rbx_6 + 0xc) = 1
                                                    z_3 = true
                                                else
                                                    *(rbx_6 + 0xc)
                                                    z_3 = false
                                                
                                                if (z_3)
                                                    int32_t rax_43 = sub_140a20af0()
                                                    uint64_t rdx_19 = zx.q(rax_43)
                                                    void* const rax_44
                                                    
                                                    if (rax_43 != 0)
                                                        rax_44 = *((rdx_19 u>> 0xe << 3) +
                                                            &data_143cf0bf8)
                                                            + (zx.q(rdx_19.d) & 0x3fff) * 0x18
                                                    else
                                                        rax_44 = nullptr
                                                    
                                                    *(rax_44 + 8) = rbx_6
                                                    sub_1405a42f0(&data_143f02390, rdx_19.d)
                                        
                                        goto label_1410f52c2
                                
                                var_100 = &rdi_2[0xa46]
                                var_108 = &rdi_2[0xa44]
                                void var_98
                                sub_1405d1600(&rdi_2[0xa45], 
                                    sub_1413d90b0(&var_98, *(arg1 + 8) + 0xee8, rdi_2, 1, var_108, 
                                        var_100))
                                r9_1 = sub_1405d1550(&var_98)
                                
                                if (sub_1413d3490(sub_1422e5a30(rdi_2)) != 0)
                                    r9_1 = sub_1413f89f0(arg1, arg2, rdi_2)
                                
                                int64_t rcx_48 = var_f8
                                
                                if (rcx_48 != 0)
                                    r9_1 = sub_140a74f90(rcx_48)
                                
                                i_1 += 1
                                r12_1 += 0x5240
                            while (i_1 s< *(arg1 + 0xa8))
                        
                        if (arg_18 != 0)
                            void var_50
                            int64_t* rax_69 =
                                sub_140b58260(&var_50, RayTracingDynamicGeometryUpdateBeginFence", 
                                1)
                            int64_t* rcx_56 = data_143f0f180
                            int64_t r9_8 = *rcx_56
                            void var_c8
                            (*(r9_8 + 0x98))(rcx_56, &var_c8, rax_69, r9_8, var_108, var_100)
                            sub_1405d1600(arg1 + 0x3f0, &var_c8)
                            sub_1405d1550(&var_c8)
                            void var_48
                            int64_t* rax_70 =
                                sub_140b58260(&var_48, RayTracingDynamicGeometryUpdateEndFence", 1)
                            int64_t* rcx_60 = data_143f0f180
                            int64_t r9_9 = *rcx_60
                            void var_c0
                            (*(r9_9 + 0x98))(rcx_60, &var_c0, rax_70, r9_9)
                            sub_1405d1600(arg1 + 0x3f8, &var_c0)
                            sub_1405d1550(&var_c0)
                            int64_t rax_71 = 0
                            int64_t r15_1 = *(arg1 + 0x3f0)
                            int64_t* rbx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            int64_t var_90_1 = 0
                            void* rcx_63 = &rbx_10[1]
                            
                            if (rcx_63 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x10)
                                rax_71 = var_90_1
                                rbx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rcx_63 = &rbx_10[1]
                            
                            *(arg2 + 0x30) = rcx_63
                            *rbx_10 = rax_71
                            void*** rcx_67 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_72 = &rcx_67[6]
                            
                            if (rax_72 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x38)
                                rcx_67 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_72 = &rcx_67[6]
                            
                            *(arg2 + 0x30) = rax_72
                            *(arg2 + 0x14) += 1
                            **(arg2 + 8) = rcx_67
                            *(arg2 + 8) = &rcx_67[1]
                            rcx_67[1] = 0
                            *rcx_67 = &data_142da7798
                            rcx_67[2].d = 1
                            rcx_67[3] = rbx_10
                            rcx_67[4] = 3
                            rcx_67[5] = r15_1
                            int64_t rbx_13 = *(arg1 + 0x3f0)
                            void*** rcx_73 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                            void* rax_75 = &rcx_73[3]
                            
                            if (rax_75 u> data_143f02d98)
                                sub_140b0e3d0(&data_143f02d90, 0x20)
                                rcx_73 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                                rax_75 = &rcx_73[3]
                            
                            data_143f02d74 += 1
                            data_143f02d90 = rax_75
                            *data_143f02d68 = rcx_73
                            data_143f02d68 = &rcx_73[1]
                            rcx_73[1] = 0
                            *rcx_73 = &data_142f11608
                            rcx_73[2] = rbx_13
                            int64_t* rcx_76 = *(arg1 + 8)
                            sub_1413981a0((*(*rcx_76 + 0x2d8))(rcx_76), &data_143f02d60)
                            int32_t i_2 = 0
                            
                            if (*(arg1 + 0xa8) s> 0)
                                int64_t rbx_14 = 0
                                
                                do
                                    void*** rcx_80 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                                    int64_t r14_2 = *(rbx_14 + *(arg1 + 0xa0) + 0x51e8)
                                    void* rax_81 = &rcx_80[3]
                                    
                                    if (rax_81 u> data_143f02d98)
                                        sub_140b0e3d0(&data_143f02d90, 0x20)
                                        rcx_80 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                                        rax_81 = &rcx_80[3]
                                    
                                    data_143f02d74 += 1
                                    i_2 += 1
                                    data_143f02d90 = rax_81
                                    rbx_14 += 0x5240
                                    *data_143f02d68 = rcx_80
                                    data_143f02d68 = &rcx_80[1]
                                    rcx_80[1] = 0
                                    *rcx_80 = &data_142f18bd8
                                    rcx_80[2] = r14_2
                                while (i_2 s< *(arg1 + 0xa8))
                            
                            int64_t rcx_83 = 0
                            int64_t rdi_4 = *(arg1 + 0x3f8)
                            int64_t* rbx_17 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                            int64_t var_88_1 = 0
                            void* rax_84 = &rbx_17[1]
                            
                            if (rax_84 u> data_143f02d98)
                                sub_140b0e3d0(&data_143f02d90, 0x10)
                                rcx_83 = var_88_1
                                rbx_17 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                                rax_84 = &rbx_17[1]
                            
                            data_143f02d90 = rax_84
                            *rbx_17 = rcx_83
                            void*** rcx_86 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                            void* rax_85 = &rcx_86[6]
                            
                            if (rax_85 u> data_143f02d98)
                                sub_140b0e3d0(&data_143f02d90, 0x38)
                                rcx_86 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                                rax_85 = &rcx_86[6]
                            
                            data_143f02d74 += 1
                            data_143f02d90 = rax_85
                            *data_143f02d68 = rcx_86
                            data_143f02d68 = &rcx_86[1]
                            rcx_86[1] = 0
                            *rcx_86 = &data_142da7798
                            rcx_86[2].d = 1
                            *(rcx_86 + 0x24) = 1
                            rcx_86[3] = rbx_17
                            rcx_86[4].d = 2
                            rcx_86[5] = rdi_4
                            sub_141974410(&data_143f02d60)
                            result.b = 1
                        else
                            int64_t* rcx_49 = *(arg1 + 8)
                            sub_1413981a0((*(*rcx_49 + 0x2d8))(rcx_49), arg2)
                            
                            if (*(arg1 + 0xa8) s<= 0)
                                result.b = 1
                            else
                                int64_t rdi_3 = 0
                                
                                do
                                    int64_t r12_2 = *(rdi_3 + *(arg1 + 0xa0) + 0x51e8)
                                    result = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    int64_t rcx_51 = result + 0x18
                                    
                                    if (rcx_51 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                                        result = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rcx_51 = result + 0x18
                                    
                                    *(arg2 + 0x30) = rcx_51
                                    i_3 += 1
                                    uint64_t* rcx_53 = *(arg2 + 8)
                                    rdi_3 += 0x5240
                                    *(arg2 + 0x14) += 1
                                    *rcx_53 = result
                                    *(arg2 + 8) = result + 8
                                    *(result + 8) = 0
                                    *result = &data_142f18bd8
                                    *(result + 0x10) = r12_2
                                while (i_3 s< *(arg1 + 0xa8))
                                
                                result.b = 1
                    else
                        result.b = 0

return result
