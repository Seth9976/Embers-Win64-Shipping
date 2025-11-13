// 函数: sub_140938590
// 地址: 0x140938590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28 = nullptr
int32_t var_20 = 0
void*** rax = j_sub_140a82f30(0x30)
void*** r14 = rax

if (rax == 0)
    r14 = nullptr
else
    rax[1] = 0
    rax[2] = 0
    *r14 = &data_142e1f860
    int64_t r8 = *arg3
    (*(r8 + 0x30))(arg3, &r14[3], r8)
    int64_t r8_1 = *arg3
    (*(r8_1 + 0x10))(arg3, &r14[5], r8_1)
    *r14 = &data_142e1f860

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rdi_1 = rax_1

if (rax_1 == 0)
    rdi_1 = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rdi_1 = &data_142d42e98
    rdi_1[2] = r14

void**** rsi = &r14[1]

if (r14 == 0)
    rsi = nullptr

if (rsi != 0)
    void* rax_2
    
    if (*rsi != 0)
        rax_2 = rsi[1]
    
    if (*rsi == 0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        *rsi = r14
        int64_t* rcx_2 = rsi[1]
        
        if (rdi_1 != rcx_2)
            if (rdi_1 != 0)
                *(rdi_1 + 0xc) += 1
                rcx_2 = rsi[1]
            
            if (rcx_2 != 0)
                int32_t temp5_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
            
            rsi[1] = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp4_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rdi_1)[1](rdi_1, 1)

int64_t rsi_1 = sx.q(var_20)
int32_t i_2 = (rsi_1 + 1).d

if (i_2 s> 0)
    sub_1405a4f90(&var_28)

void**** rax_8 = (rsi_1 << 4) + var_28
*rax_8 = r14
rax_8[1] = rdi_1

if (rdi_1 != 0)
    int32_t rax_9 = rdi_1[1].d
    rdi_1[1].d = rax_9
    
    if (rax_9 == 0)
        (**rdi_1)(rdi_1)
        int32_t temp0_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

char rax_13 = (*(*arg1 + 0x318))(arg1, arg2, &var_28)
int32_t i_1 = i_2

if (i_1 != 0)
    int64_t* rdi_3 = var_28 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_3
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_3 = &rdi_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return zx.q(rax_13)
