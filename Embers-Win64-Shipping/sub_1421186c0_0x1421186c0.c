// 函数: sub_1421186c0
// 地址: 0x1421186c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg2
uint128_t zmm1 = arg2[1]
int64_t var_60 = *(arg1 + 0x140)

if (sub_140a80f40() != 0)
    return sub_14211d0d0(&var_60)

if (data_143f138f4 == 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        uint128_t var_38 = var_60.o
        uint64_t var_18 = zmm1:8.q
        uint128_t var_28 = zmm0
        return sub_14211d0d0(&var_38)

void var_78
int64_t* rax_5 = sub_142122d50(&var_78, nullptr, 0xff)
void* rcx_3 = *rax_5
*(rcx_3 + 0x10) = var_60.o
*(rcx_3 + 0x20) = zmm0
*(rcx_3 + 0x30) = zmm1:8.q
void* rcx_4 = *rax_5
int32_t r8 = rax_5[2].d
int64_t* rdx_2 = rax_5[1]
int64_t* rbx = *(rcx_4 + 0x40)
int64_t* arg_10 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_10

int32_t result = sub_1405e4b20(rcx_4, rdx_2, r8, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
