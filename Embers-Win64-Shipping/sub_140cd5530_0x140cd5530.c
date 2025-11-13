// 函数: sub_140cd5530
// 地址: 0x140cd5530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(*arg1 + 8)
(*(*rcx + 0x140))(rcx, arg2 + 0xc)
int64_t* rcx_1 = *(*arg1 + 8)
(*(*rcx_1 + 0x140))(rcx_1, arg2 + 0x14)
int64_t* r9 = *(*arg1 + 8)
int64_t* rcx_2 = r9[1]
int32_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    *(arg2 + 8) = *r8
    int64_t* rax_7 = r9[1]
    *rax_7 += 4
else if ((*(r9 + 0x29) & 0x20) != 0)
    sub_140b54070(r9, arg2 + 8, arg3)
else
    (*(*r9 + 0x150))(r9, arg2 + 8, 4)

int64_t* rcx_4 = *(*arg1 + 8)
(*(*rcx_4 + 0x140))(rcx_4, arg2)
void* const result = *arg1

if ((*(*(result + 8) + 0x28) & 1) != 0)
    result = nullptr
    *(arg2 + 0x30) = 0xffffffff
    *(arg2 + 0x28) = 0
    *(arg2 + 0x20) = 0

return result
