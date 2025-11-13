// 函数: sub_142056fb0
// 地址: 0x142056fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* var_28 = nullptr
int32_t var_20 = 0
sub_1405dadb0(&var_28, 0x400)
int32_t rax = var_20 + 0x400
var_20 = rax

if (rax s> 0)
    sub_1405a4cf0(&var_28)

int64_t* rcx_2 = data_143f0f180
void* rbx_1 = arg1 + (sx.q(arg2) << 3)
int64_t rax_2 = (*(*rcx_2 + 0x130))(rcx_2, &data_143f02b98, *(rbx_1 + 0x10), 0, 0x1000, 0)
int32_t* rbp = var_28
memcpy(rbp, rax_2, 0x1000)
int64_t* rcx_4 = data_143f0f180
(*(*rcx_4 + 0x138))(rcx_4, &data_143f02b98, *(rbx_1 + 0x10))
int32_t* rbx_2 = rbp
int64_t i_1 = 0x40
int64_t result
int64_t i

do
    var_28 = nullptr
    int64_t j_1 = 0x10
    int64_t var_20_1 = 0
    int64_t j
    
    do
        int64_t var_18
        sub_140a2e390(&var_18, u" %04d", zx.q(*rbx_2))
        int32_t var_10
        int32_t r8_4
        
        if (var_10 == 0)
            r8_4 = 0
        else
            r8_4 = var_10 - 1
        
        result = sub_140a20ba0(&var_28, var_18, r8_4)
        int64_t rcx_7 = var_18
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        rbx_2 = &rbx_2[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t* rcx_8 = var_28
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)
    
    i = i_1
    i_1 -= 1
while (i != 1)

if (rbp == 0)
    return result

return sub_140a74f90(rbp)
