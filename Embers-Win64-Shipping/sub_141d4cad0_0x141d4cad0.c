// 函数: sub_141d4cad0
// 地址: 0x141d4cad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
int64_t rbx = *sub_140b58170(&arg_10, "Media", 1)
j_sub_140b3db50()
int64_t* result = sub_140b407e0(&data_143de7d78, rbx)

if (result != 0)
    int64_t rdx_1 = *result
    int64_t* rax_1 = (*(rdx_1 + 0x40))(result, rdx_1)
    int64_t rdi_1 = 0
    int64_t* rbx_1 = *rax_1
    result = &rbx_1[rax_1[1]]
    uint64_t rsi_2 = sx.q(rax_1[1].d) << 3 u>> 3
    
    if (rbx_1 u> result)
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int64_t* rcx_2 = *rbx_1
            result = (**rcx_2)(rcx_2, arg1)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != rsi_2)

return result
