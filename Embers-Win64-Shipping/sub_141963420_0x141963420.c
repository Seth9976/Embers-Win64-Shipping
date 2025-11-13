// 函数: sub_141963420
// 地址: 0x141963420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* rcx = arg1[1]
int32_t* rdx = *rcx

if (&rdx[1] u<= rcx[1])
    *arg2 = *rdx
    int64_t* rax_4 = arg1[1]
    *rax_4 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2, 4)

int32_t rcx_2 = *arg2
int32_t var_d0

if (rcx_2 == 0)
    sub_140b31010(arg1, &arg2[1])
    
    if (arg1[0xb].d == 9)
        int64_t* rcx_50 = arg1[1]
        var_d0 = 0
        int32_t* rdx_45 = *rcx_50
        
        if (&rdx_45[1] u> rcx_50[1])
            int32_t* rdx_46 = &var_d0
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_46, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_46, 4)
        else
            var_d0 = *rdx_45
            *rcx_50 += 4
else if (rcx_2 == 1)
    sub_140b31010(arg1, &arg2[6])
    sub_140b31010(arg1, &arg2[0xb])
    sub_140b31010(arg1, &arg2[0x10])
    sub_140b31010(arg1, &arg2[0x15])
    sub_140b31010(arg1, &arg2[0x1a])
    int32_t rax_6 = arg1[0xb].d
    int32_t var_d4
    
    if (rax_6 == 9)
        uint64_t i_4 = zx.q(rax_6 - 4)
        uint64_t i
        
        do
            int64_t* rcx_8 = arg1[1]
            var_d4 = 0
            int32_t* rdx_7 = *rcx_8
            
            if (&rdx_7[1] u> rcx_8[1])
                int32_t* rdx_8 = &var_d4
                
                if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, rdx_8, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, rdx_8, 4)
            else
                var_d4 = *rdx_7
                *rcx_8 += 4
            
            i = i_4
            i_4 -= 1
        while (i != 1)
        rax_6 = arg1[0xb].d
    
    char var_d8
    
    if (rax_6 u>= 0xb)
        sub_1419645f0(arg1, &arg2[0x1f], arg3)
    else
        int32_t var_48_1 = 0
        int32_t var_44_1 = 0x10
        void var_c8
        sub_1419645f0(arg1, &var_c8, arg3)
        var_d8 = 0
        arg3 = sub_141960790(&var_c8, var_48_1, var_d8)
        int64_t r12_1 = sx.q(arg2[0x3f])
        int64_t r15_1 = sx.q(var_48_1)
        int32_t rax_10 = (r12_1 + r15_1).d
        arg2[0x3f] = rax_10
        
        if (rax_10 s> arg2[0x40])
            sub_14088f7f0(&arg2[0x1f])
        
        memset(&arg2[0x1f + r12_1 * 2], 0, r15_1 << 3)
        int32_t i_1 = 0
        
        if (r15_1.d != 0)
            do
                int64_t i_3 = sx.q(i_1)
                i_1 += 1
                arg2[i_3 * 2 + 0x1f].b = *(&var_c8 + (i_3 << 3))
                void var_c7
                *(&arg2[i_3 * 2] + 0x7d) = *(&var_c7 + (i_3 << 3))
                void var_c6
                *(&arg2[i_3 * 2] + 0x7e) = *(&var_c6 + (i_3 << 3))
                void var_c5
                *(&arg2[i_3 * 2] + 0x7f) = *(&var_c5 + (i_3 << 3))
                void var_c4
                arg2[i_3 * 2 + 0x20].w = *(&var_c4 + (i_3 << 3))
                void var_c2
                *(&arg2[i_3 * 2] + 0x82) = *(&var_c2 + (i_3 << 3))
            while (i_1 u< r15_1.d)
    
    sub_141965170(arg1, &arg2[0x41])
    int64_t* rcx_15 = arg1[1]
    int32_t* rdx_14 = *rcx_15
    
    if (&rdx_14[1] u> rcx_15[1])
        int64_t rax_19 = *arg1
        int32_t r14_1
        r14_1.b = arg2[0x4f].b != 0
        var_d4 = r14_1
        (*(rax_19 + 0x150))(arg1, &var_d4, 4)
        arg2[0x4f].b = var_d4 != 0
    else
        void* rax_17
        rax_17.b = *rdx_14 != 0
        arg2[0x4f].b = rax_17.b
        int64_t* rax_18 = arg1[1]
        *rax_18 += 4
    
    sub_1419640f0(arg1, &arg2[0x50], arg3)
    sub_141962f10(arg1, &arg2[0x53])
    void* rdi_2 = &arg2[0x5f]
    int64_t i_5 = 8
    int64_t i_2
    
    do
        int64_t* rcx_19 = arg1[1]
        var_d4 = *(rdi_2 - 0x20)
        int32_t* rdx_18 = *rcx_19
        
        if (&rdx_18[1] u> rcx_19[1])
            int32_t* rdx_19 = &var_d4
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_19, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_19, 4)
        else
            var_d4 = *rdx_18
            *rcx_19 += 4
        
        *(rdi_2 - 0x20) = var_d4
        int64_t* rcx_21 = arg1[1]
        int32_t* rdx_20 = *rcx_21
        
        if (&rdx_20[1] u<= rcx_21[1])
            *rdi_2 = *rdx_20
            int64_t* rax_28 = arg1[1]
            *rax_28 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_2, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdi_2, 4)
        
        int64_t* rcx_23 = arg1[1]
        var_d8 = 0
        char* rdx_22 = *rcx_23
        
        if (&rdx_22[1] u> rcx_23[1])
            (*(*arg1 + 0x150))(arg1, &var_d8, 1)
        else
            var_d8 = *rdx_22
            *rcx_23 += 1
        
        int64_t* rcx_25 = arg1[1]
        char* rdx_24 = *rcx_25
        
        if (&rdx_24[1] u> rcx_25[1])
            (*(*arg1 + 0x150))(arg1, &var_d8, 1)
        else
            var_d8 = *rdx_24
            *rcx_25 += 1
        
        rdi_2 += 4
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    int64_t* rcx_27 = arg1[1]
    int32_t* r8_4 = *rcx_27
    
    if (&r8_4[1] u<= rcx_27[1])
        arg2[0x67] = *r8_4
        int64_t* rax_38 = arg1[1]
        *rax_38 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[0x67], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0x67], 4)
    
    int64_t* rcx_29 = arg1[1]
    int32_t* r8_5 = *rcx_29
    
    if (&r8_5[1] u<= rcx_29[1])
        arg2[0x68] = *r8_5
        int64_t* rax_42 = arg1[1]
        *rax_42 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[0x68], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0x68], 4)
    
    int64_t* rcx_31 = arg1[1]
    int32_t var_cc = arg2[0x6c]
    int32_t* rdx_28 = *rcx_31
    
    if (&rdx_28[1] u> rcx_31[1])
        int32_t* rdx_29 = &var_cc
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_29, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_29, 4)
    else
        var_cc = *rdx_28
        *rcx_31 += 4
    
    arg2[0x6c] = var_cc
    int64_t* rcx_33 = arg1[1]
    var_d0 = arg2[0x69]
    int32_t* rdx_30 = *rcx_33
    
    if (&rdx_30[1] u> rcx_33[1])
        int32_t* rdx_31 = &var_d0
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_31, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_31, 4)
    else
        var_d0 = *rdx_30
        *rcx_33 += 4
    
    arg2[0x69] = var_d0
    int64_t* rcx_35 = arg1[1]
    int32_t* r8_6 = *rcx_35
    
    if (&r8_6[1] u<= rcx_35[1])
        arg2[0x6a] = *r8_6
        int64_t* rax_56 = arg1[1]
        *rax_56 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[0x6a], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0x6a], 4)
    
    int64_t* rcx_37 = arg1[1]
    char* rdx_33 = *rcx_37
    
    if (&rdx_33[1] u> rcx_37[1])
        (*(*arg1 + 0x150))(arg1, &arg2[0x6b], 1)
    else
        arg2[0x6b].b = *rdx_33
        int64_t* rax_60 = arg1[1]
        *rax_60 += 1
    
    int64_t* rcx_39 = arg1[1]
    char* rdx_35 = *rcx_39
    
    if (&rdx_35[1] u> rcx_39[1])
        (*(*arg1 + 0x150))(arg1, arg2 + 0x1ad, 1)
    else
        *(arg2 + 0x1ad) = *rdx_35
        int64_t* rax_64 = arg1[1]
        *rax_64 += 1
    
    int64_t* rcx_41 = arg1[1]
    char* rdx_37 = *rcx_41
    
    if (&rdx_37[1] u> rcx_41[1])
        (*(*arg1 + 0x150))(arg1, arg2 + 0x1ae, 1)
    else
        *(arg2 + 0x1ae) = *rdx_37
        int64_t* rax_68 = arg1[1]
        *rax_68 += 1
    
    int64_t* rcx_43 = arg1[1]
    char* rdx_39 = *rcx_43
    
    if (&rdx_39[1] u> rcx_43[1])
        (*(*arg1 + 0x150))(arg1, arg2 + 0x1af, 1)
    else
        *(arg2 + 0x1af) = *rdx_39
        int64_t* rax_72 = arg1[1]
        *rax_72 += 1
    
    int64_t* rcx_45 = arg1[1]
    char* rdx_41 = *rcx_45
    
    if (&rdx_41[1] u> rcx_45[1])
        (*(*arg1 + 0x150))(arg1, &arg2[0x6d], 1)
    else
        arg2[0x6d].b = *rdx_41
        int64_t* rax_76 = arg1[1]
        *rax_76 += 1
    
    int64_t* rcx_47 = arg1[1]
    char* r8_7 = *rcx_47
    
    if (&r8_7[1] u> rcx_47[1])
        (*(*arg1 + 0x150))(arg1, arg2 + 0x1b5, 1)
    else
        *(arg2 + 0x1b5) = *r8_7
        int64_t* rax_80 = arg1[1]
        *rax_80 += 1
__security_check_cookie(rax_1 ^ &var_f8)
return arg1
