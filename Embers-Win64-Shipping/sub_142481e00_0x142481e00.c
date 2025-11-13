// 函数: sub_142481e00
// 地址: 0x142481e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* result_1 = arg2
int128_t* result

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x20
    int32_t i
    
    do
        result = result_1
        result_1 = &result_1[3]
        *result = *(rbx_1 - 0x20)
        result[1] = *(rbx_1 - 0x10)
        
        if (&result[2] != rbx_1)
            int64_t rsi_1 = sx.q(rbx_1[1].d)
            int64_t r15_1 = *rbx_1
            int32_t r8 = *(result + 0x2c)
            *(result + 0x28) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1407c3650(&result[2], rsi_1.d, r8)
                memcpy(result[2].q, r15_1, (rsi_1 * 0xc).d)
            else
                *(result + 0x2c) = 0
        
        rbx_1 = &rbx_1[6]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
