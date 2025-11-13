// 函数: sub_1428e78c0
// 地址: 0x1428e78c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)

if (arg2 == 0)
    return sub_1428e7750(0x38e, arg1, arg3.b | 8) __tailcall

int32_t rdx_2 = arg2 - 1

if (rdx_2 u<= 7)
    goto label_1428e7936

int32_t* rcx_1 = data_143fecec0

if (rcx_1 != 0)
    int32_t var_38 = arg2
    int32_t rax_2 = sub_1428989f0(rcx_1, &var_38)
    
    if (rax_2 s>= 0)
        rdx_2 = rax_2 + 8
    label_1428e7936:
        
        if (rdx_2 != 0xffffffff)
            if (rdx_2 s< 0)
                jump(*8)
            
            if (rdx_2 s>= 8)
                jump(*(sub_142898ea0(data_143fecec0, rdx_2 - 8) + 8))
            
            jump((&data_143b85e98)[sx.q(rdx_2) * 5])

return data_143b85e80(zx.q(arg2), arg1, zx.q(arg3))
