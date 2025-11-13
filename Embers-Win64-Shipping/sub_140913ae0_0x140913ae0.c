// 函数: sub_140913ae0
// 地址: 0x140913ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int64_t* r13 = arg2

if (*((*(*rcx + 0x30))(rcx) + 8) s> 0x400)
    void* result
    result.b = 0
    return result

int32_t r12 = 0
int64_t var_e4 = 0
int64_t var_dc = 0
char var_e8 = 0
int128_t var_d0 = zx.o(0)

while (true)
    void* rbx_1 = **(arg1 + 0xa0)
    
    if (rbx_1 == 0)
        break
    
    char rax_2 = *(rbx_1 + 8)
    var_e4.o = *(rbx_1 + 0xc)
    
    if (&var_d0 != rbx_1 + 0x20)
        var_d0.q = *(rbx_1 + 0x20)
        *(rbx_1 + 0x20) = 0
        int64_t* rcx_1 = var_d0:8.q
        var_d0:8.q = *(rbx_1 + 0x28)
        *(rbx_1 + 0x28) = 0
        
        if (rcx_1 != 0)
            int32_t temp1_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
    
    void* rdi_1 = *(arg1 + 0xa0)
    *(arg1 + 0xa0) = rbx_1
    int128_t var_68 = zx.o(0)
    int64_t var_74_1 = 0
    *(rbx_1 + 8) = 0
    char var_80_1 = 0
    *(rbx_1 + 0xc) = 0.o
    
    if (rbx_1 + 0x20 != &var_68)
        *(rbx_1 + 0x20) = 0
        int64_t* rcx_2 = *(rbx_1 + 0x28)
        *(rbx_1 + 0x28) = 0
        
        if (rcx_2 != 0)
            int32_t temp2_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_2 + 8))(rcx_2, 1)
    
    if (rdi_1 != 0)
        int64_t* rcx_3 = *(rdi_1 + 0x28)
        
        if (rcx_3 != 0)
            int32_t temp3_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        j_sub_140a74f90(rdi_1)
    
    if (rax_2 == 0)
        sub_140911d10(arg1 + 0x48, &var_e4)
    else
        int64_t* rbx_3 = var_d0:8.q
        int64_t var_a8 = 0
        
        if (rbx_3 != 0)
            int32_t rax_8 = rbx_3[1].d
            
            if (rax_8 == 0)
                int64_t var_a0_2 = 0
            else
                rbx_3[1].d = rax_8 + 1
                int64_t rax_10 = var_d0.q
                var_a8 = rax_10
                
                if (rax_10 != 0)
                    sub_14090d340(arg1 + 0x48, &var_e4, &var_a8)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp9_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t rax_13 = sx.q(arg3[1].d)
void* rsi = nullptr
void* var_108 = nullptr
int32_t i_5 = 0
int64_t var_100 = 0
int64_t* r15_3

if (rax_13.d == 0)
    int64_t* i = *(arg1 + 0x38)
    int32_t rdx_4 = 0
    r15_3 = &i[sx.q(*(arg1 + 0x40)) * 2]
    void* var_f8 = nullptr
    int32_t var_ec_1 = 0
    
    for (; i != r15_3; i = &i[2])
        void* rcx_10 = *i
        
        if (*(rcx_10 + 0x28) == 1)
            int64_t i_6 = sx.q(i_5)
            i_5 = (i_6 + 1).d
            
            if (i_5 s> rdx_4)
                sub_1405a4f90(&var_f8)
                rcx_10 = *i
                rdx_4 = var_ec_1
                rsi = var_f8
            
            void** rax_16 = (i_6 << 4) + rsi
            *rax_16 = rcx_10
            void* rcx_11 = i[1]
            rax_16[1] = rcx_11
            
            if (rcx_11 != 0)
                *(rcx_11 + 8) += 1
    
    var_108 = rsi
    var_f8 = nullptr
    var_100.d = i_5
    var_100:4.d = rdx_4
    int64_t var_f0_1 = 0
    sub_140596d80(&var_f8)
    goto label_140913ead

r15_3 = *arg3
void* r13_3 = &r15_3[rax_13 * 2]

if (r15_3 == r13_3)
    r15_3.b = 0
else
    void* rbx_4 = arg1 + 0x48
    void* var_b0_1 = rbx_4
    
    do
        int32_t arg_20
        sub_140910250(rbx_4, &arg_20, r15_3)
        int64_t rax_17 = sx.q(arg_20)
        void* const rcx_14
        
        if (rax_17.d == 0xffffffff)
            rcx_14 = nullptr
        else
            rcx_14 = *rbx_4 + rax_17 * 0x28
        
        int64_t* rbx_5 = rcx_14 + 0x10
        
        if (rcx_14 == 0)
            rbx_5 = nullptr
        
        if (rbx_5 != 0)
            void* i_1 = *rbx_5
            
            if (*(i_1 + 0x28) == 1)
                void* rax_19 = rsi
                void* rcx_17 = (sx.q(i_5) << 4) + rsi
                
                if (rsi != rcx_17)
                    while (*rax_19 != i_1)
                        rax_19 += 0x10
                        
                        if (rax_19 == rcx_17)
                            goto label_140913e4c
                
                if (rsi == rcx_17 || ((rax_19 - rsi) s>> 4).d == 0xffffffff)
                label_140913e4c:
                    int64_t i_7 = sx.q(i_5)
                    i_5 = (i_7 + 1).d
                    var_100.d = i_5
                    
                    if (i_5 s> r12)
                        sub_1405a4f90(&var_108)
                        r12 = var_100:4.d
                        i_5 = var_100.d
                        rsi = var_108
                    
                    int64_t rcx_20 = i_7 * 2
                    *(rsi + (rcx_20 << 3)) = *rbx_5
                    void* rax_23 = rbx_5[1]
                    *(rsi + (rcx_20 << 3) + 8) = rax_23
                    
                    if (rax_23 != 0)
                        *(rax_23 + 8) += 1
        
        rbx_4 = var_b0_1
        r15_3 = &r15_3[2]
    while (r15_3 != r13_3)
    
    r13 = arg2
label_140913ead:
    
    if (i_5 == 0)
        r15_3.b = 0
    else
        void*** rax_24 = j_sub_140a82f30(0xb8)
        void*** r14_1 = rax_24
        
        if (rax_24 == 0)
            r14_1 = nullptr
        else
            int32_t var_88_1 = 0
            int64_t var_c0_1 = 0
            memset(rax_24, 0, 0x90)
            sub_140b4c2a0(r14_1)
            r14_1[0x12] = 0
            *r14_1 = &data_142d6ad48
            r14_1[0x14] = var_c0_1
            r14_1[0x13] = &rax_24[0x15]
            sub_140b552b0(r14_1, 1)
            int64_t rdx_10
            rdx_10.b = 1
            (*r14_1)[0x1b](r14_1, rdx_10)
            *r14_1 = &data_142e1d160
            rax_24[0x15] = 0
            rax_24[0x16] = 0
        
        void*** rax_27 = j_sub_140a82f30(0x18)
        
        if (rax_27 == 0)
            rax_27 = nullptr
        else
            rax_27[1].d = 1
            *rax_27 = &data_142d42ea8
            *(rax_27 + 0xc) = 1
            rax_27[2] = r14_1
        
        void*** var_98 = r14_1
        int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
        int64_t* lpTlsValue = lpTlsValue_1
        
        if (lpTlsValue_1 == 0)
            int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
            lpTlsValue = lpTlsValue_2
            
            if (lpTlsValue_2 == 0)
                lpTlsValue = nullptr
            else
                __builtin_memset(lpTlsValue_2, 0, 0x14)
            
            TlsSetValue(data_143cf0950, lpTlsValue)
        
        int64_t* rcx_28 = lpTlsValue[1]
        int32_t rdx_12
        
        if (rcx_28 != 0)
            rdx_12 = lpTlsValue[2].d
        else
            rcx_28 = *lpTlsValue
            
            if (rcx_28 == 0)
                int64_t* rax_28 = sub_14059e7c0(&data_143cf0958)
                lpTlsValue[1] = rax_28
                rcx_28 = rax_28
                
                if (rax_28 == 0)
                    int64_t* rax_29 = sub_140a82f70(0x2000, 0)
                    lpTlsValue[1] = rax_29
                    int64_t i_4 = 0x1f
                    int64_t* rcx_29
                    int64_t i_2
                    
                    do
                        rcx_29 = &rax_29[0x20]
                        *rax_29 = rcx_29
                        rax_29 = rcx_29
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                    *rcx_29 = 0
                    rcx_28 = lpTlsValue[1]
                
                rdx_12 = 0x20
                lpTlsValue[2].d = 0x20
            else
                rdx_12 = 0x20
                lpTlsValue[1] = rcx_28
                lpTlsValue[2].d = 0x20
                *lpTlsValue = 0
        
        lpTlsValue[1] = *rcx_28
        int64_t* var_58 = rcx_28
        lpTlsValue[2].d = rdx_12 - 1
        rcx_28[1].d = 0xff
        *rcx_28 = &data_142d40498
        int64_t var_b0_2 = 0
        int64_t var_40_1 = 0
        *(rcx_28 + 0xc) = 1
        *rcx_28 = &data_142e1d420
        rcx_28[8].b = 0
        rcx_28[9] = 0
        int64_t var_50_1 = 0
        int32_t var_48_1 = 0xff
        int64_t* var_b8
        sub_14090d1d0(&var_58, &var_b8, r13, &var_98, &var_108)
        int64_t* rax_32 = var_b8
        
        if (rax_32 != 0)
            rax_32[9].d -= 1
            
            if (rax_32[9].d == 1)
                sub_140a2f6e0(var_b8)
            
            rsi = var_108
            i_5 = var_100.d
        
        r15_3.b = 1
        
        if (rax_27 != 0)
            rax_27[1].d -= 1
            
            if (rax_27[1].d == 1)
                (**rax_27)(rax_27)
                int32_t r14_2 = *(rax_27 + 0xc)
                *(rax_27 + 0xc) -= 1
                
                if (r14_2 == 1)
                    (*rax_27)[1](rax_27, zx.q(r14_2))
            
            i_5 = var_100.d
            rsi = var_108

if (i_5 != 0)
    int64_t* r14_3 = rsi + 8
    int32_t i_3
    
    do
        int64_t* rbx_8 = *r14_3
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t temp7_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
        
        r14_3 = &r14_3[2]
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

int64_t* rcx_38 = var_d0:8.q

if (rcx_38 != 0)
    int32_t temp4_1 = *(rcx_38 + 0xc)
    *(rcx_38 + 0xc) -= 1
    
    if (temp4_1 == 1)
        int64_t r8_3 = *rcx_38
        (*(r8_3 + 8))(rcx_38, 1, r8_3)

return zx.q(r15_3.b)
