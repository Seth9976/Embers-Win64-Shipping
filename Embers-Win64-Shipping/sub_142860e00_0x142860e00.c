// 函数: sub_142860e00
// 地址: 0x142860e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rcx = *(arg2 + 8)
int32_t var_10

if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
    if (*arg1 != 0x100)
        if (rcx == 0)
            goto label_142860e35
    else if (rcx == 2)
        goto label_142860e35
    
    var_10 = 0x2bf
    goto label_142860e69

int32_t* rcx_1
int32_t rdx_1
int32_t r9

if (rcx == 0)
label_142860e35:
    void* rax_1 = *(arg1 + 0xa8)
    rcx_1 = arg1
    
    if (*(rax_1 + 0x238) != 0)
        *(rax_1 + 0xf0) = 1
        int32_t rax_3 = sub_142873200(rcx_1)
        
        if (rax_3 != 0)
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                sub_14286f430(arg1, 1)
                
                if (*arg1 == 0x100)
                    void* rax_5 = *(arg1 + 0xb0)
                    *(rax_5 + 0x110) += 1
            
            return 3
        
        var_10 = 0x2d5
        rdx_1 = rax_3 + 0x50
        r9 = rax_3 + 0x44
        rcx_1 = arg1
    else
        rdx_1 = 0xa
        var_10 = 0x2ce
        r9 = 0x85
else
    var_10 = 0x2c6
label_142860e69:
    rdx_1 = 0x32
    r9 = 0x67
    rcx_1 = arg1

sub_142856580(rcx_1, rdx_1, 0x16b, r9, "ssl\statem\statem_lib.c", var_10)
return 0
