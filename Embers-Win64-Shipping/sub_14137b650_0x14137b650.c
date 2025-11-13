// 函数: sub_14137b650
// 地址: 0x14137b650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = data_143ec4e39
int64_t var_20 = 0
int64_t rdi = *(data_1439b70c8 + 0x10)
int64_t rsi = *(data_1439b7130 + 0x10)
void* rbx = *(data_1439b7138 + 0x10)
int64_t rdx = *sub_14139d700(&data_143ec4c60)
int64_t var_70 = data_14395fa10
int64_t var_78 = rdx
void* rcx = *sub_1410f83c0(&data_143ec4c60)

if (rcx != 0 && (*(rcx + 0x40) & 0x800) == 0)
    rbx = rcx

void* rcx_1 = data_143ec4cc0
int64_t rax_6 = data_14395fa10
void* var_68 = rbx
int64_t var_60 = rax_6
int64_t rcx_2

if (rcx_1 == 0)
    rcx_2 = rdi
else
    rcx_2 = *(rcx_1 + 0x10)

int64_t var_58 = rcx_2
int64_t var_50 = rax_6

if (rbp != 0)
    void* rcx_3 = data_143ec4d48
    
    if (rcx_3 != 0)
        rsi = *(rcx_3 + 0x10)

int64_t var_48 = rsi
int64_t var_40 = rax_6

if (rbp != 0)
    void* rcx_4 = data_143ec4d50
    
    if (rcx_4 != 0)
        rdi = *(rcx_4 + 0x10)

int64_t rcx_5 = data_1439b72e0
int64_t var_30 = rax_6
int64_t rax_7 = data_143ec4e48
int64_t var_38 = rdi

if (rax_7 != 0)
    rcx_5 = rax_7

int64_t var_28 = rcx_5
int64_t var_20_1 = *(data_143f11108 + 0x18)
int64_t* rcx_7 = data_143f0f180
void* arg_8
(*(*rcx_7 + 0xf8))(rcx_7, &arg_8, &var_78, &data_143ec5180, 0, 1)
void* rax_10 = arg_8
*arg1 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

sub_1405d1550(&arg_8)
return arg1
