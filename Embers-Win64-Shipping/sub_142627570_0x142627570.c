// 函数: sub_142627570
// 地址: 0x142627570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28 = nullptr
uint32_t i_3 = 0
int32_t rax = sub_14261d480(arg1, arg4, arg5, &var_28, &i_3)
int64_t i_2 = sx.q(i_3)

if (((rax u>> 0x1e).b & 1) != 0 && i_2.d s> 0)
    int32_t var_30_1 = arg3
    uint32_t* var_38
    var_38.d = arg2
    sub_14261e920(arg1, arg4, var_28, i_2.d, var_38.d)

int64_t i_1 = i_2

if (i_2.d s> 0)
    void* rbx = var_28
    int64_t i
    
    do
        sub_142609160(*rbx)
        rbx += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

(*(*arg1 + 0x18))(arg1, var_28)
return zx.q(rax)
