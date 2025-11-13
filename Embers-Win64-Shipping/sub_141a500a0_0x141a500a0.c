// 函数: sub_141a500a0
// 地址: 0x141a500a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) != 0)
    return *(arg1 + 0x10)

void*** rax = sub_141a2cfa0()
void*** rbx = rax
void*** rsi = rbx

if (rbx != 0)
    rbx[1].d += 1
    rbx = rax

void var_18

if (arg1 + 0x10 == &var_18)
label_141a5013b:
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d != 1)
            rbx = rax
        else
            (**rsi)(rsi)
            int32_t temp2_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp2_1 != 1)
                rbx = rax
            else
                (*rsi)[1](rsi, 1)
                rbx = rax
else
    *(arg1 + 0x10) = &rax[2]
    void*** r14_1 = *(arg1 + 0x18)
    
    if (rsi == r14_1)
        goto label_141a5013b
    
    *(arg1 + 0x18) = rsi
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d != 1)
            rbx = rax
        else
            (**r14_1)(r14_1)
            int32_t temp5_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp5_1 != 1)
                rbx = rax
            else
                (*r14_1)[1](r14_1, 1)
                rbx = rax

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        void** r8_1 = *rbx
        (*r8_1)(rbx, arg2, r8_1)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            void** r8_2 = *rbx
            r8_2[1](rbx, 1, r8_2)

return *(arg1 + 0x10)
