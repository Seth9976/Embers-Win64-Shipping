// 函数: sub_1425e2fb0
// 地址: 0x1425e2fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_143449a80
__builtin_memset(&arg1[3], 0, 0x11)
__builtin_memset(&arg1[6], 0, 0x44)
*(arg1 + 0x78) = *arg2
__builtin_memset(&arg1[0x11], 0, 0x20)
__builtin_memset(&arg1[0x16], 0, 0x20)
arg1[0x1a] = *arg3
void* rax_1 = arg3[1]
arg1[0x1b] = rax_1

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x21] = 2
int64_t (* var_78)(void* arg1, int64_t* arg2) = sub_1425e56f0
int32_t var_70 = 0
int64_t arg_8
sub_140b58170(&arg_8, "FSessionInstanceInfo", 1)
int64_t var_68 = *arg4
int64_t* rax_3 = arg4[1]

if (rax_3 != 0)
    *(rax_3 + 0xc) += 1

int64_t var_2c = arg_8
char var_58 = 0
int64_t var_50 = 0
int32_t var_48 = 0
void** var_40 = nullptr
int32_t var_34 = 0
char var_30 = 0
int64_t* rax_5 = sub_140a242a0()
int64_t r8 = *rax_5
int32_t var_24 = (*(r8 + 0x10))(rax_5, 0, r8)
void*** rax_7 = j_sub_140a82f30(0x20)
void*** rbx_1 = rax_7

if (rax_7 == 0)
    rbx_1 = nullptr
else
    rbx_1[1] = arg1
    *rbx_1 = &data_143449b10
    *(rbx_1 + 0x10) = var_78.o

void*** rax_8 = j_sub_140a82f30(0x18)

if (rax_8 == 0)
    rax_8 = nullptr
else
    rax_8[1].d = 1
    *rax_8 = &data_142d42e98
    *(rax_8 + 0xc) = 1
    rax_8[2] = rbx_1

int32_t var_38 = 1
sub_1405a4f90(&var_40)
void** rcx_3 = var_40
*rcx_3 = rbx_1
rcx_3[1] = rax_8
int64_t var_80_1 = 0
int64_t var_88_1 = 0
int64_t var_98
sub_141ffcd60(&var_68, &var_98)
int64_t* var_90

if (&arg1[0x18] != &var_98)
    arg1[0x18] = var_98
    var_98 = 0
    sub_1405aeff0(&arg1[0x19], &var_90)

int64_t* rcx_6 = var_90

if (rcx_6 != 0)
    rcx_6[1].d -= 1
    
    if (rcx_6[1].d == 1)
        int64_t* rbx_2 = var_90
        (**rbx_2)(rbx_2)
        int32_t rax_14 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_14 == 1)
            int64_t* rcx_8 = var_90
            (*(*rcx_8 + 8))(rcx_8, 1)

sub_140596e10(&var_40)
sub_140745b20(&var_50)

if (rax_3 != 0)
    int32_t rsi_1 = *(rax_3 + 0xc)
    *(rax_3 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rax_3 + 8))(rax_3, zx.q(rsi_1))

return arg1
