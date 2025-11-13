// 函数: sub_141be66f0
// 地址: 0x141be66f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x94] != 0)
    (*(*arg1 + 0x8c8))(arg1, 0)

int64_t var_18

if (arg1[0x95] != 0)
    sub_141bdbcc0(arg1)
    
    if (&arg1[0x95] != &var_18)
        arg1[0x95] = 0
        int64_t* rbx_1 = arg1[0x96]
        
        if (rbx_1 != 0)
            arg1[0x96] = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg2[1]
var_18 = *arg2

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_18 != &arg1[0x95])
    var_18.o = *(arg1 + 0x4a8)
    *(arg1 + 0x4a8) = var_18.o

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

jump(*(*arg1 + 0x8b0))
