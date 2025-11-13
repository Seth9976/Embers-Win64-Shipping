// 函数: sub_140a6e370
// 地址: 0x140a6e370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t (* r9)(void* arg1, int32_t* arg2) = nullptr
int32_t arg_18 = 0

if (arg3 == 0)
    r9 = sub_142a55360
else
    int32_t temp0_1 = arg3
    arg3 -= 1
    
    if (temp0_1 == 1)
        r9 = sub_142a554b0
    else
        int32_t temp1_1 = arg3
        arg3 -= 1
        
        if (temp1_1 == 1)
            r9 = sub_142a55480
        else
            int32_t temp2_1 = arg3
            arg3 -= 1
            
            if (temp2_1 == 1)
                r9 = sub_142a55490
            else if (arg3 == 1)
                r9 = sub_142a554a0

int64_t rax = r9(arg2, &arg_18, arg3)
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rax

*arg1 = rax
arg1[1] = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1
    
    if (rax_1 != 0)
        rax_1[1].d -= 1
        
        if (rax_1[1].d == 1)
            (**rax_1)(rax_1)
            int32_t temp4_1 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rax_1)[1](rax_1, 1)

return arg1
