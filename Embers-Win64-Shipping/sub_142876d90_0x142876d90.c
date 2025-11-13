// 函数: sub_142876d90
// 地址: 0x142876d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdi = *(arg2 + 8)
int64_t r8_1

if (*(arg2 + 0x20) + *(arg2 + 0x18) u<= rdi)
    int64_t rax_2 = *(arg1 + 0x5d8)
    r8_1 = 0x454c
    
    if (rax_2 u> 0x454c)
        r8_1 = rax_2

int32_t var_10
int32_t rdx_1
int32_t r9

if (*(arg2 + 0x20) + *(arg2 + 0x18) u> rdi || rdi u> r8_1)
    var_10 = 0x1ae
    r9 = 0x98
    rdx_1 = 0x2f
else
    void* rax_3 = *(arg1 + 0xb0)
    
    if (*(rax_3 + 0x1a8) != 0)
        if (rdi == *(rax_3 + 0x198))
            return 1
        
        var_10 = 0x1c8
        r9 = 0x98
        rdx_1 = 0x2f
    else
        int64_t rax_4 = sub_1428a73a0(*(arg1 + 0x88), rdi + 0xc)
        
        if (rax_4 != 0)
            *(*(arg1 + 0xa8) + 0x228) = rdi
            *(*(arg1 + 0xb0) + 0x198) = rdi
            *(*(arg1 + 0xa8) + 0x230) = zx.d(*arg2)
            *(*(arg1 + 0xb0) + 0x190) = *arg2
            *(*(arg1 + 0xb0) + 0x1a0) = *(arg2 + 0x10)
            return 1
        
        var_10 = 0x1b9
        rdx_1 = (rax_4 + 0x50).d
        r9 = (rax_4 + 7).d

sub_142856580(arg1, rdx_1, 0x120, r9, "ssl\statem\statem_dtls.c", var_10)
return 0
