// 函数: sub_140d74b00
// 地址: 0x140d74b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
char rax_2

if (*(rcx + 8) != 0)
    int64_t* rcx_1 = *(rcx + 0x10)
    rax_2 = (*(*rcx_1 + 0x10))(rcx_1)

uint64_t result

if (*(rcx + 8) == 0 || rax_2 == 0)
    result = arg1[1]
    **result = 1
else
    void* rdx_1 = *arg1
    int64_t var_38 = *(rdx_1 + 0x10)
    void* rax_4 = *(rdx_1 + 0x18)
    void* var_30_1 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    void var_28
    int512_t zmm1 = sub_140d6ed90(&var_28, 0, arg2)
    sub_140597060(&var_38)
    result = sub_140d6fdb0(&var_28, zmm1)
    **arg1[1] = result.d
    int64_t var_20
    
    if (var_20 != 0)
        return sub_140a74f90(var_20)

return result
