// 函数: sub_140e51040
// 地址: 0x140e51040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142ed7fa0
arg1[3].w = 0x101
*(arg1 + 0x1a) = 1
*(arg1 + 0x1c) = 0x3f000000
arg1[4].d = 0x3f000000
__builtin_memset(&arg1[5], 0, 0x40)
void* rcx = &arg1[0xd]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x17]
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
arg1[0x15] = 0
arg1[0x16] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
arg1[0x1d] = 0
arg1[0x1e].d = 0
arg1[5] = data_143e1eb78
int64_t* rbx = data_143e1eb88
int64_t* var_30 = data_143e1eb80

if (rbx != 0)
    rbx[1].d += 1

if (&var_30 != &arg1[6])
    var_30.o = *(arg1 + 0x30)
    *(arg1 + 0x30) = var_30.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

arg1[8] = data_143e1eb90
int64_t* rbx_1 = data_143e1eba0
var_30 = data_143e1eb98

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_30 != &arg1[9])
    var_30.o = *(arg1 + 0x48)
    *(arg1 + 0x48) = var_30.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

char var_38 = 0
var_30 = &data_143e1e188
char* var_28_2 = &var_38
void var_20
sub_140e47ad0(&arg1[0xb], &var_20, &var_30, nullptr)
var_38 = 0
var_30 = &data_143e1eda0
char* var_28_3 = &var_38
sub_140e47ad0(&arg1[0xb], &var_20, &var_30, nullptr)
var_38 = 1
var_30 = &data_143e1e1b8
char* var_28_4 = &var_38
sub_140e47ad0(&arg1[0xb], &var_20, &var_30, nullptr)
var_38 = 1
var_30 = &data_143e1ed88
char* var_28_5 = &var_38
sub_140e47ad0(&arg1[0xb], &var_20, &var_30, nullptr)
var_38 = 2
var_30 = &data_143e1e1a0
char* var_28_6 = &var_38
sub_140e47ad0(&arg1[0xb], &var_20, &var_30, nullptr)
var_38 = 2
var_30 = &data_143e1ed58
char* var_28_7 = &var_38
sub_140e47ad0(&arg1[0xb], &var_20, &var_30, nullptr)
var_38 = 3
var_30 = &data_143e1e1d0
char* var_28_8 = &var_38
sub_140e47ad0(&arg1[0xb], &var_20, &var_30, nullptr)
var_38 = 3
var_30 = &data_143e1ed70
char* var_28_9 = &var_38
sub_140e47ad0(&arg1[0xb], &var_20, &var_30, nullptr)
return arg1
