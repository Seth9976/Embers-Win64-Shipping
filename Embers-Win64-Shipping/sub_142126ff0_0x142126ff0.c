// 函数: sub_142126ff0
// 地址: 0x142126ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = sub_140cddf60(arg1, arg2)

if ((arg1[0x1b].b & 1) != 0)
    void* rbx_1 = &arg1[0x73]
    int64_t i_1 = 3
    int64_t i
    
    do
        int64_t j_1 = 4
        int64_t j
        
        do
            void* rcx = *rbx_1
            
            if (rcx != 0)
                result = sub_142126db0(rcx, arg2)
            
            rbx_1 += 8
            j = j_1
            j_1 -= 1
        while (j != 1)
        i = i_1
        i_1 -= 1
    while (i != 1)

if (arg1[0x28] != 0)
    *(arg2 + 8) += 0x1e8
    int64_t r8_1 = *(arg2 + 8) + sx.q(arg1[0x1d].d) * 0x18
    *(arg2 + 8) = r8_1
    int64_t rdx_4 = (sx.q(arg1[0x1f].d) << 5) + r8_1
    *(arg2 + 8) = rdx_4
    int64_t r8_2 = rdx_4 + sx.q(arg1[0x21].d) * 0x18
    *(arg2 + 8) = r8_2
    int64_t rdx_5 = r8_2 + sx.q(arg1[0x23].d) * 0x18
    *(arg2 + 8) = rdx_5
    result = rdx_5 + sx.q(arg1[0x25].d) * 0x18
    *(arg2 + 8) = result

return result
