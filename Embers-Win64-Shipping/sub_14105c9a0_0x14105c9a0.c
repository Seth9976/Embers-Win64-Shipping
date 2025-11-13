// 函数: sub_14105c9a0
// 地址: 0x14105c9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
void* rdi = *(arg1 + 0x58)
int32_t r14 = *(arg2 + 0x10)
int32_t rsi = -1
void* rbp = **(*(arg1 + 8) + 0x6d8)

if (*(rdi + 0xfc) != 0)
    sub_141037220(rbp + 0x1c0, rdi, 0x400, r14)
else
    rsi = *(rdi + 0xf0)
    
    if (rsi != 0x400)
        r15.b = 1
        sub_1410129f0(rbp + 0x1c0, rdi, rsi, 0x400, r14)

*(rbp + 0x3b90) += 1
void* rbp_1 = *(rbp + 0x1c8)
int32_t rdx_2 = *(rbp_1 + 0x128)
int64_t* rcx_2 = *(rbp_1 + 0x30)

if (rdx_2 != 0)
    (*(*rcx_2 + 0xd0))(rcx_2, rdx_2, *(rbp_1 + 0x120))
    *(rbp_1 + 0x128) = 0
    rbp_1 = *(rbp + 0x1c8)

int64_t* rcx_3 = *(rbp_1 + 0x30)
(*(*rcx_3 + 0x80))(rcx_3, arg2, zx.q(arg3), zx.q(arg4), arg5, arg6, 0)
void* rdx_4 = *(arg1 + 0x58)
uint64_t result = *(rdx_4 + 0x28)

if (result == 0)
    if (data_1439b4ad4 != 0 && *(rdx_4 + 0x38) != 0)
        result = sub_141026da0(*(*(rbp + 0x1c8) + 0x118), rdx_4 + 0x30)
else if (data_1439b4ad4 != 0 && *(result + 0x30) != 0)
    result = sub_141026da0(*(*(rbp + 0x1c8) + 0x118), result + 0x28)

if (r15.b == 0)
    return result

return sub_1410129f0(rbp + 0x1c0, rdi, 0x400, rsi, r14)
