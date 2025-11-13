// 函数: sub_141c06fe0
// 地址: 0x141c06fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
void var_28
int64_t* rax_1 = sub_141bb0f00(arg1, &var_28)
int64_t rdx_1 = *arg3
*arg3 = *rax_1
*rax_1 = rdx_1
int64_t rdx_2 = arg3[1]
arg3[1] = rax_1[1]
rax_1[1] = rdx_2
int32_t result = rax_1[2].d
arg3[2].d = result
int64_t* var_20

if (var_20 != 0)
    result = var_20[1].d
    var_20[1].d -= 1
    
    if (result == 1)
        result = (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
