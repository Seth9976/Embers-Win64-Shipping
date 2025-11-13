// 函数: sub_1409549c0
// 地址: 0x1409549c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_143ced2b0

if (arg1[8] == result && arg1[7].d s> 1)
    int32_t rdx_1 = arg1[0xc].d
    int64_t rbp_1 = 0
    int32_t result_1 = 0
    int32_t** r14_1 = nullptr
    int32_t** var_38 = nullptr
    int64_t var_30_1 = 0
    
    if (rdx_1 s> 0)
        sub_1405c5570(&var_38, rdx_1)
        result_1 = var_30_1.d
        r14_1 = var_38
    
    int32_t* i = arg1[0xb]
    
    for (void* r12_3 = &i[sx.q(arg1[0xc].d) * 0x14]; i != r12_3; i = &i[0x14])
        if (*i != 0xffffffff)
            int64_t result_2 = sx.q(result_1)
            *i = 0xffffffff
            result_1 = (result_2 + 1).d
            var_30_1.d = result_1
            
            if (result_1 s> var_30_1:4.d)
                sub_1405a4d70(&var_38)
                result_1 = var_30_1.d
                r14_1 = var_38
            
            r14_1[result_2] = i
    
    char arg_8 = 0
    sub_140947390(r14_1, result_1)
    result = sx.q(result_1)
    int32_t** rdi_1 = r14_1
    void* rcx_3 = &r14_1[result]
    uint64_t rsi_4 = (rcx_3 - r14_1 + 7) u>> 3
    
    if (r14_1 u> rcx_3)
        rsi_4 = 0
    
    if (rsi_4 != 0)
        do
            int32_t* rbx_1 = *rdi_1
            result = (*(*arg1 + 0x368))(arg1, rbx_1)
            rbp_1 += 1
            *rbx_1 = result.d
            rdi_1 = &rdi_1[1]
        while (rbp_1 != rsi_4)
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
