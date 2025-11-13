// 函数: sub_1428bfb90
// 地址: 0x1428bfb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax = *arg1
int64_t r11 = *(rax + 0x78)
int32_t var_18
int32_t r8

if (r11 != 0)
    if (rax == *arg2)
        int32_t rax_1 = arg1[4].d
        int32_t rcx
        
        if (rax_1 != 0)
            rcx = arg2[1].d
        
        if (rax_1 == 0 || rcx == 0 || rax_1 == rcx)
            jump(r11)
    
    var_18 = 0x2a8
    r8 = 0x65
else
    var_18 = 0x2a3
    r8 = (r11 + 0x42).d

sub_1428a5670(0x10, 0x7e, r8, "crypto\ec\ec_lib.c", var_18)
return 0
