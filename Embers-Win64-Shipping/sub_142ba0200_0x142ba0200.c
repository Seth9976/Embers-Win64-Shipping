// 函数: sub_142ba0200
// 地址: 0x142ba0200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = (*(arg1 + 0x116c)).b
int32_t rsi = 0
int64_t rdi = sx.q(arg2)
int32_t r9 = arg3
void* rdx_1 = rdi * 0x1c58 + *(arg1 + 0x1170)

if ((rbx & 4) == 0)
    return zx.q(arg3)

if (r9 s< 0)
    r9 = neg.d(r9)
    rsi = 1

if (rdi.d == 1)
    if ((rbx & 2) == 0)
        goto label_142ba028d
    
    goto label_142ba0264

if ((rbx & 1) != 0)
label_142ba0264:
    int32_t rax_2 = sub_142ba1b00(rdx_1 + 0x48, *(rdx_1 + 0x44), r9)
    
    if (rdi.d != 1)
        if ((rbx & 8) == 0)
            if (rax_2 s>= 0x30)
                if (rax_2 s< 0x80)
                    r9 = (rax_2 + 0x16) & 0xffffffc0
                else
                    r9 = (rax_2 + 0x20) & 0xffffffc0
            else
                r9 = (rax_2 + 0x40) s>> 1
        else if (rax_2 s>= 0x40)
            r9 = (rax_2 + 0x20) & 0xffffffc0
        else
            r9 = 0x40
    else if (rax_2 s< 0x40)
        r9 = 0x40
    else
        r9 = (rax_2 + 0x10) & 0xffffffc0
else
label_142ba028d:
    int32_t rax_4
    int32_t rcx_1
    
    if (*(rdx_1 + 0x44) u> 0)
        rcx_1 = *(rdx_1 + 0x4c)
        rax_4 = r9 - rcx_1
        
        if (r9 - rcx_1 s< 0)
            rax_4 = rcx_1 - r9
    
    if (*(rdx_1 + 0x44) u> 0 && rax_4 s< 0x28)
        r9 = rcx_1
        
        if (rcx_1 s< 0x30)
            r9 = 0x30
    else if (r9 s< 0x36)
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(0x36 - r9)
        r9 += (temp2_1 - temp1_1) s>> 1
    else if (r9 s< 0xc0)
        int32_t rax_10 = r9
        r9 &= 0xffffffc0
        int32_t rax_9 = rax_10 & 0x3f
        
        if (rax_9 u< 0xa)
            r9 += rax_9
        else if (rax_9 u< 0x16)
            r9 += 0xa
        else if (rax_9 u< 0x2a || rax_9 u>= 0x36)
            r9 += rax_9
        else
            r9 += 0x36

if (rsi == 0)
    return zx.q(r9)

return zx.q(neg.d(r9))
