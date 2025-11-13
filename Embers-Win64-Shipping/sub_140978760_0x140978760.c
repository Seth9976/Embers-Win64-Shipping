// 函数: sub_140978760
// 地址: 0x140978760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_18 = *arg2

if (rbx != 0)
    rbx[1].d += 1

int64_t* result = &var_18

if (&var_18 != arg1 + 8)
    var_18.o = *(arg1 + 8)
    *(arg1 + 8) = var_18.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx + 8))

return result
