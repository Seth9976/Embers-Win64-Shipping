// 函数: sub_141d14550
// 地址: 0x141d14550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    int64_t rax
    rax.b = 1
    return rax

int32_t rdx = 0
int32_t rcx = 0
int64_t var_18 = 0
int64_t var_10 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rcx = var_10:4.d
        rdx = var_10.d
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_10.d = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)

int16_t* rdx_3

if (*(arg1 + 0x20) == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *(arg1 + 0x18)

int32_t rax_2

if (sub_140a2c910(&var_18, rdx_3, 1).b != 0)
    if (*(arg1 + 0x10) == 0)
    label_141d1462f:
        int64_t* rdi_1 = *(arg1 + 8)
        int64_t rbx_3 = sx.q(rdi_1[1].d)
        rax_2 = (rbx_3 + 1).d
        rdi_1[1].d = rax_2
        
        if (rax_2 s> *(rdi_1 + 0xc))
            sub_1405a4f90(rdi_1)
        
        int64_t* rbx_5 = (rbx_3 << 4) + *rdi_1
        *rbx_5 = 0
        int32_t rdi_2 = var_10.d
        int64_t rsi_1 = var_18
        rbx_5[1].d = rdi_2
        
        if (rdi_2 != 0)
            sub_1405a4c70(rbx_5, rdi_2, 0)
            memcpy(*rbx_5, rsi_1, rdi_2 * 2)
        else
            *(rbx_5 + 0xc) = rdi_2
    else
        int32_t rax_3 = sub_141d04e90(&var_18)
        
        if (rax_3 == 0xffffffff)
            goto label_141d1462f
        
        int64_t* rcx_6 = *(arg1 + 0x10)
        int64_t r8_2 = *rcx_6
        
        if ((*(r8_2 + 8))(rcx_6, zx.q(rax_3), r8_2) != 1)
            goto label_141d1462f

int64_t rcx_10 = var_18

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

rax_2.b = 1
return rax_2
