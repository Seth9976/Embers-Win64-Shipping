// 函数: sub_142070e50
// 地址: 0x142070e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg1
int32_t rdx
int32_t arg_1c = rdx

if (sub_140a80f40() != 0)
    return sub_14204b0f0(&arg_18, &data_143f02b98)

if (data_143f138f4 == 0)
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        int64_t var_28 = arg_18.q
        return sub_14204b0f0(&var_28, &data_143f02b98)

void var_20
int64_t* rax_5 = sub_142054240(&var_20, nullptr, 0xff)
*(*rax_5 + 0x10) = arg_18.q
void* rcx_4 = *rax_5
int32_t r8 = rax_5[2].d
int64_t* rdx_2 = rax_5[1]
int64_t* rbx = *(rcx_4 + 0x20)
int64_t* arg_20 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_20

int32_t result = sub_1405a5630(rcx_4, rdx_2, r8, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_20)

return result
