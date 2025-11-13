// 函数: sub_1428ae8e0
// 地址: 0x1428ae8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
sub_1428aebf0(arg1)

if (arg2 == 0xffffffff)
    return zx.q(arg2 + 2)

int32_t rdx = arg2 - 1

if (rdx u<= 8)
    goto label_1428ae94e

int32_t* rcx = data_143fecaf0

if (rcx != 0)
    int32_t var_38 = arg2
    int32_t rax_2 = sub_1428989f0(rcx, &var_38)
    
    if (rax_2 s>= 0)
        rdx = rax_2 + 9
    label_1428ae94e:
        
        if (rdx != 0xffffffff)
            if (rdx s< 0)
                jump(*0x10)
            
            if (rdx s>= 9)
                jump(*(sub_142898ea0(data_143fecaf0, rdx - 9) + 0x10))
            
            jump((&data_143b85360)[sx.q(rdx) * 6])

return 0xffffffff
