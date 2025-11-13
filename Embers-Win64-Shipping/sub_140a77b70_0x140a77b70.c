// 函数: sub_140a77b70
// 地址: 0x140a77b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int32_t rbp = 0
int64_t* rbx = *(rsi + 0x48)
int32_t rdx = 0
int64_t* rax = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
        rax = nullptr
    else
        rbx[1].d = rax_1 + 1
        rax = rbx

if (rax != 0)
    void* rsi_1 = *(rsi + 0x40)
    
    if (rsi_1 != 0)
        int32_t arg_8 = 0
        rbp = j_sub_142a7d670(rsi_1, arg3, &arg_8)
        rdx = j_sub_142a79b00(rsi_1, arg3, &arg_8)

void* r9 = *arg1
*arg2 = 0

if (rbp s<= 0)
    rbp = 0

arg2[1] = 0

if (rbp s>= rdx)
    rdx = rbp

if (rdx - rbp s>= 0)
    int32_t r8_2 = *(r9 + 0x58)
    int32_t rsi_2 = r8_2 - 1
    
    if (r8_2 == 0)
        rsi_2 = 0
    
    int32_t rcx_2
    
    if (rbp s>= 0)
        rcx_2 = rsi_2
        
        if (rbp s< rsi_2)
            rcx_2 = rbp
    else
        rcx_2 = 0
    
    int64_t rdx_5 = sx.q(rdx - rbp) + sx.q(rbp)
    int64_t r10_1 = sx.q(rcx_2)
    
    if (rdx_5 s< r10_1)
        rsi_2 = rcx_2
    else if (rdx_5 s< sx.q(rsi_2))
        rsi_2 = rdx_5.d
    
    int16_t* const rax_7
    
    if (r8_2 == 0)
        rax_7 = &data_142d40450
    else
        rax_7 = *(r9 + 0x50)
    
    int16_t* r12_1 = &rax_7[r10_1]
    int64_t var_38 = 0
    int32_t rsi_3 = rsi_2 - rcx_2
    int64_t var_30_1 = 0
    int64_t rbp_1 = 0
    int32_t r14_1 = 0
    int32_t r15_1 = 0
    
    if (r12_1 != 0 && *r12_1 != 0 && rsi_3 s> 0)
        if (rsi_3 + 1 s> 0)
            sub_1405947f0(&var_38, rsi_3 + 1)
            r15_1 = var_30_1:4.d
            r14_1 = var_30_1.d
            rbp_1 = var_38
        
        r14_1 = r14_1 + 1 + rsi_3
        var_30_1.d = r14_1
        
        if (r14_1 s> r15_1)
            sub_140594770(&var_38)
            r15_1 = var_30_1:4.d
            r14_1 = var_30_1.d
            rbp_1 = var_38
        
        UnDecorator::getReferenceType(rbp_1, r12_1, rsi_3 * 2)
        *(rbp_1 + (sx.q(r14_1) << 1) - 2) = 0
    
    if (arg2 != &var_38)
        int64_t rsi_4 = *arg2
        
        if (rsi_4 != 0)
            int64_t* rcx_6 = data_143ddb3f0
            
            if (rcx_6 == 0)
                sub_140a750a0()
                rcx_6 = data_143ddb3f0
            
            (*(*rcx_6 + 0x30))(rcx_6, rsi_4)
        
        *arg2 = rbp_1
        arg2[1].d = r14_1
        *(arg2 + 0xc) = r15_1
    else if (rbp_1 != 0)
        int64_t* rcx_7 = data_143ddb3f0
        
        if (rcx_7 == 0)
            sub_140a750a0()
            rcx_7 = data_143ddb3f0
        
        (*(*rcx_7 + 0x30))(rcx_7, rbp_1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
