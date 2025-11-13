// 函数: sub_1413d0b20
// 地址: 0x1413d0b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
uint64_t var_50 = *arg2

if (sub_140a80f40() != 0)
    int64_t r9 = *arg1
    (*(r9 + 0x18))(arg1, &data_143f02b98, 0, r9, arg1)
    return sub_1413d0c70(arg1, &var_50)

if (data_143f138f4 == 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        uint128_t var_40 = arg1.o
        int64_t var_30 = rax.q
        int64_t* rcx_2 = var_40.q
        int64_t r9_1 = *rcx_2
        (*(r9_1 + 0x18))(rcx_2, &data_143f02b98, 0, r9_1, arg1)
        return sub_1413d0c70(var_40.q, &var_40:8)

void var_28
int64_t* rax_5 = sub_1413dadf0(&var_28, nullptr, 0xff)
void* rcx_5 = *rax_5
*(rcx_5 + 0x10) = arg1.o
*(rcx_5 + 0x20) = rax.q
void* rcx_6 = *rax_5
int32_t r8 = rax_5[2].d
int64_t* rdx_2 = rax_5[1]
int64_t* rbx = *(rcx_6 + 0x30)
int64_t* arg_10 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_10

int32_t result = sub_140778000(rcx_6, rdx_2, r8, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
