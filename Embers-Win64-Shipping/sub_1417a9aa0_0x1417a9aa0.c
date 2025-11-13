// 函数: sub_1417a9aa0
// 地址: 0x1417a9aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int16_t arg_8 = 0
int64_t* rax = arg2
int64_t rsi = sx.q(arg1[1].d)
int32_t rdx = arg2[1].d

if (rdx s> rsi.d)
    arg1[1].d = rdx
    int32_t i_2 = rdx - rsi.d
    
    if (rdx s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t* rax_3 = (rsi << 4) + *arg1
    
    if (i_2 != 0)
        int32_t i
        
        do
            *rax_3 = 0
            rax_3 = &rax_3[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    rax = arg2
else if (rdx s< rsi.d)
    sub_1417b4190(arg1, rdx, rsi.d - rdx, 1)
    rax = arg2

int32_t i_1 = 0

if (arg1[1].d s> 0)
    int64_t* arg_18
    int64_t* rbx_2 = arg_18
    int64_t r12_1 = 0
    
    do
        int64_t* r14_1 = *rax
        int64_t* rbp_1 = nullptr
        int64_t* rcx = *(r14_1 + r12_1)
        int64_t* arg_20
        int64_t* rax_5
        
        if (rcx == 0)
            rdi |= 2
            rax_5 = &arg_18
            rbx_2 = nullptr
            arg_18 = nullptr
        else
            rdi |= 1
            rax_5 = (*(*rcx + 0x58))(rcx, &arg_20)
        
        int64_t* rsi_2 = nullptr
        void var_58
        
        if (&var_58 != rax_5)
            rbp_1 = *rax_5
            *rax_5 = 0
            rsi_2 = rbp_1
            rbx_2 = arg_18
        
        if ((rdi.b & 2) != 0)
            rdi &= 0xfffffffd
            
            if (rbx_2 != 0)
                (**rbx_2)(rbx_2, 1)
        
        if ((rdi.b & 1) != 0)
            int64_t* rcx_2 = arg_20
            rdi &= 0xfffffffe
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
        
        int16_t rax_8 = *(r14_1 + r12_1 + 8)
        int64_t* r14_3 = *arg1 + r12_1
        
        if (r14_3 != &var_58)
            int64_t* rcx_3 = *r14_3
            rsi_2 = nullptr
            *r14_3 = rbp_1
            
            if (rcx_3 != 0)
                (**rcx_3)(rcx_3, 1)
        
        r14_3[1].w = rax_8
        
        if (rsi_2 != 0)
            (**rsi_2)(rsi_2, 1)
        
        rax = arg2
        i_1 += 1
        r12_1 += 0x10
    while (i_1 s< arg1[1].d)

void* result = &arg2[2]

if (&arg1[2] == result)
    return result

int32_t rdi_1 = *(result + 8)
int64_t rsi_3 = *result
int32_t r8_2 = *(arg1 + 0x1c)
arg1[3].d = rdi_1

if (rdi_1 == 0 && r8_2 == 0)
    *(arg1 + 0x1c) = rdi_1
    return result

sub_1405a4c70(&arg1[2], rdi_1, r8_2)
return memcpy(arg1[2], rsi_3, rdi_1 * 2)
