// 函数: sub_141e588a0
// 地址: 0x141e588a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x50, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_14324cc80
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    result_1[3] = 0
    int64_t rbp_1 = sx.q(*(arg1 + 0x20))
    int64_t r14_1 = *(arg1 + 0x18)
    result_1[4].d = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1405a4be0(&result_1[3], rbp_1.d, 0)
        memcpy(result_1[3], r14_1, (rbp_1 << 4).d)
    else
        *(result_1 + 0x24) = 0
    
    result_1[5] = *(arg1 + 0x28)
    void* rax_1 = *(arg1 + 0x30)
    result_1[6] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    result_1[7] = 0
    result_1[8].d = 0
    
    if (arg1 + 0x38 != &result_1[7] && *(arg1 + 0x40) != 0)
        int64_t* rcx_2 = *(arg1 + 0x38)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x40))(rcx_2)
    
    result_1[9] = *(arg1 + 0x48)
    result = &data_14324ccd8
    *result_1 = &data_14324ccd8

return result
