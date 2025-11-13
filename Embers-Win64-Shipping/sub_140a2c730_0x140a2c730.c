// 函数: sub_140a2c730
// 地址: 0x140a2c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1].d
int32_t rdi = rax - 1

if (rax == 0)
    rdi = 0

int32_t rbx_1 = arg3 - rdi

if (rbx_1 s<= 0)
    sub_140596d10(arg2, arg1)
    return arg2

int32_t rbp = 0
int32_t rsi = rbx_1 + 1
int64_t r14 = 0
int64_t var_38 = 0
int32_t var_2c = 0

if (rsi s> 0)
    sub_140594770(&var_38)
    rbp = var_2c
    r14 = var_38

int64_t rcx_2
int64_t rdi_2

if (rbx_1 s> 0)
    rdi_2, rcx_2 = __memfill_u16(r14, 0x20, sx.q(rbx_1))
*(r14 + (sx.q(rbx_1) << 1)) = 0

if (rsi s> 1)
    int32_t rax_3 = arg1[1].d
    int32_t rdi_3 = rax_3 - 1
    
    if (rax_3 == 0)
        rdi_3 = 0
    
    int32_t rax_4
    
    if (rsi == 0)
        rax_4 = rsi + 1
    
    if (rsi != 0 || rdi_3 == 0)
        rax_4 = 0
    
    var_38 = r14
    int32_t rdx_3 = rdi_3 + rax_4 + rsi
    int32_t var_2c_1 = rbp
    
    if (rdx_3 s> rbp)
        sub_1405947f0(&var_38, rdx_3)
        rbp = var_2c_1
        r14 = var_38
    
    int64_t r12_1 = *arg1
    
    if (rdi_3 != 0)
        int64_t rbx_2 = sx.q(rsi)
        int32_t rax_5
        rax_5.b = rsi == 0
        rsi = rbx_2.d + rax_5 + rdi_3
        
        if (rsi s> rbp)
            sub_140594770(&var_38)
            rbp = var_2c_1
            r14 = var_38
        
        int64_t rcx_7
        rcx_7.b = rbx_2.d != 0
        int64_t rbx_3 = r14 + ((rbx_2 - rcx_7) << 1)
        int64_t rdi_4 = sx.q(rdi_3) * 2
        UnDecorator::getReferenceType(rbx_3, r12_1, rdi_4.d)
        *(rdi_4 + rbx_3) = 0
    
    *arg2 = r14
    arg2[1].d = rsi
    *(arg2 + 0xc) = rbp
else
    sub_140596d10(arg2, arg1)
    
    if (r14 != 0)
        sub_140a74f90(r14)

return arg2
