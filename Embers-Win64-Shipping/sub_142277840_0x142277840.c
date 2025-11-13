// 函数: sub_142277840
// 地址: 0x142277840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140b5f8e0(*arg2)

if (result == 0)
    return result

void var_28
sub_140a96170(&var_28)
int64_t var_38
char rax_1 = sub_140bacf70(sub_140b63b70(arg2, &var_38), 1, &var_28)
int64_t rcx_4 = var_38
int64_t rsi
rsi.b = rax_1 == 0

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

rsi.b ^= 1
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        int64_t rdx_2 = *var_20
        (*rdx_2)(var_20, rdx_2)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_1 = *var_20
            (*(r8_1 + 8))(var_20, zx.q(rdi_1), r8_1)

return zx.q(rsi.b)
