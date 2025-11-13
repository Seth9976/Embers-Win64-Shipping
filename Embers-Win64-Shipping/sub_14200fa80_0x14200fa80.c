// 函数: sub_14200fa80
// 地址: 0x14200fa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg1
void* rcx = data_143f3efe8

if (rcx != 0 && result != 0)
    result = sub_14200fb30(rcx)
    int64_t* rbx_1 = data_143f3eff0
    data_143f3efe8 = 0
    
    if (rbx_1 != 0)
        data_143f3eff0 = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = data_143f3efe0
data_143f3eed4 = 0
data_143f3efd8 = 0

if (rbx_2 != 0)
    data_143f3efe0 = 0
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
