// 函数: sub_141cbbc00
// 地址: 0x141cbbc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58
__builtin_memset(&var_58, 0, 0x48)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_58

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_3 != 0
*(arg2 + 0x20) = rcx_1 + rax_3
void var_78
int64_t* result = sub_141cb5fb0(&var_78, rdx_2)
void* rbx_1 = &result[1]
*arg3 = *result

if (&arg3[1] != rbx_1)
    int64_t rcx_5 = arg3[1]
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    arg3[1] = *rbx_1
    *rbx_1 = 0
    arg3[2].d = *(rbx_1 + 8)
    result = zx.q(*(rbx_1 + 0xc))
    *(arg3 + 0x14) = result.d
    *(rbx_1 + 8) = 0

int64_t var_70

if (var_70 != 0)
    result = sub_140a74f90(var_70)

int128_t var_28
int64_t rcx_7 = var_28:8.q

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t* rbx_2 = var_28.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
