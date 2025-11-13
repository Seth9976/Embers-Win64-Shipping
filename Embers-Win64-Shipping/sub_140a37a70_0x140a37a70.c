// 函数: sub_140a37a70
// 地址: 0x140a37a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
int32_t* result = arg2
sub_140a378b0(arg3, arg2, arg1, rdi.d)
int64_t rbx = *(arg1 + 0x18)
int64_t* arg_10
sub_140a228d0(&arg_10)
int64_t* rax = arg_10
int64_t* r9_1 = rbx + (rdi << 3)
int64_t* rcx_2 = *r9_1
*r9_1 = rax

if (rax != 0)
    rax[9].d += 1

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

if (*(arg1 + 0x30) s< 0)
    int64_t* rbp_1 = arg_10
    int32_t rbx_1 = *result
    
    if (rbp_1 != 0)
        rbp_1[9].d += 1
    
    void*** rax_3 = sub_140a82f30(0x28, 8)
    rax_3[3].d = arg5
    rax_3[1] = arg1
    rax_3[2].d = rbx_1
    *(rax_3 + 0x14) = rdi.d
    rax_3[4] = rbp_1
    *rax_3 = &data_142e52220
    void*** var_58_1 = rax_3
    int64_t (* var_68)(int64_t* arg1)
    int64_t (* rax_4)(int64_t* arg1) = var_68
    
    if (rax_3 != -8)
        rax_4 = sub_140a37e60
    
    var_68 = rax_4
    int64_t* var_98
    void arg_20
    sub_140a38070(&var_98, &var_68, &arg_20, arg1 + 0x40, 0xff)
    int64_t* rax_5 = var_98
    
    if (rax_5 != 0)
        rax_5[9].d -= 1
        
        if (rax_5[9].d == 1)
            sub_140a2f6e0(var_98)
else
    sub_140a39600(arg1, arg3, *result, rdi.d, arg5, &arg_10)

int64_t* rcx_8 = arg_10

if (rcx_8 != 0)
    rcx_8[9].d -= 1
    
    if (rcx_8[9].d == 1)
        sub_140a2f6e0(rcx_8)

return result
