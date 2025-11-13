// 函数: sub_141be0f50
// 地址: 0x141be0f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x2b].b == 0)
    arg1[0x2b].b = 1
    sub_140de1940(&arg1[0x2c], &arg1[0x7a])

sub_140693390(&arg1[0x37], arg2)
int64_t result = (*(*arg1 + 0x2f0))(arg1)
int64_t* rbx_1 = arg2[2].q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
