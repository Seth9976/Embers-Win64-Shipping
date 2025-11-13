// 函数: sub_1425e56f0
// 地址: 0x1425e56f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x50)
int64_t rdi = 0
int64_t* rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_1425e3270(rax, arg1 + 0x78, arg1 + 0x88, _mm_cvtpd_ps(zx.o(arg2[5])), &arg2[1], 
        arg2[6].b, arg2)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_143449d08
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx_1

int64_t* var_38 = rbx_1
int64_t* r15 = var_38

if (rax_2 != 0)
    rax_2[1].d += 1

int64_t rbp = sx.q(*(arg1 + 0xb8))
int32_t rax_3 = (rbp + 1).d
*(arg1 + 0xb8) = rax_3

if (rax_3 s> *(arg1 + 0xbc))
    sub_1405a4f90(arg1 + 0xb0)

int64_t** rax_6 = (rbp << 4) + *(arg1 + 0xb0)
*rax_6 = r15
rax_6[1] = rax_2
int64_t* rbx_2 = *(arg1 + 0x10)

if (rbx_2 != 0)
    int32_t rax_7 = rbx_2[1].d
    
    if (rax_7 != 0)
        rbx_2[1].d = rax_7 + 1
        rax_7.b = 1
    
    if (rax_7.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rdi = *(arg1 + 8)

int64_t var_28 = rdi
int64_t* rdi_1 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1
    rdi_1 = rbx_2

rbp.b = 0
*(arg1 + 0x10c) += 1
int32_t rax_8 = *(arg1 + 0x100)
int32_t rcx_2 = *(arg1 + 0x10c)
int64_t rsi_1 = sx.q(rax_8 - 1)

if (rax_8 - 1 s>= 0)
    int64_t rdi_3 = rsi_1 << 4
    int64_t temp4_1
    
    do
        int64_t rax_10 = *(arg1 + 0xf8)
        
        if (*(rdi_3 + rax_10 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_3 = *(rdi_3 + rax_10)
            
            if (rcx_3 == 0)
                rbp.b = 1
            else if ((*(*rcx_3 + 0x50))(rcx_3, &var_28, &var_38) == 0)
                rbp.b = 1
        
        rdi_3 -= 0x10
        temp4_1 = rsi_1
        rsi_1 -= 1
    while (temp4_1 - 1 s>= 0)
    rcx_2 = *(arg1 + 0x10c)
    rdi_1 = rbx_2

int32_t result = rcx_2 - 1
*(arg1 + 0x10c) = result

if (rbp.b != 0)
    result = sub_140599630(arg1 + 0xf8, 0)
    rdi_1 = rbx_2

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        result = (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = rax_2

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp7_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
