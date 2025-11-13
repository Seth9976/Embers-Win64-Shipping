// 函数: sub_14192d8e0
// 地址: 0x14192d8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
void* rax_1 = (*(*rcx + 8))(rcx)
void*** rax_17
int32_t arg_8
int32_t arg_18
int32_t arg_20

if (rax_1 == 0)
    int64_t* rcx_41 = arg1[1]
    void*** rax_45 = (*(*rcx_41 + 0x10))(rcx_41)
    void*** r15_1 = rax_45
    int32_t rcx_47
    
    if (rax_45 == 0)
        int64_t* rcx_49 = arg1[1]
        void*** rax_51 = (*(*rcx_49 + 0x20))(rcx_49)
        r15_1 = rax_51
        
        if (rax_51 != 0)
            if (data_143f01c92 != 0)
                sub_140a80f40()
            
            if (data_1439c74ea == 0)
                goto label_14192e0b4
            
            int64_t rcx_50 = sx.q(data_1439c74c8)
            arg_20 = 0
            int32_t rcx_51
            int32_t r10_6
            
            if (0x400 - rcx_50.d s<= 1)
                memcpy(&arg_20, &data_143efbd00 + (rcx_50 << 2), (0x400 - rcx_50.d) << 2)
                data_143effa28(0x400, &data_143efbd00)
                arg_8 = 1 - (0x400 - rcx_50.d)
                memcpy(&(&arg_20)[sx.q(0x400 - rcx_50.d)], &data_143efbd00, 
                    (1 - (0x400 - rcx_50.d)) << 2)
                r10_6 = arg_20
                rcx_51 = arg_8
            else
                r10_6 = *(&data_143efbd00 + (rcx_50 << 2))
                rcx_51 = rcx_50.d + 1
                arg_20 = r10_6
            
            data_1439c74c8 = rcx_51
            data_143f00368(zx.q(r10_6), zx.q(*(r15_1 + 0x84)), zx.q(r15_1[0x10].d), 
                zx.q(*((((zx.q(r15_1[8].d u>> 4) & 1) + sx.q(*(r15_1 + 0x3c)) * 7) << 2) +
                    &data_143efeda0)), 
                arg1[2].d, 1, 0, 6)
            rax_17 = j_sub_140a82f30(0x50)
            
            if (rax_17 == 0)
                return nullptr
            
            rcx_47 = arg_20
            goto label_14192e065
        
        int64_t* rcx_55 = arg1[1]
        rax_17 = (*(*rcx_55 + 0x18))(rcx_55)
        r15_1 = rax_17
        
        if (rax_17 != 0)
            if (data_143f01c92 != 0)
                sub_140a80f40()
            
            if (data_1439c74ea == 0)
                goto label_14192e0b4
            
            int64_t rcx_56 = sx.q(data_1439c74c8)
            int32_t var_68 = 0
            int32_t rcx_57
            int32_t r10_7
            
            if (0x400 - rcx_56.d s<= 1)
                memcpy(&var_68, &data_143efbd00 + (rcx_56 << 2), (0x400 - rcx_56.d) << 2)
                data_143effa28(0x400, &data_143efbd00)
                arg_8 = 1 - (0x400 - rcx_56.d)
                memcpy(&(&var_68)[sx.q(0x400 - rcx_56.d)], &data_143efbd00, 
                    (1 - (0x400 - rcx_56.d)) << 2)
                r10_7 = var_68
                rcx_57 = arg_8
            else
                r10_7 = *(&data_143efbd00 + (rcx_56 << 2))
                rcx_57 = rcx_56.d + 1
                var_68 = r10_7
            
            data_1439c74c8 = rcx_57
            data_143f00368(zx.q(r10_7), zx.q(*(r15_1 + 0x84)), zx.q(r15_1[0x10].d), 
                zx.q(*((((zx.q(r15_1[8].d u>> 4) & 1) + sx.q(*(r15_1 + 0x3c)) * 7) << 2) +
                    &data_143efeda0)), 
                arg1[2].d, 1, 0, 1)
            rax_17 = j_sub_140a82f30(0x50)
            
            if (rax_17 == 0)
                return nullptr
            
            rcx_47 = var_68
            goto label_14192e065
    else
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        if (data_1439c74ea == 0)
        label_14192e0b4:
            rax_17 = j_sub_140a82f30(0x50)
            
            if (rax_17 == 0)
                return nullptr
            
            int32_t r8_29 = arg1[2].d
            int32_t rdx_21 = *(r15_1 + 0x84)
            int32_t rcx_48 = r15_1[0x10].d
            int64_t r9_9 = *arg1
            rax_17[1].d = 0
            *rax_17 = &data_142ff7520
            rax_17[2].d = rcx_48
            *(rax_17 + 0x14) = rdx_21
            rax_17[3] = 0
            rax_17[4].d = r8_29
            __builtin_memset(&rax_17[5], 0, 0x11)
            rax_17[8] = r9_9
            rax_17[9].b = 0
        else
            int64_t rcx_42 = sx.q(data_1439c74c8)
            arg_18 = 0
            int32_t rcx_43
            int32_t r10_5
            
            if (0x400 - rcx_42.d s<= 1)
                memcpy(&arg_18, &data_143efbd00 + (rcx_42 << 2), (0x400 - rcx_42.d) << 2)
                data_143effa28(0x400, &data_143efbd00)
                arg_8 = 1 - (0x400 - rcx_42.d)
                memcpy(&(&arg_18)[sx.q(0x400 - rcx_42.d)], &data_143efbd00, 
                    (1 - (0x400 - rcx_42.d)) << 2)
                r10_5 = arg_18
                rcx_43 = arg_8
            else
                r10_5 = *(&data_143efbd00 + (rcx_42 << 2))
                rcx_43 = rcx_42.d + 1
                arg_18 = r10_5
            
            data_1439c74c8 = rcx_43
            data_143f00368(zx.q(r10_5), zx.q(*(r15_1 + 0x84)), zx.q(r15_1[0x10].d), 
                zx.q(*((((zx.q(r15_1[8].d u>> 4) & 1) + sx.q(*(r15_1 + 0x3c)) * 7) << 2) +
                    &data_143efeda0)), 
                arg1[2].d, 1, 0, 1)
            rax_17 = j_sub_140a82f30(0x50)
            
            if (rax_17 == 0)
                return nullptr
            
            rcx_47 = arg_18
        label_14192e065:
            int32_t r8_28 = arg1[2].d
            int32_t rdx_20 = *(r15_1 + 0x84)
            int64_t r9_8 = *arg1
            rax_17[1].d = 0
            *rax_17 = &data_142ff7520
            rax_17[2].d = rcx_47
            *(rax_17 + 0x14) = rdx_20
            rax_17[3] = 0
            rax_17[4].d = r8_28
            __builtin_memset(&rax_17[5], 0, 0x11)
            rax_17[8] = r9_8
            rax_17[9].b = 1
else
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void* rdi_1 = nullptr
    
    if (data_1439c74ea == 0)
        int32_t rbx_3 = *(rax_1 + 0x84)
        int32_t r13_2 = *(rax_1 + 0x80)
        void* const r14_1 = nullptr
        arg_20 = rbx_3
        int32_t var_5c
        int32_t rax_19
        
        if (sub_14197ee80(&var_5c) == 0)
            int32_t var_64 = 0
            data_143effa50(0x821b, &var_64)
            int32_t rax_20 = var_64
            
            if (rax_20 != 3 && rax_20 == 4)
                int32_t var_60 = 0
                data_143effa50(0x821c, &var_60)
                rax_19 = 1
                
                if (var_60 u> 2)
                    rax_19 = 3
                
                goto label_14192dc1d
        else
            rax_19 = var_5c
        label_14192dc1d:
            
            if (rax_19 s>= 3 && arg1[3].b == 0x2c)
                if (*(rax_1 + 0x90) == 0)
                    int64_t rcx_20 = sx.q(data_1439c74c8)
                    arg_8 = 0x400 - rcx_20.d
                    int32_t rax_25
                    
                    if (0x400 - rcx_20.d s<= 1)
                        int64_t rbx_4 = sx.q(0x400 - rcx_20.d) << 2
                        memcpy(rax_1 + 0x90, &data_143efbd00 + (rcx_20 << 2), rbx_4.d)
                        data_143effa28(0x400, &data_143efbd00)
                        uint32_t count = (1 - arg_8) << 2
                        arg_8 = 1 - arg_8
                        memcpy(rbx_4 + rax_1 + 0x90, &data_143efbd00, count)
                        rax_25 = arg_8
                        rbx_3 = arg_20
                    else
                        *(rax_1 + 0x90) = *(&data_143efbd00 + (rcx_20 << 2))
                        rax_25 = data_1439c74c8 + 1
                    
                    data_1439c74c8 = rax_25
                    int32_t r14_2 = *(rax_1 + 0x60)
                    int32_t rax_28 = *(rax_1 + 0x64)
                    void* rcx_23 = *arg1
                    arg_18 = r14_2
                    arg_8 = rax_28
                    void* rax_29 = sub_14190d690(rcx_23, 1)
                    int32_t r9_4 = *(rax_1 + 0x90)
                    int32_t r8_16 = data_1439c7498 - 1
                    int64_t rdx_11 = sx.q(r8_16) * 5
                    int64_t rcx_25 = *(rax_29 + 8)
                    int32_t var_90
                    int32_t var_88
                    
                    if (*(rcx_25 + (rdx_11 << 3) + 0x10) != rbx_3
                            || *(rcx_25 + (rdx_11 << 3) + 0x14) != r9_4)
                        var_88 = *(arg1 + 0x14)
                        var_90 = arg1[2].d
                        sub_14190a090(*arg1, rax_29, r8_16, rbx_3, r9_4, var_90)
                    
                    int64_t r10_4 = data_143f00350
                    uint64_t r9_6 = zx.q(r14_2)
                    int32_t rax_32 = arg_8
                    uint64_t rcx_27 = zx.q(rbx_3)
                    
                    if (r10_4 == 0)
                        data_143effb38(rcx_27, 0, 0x8232, r9_6, rax_32, 0, 0x8d94, 0x1401, 0)
                    else
                        r10_4(rcx_27, zx.q(*(arg1 + 0x14)), 0x8232, r9_6, rax_32, var_90, var_88)
                    
                    int32_t r14_4 = arg_8 * arg_18
                    int64_t var_50 = 0
                    int32_t var_44_1 = 0
                    int32_t var_48_1 = r14_4
                    
                    if (r14_4 s> 0)
                        sub_1405daba0(&var_50)
                    
                    int64_t r14_5 = var_50
                    memset(r14_5, 0, sx.q(r14_4))
                    data_143effac0(0xcf5, 1)
                    data_143effb68(zx.q(rbx_3), 0, 0, 0, arg_18, arg_8, 0x8d94, 0x1401, r14_5)
                    data_143effac0(0xcf5, 4)
                    data_143effb50(zx.q(rbx_3), 0x8e42, 0)
                    data_143effb50(zx.q(rbx_3), 0x8e43, 0x1903)
                    data_143effb50(zx.q(rbx_3), 0x8e44, 0)
                    data_143effb50(zx.q(rbx_3), 0x8e45, 0)
                    
                    if (r14_5 != 0)
                        sub_140a74f90(r14_5)
                
                r13_2 = *(rax_1 + 0x90)
                r14_1 = rax_1
        void*** rax_35 = j_sub_140a82f30(0x50)
        void*** rbx_5 = rax_35
        
        if (rax_35 == 0)
            rbx_5 = nullptr
        else
            int32_t rax_36 = arg1[2].d
            int64_t rcx_36 = *arg1
            int32_t rdx_15 = arg_20
            *rbx_5 = &data_142ff7520
            rbx_5[1].d = 0
            rbx_5[2].d = r13_2
            *(rbx_5 + 0x14) = rdx_15
            rbx_5[3] = 0
            rbx_5[4].d = rax_36
            __builtin_memset(&rbx_5[5], 0, 0x11)
            rbx_5[8] = rcx_36
            rbx_5[9].b = 0
        
        int64_t* rsi_1 = rbx_5[3]
        rbx_5[3] = r14_1
        
        if (r14_1 != 0)
            *(r14_1 + 8) += 1
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                char rax_38
                
                if (rsi_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_38 = sub_1405949a0()
                
                if (rsi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_38 != 0))
                    int64_t r8_19 = *rsi_1
                    (*r8_19)(rsi_1, 1, r8_19)
                else
                    bool z_1
                    
                    if (0 == *(rsi_1 + 0xc))
                        *(rsi_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rsi_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_40 = sub_140a20af0()
                        
                        if (rax_40 != 0)
                            rdi_1 = *((zx.q(rax_40) u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_40) & 0x3fff) * 0x18
                        
                        *(rdi_1 + 8) = rsi_1
                        sub_1405a42f0(&data_143f02390, rax_40)
        
        return rbx_5
    
    int64_t rcx_1 = sx.q(data_1439c74c8)
    arg_8 = 0
    int32_t rcx_2
    int32_t r10_1
    
    if (0x400 - rcx_1.d s<= 1)
        memcpy(&arg_8, &data_143efbd00 + (rcx_1 << 2), (0x400 - rcx_1.d) << 2)
        data_143effa28(0x400, &data_143efbd00)
        arg_18 = 1 - (0x400 - rcx_1.d)
        memcpy(&(&arg_8)[sx.q(0x400 - rcx_1.d)], &data_143efbd00, (1 - (0x400 - rcx_1.d)) << 2)
        r10_1 = arg_8
        rcx_2 = arg_18
    else
        r10_1 = *(&data_143efbd00 + (rcx_1 << 2))
        arg_8 = r10_1
        rcx_2 = rcx_1.d + 1
    
    data_1439c74c8 = rcx_2
    char rax_5 = arg1[3].b
    
    if (rax_5 == 0x2c)
        int32_t var_88_1 = 0
        int32_t var_90_2 = *(arg1 + 0x14)
        int32_t var_98_2 = arg1[2].d
        data_143f00368(zx.q(r10_1), zx.q(*(rax_1 + 0x84)), zx.q(*(rax_1 + 0x80)), 
            zx.q(*(sx.q(*(rax_1 + 0x3c)) * 0x1c + &data_143efeda0)), var_98_2, var_90_2, 0, 1)
        void* rax_13 = sub_14190d690(*arg1, 1)
        int32_t r9_3 = *(rax_1 + 0x84)
        int32_t r8_11 = data_1439c7498 - 1
        void* r10_2 = *(rax_13 + 8) + sx.q(r8_11) * 0x28
        int32_t rcx_11 = arg_8
        
        if (*(r10_2 + 0x10) != r9_3 || *(r10_2 + 0x14) != rcx_11)
            var_88_1 = *(arg1 + 0x14)
            var_90_2 = 0
            var_98_2 = rcx_11
            sub_14190a090(*arg1, rax_13, r8_11, r9_3, var_98_2, 0)
            r9_3 = *(rax_1 + 0x84)
        
        data_143effb50(zx.q(r9_3), 0x90ea, 0x1901, r9_3, var_98_2, var_90_2, var_88_1)
        data_143effb50(zx.q(*(rax_1 + 0x84)), 0x8e42, 0)
        data_143effb50(zx.q(*(rax_1 + 0x84)), 0x8e43, 0x1903)
        data_143effb50(zx.q(*(rax_1 + 0x84)), 0x8e44, 0)
        data_143effb50(zx.q(*(rax_1 + 0x84)), 0x8e45, 0)
    else
        uint32_t rax_6
        
        if (rax_5 != 0)
            rax_6 = zx.d(rax_5)
        else
            rax_6 = *(rax_1 + 0x3c)
        
        data_143f00368(zx.q(r10_1), zx.q(*(rax_1 + 0x84)), zx.q(*(rax_1 + 0x80)), 
            zx.q(
                *((((zx.q(*(rax_1 + 0x40) u>> 4) & 1) + sx.q(rax_6) * 7) << 2) + &data_143efeda0)), 
            arg1[2].d, *(arg1 + 0x14), 0, 1)
    
    void*** rax_15 = j_sub_140a82f30(0x50)
    
    if (rax_15 == 0)
        return nullptr
    
    int32_t rdx_7 = arg1[2].d
    int32_t rcx_18 = *(rax_1 + 0x84)
    int64_t r8_12 = *arg1
    rax_15[2].d = arg_8
    rax_17 = rax_15
    *rax_15 = &data_142ff7520
    rax_15[1].d = 0
    *(rax_15 + 0x14) = rcx_18
    rax_15[3] = 0
    rax_15[4].d = rdx_7
    __builtin_memset(&rax_15[5], 0, 0x11)
    rax_15[8] = r8_12
    rax_15[9].b = 1
return rax_17
