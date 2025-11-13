// 函数: sub_141f89250
// 地址: 0x141f89250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rcx = *(arg1 + 0x228)
int64_t var_38
int16_t* var_28
int64_t var_18
int64_t* rcx_1
int32_t rbx_1

if (rcx == 0)
    arg_8.q = *(arg1 + 0x18)
    sub_140b63b70(&arg_8, &var_28)
    int16_t* const rsi_1 = &data_142d40450
    int32_t rdx_2 = 0
    var_38 = 0
    int32_t var_20
    
    if (var_20 != 0)
        rsi_1 = var_28
    
    int32_t rcx_3 = 0
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    
    if (rsi_1 != 0 && *rsi_1 != 0)
        int64_t rbx_2 = -1
        
        do
            rbx_2 += 1
        while (rsi_1[rbx_2] != 0)
        
        if (rbx_2.d + 1 s> 0)
            sub_1405947f0(&var_38, rbx_2.d + 1)
            rcx_3 = var_2c_1
            rdx_2 = var_30_1
        
        int32_t rax_3 = rbx_2.d + 1 + rdx_2
        int32_t var_30_2 = rax_3
        
        if (rax_3 s> rcx_3)
            sub_140594770(&var_38)
        
        UnDecorator::getReferenceType(var_38, rsi_1, (rbx_2.d + 1) * 2)
    
    rcx_1 = &var_38
    rbx_1 = 6
else
    rcx_1 = sub_1422a12b0(rcx, &var_18)
    rbx_1 = 1

*arg2 = 0
*arg2 = *rcx_1
*rcx_1 = 0
arg2[1].d = rcx_1[1].d
*(arg2 + 0xc) = *(rcx_1 + 0xc)
rcx_1[1] = 0

if ((rbx_1.b & 4) != 0)
    int64_t rcx_7 = var_38
    rbx_1 &= 0xfffffffb
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if ((rbx_1.b & 2) != 0)
    int16_t* rcx_8 = var_28
    rbx_1 &= 0xfffffffd
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if ((rbx_1.b & 1) != 0)
    int64_t rcx_9 = var_18
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

return arg2
