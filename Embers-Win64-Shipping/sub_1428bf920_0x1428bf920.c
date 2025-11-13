// 函数: sub_1428bf920
// 地址: 0x1428bf920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax = *arg1
int64_t r10 = *(rax + 0xd0)
int32_t var_18
int32_t r8

if (r10 != 0)
    if (rax == *arg2)
        int32_t rax_1 = arg1[4].d
        int32_t rcx
        
        if (rax_1 != 0)
            rcx = arg2[1].d
        
        if (rax_1 == 0 || rcx == 0 || rax_1 == rcx)
            jump(r10)
    
    var_18 = 0x358
    r8 = 0x65
else
    var_18 = 0x354
    r8 = (r10 + 0x42).d

sub_1428a5670(0x10, 0x77, r8, "crypto\ec\ec_lib.c", var_18)
return 0
