// 函数: sub_1423e9860
// 地址: 0x1423e9860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*(arg2 + 0x278) + 0x38) = *(*(arg2 + 0x1a0) + 0x30)
void* rax_2 = *(arg2 + 0x1a0)
int64_t* rdi = *(rax_2 + 0x30)

if (rdi != 0)
    int32_t arg_1c = 0
    void arg_10
    sub_14217b820(rdi, (*sub_140b5e500(&arg_10, 0x11a)).q)
    sub_14217ba70(rdi, *(arg2 + 0x278))
    *(sub_1424350b0(*(arg2 + 0x278), 0) + 0x10) = rdi
    *(sub_1424350b0(*(arg2 + 0x278), 2) + 0x10) = rdi
    rax_2 = *(arg2 + 0x1a0)

int64_t* rcx_7 = *(rax_2 + 0x38)

if (rcx_7 != 0)
    sub_14217ba70(rcx_7, *(arg2 + 0x278))
    *(*(arg2 + 0x278) + 0xf0) = *(*(arg2 + 0x1a0) + 0x38)
    char* rax_8 = sub_1424350b0(*(arg2 + 0x278), 0)
    *(rax_8 + 0x18) = *(*(arg2 + 0x1a0) + 0x38)

return sub_142444e60(*(arg2 + 0x278), 0) __tailcall
