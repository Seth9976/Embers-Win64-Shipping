// 函数: sub_14289aef0
// 地址: 0x14289aef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rsi = *(arg1 + 0x38)
uint32_t rbp = -1

if (arg2 == 0)
    sub_1428a5670(0x20, 0x75, 0x73, "crypto\bio\bss_mem.c", 0xd3)
else if ((*(arg1 + 0x28) & 0x200) == 0)
    sub_142899cc0(arg1, 0xf)
    
    if (arg3 == 0)
        return 0
    
    int64_t r15_1 = sx.q(*rsi[1])
    sub_14289b6b0(arg1)
    
    if (sub_1428a73a0(*rsi, sx.q(r15_1.d + arg3)) != 0)
        memcpy(r15_1 + *(*rsi + 8), arg2, arg3)
        int128_t* rax_6 = *rsi
        rbp = arg3
        int128_t* rcx_4 = rsi[1]
        *rcx_4 = *rax_6
        rcx_4[1] = rax_6[1]
else
    sub_1428a5670(0x20, 0x75, 0x7e, "crypto\bio\bss_mem.c", 0xd7)

return zx.q(rbp)
