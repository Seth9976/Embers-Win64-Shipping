// 函数: sub_141df5210
// 地址: 0x141df5210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_4 = zx.q(arg5)
int32_t result_1

if (i_4.d != 1)
    result_1 = *(arg2 + 0x64)
else
    result_1 = 0

int64_t result = sx.q(result_1)
int64_t r12 = sx.q(*((result << 2) + 0x143240ef8))
uint64_t j_2 = zx.q(*((result << 2) + 0x143240f18))

if (result_1 == 3)
    uint64_t i_3 = zx.q(result_1 + 3)
    uint64_t i
    
    do
        result = (*(*arg3 + 0x150))(arg3, *arg4, 4)
        *arg4 += 4
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_4.d s> 0)
    uint64_t i_2 = i_4
    uint64_t i_1
    
    do
        if (j_2.d s> 0)
            uint64_t j_1 = j_2
            uint64_t j
            
            do
                result = (*(*arg3 + 0x150))(arg3, *arg4, r12)
                *arg4 += r12
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
