// 函数: sub_1420b6ef0
// 地址: 0x1420b6ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi_1

if (*arg2 == 0)
    rdi_1 = 0
else
    void* rax_1 = sub_140d41340()
    
    if (rax_1 == 0)
        rdi_1 = 0
    else
        rdi_1 = *arg2
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdi_1 + 0x38) || *(*(rdi_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdi_1 = 0

*(arg1 + 0x20) = 0
*arg1 = 0xffffffff
arg1[1] = 0
__builtin_memset(&arg1[4], 0, 0x14)
int64_t arg_8 = 0

if (arg1[9] s<= 0xffffffff)
    sub_1405947f0(&arg1[6], 0)

int16_t* rax_4 = *(arg1 + 0x18)

if (rax_4 != 0)
    *rax_4 = 0

arg1[2] = 0

if (rdi_1 == 0)
    *arg1 = 0xffffffff
    arg1[1] = 0
    *(arg1 + 0x10) = 0
    int32_t rax_7 = arg1[9]
    int64_t arg_10 = 0
    arg1[8] = 0
    
    if (rax_7 s< 0 && rax_7 != 0)
        sub_1405947f0(&arg1[6], 0)
    
    int16_t* rax_8 = *(arg1 + 0x18)
    
    if (rax_8 != 0)
        *rax_8 = 0
    
    arg1[2] = 0
else
    void var_38
    sub_140b97b00(&arg1[4], sub_140d21d60(&var_38, rdi_1))
    int64_t var_30
    
    if (var_30 != 0)
        sub_140a74f90(var_30)
    
    sub_140d3a3a0(arg1, rdi_1)
    int32_t rax_6 = 0
    
    if (0 == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_6 = data_1439aaa30
    
    arg1[2] = rax_6

return arg1
