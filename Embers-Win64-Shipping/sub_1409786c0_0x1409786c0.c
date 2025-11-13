// 函数: sub_1409786c0
// 地址: 0x1409786c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = 0

if (*(arg1 + 0x24) != 0)
    sub_1405c5510(arg1 + 0x18, 0)

int64_t* rbx_1 = arg2[1]
int64_t var_18 = *arg2

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t* result = &var_18

if (&var_18 != arg1 + 8)
    var_18.o = *(arg1 + 8)
    *(arg1 + 8) = var_18.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
