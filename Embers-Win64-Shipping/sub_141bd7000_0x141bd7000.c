// 函数: sub_141bd7000
// 地址: 0x141bd7000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t rax_4
rax_4.b = *(arg1 + 0x10d) != 0
int32_t rbx_3 = (sbb.d(arg3.d, arg3.d, *(arg1 + 0x10e) != 0) & 4)
    | (sbb.d(arg2.d, arg2.d, *(arg1 + 0x10c) != 0) & 2) | rax_4
int32_t rax_5 = *(arg1 + 0x108)
int32_t rbp

if (rax_5 s>= 1)
    rbp = 0x19
    
    if (rax_5 s< 0x19)
        rbp = rax_5
else
    rbp = 1

void var_1d8
int64_t* rax_6 = sub_140ee1870(&var_1d8)
rax_6[0x34] = arg1 + 0x118
rax_6[0x35].d = rbp
*(rax_6 + 0x1ac) = rbx_3
void*** rax_8 = sub_140ee0fd0()
void* var_210 = &rax_8[2]
sub_140918950(&var_210, &rax_8[2])
int64_t var_228 = 0x450
void var_218
void* var_200 = &var_218
void* var_1f8
void** rax_9 = sub_140ee5e40(&var_210, &var_1f8, rax_6, sub_140e23ed0(&rax_8[2], "SThrobber"))
int64_t* rcx_4 = rax_9[1]

if (rcx_4 != 0)
    rcx_4[1].d += 1

void var_1e8

if (arg1 + 0x1a0 == &var_1e8)
label_141bd7150:
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            (**rcx_4)(rcx_4)
            int32_t temp4_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
else
    *(arg1 + 0x1a0) = *rax_9
    int64_t* rbx_5 = *(arg1 + 0x1a8)
    
    if (rcx_4 == rbx_5)
        goto label_141bd7150
    
    *(arg1 + 0x1a8) = rcx_4
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp8_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)

int64_t* var_1f0

if (var_1f0 != 0)
    var_1f0[1].d -= 1
    
    if (var_1f0[1].d == 1)
        (**var_1f0)(var_1f0)
        int32_t temp7_1 = *(var_1f0 + 0xc)
        *(var_1f0 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_1f0 + 8))(var_1f0, 1)

if (rax_8 != 0)
    rax_8[1].d -= 1
    
    if (rax_8[1].d == 1)
        (**rax_8)(rax_8)
        int32_t temp9_1 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*rax_8)[1](rax_8, 1)

sub_140ddea30(&var_1d8)
int64_t* rbx_8 = *(arg1 + 0x1a8)

if (rbx_8 != 0)
    rbx_8[1].d += 1

*arg2 = *(arg1 + 0x1a0)
arg2[1] = rbx_8

if (rbx_8 != 0)
    rbx_8[1].d += 1
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp11_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp11_1 == 1)
                int64_t r8_3 = *rbx_8
                (*(r8_3 + 8))(rbx_8, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_248)
return arg2
