// 函数: sub_142b568b0
// 地址: 0x142b568b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2 + arg3
int32_t rcx = arg4 + arg5

if (arg3 == 0 || arg5 != 0)
    arg4.b = 0
else
    arg4.b = 1

if (arg3 != 0 || arg5 == 0)
    arg2.b = 0
else
    arg2.b = 1

if (rcx - r10 s< 0)
    int32_t rax_4 = arg7 & 3
    bool cond:0_1
    
    if (rax_4 == 1)
        cond:0_1 = arg4.b != 0
    label_142b5693d:
        
        if (cond:0_1)
            return zx.q(rcx)
    else if (rax_4 == 3)
        cond:0_1 = arg2.b != 0
        goto label_142b5693d
    
    if (rax_4 != 1)
        if (rax_4 == 3 && arg4.b != 0)
            return zx.q(r10)
    else if (arg2.b != 0)
        return zx.q(r10)
    
    int32_t r8_1
    r8_1.b = arg7.b & 0xc
    
    if (r8_1.b == 4)
        rcx = r10
    
    return zx.q(rcx)

int32_t rax_1 = arg6 & 3
bool cond:1_1

if (rax_1 == 1)
    cond:1_1 = arg4.b != 0
label_142b568fd:
    
    if (cond:1_1)
        return zx.q(r10)
else if (rax_1 == 3)
    cond:1_1 = arg2.b != 0
    goto label_142b568fd
bool cond:2_1

if (rax_1 == 1)
    cond:2_1 = arg2.b != 0
label_142b56910:
    
    if (cond:2_1)
        return zx.q(rcx)
else if (rax_1 == 3)
    cond:2_1 = arg4.b != 0
    goto label_142b56910
int32_t r8
r8.b = arg6.b & 0xc

if (r8.b == 0xc)
    rcx = r10

return zx.q(rcx)
