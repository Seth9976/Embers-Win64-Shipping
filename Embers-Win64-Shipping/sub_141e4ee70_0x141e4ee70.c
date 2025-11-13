// 函数: sub_141e4ee70
// 地址: 0x141e4ee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_58 = nullptr
int32_t var_50 = 0

if (arg6 != &var_58 && arg6[1].d != 0)
    int64_t* rcx = *arg6
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_58)

int64_t* rbx = arg5[1]
int64_t* rax_2 = *arg5

if (rbx != 0)
    rbx[1].d += 1

int64_t rbp = sx.q(arg4[1].d)
uint64_t r15 = 0
int64_t rdi = *arg4
uint64_t var_48 = 0
int32_t var_40 = rbp.d

if (rbp.d != 0)
    sub_1405a4be0(&var_48, rbp.d, 0)
    r15 = var_48
    memcpy(r15, rdi, (rbp << 4).d)
    rbp = zx.q(var_40)

*arg1 = &data_14324cc80
sub_140d3a3a0(&arg1[1], arg2)
arg1[2] = arg3
arg1[3] = 0
arg1[4].d = rbp.d

if (rbp.d != 0)
    sub_1405a4be0(&arg1[3], rbp.d, 0)
    memcpy(arg1[3], r15, rbp.d << 4)
else
    *(arg1 + 0x24) = 0

arg1[5] = rax_2
arg1[6] = rbx

if (rbx != 0)
    rbx[1].d += 1

arg1[7] = 0
arg1[8].d = 0

if (&var_58 != &arg1[7] && var_50 != 0)
    int64_t* rcx_6 = var_58
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x40))(rcx_6)

arg1[9] = sub_140a387b0()

if (r15 != 0)
    sub_140a74f90(r15)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(&var_58)
*arg1 = &data_14324ccd8
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
