// 函数: sub_142c62f70
// 地址: 0x142c62f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if ((*(*(arg1 + 0x438) + 0x80) & 0x20) == 0 || *(arg1 + 0x3f8) != 0)
    int64_t rax_3 = data_143ccb8b0(arg2)
    *(arg1 + 0x1f0) = rax_3
    
    if (rax_3 == 0)
        *(arg1 + 0x1f8) = 0
    else
        *(arg1 + 0x1f8) = data_143ccb8b0(arg3)
else
    int64_t rax_1 = data_143ccb8b0("anonymous")
    *(arg1 + 0x1f0) = rax_1
    
    if (rax_1 == 0)
        *(arg1 + 0x1f8) = 0
    else
        *(arg1 + 0x1f8) = data_143ccb8b0("ftp@example.com")

if (*(arg1 + 0x1f0) == 0 || *(arg1 + 0x1f8) == 0)
    return 0x1b

if (*arg4 != 0)
    int64_t rax_5 = data_143ccb8b0(arg4)
    *(arg1 + 0x200) = rax_5
    
    if (rax_5 == 0)
        rdi = 0x1b

return zx.q(rdi)
