// 函数: sub_140ef8e00
// 地址: 0x140ef8e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t rbp = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int32_t rax_2 = rbx[1].d
        rbp = *(arg1 + 8)
        rbx[1].d = rax_2
        
        if (rax_2 == 0)
            (**rbx)(rbx)
            int32_t temp0_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rbx + 8))(rbx, 1)
        
        rbx[1].d += 1

int32_t r9
int32_t arg_c = r9
void*** rax_5 = j_sub_140a82f30(0x60)
void*** rdi_1 = rax_5

if (rax_5 == 0)
    rdi_1 = nullptr
else
    *rdi_1 = &data_142ee1088
    rdi_1[1] = rbp
    rdi_1[2] = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rdi_1[3] = arg3.q
    rdi_1[4] = arg4
    rdi_1[5] = 0
    rdi_1[6].w = *arg5
    rdi_1[7] = *(arg5 + 8)
    void* rax_9 = *(arg5 + 0x10)
    rdi_1[8] = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    rdi_1[9].b = arg5[0xc].b
    rdi_1[0xa] = *arg6
    void* rax_12 = arg6[1]
    rdi_1[0xb] = rax_12
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1

void*** rax_13 = j_sub_140a82f30(0x18)

if (rax_13 == 0)
    rax_13 = nullptr
else
    rax_13[1].d = 1
    *rax_13 = &data_142d42ea8
    *(rax_13 + 0xc) = 1
    rax_13[2] = rdi_1

*arg2 = rdi_1
arg2[1] = rax_13

if (rax_13 != 0)
    rax_13[1].d += 1
    
    if (rax_13 != 0)
        rax_13[1].d -= 1
        
        if (rax_13[1].d == 1)
            (**rax_13)(rax_13)
            int32_t temp5_1 = *(rax_13 + 0xc)
            *(rax_13 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rax_13)[1](rax_13, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp6_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
