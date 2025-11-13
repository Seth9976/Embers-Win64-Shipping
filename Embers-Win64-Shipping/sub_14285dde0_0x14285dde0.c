// 函数: sub_14285dde0
// 地址: 0x14285dde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_142853560(arg1)

if (sub_142873e80(arg2, 2) == 0)
    sub_142856580(arg1, 0x50, 0x228, 0x44, "ssl\statem\statem_lib.c", 0x8df)
    return 0

int32_t rax_3
int32_t rbx_1

if (rax != 0)
    rbx_1 = 0
    rax_3 = sub_142898c70(rax)

int32_t var_20_1

if (rax == 0 || rax_3 s<= 0)
label_14285ded3:
    
    if (sub_1428736e0(arg2) != 0)
        return 1
    
    var_20_1 = 0x8f9
else
    while (true)
        int64_t rax_4 = sub_142898ea0(rax, rbx_1)
        
        if (rax_4 != 0)
            int32_t rax_5 = sub_1428ac180(rax_4, nullptr)
            int64_t rsi_1 = sx.q(rax_5)
            int64_t arg_18
            
            if (rax_5 s>= 0 && sub_142873ff0(arg2, rsi_1, &arg_18, 2) != 0
                    && sub_1428ac180(rax_4, &arg_18) == rsi_1.d)
                rbx_1 += 1
                
                if (rbx_1 s>= sub_142898c70(rax))
                    goto label_14285ded3
                
                continue
        
        var_20_1 = 0x8f1
        break

sub_142856580(arg1, 0x50, 0x228, 0x44, "ssl\statem\statem_lib.c", var_20_1)
return 0
