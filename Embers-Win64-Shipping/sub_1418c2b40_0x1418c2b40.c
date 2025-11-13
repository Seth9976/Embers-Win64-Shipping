// 函数: sub_1418c2b40
// 地址: 0x1418c2b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int32_t rsi = 0
int32_t r15 = 0

if (sub_1418c2480(arg1, arg3) != 0)
    r15 = arg3

int64_t r12 = rdi * 0x28

if (sub_1418c2380(arg1, arg3) != 0)
    rsi = arg3

int64_t result

if (r15 != 0 || rsi != 0)
    result.b = 1
else
    result.b = 0

(&data_1439c8600)[r12] = result.b
(&data_1439c85fc)[rdi * 0xa] = r15
*((rdi << 2) + &data_143efaf70) = rsi

if (r15 == 0)
    int64_t i_1 = sx.q(arg4[1].d)
    
    if (i_1 s> 0)
        int32_t* rbx_1 = *arg4
        int64_t i
        
        do
            int32_t rdi_1 = *rbx_1
            result = sub_1418c2480(arg1, rdi_1)
            
            if (result.b != 0)
                (&data_1439c85fc)[rdi * 0xa] = rdi_1
                (&data_1439c8600)[r12] = 1
            
            rbx_1 = &rbx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
