// 函数: sub_142861220
// 地址: 0x142861220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
*(arg1 + 0x480) += 1
int32_t var_10
int32_t rdx
int32_t r9

if (*(arg1 + 0x480) u<= 0x20)
    if (sub_14285b7b0(arg1 + 0x800) == 0)
        int64_t rdx_1 = arg2[1]
        char rcx_1
        
        if (rdx_1 != 0)
            char* rax_2 = *arg2
            rcx_1 = *rax_2
            *arg2 = &rax_2[1]
            arg2[1] = rdx_1 - 1
        
        if (rdx_1 == 0 || rdx_1 != 1)
            var_10 = 0x26f
            rdx = 0x32
        else
            int32_t rdi_1
            
            if (rcx_1 == 0)
                rdi_1.b = sub_142862cb0(arg1, 0) != 0
                return zx.q(rdi_1)
            
            if (rcx_1 == 1)
                if ((*(arg1 + 0x44) & 1) == 0)
                    *(arg1 + 0x754) = 0
                
                rdi_1.b = sub_142862cb0(arg1, 0) != 0
                return zx.q(rdi_1)
            
            var_10 = 0x27a
            rdx = (rdx_1 + 0x2e).d
        
        r9 = 0x7a
    else
        var_10 = 0x268
        rdx = 0xa
        r9 = 0xb6
else
    var_10 = 0x25e
    rdx = 0x2f
    r9 = 0x84

sub_142856580(arg1, rdx, 0x206, r9, "ssl\statem\statem_lib.c", var_10)
return 0
