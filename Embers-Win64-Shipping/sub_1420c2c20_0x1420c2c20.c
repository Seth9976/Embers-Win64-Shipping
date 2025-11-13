// 函数: sub_1420c2c20
// 地址: 0x1420c2c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_140a783a0(sub_140a752e0(), &var_18, arg2)
int64_t rcx_1 = var_18
int64_t* rdx_1

if (rcx_1 == 0)
    rdx_1 = arg2
else if (arg3 == 0)
    rdx_1 = sub_140a3f490(rcx_1)
else
    rdx_1 = sub_14059bf50(rcx_1)

sub_140596d10(arg1, rdx_1)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rdi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return arg1
