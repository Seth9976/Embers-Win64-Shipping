// 函数: sub_14283f890
// 地址: 0x14283f890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
int32_t rbx = arg1
*arg4 = zx.o(0)
*arg5 = zx.o(0)
int32_t result

if (not(test_bit(arg1, 0x1c)) && sub_14284b870(arg2, arg4, 0).b != 0
        && sub_14284b870(rsi.d, arg5, 0).b != 0)
    if (test_bit(rbx, 0x1d))
        result.b = 1
        return result
    
    if (not(test_bit(rbx, 8)) && not(test_bit(rbx, 9)))
        if ((arg2 u> 0x10 || not(test_bit(0x10044, arg2))) && arg2 - 0x28 u> 1)
            if (arg2 == 0xa)
            label_14283f95b:
                result = (rsi - 0x28).d
                
                if (result u> 0x19 || not(test_bit(0x2004003, result)))
                label_14283f96f:
                    
                    if (sub_14283f810(arg2) != 0)
                        rbx |= 0x1000000
                    
                    if (sub_14283f810(rsi.d) != 0)
                        rbx |= 0x2000000
                    
                    if ((rbx & 0x3000000) == 0x3000000)
                        rbx = -0x3000001
                    
                    if (sub_14284b630(arg4, arg5) == (rbx & 0x3000000))
                        result.b = 1
                        return result
            else
            label_14283f935:
                
                if (arg2 == 0x36)
                    if ((rsi - 0x28).d u> 1)
                    label_14283f93f:
                        
                        if (rsi.d != 0x41)
                            goto label_14283f96f
                else if (arg2 != 0x41)
                    goto label_14283f93f
        else if (rsi.d u> 0x36 || not(test_bit(0x40000400000400, rsi)))
            if (((arg2 - 2) & 0xfffffffb) == 0 || arg2 == 0xa)
                goto label_14283f95b
            
            goto label_14283f935

result.b = 0
return result
