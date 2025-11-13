// 函数: sub_140aedb30
// 地址: 0x140aedb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r15 = &data_142d40450
int32_t arg_18 = 0
int16_t** r14 = arg3
char rsi = 0
uint64_t rbx

if (arg3[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *arg3

sub_140b3ac40(&data_1439a90f0, rbx)
int64_t* rax = sub_140aefb30(arg1, r14, 0)
int64_t rdi_1
int64_t var_38

if (rax == 0)
    rdi_1 = var_38
    rbx.b = 0
else
    var_38 = 0
    int32_t rdx_2 = 0
    int32_t var_30_1 = 0
    int32_t rcx_1 = 0
    int32_t var_2c_1 = 0
    rdi_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        rbx = zx.q(rbx_1.d + 1)
        
        if (rbx.d s> 0)
            sub_1405947f0(&var_38, rbx.d)
            rcx_1 = var_2c_1
            rdx_2 = var_30_1
            rdi_1 = var_38
        
        int32_t rax_1 = rbx.d + rdx_2
        int32_t var_30_2 = rax_1
        
        if (rax_1 s> rcx_1)
            sub_140594770(&var_38)
            rdi_1 = var_38
        
        UnDecorator::getReferenceType(rdi_1, arg2, rbx.d * 2)
    
    sub_140a452d0(rax, &arg_18, &var_38)
    int64_t rax_2 = sx.q(arg_18)
    int64_t rdx_7
    
    if (rax_2.d == 0xffffffff)
        rdx_7 = 0
    else
        rdx_7 = rax_2 * 0xb8 + *rax
    
    int64_t rax_3 = rdx_7 + 0x10
    rsi = 1
    
    if (rdx_7 == 0)
        rax_3 = 0
    
    if (rax_3 == 0)
        rbx.b = 0
    else
        rbx = 1

if ((rsi & 1) != 0 && rdi_1 != 0)
    sub_140a74f90(rdi_1)

if (rbx.b != 0)
    if (r14[1].d != 0)
        r15 = *r14
    
    sub_140aeb3d0(&data_14399fee0, r15, arg2)

return zx.q(rbx.b)
