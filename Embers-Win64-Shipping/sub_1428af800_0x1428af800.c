// 函数: sub_1428af800
// 地址: 0x1428af800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    sub_1428a5670(0x26, 0x77, 0x43, "crypto\engine\eng_init.c", 0x51)
    return 0

int32_t rcx = 0

if (sub_1428a5c60(&data_143feccc8, sub_1428e3240) != 0)
    rcx = data_143fecccc

if (rcx == 0)
    sub_1428a5670(rcx + 0x26, rcx + 0x77, rcx + 0x41, "crypto\engine\eng_init.c", 0x55)
    return 0

sub_1428a5c40(data_144020538)
int32_t rdi = 1

if (*(arg1 + 0xa0) != 0)
label_1428af8be:
    int32_t rcx_5 = *(arg1 + 0x9c) + 1
    *(arg1 + 0xa0) += 1
    *(arg1 + 0x9c) = rcx_5
else
    int64_t rax_3 = *(arg1 + 0x60)
    
    if (rax_3 == 0)
        goto label_1428af8be
    
    int32_t rax_4 = rax_3(arg1)
    rdi = rax_4
    
    if (rax_4 != 0)
        goto label_1428af8be

sub_1428a5d00(data_144020538)
return zx.q(rdi)
