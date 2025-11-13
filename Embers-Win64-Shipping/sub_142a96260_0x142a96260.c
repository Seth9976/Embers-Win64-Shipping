// 函数: sub_142a96260
// 地址: 0x142a96260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    sub_142a54ed0(arg1, arg2)
    int64_t* rcx = *(arg1 + 0x1f8)
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
        *(arg1 + 0x1f8) = 0
    
    int32_t arg_8 = 0
    sub_142aea410(arg1 + 0x148, arg2 + 0x148, 0, 1, arg3, &arg_8)
    int64_t* rcx_2 = *(arg1 + 0x210)
    
    if (rcx_2 != arg1 + 0x218 && rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    *(arg1 + 0x210) = arg1 + 0x218
    int64_t* rcx_3 = *(arg2 + 0x210)
    
    if (rcx_3 != 0 && rcx_3 != arg2 + 0x218)
        *(arg1 + 0x210) = (*(*rcx_3 + 0x38))(rcx_3)
    
    sub_142a72390(arg1 + 0x218, arg2 + 0x218)
    
    if (*(arg1 + 0x210) == 0)
        *(arg1 + 0x210) = arg1 + 0x218
    
    int64_t* rcx_5 = *(arg1 + 0x1d8)
    
    if (rcx_5 != 0)
        sub_142b0ed90(rcx_5)
        *(arg1 + 0x1d8) = 0
    
    void* rcx_6 = *(arg2 + 0x1d8)
    
    if (rcx_6 != 0)
        *(arg1 + 0x1d8) = sub_142b0ec80(rcx_6)
    
    int32_t rdx_2 = *(arg2 + 0x1e0)
    void* rcx_7 = *(arg1 + 0x1e8)
    *(arg1 + 0x1e0) = rdx_2
    int32_t r8_1 = *(arg2 + 0x1e4)
    *(arg1 + 0x1e4) = r8_1
    *(arg1 + 0x278) = *(arg2 + 0x278)
    sub_142b100e0(rcx_7, rdx_2, r8_1.w)
    sub_142b10100(*(arg1 + 0x1f0))

return arg1
