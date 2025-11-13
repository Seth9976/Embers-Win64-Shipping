// 函数: sub_141810340
// 地址: 0x141810340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48 = nullptr
int32_t var_40 = 0
int64_t var_38
sub_140596d10(&var_38, arg3)
int64_t var_28
sub_140596d10(&var_28, arg4)
int64_t rbx_1 = sx.q(var_40)
int32_t i_2 = (rbx_1 + 1).d

if (i_2 s> 0)
    sub_1405c4f50(&var_48)

int64_t* rcx_5 = rbx_1 * 0x30 + var_48
*rcx_5 = var_38
int32_t var_30
rcx_5[1].d = var_30
int32_t var_2c
*(rcx_5 + 0xc) = var_2c
rcx_5[2] = var_28
int32_t var_20
rcx_5[3].d = var_20
int32_t var_1c
*(rcx_5 + 0x1c) = var_1c
rcx_5[4] = 0
rcx_5[5].b = 0
*(rcx_5 + 0x2c) = 0
int64_t result = (*(*arg1 + 0x58))(arg1, arg2, &var_48)
int32_t i_1 = i_2
void* rbx_2 = var_48

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_7 = *(rbx_2 + 0x10)
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *rbx_2
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        rbx_2 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_2 = var_48

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
