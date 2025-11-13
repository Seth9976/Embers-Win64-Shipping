// 函数: sub_1420123d0
// 地址: 0x1420123d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
(*(*arg1 + 0x278))(arg1, &var_28, arg2, arg3)
char var_10
uint32_t r9_1 = zx.d(var_10)
uint64_t rdi
rdi.b = 0

if (r9_1 == 0)
    sub_142008e40(arg2, arg3)
    rdi.b = 1
else
    int64_t* rcx_2
    int64_t rdx_1
    
    if (r9_1 == 2)
        rcx_2 = arg2
    label_142012451:
        rdx_1.b = 1
        sub_141ffcbb0(rcx_2)
        sub_142008e40(arg2, arg3)
        rdi.b = 1
    else
        if (r9_1 == 3)
            rcx_2 = arg3
            goto label_142012451
        
        if (r9_1 == 4)
            rdx_1.b = 1
            sub_141ffcbb0(arg2)
            rcx_2 = arg3
            goto label_142012451
        
        if (r9_1 == 5)
            rdi = zx.q((*(*arg1 + 0x290))(arg1, arg2, arg3))

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rsi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rsi_1))

return zx.q(rdi.b)
