// 函数: sub_140f29ae0
// 地址: 0x140f29ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c28
int64_t rax_1 = __security_cookie ^ &var_c28
int64_t** result = arg2
int64_t rsi = 0
void* r13 = arg1
int64_t* rdi_2
int64_t* r12

if (*(sub_140eff820() + 0x38) == 0)
    void*** rax_70 = sub_140f1cf10()
    void* var_a60 = &rax_70[2]
    sub_140918950(&var_a60, &rax_70[2])
    int64_t var_c08_3 = 0x5f8
    void var_bf6
    void* var_a50_1 = &var_bf6
    sub_140e23ed0(&rax_70[2], "SNotificationItemImpl")
    void var_428
    int64_t* rax_71
    int128_t zmm1_4
    rax_71, zmm1_4 = sub_140f1f960(&var_428)
    void* var_9f0
    int64_t** rax_72 = sub_140f27b00(&var_a60, &var_9f0, rax_71, zmm1_4)
    int64_t* rcx_98 = rax_72[1]
    r12 = *rax_72
    
    if (rcx_98 != 0)
        rcx_98[1].d += 1
    
    rdi_2 = nullptr
    
    if (rcx_98 != 0)
        rdi_2 = rcx_98
    
    int64_t* var_9e8
    
    if (var_9e8 != 0)
        var_9e8[1].d -= 1
        
        if (var_9e8[1].d == 1)
            (**var_9e8)(var_9e8)
            int32_t temp3_1 = *(var_9e8 + 0xc)
            *(var_9e8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_9e8 + 8))(var_9e8, 1)
    
    if (rax_70 != 0)
        rax_70[1].d -= 1
        
        if (rax_70[1].d == 1)
            (**rax_70)(rax_70)
            int32_t temp4_1 = *(rax_70 + 0xc)
            *(rax_70 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rax_70)[1](rax_70, 1)
    
    sub_140f24b30(&var_428)
else
    int64_t rdi = *arg3
    
    if (rdi == 0)
        TEB* gsbase
        
        if (data_143e2ad90
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e2ad90)
            
            if (data_143e2ad90 == 0xffffffff)
                int64_t* rbx_17 = data_143e243c8
                void var_a18
                data_143e2ad88 = (*(*rbx_17 + 0x48))(rbx_17, 
                    *sub_140b58170(&var_a18, "NotificationList.DefaultMessage", 1), 0)
                _Init_thread_footer(&data_143e2ad90)
        
        char rax_19 = *(arg3 + 0x4e)
        int64_t rcx_27 = data_143e2ad88
        int32_t r8_2 = arg3[6].d
        void* rdx_5 = arg3[5]
        char rax_20 = *(arg3 + 0x4d)
        char rax_21 = *(arg3 + 0x4c)
        int32_t var_ba8_1 = *(arg3 + 0x44)
        int64_t rax_22 = arg3[7]
        int32_t var_bc0_1 = arg3[9].d
        int32_t zmm0_1 = arg3[8].d
        
        if (rax_22 != 0)
            rcx_27 = rax_22
        
        int64_t var_a38_1 = rcx_27
        char var_b5f_1 = 1
        int64_t var_b58 = 0
        int32_t var_b50_1 = 0
        char var_b77_1 = 1
        int64_t var_b70 = 0
        int32_t var_b68_1 = 0
        char var_b8f_1 = 1
        int64_t var_b88 = 0
        int32_t var_b80_1 = 0
        char var_ba4_1 = 1
        int64_t var_ba0 = 0
        int32_t var_b98_1 = 0
        char var_bbc_1 = 1
        int64_t var_bb8 = 0
        int32_t var_bb0_1 = 0
        char var_bd4_1 = 1
        int64_t var_bd0 = 0
        int32_t var_bc8_1 = 0
        char var_a30_1 = 1
        int64_t var_a28 = 0
        int32_t var_a20_1 = 0
        void* const var_b48 = nullptr
        sub_140f1b620(&var_b48, rdx_5, r8_2, 0, 0)
        int64_t var_b20 = arg3[2]
        int64_t* rax_24 = arg3[3]
        char var_b38_1 = 1
        int64_t var_b30 = 0
        int32_t var_b28_1 = 0
        
        if (rax_24 != 0)
            rax_24[1].d += 1
        
        int32_t var_b10_1 = arg3[4].d
        char var_b08_1 = 1
        int64_t var_b00 = 0
        int32_t var_af8_1 = 0
        void var_7d8
        int64_t* rax_26 = sub_140f1f960(&var_7d8)
        int64_t* r12_1 = rax_26
        sub_14065da90(&rax_26[0x34], &var_b20)
        r12_1[0x37].b = var_b08_1
        sub_140692f90(&r12_1[0x38], &var_b00)
        sub_140d962e0(&r12_1[0x3a], r13 + 0x3b0)
        r12_1[0x44].b = *(r13 + 0x400)
        sub_140692f90(&r12_1[0x45], r13 + 0x408)
        void* r13_1 = &r12_1[0x47]
        
        if (r13_1 != &var_b48)
            int32_t i_1 = *(r13_1 + 8)
            
            if (i_1 != 0)
                int64_t* rdi_4 = *r13_1 + 0x20
                int32_t i
                
                do
                    sub_140745b20(&rdi_4[2])
                    int64_t* rbx_6 = *rdi_4
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t rax_30 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (rax_30 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    int64_t* rbx_7 = rdi_4[-3]
                    
                    if (rbx_7 != 0)
                        rbx_7[1].d -= 1
                        
                        if (rbx_7[1].d == 1)
                            (**rbx_7)(rbx_7)
                            int32_t rax_34 = *(rbx_7 + 0xc)
                            *(rbx_7 + 0xc) -= 1
                            
                            if (rax_34 == 1)
                                (*(*rbx_7 + 8))(rbx_7, 1)
                    
                    rdi_4 = &rdi_4[9]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            int32_t var_b40
            sub_140f1b620(r13_1, var_b48, var_b40, *(r13_1 + 0xc), 0)
            r12_1 = rax_26
        
        *(r13_1 + 0x10) = 1
        sub_1407473e0(r13_1 + 0x18, &var_b30)
        r12_1[0x4c] = rcx_27
        r12_1[0x4d].b = 1
        sub_140692f90(&r12_1[0x4e], &var_a28)
        r12_1[0x50].d = zmm0_1
        *(r12_1 + 0x284) = 1
        sub_140692f90(&r12_1[0x51], &var_bd0)
        r12_1[0x56].d = var_bc0_1
        *(r12_1 + 0x2b4) = 1
        sub_140692f90(&r12_1[0x57], &var_bb8)
        r12_1[0x53].d = var_ba8_1
        *(r12_1 + 0x29c) = 1
        sub_140692f90(&r12_1[0x54], &var_ba0)
        r12_1[0x59].b = rax_21
        *(r12_1 + 0x2c9) = 1
        sub_140692f90(&r12_1[0x5a], &var_b88)
        r12_1[0x5c].b = rax_20
        *(r12_1 + 0x2e1) = 1
        sub_140692f90(&r12_1[0x5d], &var_b70)
        r12_1[0x5f].b = rax_19
        *(r12_1 + 0x2f9) = 1
        sub_140692f90(&r12_1[0x60], &var_b58)
        r12_1[0x62].d = arg3[0xa].d
        r12_1[0x63].b = arg3[0xb].b
        *(r12_1 + 0x319) = *(arg3 + 0x59)
        sub_1407473e0(&r12_1[0x64], &arg3[0xc])
        sub_1407473e0(&r12_1[0x66], &arg3[0xe])
        sub_14065da90(&r12_1[0x68], &arg3[0x10])
        r12_1[0x6b].b = arg3[0x13].b
        sub_140692f90(&r12_1[0x6c], &arg3[0x14])
        sub_1407473e0(&r12_1[0x6e], &arg3[0x16])
        sub_14065da90(&r12_1[0x70], &arg3[0x18])
        r12_1[0x73].b = arg3[0x1b].b
        sub_140692f90(&r12_1[0x74], &arg3[0x1c])
        void*** rax_44 = sub_140f1cf10()
        void* var_a78 = &rax_44[2]
        sub_140918950(&var_a78, &rax_44[2])
        int64_t var_c08_2 = 0x5f8
        void var_bf7
        void* var_a68_1 = &var_bf7
        void* var_a00
        void** rax_45 = sub_140f27b00(&var_a78, &var_a00, r12_1, 
            sub_140e23ed0(&rax_44[2], "SNotificationItemImpl"))
        int64_t* rcx_59 = rax_45[1]
        r12 = *rax_45
        
        if (rcx_59 != 0)
            rcx_59[1].d += 1
        
        rdi_2 = nullptr
        
        if (rcx_59 != 0)
            rdi_2 = rcx_59
        
        int64_t* var_9f8
        
        if (var_9f8 != 0)
            var_9f8[1].d -= 1
            
            if (var_9f8[1].d == 1)
                (**var_9f8)(var_9f8)
                int32_t temp14_1 = *(var_9f8 + 0xc)
                *(var_9f8 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*var_9f8 + 8))(var_9f8, 1)
        
        if (rax_44 != 0)
            rax_44[1].d -= 1
            
            if (rax_44[1].d == 1)
                (**rax_44)(rax_44)
                int32_t temp20_1 = *(rax_44 + 0xc)
                *(rax_44 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*rax_44)[1](rax_44, 1)
        
        sub_140f24b30(&var_7d8)
        sub_140745b20(&var_b00)
        
        if (rax_24 != 0)
            rax_24[1].d -= 1
            
            if (rax_24[1].d == 1)
                (**rax_24)(rax_24)
                int32_t r14_1 = *(rax_24 + 0xc)
                *(rax_24 + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*rax_24 + 8))(rax_24, zx.q(r14_1))
        
        sub_140745b20(&var_b30)
        sub_1408dab30(&var_b48)
        sub_140745b20(&var_a28)
        sub_140745b20(&var_bd0)
        sub_140745b20(&var_bb8)
        sub_140745b20(&var_ba0)
        sub_140745b20(&var_b88)
        sub_140745b20(&var_b70)
        sub_140745b20(&var_b58)
        r13 = arg1
    else
        int64_t* rbx_1 = arg3[1]
        int128_t zmm6 = *(arg3 + 0x44)
        int128_t zmm7 = arg3[9].d
        int128_t zmm8 = arg3[8].d
        int32_t var_ac0_1 = zmm8.d
        int32_t var_a90_1 = zmm6.d
        int32_t var_aa8_1 = zmm7.d
        char var_a8c_1 = 1
        int64_t var_a88 = 0
        int32_t var_a80_1 = 0
        char var_aa4_1 = 1
        int64_t var_aa0 = 0
        int32_t var_a98_1 = 0
        char var_abc_1 = 1
        int64_t var_ab8 = 0
        int32_t var_ab0_1 = 0
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        void var_9d0
        int64_t* rax_3 = sub_140f1f7d0(&var_9d0)
        int64_t var_be8 = rdi
        int64_t* rdi_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (&var_be8 != &rax_3[0x3d])
            var_be8.o = *(rax_3 + 0x1e8)
            rdi_1 = rbx_1
            *(rax_3 + 0x1e8) = var_be8.o
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp7_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp8_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rax_3[0x34].d = zmm8.d
        *(rax_3 + 0x1a4) = 1
        sub_140692f90(&rax_3[0x35], &var_ab8)
        rax_3[0x3a].d = zmm7.d
        *(rax_3 + 0x1d4) = 1
        sub_140692f90(&rax_3[0x3b], &var_aa0)
        rax_3[0x37].d = zmm6.d
        *(rax_3 + 0x1bc) = 1
        sub_140692f90(&rax_3[0x38], &var_a88)
        void*** rax_9 = sub_140f1ce80()
        void* var_ad8 = &rax_9[2]
        sub_140918950(&var_ad8, &rax_9[2])
        int64_t var_c08_1 = 0x608
        void var_bf8
        void* var_ac8_1 = &var_bf8
        void* var_a10
        void** rax_10 = sub_140f27850(&var_ad8, &var_a10, rax_3, 
            sub_140e23ed0(&rax_9[2], "SNotificationItemExternalImpl"))
        int64_t* rcx_11 = rax_10[1]
        r12 = *rax_10
        
        if (rcx_11 != 0)
            rcx_11[1].d += 1
        
        rdi_2 = nullptr
        
        if (rcx_11 != 0)
            rdi_2 = rcx_11
        
        int64_t* var_a08
        
        if (var_a08 != 0)
            var_a08[1].d -= 1
            
            if (var_a08[1].d == 1)
                (**var_a08)(var_a08)
                int32_t temp22_1 = *(var_a08 + 0xc)
                *(var_a08 + 0xc) -= 1
                
                if (temp22_1 == 1)
                    (*(*var_a08 + 8))(var_a08, 1)
        
        if (rax_9 != 0)
            rax_9[1].d -= 1
            
            if (rax_9[1].d == 1)
                (**rax_9)(rax_9)
                int32_t temp25_1 = *(rax_9 + 0xc)
                *(rax_9 + 0xc) -= 1
                
                if (temp25_1 == 1)
                    (*rax_9)[1](rax_9, 1)
        
        int64_t* var_7e0
        
        if (var_7e0 != 0)
            var_7e0[1].d -= 1
            
            if (var_7e0[1].d == 1)
                (**var_7e0)(var_7e0)
                int32_t temp26_1 = *(var_7e0 + 0xc)
                *(var_7e0 + 0xc) -= 1
                
                if (temp26_1 == 1)
                    (*(*var_7e0 + 8))(var_7e0, 1)
        
        void var_7f8
        sub_140745b20(&var_7f8)
        void var_810
        sub_140745b20(&var_810)
        void var_828
        sub_140745b20(&var_828)
        sub_140ddea30(&var_9d0)
        sub_140745b20(&var_ab8)
        sub_140745b20(&var_aa0)
        sub_140745b20(&var_a88)
    
    int64_t* rbx_12 = *(r13 + 0x10)
    
    if (rbx_12 != 0)
        int32_t rax_53 = rbx_12[1].d
        
        if (rax_53 != 0)
            rbx_12[1].d = rax_53 + 1
            rax_53.b = 1
        
        if (rax_53.b == 0)
            rbx_12 = nullptr
        
        if (rbx_12 != 0)
            int32_t rax_54 = rbx_12[1].d
            rsi = *(r13 + 8)
            rbx_12[1].d = rax_54
            
            if (rax_54 == 0)
                (**rbx_12)(rbx_12)
                int32_t temp30_1 = *(rbx_12 + 0xc)
                *(rbx_12 + 0xc) -= 1
                
                if (temp30_1 == 1)
                    (*(*rbx_12 + 8))(rbx_12, 1)
    
    r12[0x72] = rsi
    int64_t* rcx_80 = r12[0x73]
    
    if (rbx_12 != rcx_80)
        if (rbx_12 != 0)
            *(rbx_12 + 0xc) += 1
            rcx_80 = r12[0x73]
        
        if (rcx_80 != 0)
            int32_t temp29_1 = *(rcx_80 + 0xc)
            *(rcx_80 + 0xc) -= 1
            
            if (temp29_1 == 1)
                (*(*rcx_80 + 8))(rcx_80, 1)
        
        r12[0x73] = rbx_12
    
    if (rbx_12 != 0)
        rbx_12[1].d -= 1
        
        if (rbx_12[1].d == 1)
            (**rbx_12)(rbx_12)
            int32_t temp28_1 = *(rbx_12 + 0xc)
            *(rbx_12 + 0xc) -= 1
            
            if (temp28_1 == 1)
                (*(*rbx_12 + 8))(rbx_12, 1)
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    int64_t* var_a48 = r12
    int64_t* var_a40_1 = rdi_2
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    void* rax_61 = sub_140698b50(sub_140698a90(*(r13 + 0x390)))
    *(rax_61 + 0x20) = 3
    sub_140693600(rax_61, &var_a48)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp33_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp33_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
        
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp34_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp34_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    sub_140f44dc0(r12, arg3[0x1e].b)
    
    if (*(arg3 + 0x54) != 0)
        (*(*r12 + 0x278))(r12)
    
    result = arg2

if (rdi_2 != 0)
    rdi_2[1].d += 1

void var_9e0
int64_t rax_69
int64_t* rcx_93

if (r13 + 0x420 != &var_9e0)
    *(r13 + 0x420) = r12
    int64_t* rbx_13 = *(r13 + 0x428)
    
    if (rdi_2 == rbx_13)
        goto label_140f2a723
    
    *(r13 + 0x428) = rdi_2
    
    if (rbx_13 == 0)
        goto label_140f2a74a
    
    rbx_13[1].d -= 1
    
    if (rbx_13[1].d != 1)
        goto label_140f2a74a
    
    (**rbx_13)(rbx_13)
    int32_t temp19_1 = *(rbx_13 + 0xc)
    *(rbx_13 + 0xc) -= 1
    
    if (temp19_1 != 1)
        goto label_140f2a74a
    
    rax_69 = *rbx_13
    rcx_93 = rbx_13
    goto label_140f2a747

label_140f2a723:

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d != 1)
        goto label_140f2a74a
    
    (**rdi_2)(rdi_2)
    int32_t temp11_1 = *(rdi_2 + 0xc)
    *(rdi_2 + 0xc) -= 1
    
    if (temp11_1 != 1)
        goto label_140f2a74a
    
    rax_69 = *rdi_2
    rcx_93 = rdi_2
label_140f2a747:
    (*(rax_69 + 8))(rcx_93, 1)
label_140f2a74a:
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1

*result = r12
result[1] = rdi_2

if (rdi_2 != 0)
    int32_t rax_78 = rdi_2[1].d
    rdi_2[1].d = rax_78
    
    if (rax_78 == 0)
        (**rdi_2)(rdi_2)
        int32_t temp18_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)
    
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp23_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp23_1 == 1)
            int64_t r8_9 = *rdi_2
            (*(r8_9 + 8))(rdi_2, 1, r8_9)

__security_check_cookie(rax_1 ^ &var_c28)
return result
