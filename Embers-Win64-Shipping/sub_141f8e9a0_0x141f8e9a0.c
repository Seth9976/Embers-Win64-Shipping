// 函数: sub_141f8e9a0
// 地址: 0x141f8e9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int32_t* var_38 = __security_cookie ^ &var_78
int64_t r14 = sx.q(arg3)
int32_t* result

if (arg2 s< 0 || arg2 s>= arg1[1].d)
    result.b = 0
else
    result.b = 1

if (result.b != 0)
    int64_t r9_1 = *arg1
    int64_t r15
    r15.b = 0
    int64_t r10_1 = sx.q(arg2) << 3
    char rax_2 = *(r10_1 + r9_1 + 4)
    int32_t var_48
    int32_t rbx_1
    
    if (rax_2 == 0)
        rbx_1 = var_48
    else
        rbx_1 = *(r10_1 + r9_1)
        r15.b = 1
    
    if (rax_2 != 0)
        *(r10_1 + r9_1 + 4) = 0
        r9_1 = *arg1
    
    int32_t rbp_1 = arg1[1].d
    int32_t rax_4 = rbp_1 - arg2
    
    if (rax_4 != 1)
        memmove(r10_1 + r9_1, r9_1 + (sx.q(arg2 + 1) << 3), (rax_4 - 1) << 3)
        rbp_1 = arg1[1].d
    
    arg1[1].d = rbp_1
    
    if (rbp_1 s> *(arg1 + 0xc))
        sub_1405a4d70(arg1)
    
    int32_t* rdi_1 = r14 << 3
    void* rdx_3 = *arg1 + rdi_1
    memmove(rdx_3 + 8, rdx_3, (rbp_1 - 1 - r14.d) << 3)
    result = *arg1
    *(rdi_1 + result + 4) = 0
    
    if (r15.b != 0)
        *(rdi_1 + result) = rbx_1
        *(rdi_1 + result + 4) = 1
        sub_14090a150(&arg1[2], &var_48)
        int32_t rax_8 = var_48
        char* var_50_1 = nullptr
        int32_t* var_40
        *var_40 = rbx_1
        var_40[1] = r14.d
        var_40[2] = 0xffffffff
        result = sub_141f86230(&arg1[2], &var_48, rbx_1, var_40, rax_8, var_50_1)

__security_check_cookie(var_38 ^ &var_78)
return result
