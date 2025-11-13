// 函数: sub_14252ba00
// 地址: 0x14252ba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t rcx
rcx.b = rax != 0
*(arg2 + 0x20) = rcx + rax
void var_28
int64_t* rax_1 = sub_1420c3140(&var_28)
int64_t rdx = *arg3
*arg3 = *rax_1
*rax_1 = rdx
int64_t rdx_1 = arg3[1]
arg3[1] = rax_1[1]
rax_1[1] = rdx_1
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
