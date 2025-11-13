// 函数: sub_141c6ef40
// 地址: 0x141c6ef40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_b8

if (sub_140a80ea0() == 0)
    void** const var_38_1 = &data_142e345d8
    arg4.d = arg3.d
    var_b8 = arg1
    int64_t var_b0_1 = arg2
    int128_t zmm0 = var_b8.o
    int64_t (* var_58)(int64_t* arg1) = sub_141c56da0
    int64_t var_48_1 = 0
    int128_t var_30_1 = zmm0
    uint64_t var_20_1 = arg4.q
    return sub_141e85cb0(&var_58, arg5)

int64_t* rax_1 = sub_141c5eea0(arg1, &var_b8, arg2)
int64_t var_c8_1 = 0
int64_t* var_c0
int32_t result = sub_141c4d620(&var_c0, &rax_1[1])
int64_t* rbx_1 = var_c0

if (rbx_1 != 0)
    var_c8_1 = *rax_1
    *rax_1 = 0

int64_t* var_b0

if (var_b0 != 0)
    result = *(var_b0 + 0xc)
    *(var_b0 + 0xc) -= 1
    
    if (result == 1 && var_b0 != 0)
        result = (*(*var_b0 + 8))(var_b0, 1)
    
    rbx_1 = var_c0

if (var_c8_1 != 0)
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1 = var_c0
    
    int64_t var_70_1 = var_c8_1
    int32_t var_60_1 = arg3.d
    void** const var_78_1 = &data_14320af20
    uint32_t (* var_98)(int64_t* arg1)[0x4] = sub_141c56f70
    int64_t var_88_1 = 0
    int64_t* var_68_1 = rbx_1
    result = sub_141c56850(arg1, &var_98, arg4)

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        int64_t* rbx_2 = var_c0
        result = (**rbx_2)(rbx_2)
        int32_t rdi_2 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_2 == 1)
            int64_t* rcx_7 = var_c0
            return (*(*rcx_7 + 8))(rcx_7, zx.q(rdi_2))

return result
