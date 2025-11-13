// 函数: sub_1417b44e0
// 地址: 0x1417b44e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t rsi = rbx << 3
j_sub_140a74f90(*(rsi + *(arg1 + 8)))
int32_t rax_1 = *(arg1 + 0x10)
int32_t rcx_3 = rax_1 - rbx.d - 1

if (rcx_3 s>= 1)
    rcx_3 = 1

if (rcx_3 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + rsi, r9_1 + (sx.q(rax_1 - rcx_3) << 3), rcx_3 << 3)
    rax_1 = *(arg1 + 0x10)

*(arg1 + 0x10) = rax_1 - 1
return sub_1405c53d0(arg1 + 8) __tailcall
