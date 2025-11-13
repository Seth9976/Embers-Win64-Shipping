// 函数: sub_14289b0a0
// 地址: 0x14289b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t i = 0
char* rax = arg2

if (*arg2 != 0)
    while (i u< 0x80000000)
        rax = &rax[1]
        i += 1
        
        if (*rax == 0)
            break

int64_t* rsi = *(arg1 + 0x38)
uint32_t count = i & 0x7fffffff
uint32_t count_1 = -1

if ((*(arg1 + 0x28) & 0x200) == 0)
    sub_142899cc0(arg1, 0xf)
    
    if (count == 0)
        return 0
    
    int64_t r15_1 = sx.q(*rsi[1])
    sub_14289b6b0(arg1)
    
    if (sub_1428a73a0(*rsi, sx.q(r15_1.d + count)) != 0)
        memcpy(r15_1 + *(*rsi + 8), arg2, count)
        int128_t* rax_6 = *rsi
        count_1 = count
        int128_t* rcx_4 = rsi[1]
        *rcx_4 = *rax_6
        rcx_4[1] = rax_6[1]
else
    sub_1428a5670(0x20, 0x75, 0x7e, "crypto\bio\bss_mem.c", 0xd7)

return zx.q(count_1)
