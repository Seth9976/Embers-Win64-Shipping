// 函数: sub_140937470
// 地址: 0x140937470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

int64_t var_20 = *arg2
void** const var_28 = &data_142e1f5b0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    rbx[1].d = rax_1
    
    if (rax_1 == 0)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t result = (*(*arg1 + 0x38))(arg1, &var_28, zx.q(arg3))
var_28 = &data_142e1f5b0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
