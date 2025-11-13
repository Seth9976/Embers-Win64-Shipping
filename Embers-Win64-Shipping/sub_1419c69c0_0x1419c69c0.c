// 函数: sub_1419c69c0
// 地址: 0x1419c69c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1

if (sub_140a80f40() != 0)
    return sub_1419c49c0(&arg_8)

if (data_143f138f4 == 0)
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        int64_t arg_18 = arg1
        return sub_1419c49c0(&arg_18)

void var_28
int64_t* rax_4 = sub_1419cd070(&var_28, nullptr, 0xff)
*(*rax_4 + 0x10) = arg1
void* rcx_4 = *rax_4
int32_t r8 = rax_4[2].d
int64_t* rdx_2 = rax_4[1]
int64_t* rbx_1 = *(rcx_4 + 0x20)
int64_t* arg_10 = rbx_1
int32_t* rdi = &rbx_1[9]

if (rbx_1 != 0)
    *rdi += 1
    rbx_1 = arg_10

int32_t result = sub_1405a5630(rcx_4, rdx_2, r8, 1)

if (rbx_1 != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
