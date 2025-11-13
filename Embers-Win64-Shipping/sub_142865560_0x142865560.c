// 函数: sub_142865560
// 地址: 0x142865560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rbp = *(arg1 + 0x488)
int64_t rdi_1 = *(arg1 + 0xa8) + 0x310
int32_t result = sub_142865ee0(arg1)

if (result == 0)
    return result

int64_t i = 0
__builtin_memset(rdi_1, 0, 0x24)

if (*(rbp + 0x1c0) u> 0)
    do
        int32_t* rdx_1 = *(arg1 + 8)
        void* rcx = *(*(rbp + 0x1b8) + (i << 3))
        int32_t rax_2
        
        if ((*(*(rdx_1 + 0xc0) + 0x60) & 8) == 0)
            rax_2 = *rdx_1
        
        if ((*(*(rdx_1 + 0xc0) + 0x60) & 8) != 0 || rax_2 s< 0x304 || rax_2 == 0x10000
                || *(rcx + 0x14) != 6)
            int64_t rsi_1 = sx.q(*(rcx + 0x18))
            
            if (*(rdi_1 + (rsi_1 << 2)) == 0 && sub_1428590d0(rsi_1) == 0)
                *(rdi_1 + (rsi_1 << 2)) = 0x102
        
        i += 1
    while (i u< *(rbp + 0x1c0))

return 1
