// 函数: sub_1413eee60
// 地址: 0x1413eee60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    sub_142100270(arg3)

int64_t var_48 = arg1
int64_t var_40 = arg2

if (sub_140a80f40() != 0)
    return sub_1413c7e00(&var_48, &data_143f02b98)

if (data_143f138f4 == 0)
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        int128_t var_38 = var_48.o
        return sub_1413c7e00(&var_38, &data_143f02b98)

void var_28
int64_t* rax_4 = sub_1413db330(&var_28, nullptr, 0xff)
*(*rax_4 + 0x10) = var_48.o
void* rcx_5 = *rax_4
int32_t r8 = rax_4[2].d
int64_t* rdx = rax_4[1]
int64_t* rbx_1 = *(rcx_5 + 0x28)
int64_t* arg_8 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_8

int32_t result = sub_1405e48c0(rcx_5, rdx, r8, 1)

if (rbx_1 != 0)
    result = *rdi_1
    *rdi_1 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_8)

return result
