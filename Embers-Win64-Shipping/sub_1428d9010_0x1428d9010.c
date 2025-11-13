// 函数: sub_1428d9010
// 地址: 0x1428d9010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = arg2[2].d
int64_t* result

if (rbx == arg3[2].d)
    int32_t rax = sub_1428909a0(arg2, arg3)
    
    if (rax s> 0)
        rbx = arg2[2].d
        result = sub_1428d9180(arg1, arg2, arg3)
    else if (rax s>= 0)
        rbx = 0
        sub_142890900(arg1, 0)
        result = 1
    else
        rbx.b = arg3[2].d == 0
        result = sub_1428d9180(arg1, arg3, arg2)
else
    result = sub_1428d90b0(arg1, arg2, arg3)

arg1[2].d = rbx
return result
