// 函数: sub_140e19290
// 地址: 0x140e19290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = arg3

if ((*(arg1 + 0x778) & 2) == 0 && ((*(arg1 + 0x734) - 2) & 0xfffffffd) != 0
        && (*(arg1 + 0x779) & 1) == 0)
    float var_30
    uint128_t zmm6_1 = sub_140e18fa0(arg1, &var_30, 0, arg5)
    
    if (arg4[1].b == 0)
        if (*(arg1 + 0x910) == 0)
            arg6 = *(arg1 + 0x784)
            arg5 = *(arg1 + 0x780)
        else
            arg6 = *(arg1 + 0x794)
            arg5 = *(arg1 + 0x790)
        
        arg5 = sub_140d7ade0(arg5.d, arg6, zmm6_1)
        void var_20
        
        if (&var_20 != arg4)
            *arg4 = arg5.d
            arg4[1].b = 1
    
    int64_t* rcx = *(arg1 + 0x910)
    char rax_4
    
    if (rcx != 0)
        rax_4 = (*(*rcx + 0x70))(rcx, arg6)
    
    float zmm2
    float var_2c
    float var_28
    float var_24
    
    if (rcx == 0 || rax_4 == 0)
        zmm2 = var_38:4.d
        arg5.d = var_38.d.d f+ (var_28 + var_30) f* *arg4
        var_38.d = arg5.d
        zmm2 = zmm2 + (var_2c + var_24) f* *arg4
    else
        arg5.d = var_28.d f+ var_30
        zmm2 = var_38:4.d
        arg6 = var_38.d f+ arg5.d
        arg5.d = var_2c.d f+ var_24
        var_38.d = arg6
        zmm2 = zmm2 f+ arg5.d
    var_38:4.d = zmm2
    
    if ((*(arg1 + 0x778) & 1) != 0)
        arg5.d = (*arg4).d f* 24f
        var_38:4.d = zmm2 f+ arg5.d

*arg2 = var_38

if (arg4[1].b != 0)
    arg4[1].b = 0

return arg2
