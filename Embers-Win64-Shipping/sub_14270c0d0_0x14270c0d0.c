// 函数: sub_14270c0d0
// 地址: 0x14270c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
sub_1426a6430(&var_58)

if (arg5 == 0)
    void* rcx_2 = *arg3
    int64_t* rdx_3
    
    if (rcx_2 == 0 || *(rcx_2 + 0x30) == 0)
        rdx_3 = &data_143b580a8
    else
        rdx_3 = (sx.q(*(rcx_2 + 0x30) - 1) << 5) + *(rcx_2 + 0x28)
    
    sub_1426bf140(&var_58, rdx_3)
else
    sub_1426bf120(&var_58, arg5)

int32_t var_34 = arg6
int32_t var_38
int32_t var_38_1 = zx.d(arg7) << 5 | (var_38 & 0xffffffdf)
sub_1427145a0(&var_58, arg8)
int64_t var_68 = *arg3
void* rax_6 = arg3[1]
void* var_60 = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

(*(*arg1 + 0x408))(arg1, arg2, &var_58, &var_68)
int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t rax_10 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*var_28 + 8))(var_28, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_14 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int32_t rax_16 = arg4[1].d
int64_t* rcx_13

if (rax_16 == 0)
    rcx_13 = nullptr
else
    rcx_13 = *arg4

if (rcx_13 != 0)
label_14270c250:
    (*(*rcx_13 + 0x38))(rcx_13, 0)
    int64_t rcx_14 = *arg4
    
    if (rcx_14 != 0)
        *arg4 = sub_140a84c80(rcx_14, 0, 0)
    
    arg4[1].d = 0
else if (rax_16 != 0)
    rcx_13 = *arg4
    
    if (rcx_13 != 0)
        goto label_14270c250

int64_t rcx_15 = *arg4

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t* rbx_3 = arg8[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_1))

return arg2
