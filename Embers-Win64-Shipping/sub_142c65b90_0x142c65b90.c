// 函数: sub_142c65b90
// 地址: 0x142c65b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t optval_2 = data_14401b0cc
int32_t optval_1 = 0x4020
int32_t optval = 0
int32_t optlen = 4

if (optval_2 == 0)
    char rax = sub_142c89480(optval_2 + 6, 0, optval_2 + 2, optval_2 + 3)
    
    if (rax != 0)
        data_14401b0cc = 2
        return rax
    
    data_14401b0cc = 1
    goto label_142c65c0f

if (optval_2 != 2)
label_142c65c0f:
    int32_t rax_1 = getsockopt(arg1, 0xffff, 0x1001, &optval, &optlen)
    
    if (rax_1 == 0)
        optval_2 = optval_1
    
    if (rax_1 != 0 || optval s<= optval_2)
        int32_t* var_18_1
        var_18_1.d = 4
        return setsockopt(arg1, 0xffff, 0x1001, &optval_1, var_18_1.d)

return optval_2
