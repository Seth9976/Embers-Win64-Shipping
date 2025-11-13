// 函数: sub_141cba6f0
// 地址: 0x141cba6f0
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
int64_t var_68
int64_t* result = sub_141ca31d0(&var_68, rdx_2)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_4 = *arg3
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_6 = var_68

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int128_t var_28
int64_t rcx_7 = var_28:8.q

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t* rbx_1 = var_28.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
