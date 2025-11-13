// 函数: sub_141881c90
// 地址: 0x141881c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int32_t arg_10 = 0
char r14 = 0
void*** rax = j_sub_140a82f30(0x58)
void*** rbx = rax
int64_t var_50

if (rax == 0)
    rbx = nullptr
else
    int32_t var_58_1 = 0
    int64_t var_50_1
    __builtin_memset(&var_50_1, 0, 0x30)
    int128_t var_40
    sub_140a98020(&var_40:8)
    *rbx = &data_142fe7fc0
    r14 = 1
    rbx[1].d = var_58_1
    rbx[2] = 0
    rbx[2] = var_50_1
    var_50 = 0
    int64_t var_48
    rbx[3].d = var_48.d
    *(rbx + 0x1c) = var_48:4.d
    int64_t var_48_1 = 0
    rbx[4].b = var_40.b
    *(rbx + 0x24) = var_40:4.d
    int128_t var_38
    *(rbx + 0x28) = var_38
    __builtin_memset(&rbx[7], 0, 0x19)
    *rbx = &data_142fe8010

uint64_t result = j_sub_140a82f30(0x18)

if (result == 0)
    result = 0
else
    *(result + 8) = 1
    *result = &data_142d42ea8
    *(result + 0xc) = 1
    *(result + 0x10) = rbx

void*** var_68 = rbx
uint64_t result_1 = result

if (arg2[1].d != 0)
    int64_t* rcx_1 = *arg2
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x28))(rcx_1)
        
        if (result.b != 0)
            if (arg2[1].d != 0)
                rdi = *arg2
            
            result = (*(*rdi + 0x50))(rdi, zx.q(arg1), &var_68)

int64_t* result_2 = result_1

if (result_2 != 0)
    result = zx.q(result_2[1].d)
    result_2[1].d -= 1
    
    if (result.d == 1)
        result = (**result_2)(result_2)
        int32_t rdi_1 = *(result_2 + 0xc)
        *(result_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*result_2 + 8))(result_2, zx.q(rdi_1))

if ((r14 & 1) != 0 && var_50 != 0)
    return sub_140a74f90(var_50)

return result
