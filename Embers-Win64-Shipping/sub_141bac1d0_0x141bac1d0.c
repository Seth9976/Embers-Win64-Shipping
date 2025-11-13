// 函数: sub_141bac1d0
// 地址: 0x141bac1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(arg1[6].b)
int64_t* rbx_2

if (rcx == 1)
    rbx_2 = *arg1
label_141bac21b:
    
    if (rbx_2[1].d != 0)
        int64_t* rcx_4 = *rbx_2
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x38))(rcx_4, 0)
            int64_t rcx_5 = *rbx_2
            
            if (rcx_5 != 0)
                *rbx_2 = sub_140a84c80(rcx_5, 0, 0)
            
            rbx_2[1].d = 0
else
    if (rcx == 2)
        rbx_2 = arg1[2]
        goto label_141bac21b
    
    if (rcx == 3)
        int32_t* rbx_1 = arg1[4]
        sub_140d3a3a0(rbx_1, nullptr)
        int64_t arg_8 = 0
        *(rbx_1 + 8) = 0
arg1[6].b = 1
void*** rax_3 = j_sub_140a82f30(0x20)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_14306d990
    *(rax_3 + 0xc) = 1
    rax_3[2] = 0
    rax_3[3].d = 0

void*** rbx_3 = rax_3
void*** rsi = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1
    rbx_3 = rax_3

void var_18

if (arg1 == &var_18)
label_141bac2f6:
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d != 1)
            rbx_3 = rax_3
        else
            (**rsi)(rsi)
            int32_t temp4_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp4_1 != 1)
                rbx_3 = rax_3
            else
                (*rsi)[1](rsi, 1)
                rbx_3 = rax_3
else
    *arg1 = &rax_3[2]
    void*** r14_1 = arg1[1]
    
    if (rsi == r14_1)
        goto label_141bac2f6
    
    arg1[1] = rsi
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d != 1)
            rbx_3 = rax_3
        else
            (**r14_1)(r14_1)
            int32_t temp7_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp7_1 != 1)
                rbx_3 = rax_3
            else
                (*r14_1)[1](r14_1, 1)
                rbx_3 = rax_3

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp6_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*rbx_3)[1](rbx_3, 1)

return *arg1
