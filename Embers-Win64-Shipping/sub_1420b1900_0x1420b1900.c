// 函数: sub_1420b1900
// 地址: 0x1420b1900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_38
sub_140a95a00(&var_38)
char var_37 = arg5
int32_t var_30 = arg6
int32_t var_2c = arg7
int32_t var_28 = arg8
int32_t var_24 = arg9
var_38 = arg4
uint32_t var_34 = zx.d(arg3)
int128_t var_48 = zx.o(0)
sub_140a9fe50(arg1, arg2, arg10, &var_38, &var_48)
int64_t* rbx_1 = var_48:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return arg1
