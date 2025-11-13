// 函数: sub_1421102c0
// 地址: 0x1421102c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = sub_140cddf60(arg1, arg2)

if (arg1[0x47] != 0)
    *(arg2 + 8) += 0x198

void* rbx_1 = &arg1[0x4a]
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
return result
