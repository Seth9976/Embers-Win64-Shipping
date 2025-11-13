// 函数: sub_140ea1c70
// 地址: 0x140ea1c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
(*(*arg1 + 0x18))()
(*(*arg1 + 0x10))(arg1, arg3, 0)
void*** rax_2 = j_sub_140a82f30(0x168)
void*** var_38
void*** rbp

if (rax_2 == 0)
    rbp = nullptr
else
    void* r8_2 = (sx.q(arg1[4].d) << 4) + arg1[3]
    int64_t var_48 = *(r8_2 - 0x10)
    void* rcx_2 = *(r8_2 - 8)
    void* var_40_1 = rcx_2
    
    if (rcx_2 != 0)
        *(rcx_2 + 8) += 1
    
    var_38 = *arg2
    void* rax_4 = arg2[1]
    void* var_30_1 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    rbp = sub_140e965e0(rax_2, &arg_18, &var_38, &var_48, arg4, arg5, arg6, arg1[0xa].b, 1)

void*** rax_9 = j_sub_140a82f30(0x18)
void*** rdi_1 = rax_9

if (rax_9 == 0)
    rdi_1 = nullptr
else
    rax_9[1].d = 1
    *(rax_9 + 0xc) = 1
    *rdi_1 = &data_142d42ea8
    rdi_1[2] = rbp

void**** rsi = &rbp[1]

if (rbp == 0)
    rsi = nullptr

if (rsi != 0)
    void* rax_10
    
    if (*rsi != 0)
        rax_10 = rsi[1]
    
    if (*rsi == 0 || rax_10 == 0 || *(rax_10 + 8) s<= 0)
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        *rsi = rbp
        int64_t* rcx_4 = rsi[1]
        
        if (rdi_1 != rcx_4)
            if (rdi_1 != 0)
                *(rdi_1 + 0xc) += 1
                rcx_4 = rsi[1]
            
            if (rcx_4 != 0)
                int32_t temp6_1 = *(rcx_4 + 0xc)
                *(rcx_4 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rcx_4 + 8))(rcx_4, 1)
            
            rsi[1] = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp5_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rdi_1)[1](rdi_1, 1)

int32_t rcx_7 = *(arg1[1] + 0x58)
var_38 = *arg2
void* rax_16 = arg2[1]
void* var_30_2 = rax_16

if (rax_16 != 0)
    *(rax_16 + 8) += 1

int64_t* var_78
var_78.d = rcx_7
void arg_8
int64_t* rax_17 = sub_140ebce80(&arg_8, arg1[7], arg7, &var_38, var_78.d)
var_38 = rbp
void*** var_30_3 = rdi_1
*(rbp + 0x8c) = *rax_17

if (rdi_1 != 0)
    rdi_1[1].d += 1

sub_140ea20e0(arg1[1], &var_38)
int64_t result = (*(*arg1 + 0x10))(arg1, arg3, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        result = (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*rdi_1)[1](rdi_1, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
