// 函数: sub_142a61cd0
// 地址: 0x142a61cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg1

if (*arg3 s> 0 || arg1 == arg2)
    return arg1

if (arg2 != 0)
    int64_t rsi
    
    if (arg1 != 0)
        if (*(arg1 + 0xb4) != 0x12c9b17 || *(arg1 + 0xb8) != 0x12bb38b)
            rsi.b = 1
        else
            rsi.b = 0
        
        sub_142a61820(arg1, 0)
    else
        rsi.b = 0
        int128_t* rax_1 = sub_142a7dd00(0xc8)
        rbx = rax_1
        
        if (rax_1 == 0)
            *arg3 = 7
            return rax_1
    
    *rbx = *arg2
    rbx[1] = arg2[1]
    rbx[2] = arg2[2]
    rbx[3] = arg2[3]
    rbx[4] = arg2[4]
    rbx[5] = arg2[5]
    rbx[6] = arg2[6]
    rbx[7] = arg2[7]
    rbx[8] = arg2[8]
    rbx[9] = arg2[9]
    rbx[0xa] = arg2[0xa]
    rbx[0xb] = arg2[0xb]
    rbx[0xc].q = arg2[0xc].q
    rbx[2].q = 0
    *(rbx + 0xa8) = 0
    char* rdx = arg2[2].q
    
    if (rdx != 0)
        sub_142a616f0(rbx, rdx, *(arg2 + 0xa8), arg3)
    
    if (rsi.b == 0)
        *(rbx + 0xb4) = 0x12c9b17
        *(rbx + 0xb8) = 0x12bb38b
    else
        *(rbx + 0xb4) = 0
    
    void* rcx_2 = *(rbx + 8)
    
    if (rcx_2 != 0)
        sub_142a5f9a0(rcx_2)

return rbx
