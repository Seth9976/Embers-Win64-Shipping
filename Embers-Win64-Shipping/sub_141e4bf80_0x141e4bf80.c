// 函数: sub_141e4bf80
// 地址: 0x141e4bf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_78 = nullptr
int32_t var_70 = 0
*arg1 = 0
arg1[1].d = 0

if (arg6 != &var_78 && arg6[1].d != 0)
    int64_t* rcx = *arg6
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_78)

int64_t* rbx = arg5[1]
int64_t* rax_2 = *arg5

if (rbx != 0)
    rbx[1].d += 1

int64_t rdi = sx.q(arg4[1].d)
int64_t rsi = 0
int64_t* rax_3 = *arg4
int64_t var_68 = 0
int32_t var_60 = rdi.d

if (rdi.d != 0)
    sub_1405a4be0(&var_68, rdi.d, 0)
    rsi = var_68
    memcpy(rsi, rax_3, (rdi << 4).d)
    rdi = zx.q(var_60)

int64_t* rax_4 = sub_1405978f0(0x50, arg1)

if (rax_4 != 0)
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    
    if (var_70 != 0)
        int64_t* rcx_3 = var_78
        
        if (rcx_3 != 0)
            int64_t r8_2 = *rcx_3
            (*(r8_2 + 0x40))(rcx_3, &var_58, r8_2)
    
    int64_t* var_48 = rax_2
    int64_t* var_40_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    var_68 = 0
    int32_t var_60_1 = rdi.d
    
    if (rdi.d != 0)
        sub_1405a4be0(&var_68, rdi.d, 0)
        memcpy(var_68, rsi, rdi.d << 4)
    else
        int32_t var_5c_1 = 0
    
    sub_141e4ee70(rax_4, arg2, arg3, &var_68, &var_48, &var_58)

if (rsi != 0)
    sub_140a74f90(rsi)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(&var_78)
int64_t rcx_11 = *arg4

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* rbx_1 = arg5[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140745b20(arg6)
return arg1
