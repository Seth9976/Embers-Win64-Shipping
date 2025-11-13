// 函数: sub_140bc6b30
// 地址: 0x140bc6b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x7c) s> 0)
    do
        sub_140bc79e0(i, *(arg1 + 0x90), *(arg1 + 0x88), *(arg1 + 0x80))
        i += 1
    while (i s< *(arg1 + 0x7c))

*(arg1 + 0x88) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xd8) = 0
int64_t* arg_10
int64_t* result = sub_140a956a0(&arg_10)

if (arg1 + 0xb0 != result)
    int64_t* rbx_1 = *(arg1 + 0xb0)
    *(arg1 + 0xb0) = *result
    *result = 0
    
    if (rbx_1 != 0)
        result = zx.q(*(rbx_1 + 0xc))
        *(rbx_1 + 0xc) -= 1
        
        if (result.d == 1)
            sub_140a99090(rbx_1)
            result = j_sub_140a74f90(rbx_1)

int64_t* rbx_2 = arg_10

if (rbx_2 != 0)
    int32_t rdi = *(rbx_2 + 0xc)
    *(rbx_2 + 0xc) -= 1
    
    if (rdi == 1 && rbx_2 != 0)
        sub_140a99090(rbx_2)
        return j_sub_140a74f90(rbx_2)

return result
