// 函数: sub_1406c8ce0
// 地址: 0x1406c8ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg3
int32_t arg_10 = arg2

for (; i != 0; i -= 1)
    if (*(arg1 + 0x34) != 0)
        (*arg1)[sx.q(arg1[6].d) * 6] = arg_10
    
    int32_t* rcx_2 = *arg1 + sx.q(arg_10) * 0x18
    *rcx_2 = 0xffffffff
    int32_t var_58_1
    
    if (*(arg1 + 0x34) s<= 0)
        var_58_1 = 0xffffffff
    else
        var_58_1 = arg1[6].d
    
    rcx_2[1] = var_58_1
    arg1[6].d = arg_10
    *(arg1 + 0x34) += 1
    void* rax_25 = arg1[4]
    void* var_28_1
    
    if (rax_25 == 0)
        var_28_1 = &arg1[2]
    else
        var_28_1 = rax_25
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg_10)
    void* rax_33 = var_28_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)
    int32_t var_54_1 = 1
    *rax_33 &= not.d(1 << (arg_10.b & 0x1f))
    arg_10 += 1
