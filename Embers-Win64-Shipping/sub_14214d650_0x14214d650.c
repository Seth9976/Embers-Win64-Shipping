// 函数: sub_14214d650
// 地址: 0x14214d650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x130) = arg2
int64_t* rbx = arg3[1]
int64_t var_18 = *arg3

if (rbx != 0)
    rbx[1].d += 1

if (&var_18 != arg1 + 0x310)
    var_18.o = *(arg1 + 0x310)
    *(arg1 + 0x310) = var_18.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void* result = arg1 + 0x1f8
*(arg1 + 0x308) = 0
*(arg1 + 0x2e8) = result
int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
