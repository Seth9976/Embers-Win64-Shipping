// 函数: sub_142855720
// 地址: 0x142855720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t var_10
int32_t rdx_2
int32_t r9

if (sub_1428909a0(*(arg1 + 0x7b0), *(arg1 + 0x7a8)) s>= 0)
label_14285580c:
    var_10 = 0x156
    rdx_2 = 0x2f
    r9 = 0x186
else
    if (sub_1428909a0(*(arg1 + 0x7c0), *(arg1 + 0x7a8)) s>= 0)
        goto label_14285580c
    
    if (sub_142890300(*(arg1 + 0x7c0)) != 0)
        goto label_14285580c
    
    if (sub_142890560(*(arg1 + 0x7a8)) s>= *(arg1 + 0x7f0))
        int64_t rax_4 = *(arg1 + 0x790)
        
        if (rax_4 == 0)
            int64_t rax_6 = sub_1428b9210(*(arg1 + 0x7b0), *(arg1 + 0x7a8))
            
            if (rax_6 != 0)
                return 1
            
            var_10 = 0x169
            rdx_2 = (rax_6 + 0x47).d
            r9 = 0xf1
        else
            if (rax_4(arg1, *(arg1 + 0x780)) s> 0)
                return 1
            
            var_10 = 0x164
            rdx_2 = 0x47
            r9 = 0xea
    else
        var_10 = 0x15c
        rdx_2 = 0x47
        r9 = 0xf1

sub_142856580(arg1, rdx_2, 0x254, r9, "ssl\tls_srp.c", var_10)
return 0
