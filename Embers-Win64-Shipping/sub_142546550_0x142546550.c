// 函数: sub_142546550
// 地址: 0x142546550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* r15 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x20
    int32_t i
    
    do
        uint64_t* rsi_1 = r15
        r15 = &r15[8]
        sub_140780c40(rsi_1, &rbx_1[-4])
        sub_140780c40(&rsi_1[2], &rbx_1[-2])
        
        if (&rsi_1[4] != rbx_1)
            uint32_t count = rbx_1[1].d
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rsi_1 + 0x2c)
            rsi_1[5].d = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(&rsi_1[4], count, r8)
                memcpy(rsi_1[4], r12_1, count)
            else
                *(rsi_1 + 0x2c) = 0
        
        sub_140597df0(&rsi_1[6], &rbx_1[2])
        rbx_1 = &rbx_1[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
