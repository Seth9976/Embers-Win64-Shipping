// 函数: sub_140a3f590
// 地址: 0x140a3f590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(*arg2 + 0x148)
uint64_t result = zx.q(*(rcx + 8))

if ((zx.q(*(rcx + 0x18)) << 0x20 | result) == 0)
    int64_t* arg_18
    int64_t** rax_1 = sub_140a956f0(&arg_18, arg2[3])
    result = sub_140a3cd60(*arg2 + 0x148, rax_1)
    int64_t* rbx_1 = arg_18
    
    if (rbx_1 != 0)
        result = zx.q(*(rbx_1 + 0xc))
        *(rbx_1 + 0xc) -= 1
        
        if (result.d == 1 && rbx_1 != 0)
            sub_140a99090(rbx_1)
            return j_sub_140a74f90(rbx_1)

return result
