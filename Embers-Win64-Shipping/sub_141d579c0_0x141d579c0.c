// 函数: sub_141d579c0
// 地址: 0x141d579c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
int64_t* result = (*(*arg1 + 0x260))(arg1, &var_48)
int32_t var_40

if (var_40 s> 1)
    void arg_8
    int64_t* rax_1 = sub_140b58170(&arg_8, "Url", 1)
    int64_t rbp_1 = var_48
    uint64_t var_30 = 0
    int64_t rbx_1 = *rax_1
    uint64_t r14_1
    int32_t r15_1
    
    if (var_40 != 0)
        sub_1405a4c70(&var_30, var_40, 0)
        r14_1 = var_30
        memcpy(r14_1, rbp_1, var_40 * 2)
        int32_t var_24
        r15_1 = var_24
    else
        r15_1 = 0
        r14_1 = 0
    
    int64_t rbp_2 = sx.q(arg2[1].d)
    int32_t rax_2 = (rbp_2 + 1).d
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_1405c4e40(arg2)
    
    result = (rbp_2 << 5) + *arg2
    *result = rbx_1
    result[1] = r14_1
    result[2].d = var_40
    *(result + 0x14) = r15_1
    result[3] = 1

int64_t rcx_4 = var_48

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
