// 函数: sub_140ab0a20
// 地址: 0x140ab0a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int32_t entry_r8
int64_t* rax = sub_140aaedb0(arg1 + 8, &var_18, entry_r8)
int16_t rax_2 = sub_140ab0bd0(sub_140aae970(), rax)
int64_t* var_10

if (var_10 == 0)
    return zx.q(rax_2)

var_10[1].d -= 1

if (var_10[1].d == 1)
    int64_t rdx_3 = *var_10
    (*rdx_3)(var_10, rdx_3)
    int32_t rdi_1 = *(var_10 + 0xc)
    *(var_10 + 0xc) -= 1
    
    if (rdi_1 == 1)
        (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return zx.q(rax_2)
