// 函数: sub_142830f18
// 地址: 0x142830f18
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = 0
int32_t* rsi = arg1

if (sx.q(arg3) - 1 s> 0)
    int64_t i = 0
    
    do
        int32_t* arg_8
        int32_t arg_18
        
        if (sub_142833d48(rsi, *(arg2 + (i << 3)), &arg_8, &arg_18) == 0)
            int32_t* rax_2 = sub_142833fc8(sub_142830b34)
            sub_142833cbc(rsi, *(arg2 + (i << 3)), rax_2, 3)
            rsi = rax_2
        else
            if (arg_18 != 3)
                sub_142833a04(2, "'%s' is not a node", *(arg2 + (rbp << 3)))
                return 0
            
            rsi = arg_8
        
        rbp = zx.q(rbp.d + 1)
        i += 1
    while (i s< sx.q(arg3) - 1)

sub_142833de4(rsi, *(arg2 + ((sx.q(arg3) - 1) << 3)), arg4, arg5)
return 1
