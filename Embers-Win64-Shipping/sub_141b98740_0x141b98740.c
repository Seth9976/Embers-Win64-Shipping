// 函数: sub_141b98740
// 地址: 0x141b98740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1 + 0xde8
void var_18

if (result != &var_18)
    *result = 0
    int64_t* rbx_1 = result[1]
    
    if (rbx_1 != 0)
        result[1] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

void* rcx_2 = *(arg1 + 0xdb8)

if (rcx_2 != 0)
    result = sub_140f2d5b0(*(rcx_2 + 0x450))

int64_t* rcx_4 = *(arg1 + 0xdc8)

if (rcx_4 == 0)
    return result

return sub_140f5d9a0(rcx_4, &data_143e244b0) __tailcall
