// 函数: sub_141827400
// 地址: 0x141827400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
int32_t arg_8

if (*sub_1408f1b50(*arg1, &arg_8, arg2) == 0xffffffff)
    sub_140a464c0()
    int32_t rcx_1 = arg2[1].d
    int64_t* rdx_1 = arg1[1]
    int32_t r14_1 = rcx_1 - 1
    
    if (rcx_1 == 0)
        r14_1 = 0
    
    int32_t rax_1
    
    if (rdx_1[1].d == 0)
        rax_1 = 2
    
    if (rdx_1[1].d != 0 || r14_1 == 0xffffffff)
        rax_1 = 1
    
    int16_t* var_48 = nullptr
    int32_t rcx_3 = r14_1 + rax_1
    int32_t r15_1 = rdx_1[1].d
    int64_t rbp_1 = *rdx_1
    
    if (r15_1 != 0 || rcx_3 != 0)
        sub_1405a4c70(&var_48, r15_1 + rcx_3, 0)
        memcpy(var_48, rbp_1, r15_1 * 2)
    else
        int32_t var_3c_1 = 0
    
    sub_140a2cf70(&var_48, *arg2, r14_1)
    int16_t* const rdx_5 = &data_142d40450
    
    if (r15_1 != 0)
        rdx_5 = var_48
    
    int64_t rax_3 = (*(data_14399ea08 + 0x108))(&data_14399ea08, rdx_5)
    int64_t* rcx_7 = *arg1
    int64_t arg_18 = rax_3
    int64_t* var_38 = arg2
    int64_t* var_30_1 = &arg_18
    sub_141818d90(rcx_7, &arg_8, &var_38, nullptr)
    int16_t* rcx_8 = var_48
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

int64_t* rbp_2 = *arg1
sub_1408f1b50(rbp_2, &arg_8, arg2)
int64_t rax_4 = sx.q(arg_8)

if (rax_4.d != 0xffffffff)
    rbx = (rax_4 << 5) + *rbp_2

int64_t* rcx_10 = arg1[2]
int64_t result
result.b = (*(*rcx_10 + 0xa0))(rcx_10, arg2) == *(rbx + 0x10)
return result
