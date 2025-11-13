// 函数: sub_142893e10
// 地址: 0x142893e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = sub_142890ec0(arg1)
int64_t rbx = *(rax + 0x100)
int32_t rax_1 = sub_142890eb0(arg1)

if (rbx == 0)
    int64_t rbx_1 = *(rax + 0xf8)
    int128_t* rax_3 = sub_1406219d0(arg1)
    
    if (rax_1 == 0)
        sub_1428d0210(arg3, arg2, arg4, rax, rax_3, rbx_1)
    else
        sub_1428d04c0(arg3, arg2, arg4, rax, rax_3, rbx_1)
else
    int64_t var_20
    var_20.d = rax_1
    (*(rax + 0x100))(arg3, arg2, arg4, rax, sub_1406219d0(arg1), var_20)

return 1
