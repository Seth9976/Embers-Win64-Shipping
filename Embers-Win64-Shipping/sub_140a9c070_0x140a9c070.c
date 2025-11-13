// 函数: sub_140a9c070
// 地址: 0x140a9c070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* _String1 = **arg1
int32_t rax_1 = wcsncmp(_String1, u"NSLOCTEXT", 9)
int32_t rax_2

if (rax_1 != 0)
    rax_2 = wcsncmp(_String1, u"LOCTEXT", 7)

uint64_t result
void*** rdi_1

if (rax_1 == 0 || rax_2 == 0)
    void*** rax_81 = sub_140a93d50()
    uint128_t zmm0_11 = (&rax_81[2]).o
    rdi_1 = _mm_bsrli_si128(zmm0_11, 8).q
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
        rdi_1 = rax_81
    
    int64_t rcx_45 = *arg2
    *arg2 = zmm0_11.q
    int64_t* rsi_8 = arg2[1]
    arg2[1] = zmm0_11:8.q
    uint128_t var_18_1
    var_18_1.q = rcx_45
    var_18_1:8.q = rsi_8
    
    if (rsi_8 != 0)
        rsi_8[1].d -= 1
        
        if (rsi_8[1].d == 1)
            (**rsi_8)(rsi_8)
            int32_t rax_85 = *(rsi_8 + 0xc)
            *(rsi_8 + 0xc) -= 1
            
            if (rax_85 == 1)
                (*(*rsi_8 + 8))(rsi_8, 1)
        
        rdi_1 = rax_81
    
label_140a9c8c2:
    
    if (rdi_1 == 0)
        result.b = 1
    else
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbx_2 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_2 == 1)
                (*rdi_1)[1](rdi_1, zx.q(rbx_2))
        
        result.b = 1
else
    if (wcsncmp(**arg1, u"LOCGEN_FORMAT_NAMED", 0x13) == 0)
        void*** rax_5 = sub_140a93df0()
        uint128_t zmm0_1 = (&rax_5[2]).o
        rdi_1 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1 = rax_5
        
        int64_t rcx_3 = *arg2
        *arg2 = zmm0_1.q
        int64_t* rsi = arg2[1]
        arg2[1] = zmm0_1:8.q
        uint128_t var_c8_1
        var_c8_1.q = rcx_3
        var_c8_1:8.q = rsi
        
        if (rsi != 0)
            rsi[1].d -= 1
            
            if (rsi[1].d == 1)
                (**rsi)(rsi)
                int32_t rax_9 = *(rsi + 0xc)
                *(rsi + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*(*rsi + 8))(rsi, 1)
            
            rdi_1 = rax_5
        
        goto label_140a9c8c2
    
    if (wcsncmp(**arg1, u"LOCGEN_FORMAT_ORDERED", 0x15) == 0)
        void*** rax_13 = sub_140a93ee0()
        uint128_t zmm0_2 = (&rax_13[2]).o
        rdi_1 = _mm_bsrli_si128(zmm0_2, 8).q
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1 = rax_13
        
        int64_t rcx_7 = *arg2
        *arg2 = zmm0_2.q
        int64_t* rsi_1 = arg2[1]
        arg2[1] = zmm0_2:8.q
        uint128_t var_b8_1
        var_b8_1.q = rcx_7
        var_b8_1:8.q = rsi_1
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t rax_17 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
            
            rdi_1 = rax_13
        
        goto label_140a9c8c2
    
    if (wcsncmp(**arg1, u"LOCGEN_NUMBER", 0xd) == 0)
        void*** rax_21 = sub_140a93b80()
        uint128_t zmm0_3 = (&rax_21[2]).o
        rdi_1 = _mm_bsrli_si128(zmm0_3, 8).q
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1 = rax_21
        
        int64_t rcx_11 = *arg2
        *arg2 = zmm0_3.q
        int64_t* rsi_2 = arg2[1]
        arg2[1] = zmm0_3:8.q
        uint128_t var_a8_1
        var_a8_1.q = rcx_11
        var_a8_1:8.q = rsi_2
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t rax_25 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (rax_25 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
            
            rdi_1 = rax_21
        
        goto label_140a9c8c2
    
    if (wcsncmp(**arg1, u"LOCGEN_PERCENT", 0xe) == 0)
        void*** rax_29 = sub_140a93c10()
        uint128_t zmm0_4 = (&rax_29[2]).o
        rdi_1 = _mm_bsrli_si128(zmm0_4, 8).q
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1 = rax_29
        
        int64_t rcx_15 = *arg2
        *arg2 = zmm0_4.q
        int64_t* rsi_3 = arg2[1]
        arg2[1] = zmm0_4:8.q
        uint128_t var_98_1
        var_98_1.q = rcx_15
        var_98_1:8.q = rsi_3
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t rax_33 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (rax_33 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
            
            rdi_1 = rax_29
        
        goto label_140a9c8c2
    
    if (wcsncmp(**arg1, u"LOCGEN_CURRENCY", 0xf) == 0)
        void*** rax_37 = sub_140a93980()
        uint128_t zmm0_5 = (&rax_37[2]).o
        rdi_1 = _mm_bsrli_si128(zmm0_5, 8).q
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1 = rax_37
        
        int64_t rcx_19 = *arg2
        *arg2 = zmm0_5.q
        int64_t* rsi_4 = arg2[1]
        arg2[1] = zmm0_5:8.q
        uint128_t var_88_1
        var_88_1.q = rcx_19
        var_88_1:8.q = rsi_4
        
        if (rsi_4 != 0)
            rsi_4[1].d -= 1
            
            if (rsi_4[1].d == 1)
                (**rsi_4)(rsi_4)
                int32_t rax_41 = *(rsi_4 + 0xc)
                *(rsi_4 + 0xc) -= 1
                
                if (rax_41 == 1)
                    (*(*rsi_4 + 8))(rsi_4, 1)
            
            rdi_1 = rax_37
        
        goto label_140a9c8c2
    
    if (wcsncmp(**arg1, u"LOCGEN_DATETIME", 0xf) == 0)
        void*** rax_45 = sub_140a93ad0()
        uint128_t zmm0_6 = (&rax_45[2]).o
        rdi_1 = _mm_bsrli_si128(zmm0_6, 8).q
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1 = rax_45
        
        int64_t rcx_23 = *arg2
        *arg2 = zmm0_6.q
        int64_t* rsi_5 = arg2[1]
        arg2[1] = zmm0_6:8.q
        uint128_t var_78_1
        var_78_1.q = rcx_23
        var_78_1:8.q = rsi_5
        
        if (rsi_5 != 0)
            rsi_5[1].d -= 1
            
            if (rsi_5[1].d == 1)
                (**rsi_5)(rsi_5)
                int32_t rax_49 = *(rsi_5 + 0xc)
                *(rsi_5 + 0xc) -= 1
                
                if (rax_49 == 1)
                    (*(*rsi_5 + 8))(rsi_5, 1)
            
            rdi_1 = rax_45
        
        goto label_140a9c8c2
    
    if (wcsncmp(**arg1, u"LOCGEN_DATE", 0xb) == 0)
        void*** rax_53 = sub_140a93a20()
        uint128_t zmm0_7 = (&rax_53[2]).o
        rdi_1 = _mm_bsrli_si128(zmm0_7, 8).q
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1 = rax_53
        
        int64_t rcx_27 = *arg2
        *arg2 = zmm0_7.q
        int64_t* rsi_6 = arg2[1]
        arg2[1] = zmm0_7:8.q
        uint128_t var_68_1
        var_68_1.q = rcx_27
        var_68_1:8.q = rsi_6
        
        if (rsi_6 != 0)
            rsi_6[1].d -= 1
            
            if (rsi_6[1].d == 1)
                (**rsi_6)(rsi_6)
                int32_t rax_57 = *(rsi_6 + 0xc)
                *(rsi_6 + 0xc) -= 1
                
                if (rax_57 == 1)
                    (*(*rsi_6 + 8))(rsi_6, 1)
            
            rdi_1 = rax_53
        
        goto label_140a9c8c2
    
    if (wcsncmp(**arg1, u"LOCGEN_TIME", 0xb) == 0)
        void*** rax_61 = sub_140a93ca0()
        uint128_t zmm0_8 = (&rax_61[2]).o
        rdi_1 = _mm_bsrli_si128(zmm0_8, 8).q
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1 = rax_61
        
        int64_t rcx_31 = *arg2
        *arg2 = zmm0_8.q
        int64_t* rsi_7 = arg2[1]
        arg2[1] = zmm0_8:8.q
        uint128_t var_58_1
        var_58_1.q = rcx_31
        var_58_1:8.q = rsi_7
        
        if (rsi_7 != 0)
            rsi_7[1].d -= 1
            
            if (rsi_7[1].d == 1)
                (**rsi_7)(rsi_7)
                int32_t rax_65 = *(rsi_7 + 0xc)
                *(rsi_7 + 0xc) -= 1
                
                if (rax_65 == 1)
                    (*(*rsi_7 + 8))(rsi_7, 1)
            
            rdi_1 = rax_61
        
        goto label_140a9c8c2
    
    if (sub_140ac5920(**arg1) == 0)
        if (wcsncmp(**arg1, u"LOCTABLE", 8).d != 0)
            result.b = 0
        else
            void*** rax_77 = sub_140a93850()
            void*** var_20_1 = rax_77
            void* var_28 = &rax_77[2]
            uint128_t zmm0_10 = var_28.o
            uint128_t var_d8 = zmm0_10
            void* rax_78 = _mm_bsrli_si128(zmm0_10, 8).q
            
            if (rax_78 != 0)
                *(rax_78 + 8) += 1
            
            int64_t rcx_41 = *arg2
            *arg2 = var_d8.q
            var_d8.q = rcx_41
            var_d8:8.q = arg2[1]
            arg2[1] = var_d8:8.q
            sub_1405970a0(&var_d8)
            sub_1405970a0(&var_28)
            result.b = 1
    else
        void*** rax_68 = sub_140a94030()
        void*** var_30_1 = rax_68
        void* var_38 = &rax_68[2]
        uint128_t zmm0_9 = var_38.o
        void* rax_69 = _mm_bsrli_si128(zmm0_9, 8).q
        
        if (rax_69 != 0)
            *(rax_69 + 8) += 1
        
        int64_t rcx_36 = *arg2
        *arg2 = zmm0_9.q
        int64_t* rdi_2 = arg2[1]
        uint128_t var_48_1
        var_48_1.q = rcx_36
        arg2[1] = zmm0_9:8.q
        var_48_1:8.q = rdi_2
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t rbx_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_1))
        
        sub_1405970a0(&var_38)
        result.b = 1
return result
