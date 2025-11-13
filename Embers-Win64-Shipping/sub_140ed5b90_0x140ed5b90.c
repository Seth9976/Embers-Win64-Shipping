// 函数: sub_140ed5b90
// 地址: 0x140ed5b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_28 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_28 != &arg1[0xdd])
    var_28.o = *(arg1 + 0x6e8)
    *(arg1 + 0x6e8) = var_28.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

arg1[0xdf].d = arg3
int64_t result = sub_140f89930(arg1)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
