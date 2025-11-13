// 函数: sub_14266b190
// 地址: 0x14266b190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143f71550.d
int32_t rbx

if (rax != 0x400)
    if (rax != 0x800 || data_14399e5c8 != 0)
        rbx = data_143f71550:4.d | rax
    else
        rbx = data_143f71558
else if (data_143cf0848 == 0)
    if (data_14399e5cc != 0)
        rbx = data_143f71550:4.d | rax
    else
        rbx = data_143f71558
else if (data_143f7155c == 1 || data_14399e5cc == 0)
    rbx = data_143f71558
else
    rbx = data_143f71550:4.d | rax

int32_t r8 = arg2[1].d
void* rdx = *arg2
void* var_68 = nullptr
sub_14263ebe0(&var_68, rdx, r8, 0, 0)
void* rdx_1 = var_68
void* var_78 = nullptr
int32_t var_60
sub_14263ebe0(&var_78, rdx_1, var_60, 0, 0)
void*** rax_1 = sub_140a84c80(0, 0x30, 0)
void*** var_58 = rax_1
void*** rdi = rax_1

if (rax_1 != 0)
    void* rdx_2 = var_78
    int64_t var_48 = 0
    int32_t var_70
    sub_14263ebe0(&var_48, rdx_2, var_70, 0, 0)
    sub_142640660(rdi, arg1, sub_142660e50, &var_48)

sub_142644c90(&var_78)
sub_142644c90(&var_68)
void var_38
int64_t* rax_2 = sub_140958da0(&var_38, nullptr, 0xff)
int64_t* rsi_2 = *rax_2 + 0x10
*rsi_2 = 0
rsi_2[1].d = 0

if (&var_58 != rsi_2 && rdi != 0)
    void** r8_3 = *rdi
    r8_3[8](rdi, rsi_2, r8_3)

rsi_2[2].d = rbx | 0xff
void* rcx_8 = *rax_2
int32_t r8_4 = rax_2[2].d
int64_t* rdx_5 = rax_2[1]
int64_t* rbx_3 = *(rcx_8 + 0x30)
int64_t* arg_18 = rbx_3
int32_t* rsi_3 = &rbx_3[9]

if (rbx_3 != 0)
    *rsi_3 += 1
    rdi = var_58
    rbx_3 = arg_18

uint64_t result = sub_140978a40(rcx_8, rdx_5, r8_4, 1)

if (rbx_3 != 0)
    result = zx.q(*rsi_3)
    *rsi_3 -= 1
    
    if (result.d == 1)
        result = sub_140a2f6e0(arg_18)
    
    rdi = var_58

if (rdi != 0)
    (*rdi)[7](rdi, 0)
    result = sub_140a84c80(rdi, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
