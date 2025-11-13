// 函数: sub_14252ac40
// 地址: 0x14252ac40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdx_2 = arg_10
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
void var_28
int64_t* rax_3 = sub_1420b78b0(&var_28, rdx_2)
int64_t rdx_3 = *arg3
*arg3 = *rax_3
*rax_3 = rdx_3
int64_t rdx_4 = arg3[1]
arg3[1] = rax_3[1]
rax_3[1] = rdx_4
int32_t result = rax_3[2].d
arg3[2].d = result
int64_t* var_20

if (var_20 != 0)
    result = var_20[1].d
    var_20[1].d -= 1
    
    if (result == 1)
        result = (**var_20)(var_20)
        int32_t rdi_2 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_20 + 8))(var_20, zx.q(rdi_2))

return result
