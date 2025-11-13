// 函数: sub_1424548a0
// 地址: 0x1424548a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
__builtin_memset(&var_38, 0, 0x18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
int64_t var_20 = var_38
int128_t var_30
int64_t var_18 = var_30.q
void* rax_5 = var_30:8.q
*(arg2 + 0x20) = rdi + rax_2
void* var_10 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int64_t result
int32_t zmm0
zmm0, result = sub_141dc89e0(arg1, &var_20)
int64_t* rbx_1 = var_30:8.q
*arg3 = zmm0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
