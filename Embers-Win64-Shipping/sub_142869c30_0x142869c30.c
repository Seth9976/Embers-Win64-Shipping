// 函数: sub_142869c30
// 地址: 0x142869c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rdi = *(*(arg1 + 0xa8) + 0x2e0)

if (rdi == 0)
    sub_142856580(arg1, (&rdi[0xa]).d, 0x1ea, (rdi + 0x44).d, "ssl\statem\statem_srvr.c", 0xeaa)
    return 0

int32_t* rcx = *(arg1 + 8)

if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0)
    int32_t rax_3 = *rcx
    
    if (rax_3 s>= 0x304 && rax_3 != 0x10000 && sub_142873b60(arg2, 0, 1) == 0)
        sub_142856580(arg1, 0x50, 0x1ea, 0x44, "ssl\statem\statem_srvr.c", 0xeb4)
        return 0

int32_t rcx_4
rcx_4.b = sub_14285e6d0(arg1, arg2, rdi) != 0
return zx.q(rcx_4)
