// 函数: sub_142875330
// 地址: 0x142875330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *(arg1 + 8)
int32_t r10

if (not(test_bit(arg3, 0xb)))
    int32_t rax_2
    
    if ((*(*(r9 + 0xc0) + 0x60) & 8) == 0)
        rax_2 = *r9
    
    if ((*(*(r9 + 0xc0) + 0x60) & 8) != 0 || rax_2 s< 0x304 || rax_2 == 0x10000)
        r10 = 0
    else
        r10 = 1
else
    r10 = 1

if (((*(*(r9 + 0xc0) + 0x60) & 8) == 0 || (arg2.b & 4) == 0)
        && (*arg1 != 0x300 || (arg2.b & 8) != 0))
    int32_t rax_5
    
    if (r10 == 0)
        rax_5 = arg2 & 0x20
        
        if (rax_5 == 0 || arg3.b s< 0)
            goto label_1428753a8
    else if ((arg2.b & 0x10) == 0)
        rax_5 = arg2 & 0x20
    label_1428753a8:
        
        if ((arg1[0xe] == 0 || r10 != 0 || rax_5 == 0) && (arg1[0x32] == 0 || (arg2.b & 0x40) == 0))
            return 1

return 0
