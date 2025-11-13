// 函数: sub_14173e730
// 地址: 0x14173e730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa8) != 0)
    int64_t r8 = sx.q(*(arg1 + 0xa8))
    int32_t rbx = *(*(arg1 + 0xa0) + (r8 << 2) - 4)
    *(arg1 + 0xa8) = (r8 - 1).d
    sub_1405dac90(arg1 + 0xa0)
    return zx.q(rbx)

int64_t rdi = sx.q(*(arg1 + 0xb8))
int32_t rax_2 = (rdi + 1).d
*(arg1 + 0xb8) = rax_2

if (rax_2 s> *(arg1 + 0xbc))
    sub_140a05e50(arg1 + 0xb0)

int32_t* rcx_3 = rdi * 0xb0 + *(arg1 + 0xb0)
*rcx_3 = 0
__builtin_memcpy(&rcx_3[1], 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
*(rcx_3 + 0x20) = 0
*(rcx_3 + 0x28) = 0
__builtin_memcpy(&rcx_3[0xf], 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff\x"
"ff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\x
        ff", 
    0x30)
__builtin_memcpy(&rcx_3[0x1d], 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff\x"
"ff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\x
        ff", 
    0x30)
return zx.q(rdi.d)
