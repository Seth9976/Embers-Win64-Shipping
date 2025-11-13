// 函数: sub_142403540
// 地址: 0x142403540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x58)
int128_t var_58 = *arg2

if (sub_140a80f40() != 0)
    return sub_142400010(&var_58, &data_143f02b98)

if (data_143f138f4 == 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        int128_t var_40 = var_58
        int64_t var_30 = rax
        return sub_142400010(&var_40, &data_143f02b98)

void var_28
int64_t* rax_5 = sub_142404c40(&var_28, nullptr, 0xff)
void* rcx_3 = *rax_5
*(rcx_3 + 0x10) = var_58
*(rcx_3 + 0x20) = rax
void* rcx_4 = *rax_5
int32_t r8 = rax_5[2].d
int64_t* rdx = rax_5[1]
int64_t* rbx = *(rcx_4 + 0x30)
int64_t* arg_10 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_10

int32_t result = sub_140778000(rcx_4, rdx, r8, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
