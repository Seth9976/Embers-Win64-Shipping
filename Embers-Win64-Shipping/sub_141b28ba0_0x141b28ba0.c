// 函数: sub_141b28ba0
// 地址: 0x141b28ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x24)
int32_t arg_8
void* rdx
void* rbx

if (rax == 0x80000000)
    int64_t* rbx_1 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        rbx_1 = 4
    
    rbx = *(rbx_1 + arg2)
    rdx = rbx
else
    arg_8 = rax
    int32_t arg_c = 0
    rbx = arg_8.q
    int32_t arg_14 = 0
    rdx = rax.q

int32_t zmm0
int512_t zmm1
zmm0, zmm1 = sub_141a47d70(arg1, rdx)
int64_t* result = sub_141a52640(arg1, &arg_8)
int32_t rcx_1 = *(arg1 + 0x2c8)
int64_t r8

if (rcx_1 == 2)
    int64_t var_30_3 = r8
    return sub_141af0c70(arg2, arg1 + 0x20, arg_8.q, zmm1, zx.d(*(arg1 + 0x2cc)), zmm0, rbx, 
        arg1 + 0x48)

if (rcx_1 == 3)
    int64_t var_30_2 = r8
    return sub_141af1430(arg2, arg1 + 0x20, arg_8.q, zmm1, zx.d(*(arg1 + 0x2cc)), zmm0, rbx, 
        arg1 + 0x48)

if (rcx_1 != 4)
    return result

int64_t var_30_1 = r8
return sub_141af1050(arg2, arg1 + 0x20, arg_8.q, zmm1, zx.d(*(arg1 + 0x2cc)), zmm0, rbx, 
    arg1 + 0x48)
