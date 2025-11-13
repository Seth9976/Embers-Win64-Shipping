// 函数: sub_1427ca430
// 地址: 0x1427ca430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx

if (arg2 == 0 || arg3 == 0 || arg4 == 0)
    void* const var_48_1 = &data_1434cce10
    char const* const var_50_2 = "error: null params"
    return sub_1427cabe0(&data_1434cce20, 2, 4, rbx, "[MDAPI]", 
        "MetricsDiscoveryInternal::CMetricsCalculator::NormalizeMetrics")

int128_t* result = (*(*arg4 + 8))(arg4)
int32_t rdi = 0
int32_t r14 = result[2].d

if (r14 != 0)
    uint64_t arg_8 = rbx
    int128_t* rbx_1 = arg3
    
    do
        int64_t* rax_2 = (*(*arg4 + 0x10))(arg4, zx.q(rdi))
        int64_t rdx_1 = *rax_2
        result = (*(rdx_1 + 8))(rax_2, rdx_1)
        int64_t* r8 = result[8].q
        int128_t zmm0
        
        if (r8 == 0)
            zmm0 = *(rbx_1 + arg2 - arg3)
        else
            void var_38
            result = sub_1427c95d0(arg1, &var_38, r8, arg2, arg3, arg4, rdi)
            zmm0 = *result
        
        *rbx_1 = zmm0
        rbx_1 = &rbx_1[1]
        rdi += 1
    while (rdi u< r14)

return result
