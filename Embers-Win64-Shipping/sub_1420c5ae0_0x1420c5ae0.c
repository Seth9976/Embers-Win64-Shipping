// 函数: sub_1420c5ae0
// 地址: 0x1420c5ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = 0
int64_t var_48
int64_t var_38
int64_t* rcx_4
int32_t rbx_2
int64_t rsi

if (arg4 s< 0)
    int64_t var_30_1 = 0
    rcx_4 = &var_38
    rbx_2 = 2
    rsi = 0
else
    int32_t r10_1 = arg2[1].d
    int32_t rbx = r10_1 - 1
    
    if (r10_1 == 0)
        rbx = 0
    
    int32_t rcx
    
    if (arg3 s>= 0)
        rcx = rbx
        
        if (arg3 s< rbx)
            rcx = arg3
    else
        rcx = 0
    
    int64_t rdx_1 = sx.q(arg3) + sx.q(arg4)
    int64_t rdi_1 = sx.q(rcx)
    
    if (rdx_1 s< rdi_1)
        rbx = rcx
    else if (rdx_1 s< sx.q(rbx))
        rbx = rdx_1.d
    
    int16_t* const rax_3
    
    if (r10_1 == 0)
        rax_3 = &data_142d40450
    else
        rax_3 = *arg2
    
    int16_t* r15_1 = &rax_3[rdi_1]
    var_48 = 0
    int32_t rbx_1 = rbx - rcx
    int64_t var_40_1 = 0
    rsi = 0
    int32_t rdi_2 = 0
    int32_t rbp_1 = 0
    
    if (r15_1 != 0 && *r15_1 != 0 && rbx_1 s> 0)
        if (rbx_1 + 1 s> 0)
            sub_1405947f0(&var_48, rbx_1 + 1)
            rbp_1 = var_40_1:4.d
            rdi_2 = var_40_1.d
            rsi = var_48
        
        rdi_2 = rdi_2 + 1 + rbx_1
        var_40_1.d = rdi_2
        
        if (rdi_2 s> rbp_1)
            sub_140594770(&var_48)
            rbp_1 = var_40_1:4.d
            rdi_2 = var_40_1.d
            rsi = var_48
        
        UnDecorator::getReferenceType(rsi, r15_1, rbx_1 * 2)
        *(rsi + (sx.q(rdi_2) << 1) - 2) = 0
    
    rcx_4 = &var_48
    var_40_1.d = rdi_2
    rbx_2 = 1
    var_40_1:4.d = rbp_1
    var_48 = rsi

*rcx_4 = 0
int32_t rax_5 = rcx_4[1].d
*arg1 = rsi
arg1[1].d = rax_5
int32_t rax_6 = *(rcx_4 + 0xc)
rcx_4[1] = 0
*(arg1 + 0xc) = rax_6

if ((rbx_2.b & 2) != 0)
    int64_t rcx_5 = var_38
    rbx_2 &= 0xfffffffd
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if ((rbx_2.b & 1) != 0)
    int64_t rcx_6 = var_48
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

return arg1
