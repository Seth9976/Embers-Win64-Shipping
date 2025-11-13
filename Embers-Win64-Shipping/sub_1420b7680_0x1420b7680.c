// 函数: sub_1420b7680
// 地址: 0x1420b7680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_28
sub_140a95a00(&var_28)
int32_t var_20 = arg4
int32_t var_1c = arg5
var_28 = arg3
char r9
char var_27 = r9
int128_t var_38 = zx.o(0)
sub_140aa1140(arg1, arg2, &var_28, &var_38)
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
