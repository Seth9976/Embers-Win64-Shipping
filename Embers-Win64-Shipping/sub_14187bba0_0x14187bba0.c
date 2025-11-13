// 函数: sub_14187bba0
// 地址: 0x14187bba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x18)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t* rbx_1 = arg1[1]
    int64_t rax = *arg1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    *result = &data_142fe7d78
    result[1] = rax
    result[2] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg1[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        int64_t r8_1 = *rbx_2
        (*r8_1)(rbx_2, arg2, r8_1)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_2 = *rbx_2
            (*(r8_2 + 8))(rbx_2, zx.q(rsi_1), r8_2)

return result
