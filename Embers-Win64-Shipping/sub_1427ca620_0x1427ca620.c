// 函数: sub_1427ca620
// 地址: 0x1427ca620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg3

if (arg2 == 0 || rbx == 0 || arg4 == 0)
    void* const var_58_2 = &data_1434cce10
    char const* const var_60_2 = "error: null params"
    return sub_1427cabe0(&data_1434cce20, 2, 4, rbx, "[MDAPI]", 
        "MetricsDiscoveryInternal::CMetricsCalculator::ReadInformation")

uint64_t result = (*(*arg4 + 8))(arg4)
int32_t rsi = 0
int32_t r15 = *(result + 0x24)

if (r15 != 0)
    do
        int64_t* rax_2 = (*(*arg4 + 0x18))(arg4, zx.q(rsi))
        int64_t rdx_1 = *arg4
        int32_t rbp_1 = *((*(rdx_1 + 8))(arg4, rdx_1) + 0x10)
        
        if (rax_2 == 0 || rbx == 0)
            void* const var_58_1 = &data_1434cce10
            char const* const var_60_1 = "error: null params"
            result = sub_1427cabe0(&data_1434cce20, 2, 4, rbx, "[MDAPI]", 
                "MetricsDiscoveryInternal::CMetricsCalculator::ReadSingleInformation")
        else
            int64_t rdx_2 = *rax_2
            void* rax_4 = (*(rdx_2 + 8))(rax_2, rdx_2)
            int64_t* r8
            
            if ((rbp_1 & 0x201) == 0)
                r8 = *(rax_4 + 0x40)
            else
                r8 = *(rax_4 + 0x38)
            
            void var_48
            
            if (r8 == 0)
                *(rbx + 8) = 0
            else
                *rbx = *sub_1427c9a90(arg1, &var_48, r8, arg2)
            result = 1
            
            if (*(rax_4 + 0x2c) == 2)
                result = 3
            
            *rbx = result.d
        
        rsi += 1
        rbx = &rbx[4]
    while (rsi u< r15)

return result
