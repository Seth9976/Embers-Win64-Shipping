// 函数: sub_1418593c0
// 地址: 0x1418593c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg4
int64_t var_98
sub_140596d10(&var_98, &arg4[2])
char rax_1 = arg4[6].b
int128_t zmm0 = *(arg4 + 0x20)
int32_t rax_2 = arg4[7]
int64_t zmm1 = *(arg4 + 0x30)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t var_68 = *arg2
int64_t* var_60 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t var_d0
sub_140596d10(&var_d0, &var_98)
void*** result_2 = sub_140a84c80(0, 0x60, 0)
void*** result_1 = result_2
void*** result_3 = result_2

if (result_2 != 0)
    int32_t var_58 = rax
    void var_50
    sub_140596d10(&var_50, &var_d0)
    char var_40_1 = rax_1
    int32_t var_3c_1 = rax_2
    int128_t var_38_1 = zmm0
    int64_t var_28_1 = zmm1
    sub_14185f170(result_3, &var_68, arg3, &var_58)

int64_t rcx_7 = var_d0

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_9 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)
    
    result_3 = result_1

int64_t rcx_10 = var_98

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

uint64_t result = &result_1

if (&result_1 == arg1)
    goto label_141859553

if (result_3 != 0)
    result = (*result_3)[8](result_3, arg1)
label_141859553:
    
    if (result_3 != 0)
        (*result_3)[7](result_3, 0)
        result = sub_140a84c80(result_3, 0, 0)
        result_1 = result
        
        if (result != 0)
            result = sub_140a74f90(result)
else if (arg1[1].d != 0)
    uint64_t rcx_18 = *arg1
    
    if (rcx_18 != 0)
        result = (*(*rcx_18 + 0x38))(rcx_18, 0)
        uint64_t rcx_19 = *arg1
        
        if (rcx_19 != 0)
            result = sub_140a84c80(rcx_19, 0, 0)
            *arg1 = result
        
        arg1[1].d = 0

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    rbx_1[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t r14_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (r14_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, zx.q(r14_1))

int64_t rcx_17 = *(arg4 + 8)

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
