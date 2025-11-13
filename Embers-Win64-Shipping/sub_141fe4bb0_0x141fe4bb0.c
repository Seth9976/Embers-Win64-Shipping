// 函数: sub_141fe4bb0
// 地址: 0x141fe4bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
bool rdx = (((*(*arg1 + 8))() - 4) & 0xfffffffd) == 0

if (rsi.d u<= 5)
    int32_t arg_18
    int32_t rax_3
    
    switch (rsi)
        case 0
            if (arg4 == 0)
                rax_3 = data_14399f638
            else
                rax_3 = 0xff200000
        case 1
            if (rdx == 0)
            label_141fe4c2e:
                
                if (arg4 == 0)
                    rax_3 = data_14399f63c
                else
                    rax_3 = 0xff002000
            else
                arg_18 = arg4 == 0 ? 0xffc40000 : 0xff1c0000
                
                rax_3 = arg_18
        case 2
            if (rdx != 0)
                goto label_141fe4c2e
            
            goto label_141fe4c47
        case 3
            arg_18 = 0xff001c00
            
            if (arg4 == 0)
                arg_18 = 0xff00c400
            
            rax_3 = arg_18
        case 4
        label_141fe4c47:
            
            if (arg4 == 0)
                rax_3 = data_14399f640
            else
                rax_3 = 0xff000020
        case 5
            arg_18 = 0xff00001c
            
            if (arg4 == 0)
                arg_18 = 0xff0000c4
            
            rax_3 = arg_18
    
    *arg2 = rax_3

return arg2
