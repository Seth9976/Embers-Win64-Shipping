// 函数: sub_142208350
// 地址: 0x142208350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = arg1
int64_t rdx
int64_t var_40 = rdx

if (sub_140a80f40() != 0)
    return sub_1421d9490(&var_48)

if (data_143f138f4 == 0)
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        int128_t var_38 = var_48.o
        return sub_1421d9490(&var_38)

void var_28
int64_t* rax_4 = sub_1421e1390(&var_28, nullptr, 0xff)
*(*rax_4 + 0x10) = var_48.o
void* rcx_4 = *rax_4
int32_t r8 = rax_4[2].d
int64_t* rdx_3 = rax_4[1]
int64_t* rbx = *(rcx_4 + 0x28)
int64_t* arg_10 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_10

int32_t result = sub_1405e48c0(rcx_4, rdx_3, r8, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
