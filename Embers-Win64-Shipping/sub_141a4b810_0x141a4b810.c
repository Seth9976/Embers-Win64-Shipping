// 函数: sub_141a4b810
// 地址: 0x141a4b810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t i_4 = 0
sub_140a2ccb0(arg3, &var_18, &data_142d404c4, 1)
void* const rax_8

if (arg2 != 0)
    int32_t rax_1 = *(arg2 + 0xc)
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18

int64_t* rbx_1

if (arg2 == 0 || ((*(rax_8 + 8) u>> 0x1d).b & 1) != 0 || i_4 s<= 0)
    sub_140d3a3a0(arg1, nullptr)
    rbx_1 = var_18
    arg1[1] = 0
    __builtin_memset(arg1 + 0x14, 0, 0x1c)
    arg1[2].d = 0xffffffff
    int32_t i_3 = i_4
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_8 = *rbx_1
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rbx_1 = &rbx_1[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
        rbx_1 = var_18
else
    sub_141a4bb60(arg1, arg2, *(arg2 + 0x10), &var_18, 0)
    int32_t i_2 = i_4
    rbx_1 = var_18
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_6 = *rbx_1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_1 = &rbx_1[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rbx_1 = var_18

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return arg1
