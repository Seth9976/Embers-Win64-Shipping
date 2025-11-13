// 函数: sub_140d9b2d0
// 地址: 0x140d9b2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
sub_140da70c0(arg1, &var_28, arg2, arg3, arg5, arg4)
int32_t var_18
int64_t rdi

if (var_28 == 0 || var_18 == 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        int64_t rdx_1 = *var_20
        (*rdx_1)(var_20, rdx_1)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_20
            (*(r8_1 + 8))(var_20, 1, r8_1)

return zx.q(rdi.b)
