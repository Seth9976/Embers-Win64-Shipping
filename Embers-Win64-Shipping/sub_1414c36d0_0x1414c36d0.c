// 函数: sub_1414c36d0
// 地址: 0x1414c36d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = arg1
int64_t var_50 = arg2

if (sub_140a80f40() != 0)
    return sub_1414c29e0(&var_58)

if (data_143f138f4 == 0)
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        int128_t var_40 = var_58.o
        int64_t var_30 = arg3.q
        return sub_1414c29e0(&var_40)

void var_28
int64_t* rax_4 = sub_1414c93b0(&var_28, nullptr, 0xff)
void* rcx_3 = *rax_4
*(rcx_3 + 0x10) = var_58.o
*(rcx_3 + 0x20) = arg3.q
void* rcx_4 = *rax_4
int32_t r8 = rax_4[2].d
int64_t* rdx_2 = rax_4[1]
int64_t* rbx = *(rcx_4 + 0x30)
int64_t* arg_8 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_8

int32_t result = sub_140778000(rcx_4, rdx_2, r8, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_8)

return result
