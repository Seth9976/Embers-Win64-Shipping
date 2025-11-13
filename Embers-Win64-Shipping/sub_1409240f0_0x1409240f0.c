// 函数: sub_1409240f0
// 地址: 0x1409240f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0 || arg4 s<= 0)
    *arg2 = nullptr
    arg2[1] = 0
    return arg2

int32_t rax = 0
int64_t r12 = 0
int32_t rbp = 0
int64_t var_38 = 0
int32_t var_30 = 0
int32_t var_2c = 0

if (*arg3 != 0)
    if (arg4 + 1 s> 0)
        sub_1405947f0(&var_38, arg4 + 1)
        rax = var_2c
        rbp = var_30
        r12 = var_38
    
    rbp += arg4 + 1
    
    if (rbp s> rax)
        sub_140594770(&var_38)
        r12 = var_38
    
    UnDecorator::getReferenceType(r12, arg3, arg4 * 2)
    *(r12 + (sx.q(rbp) << 1) - 2) = 0

void*** rax_2 = j_sub_140a82f30(0x30)
void*** rsi_1 = rax_2

if (rax_2 == 0)
    rsi_1 = nullptr
else
    void arg_18
    int64_t rbx_1 = *sub_140b58260(&arg_18, u"NULL", 1)
    rsi_1[1] = 0
    rsi_1[2] = 0
    *rsi_1 = &data_142e1f860
    rsi_1[3] = 0
    rsi_1[4].d = rbp
    
    if (rbp != 0)
        sub_1405a4c70(&rsi_1[3], rbp, 0)
        memcpy(rsi_1[3], r12, rbp * 2)
        rsi_1[5] = rbx_1
        *rsi_1 = &data_142e1f860
    else
        *(rsi_1 + 0x24) = 0
        *rsi_1 = &data_142e1f860
        rsi_1[5] = rbx_1

int64_t* rax_4 = j_sub_140a82f30(0x18)
int64_t* rbx_2 = rax_4

if (rax_4 == 0)
    rbx_2 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx_2 = &data_142d42e98
    rbx_2[2] = rsi_1

*arg2 = rsi_1
void** r14 = &rsi_1[1]
arg2[1] = rbx_2

if (rsi_1 == 0)
    r14 = nullptr

if (r14 != 0)
    void* rax_5
    
    if (*r14 != 0)
        rax_5 = r14[1]
    
    if (*r14 == 0 || rax_5 == 0 || *(rax_5 + 8) s<= 0)
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        *r14 = rsi_1
        int64_t* rcx_6 = r14[1]
        
        if (rbx_2 != rcx_6)
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
                rcx_6 = r14[1]
            
            if (rcx_6 != 0)
                int32_t temp2_1 = *(rcx_6 + 0xc)
                *(rcx_6 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_6 + 8))(rcx_6, 1)
            
            r14[1] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

if (r12 != 0)
    sub_140a74f90(r12)

return arg2
