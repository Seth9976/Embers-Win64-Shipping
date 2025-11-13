// 函数: sub_140be19d0
// 地址: 0x140be19d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x5c)
uint64_t j_2 = zx.q(arg3)
int32_t count_1 = (*(arg1 + 0x58) - 1 + r9) & neg.d(r9)
int64_t count = sx.q(count_1)
int32_t result = memset(arg2, 0, count)

for (int64_t* i = *(arg1 + 0x70); i != 0; i = i[0xb])
    result = i[7].d * *(i + 0x3c) + *(i + 0x4c)
    
    if (result s> count_1)
        break
    
    if (j_2.d s> 0)
        int64_t rdi_1 = arg2
        uint64_t j_1 = j_2
        uint64_t j
        
        do
            if (not(test_bit(zx.q(i[8].d), 9)))
                result = (*(*i + 0xf0))(i, sx.q(*(i + 0x4c)) + rdi_1)
            else
                result = memset(sx.q(*(i + 0x4c)) + rdi_1, 0, sx.q(i[7].d * *(i + 0x3c)))
            
            rdi_1 += count
            j = j_1
            j_1 -= 1
        while (j != 1)

return result
