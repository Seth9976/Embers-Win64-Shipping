// 函数: sub_141ed54b0
// 地址: 0x141ed54b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = zx.q(arg2)

if (arg2 != 0xffffffff)
    int64_t* rbx_3 = (sx.q(i_2.d) << 4) + arg1[3]
    
    if (arg1[9] != 0)
        (*(*arg1 + 0x10))(arg1, &arg1[9])
    
    int64_t* rbx_4 = rbx_3[1]
    int64_t var_38 = *rbx_3
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    if (&var_38 != &arg1[9])
        var_38.o = *(arg1 + 0x48)
        *(arg1 + 0x48) = var_38.o
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp1_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    if (i_2.d s> 0)
        int64_t rbx_5 = 0
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            int64_t r8 = *arg1
            (*(r8 + 0x10))(arg1, arg1[3] + rbx_5, r8)
            rbx_5 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_140dbae50(&arg1[3], 0, (i_2 + 1).d, 0)

uint64_t result = sub_1405be820(arg3)

if (result != 0)
    result = zx.q(*(result + 0x528))
    arg1[2].d = result.d

return result
