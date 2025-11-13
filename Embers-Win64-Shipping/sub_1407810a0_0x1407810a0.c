// 函数: sub_1407810a0
// 地址: 0x1407810a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

*arg1 = *arg2
int64_t* rbx = arg2[2]
int64_t var_18 = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

if (&var_18 != &arg1[1])
    arg3 = var_18.o
    var_18.o = *(arg1 + 8)
    *(arg1 + 8) = arg3

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (&arg2[1] != &var_18)
    arg2[1] = 0
    int64_t* rbx_1 = arg2[2]
    
    if (rbx_1 != 0)
        arg2[2] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t r8_1 = *rbx_1
            (*r8_1)(rbx_1, arg3, r8_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                int64_t r8_2 = *rbx_1
                (*(r8_2 + 8))(rbx_1, 1, r8_2)

return arg1
