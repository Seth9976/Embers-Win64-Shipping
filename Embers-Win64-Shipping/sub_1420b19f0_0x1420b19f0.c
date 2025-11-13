// 函数: sub_1420b19f0
// 地址: 0x1420b19f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_28
sub_140a95a00(&var_28)
char var_27 = arg5
int32_t var_20 = arg6
int32_t var_1c = arg7
int32_t var_18 = arg8
int32_t var_14 = arg9
var_28 = arg4
uint32_t var_24 = zx.d(arg3)
int128_t var_38 = zx.o(0)
sub_140a9fe20(arg1, arg2, arg10, &var_28, &var_38)
int64_t* rbx_1 = var_38:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return arg1
