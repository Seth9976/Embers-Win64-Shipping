// 函数: sub_140b749a0
// 地址: 0x140b749a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x30)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142d84f58
result[3].d = 0
result[2] = &data_142d84d00
result[4] = 0
int32_t i_1 = arg1[1].d
int64_t* rbx_1 = *arg1
result[5].d = i_1

if (i_1 != 0)
    sub_14061cb30(&result[4], i_1, 0)
    int64_t* rcx_1 = result[4]
    int32_t i
    
    do
        *rcx_1 = *rbx_1
        void* rax_1 = rbx_1[1]
        rcx_1[1] = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        rcx_1 = &rcx_1[2]
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(result + 0x2c) = 0

result[3].d = 5
return result
