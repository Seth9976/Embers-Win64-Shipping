// 函数: sub_141e61d20
// 地址: 0x141e61d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg3
int32_t rax = *(arg1 + 0x3e0)
*arg2 = -1
arg2[1].w = 1
int64_t* rdx_5

if (rax == *(arg1 + 0x40c))
label_141e61dbe:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = arg1 + 0x410
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x420)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e61dbe_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + *(arg1 + 0x3d8)
            
            if (*rdx_5 == rbx)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_141e61dbe_2
        
        if (rax_4 == 0xffffffff)
        label_141e61dbe_2:
            rdx_5 = nullptr

void* rax_5 = &rdx_5[1]

if (rdx_5 == 0)
    rax_5 = nullptr

if (rax_5 == 0)
    return arg2

void* rax_6 = *rax_5
int32_t rax_7 = *(rax_6 + 0x68)
*arg2 = *(rax_6 + 0x60)
arg2[1].d = rax_7
void* const r8_3

if (*(arg1 + 0x80) == *(arg1 + 0xac))
label_141e61e5b:
    r8_3 = nullptr
else
    int32_t rax_9 = sub_140cde1f0(arg3)
    void* r8_2 = arg1 + 0xb0
    void* rcx_3 = *(r8_2 + 8)
    
    if (rcx_3 != 0)
        r8_2 = rcx_3
    
    int32_t rax_11 = *(r8_2 + (((sx.q(*(arg1 + 0xc0)) - 1) & sx.q(rax_9)) << 2))
    
    if (rax_11 == 0xffffffff)
    label_141e61e5b_1:
        r8_3 = nullptr
    else
        int64_t r9_1 = *(arg1 + 0x78)
        
        while (true)
            int64_t rdx_9 = sx.q(rax_11) * 5
            r8_3 = r9_1 + (rdx_9 << 3)
            
            if (*(r9_1 + (rdx_9 << 3)) == *arg3 && *(r8_3 + 8) == arg3[1])
                break
            
            rax_11 = *(r8_3 + 0x20)
            
            if (rax_11 == 0xffffffff)
                goto label_141e61e5b_2
        
        if (rax_11 == 0xffffffff)
        label_141e61e5b_2:
            r8_3 = nullptr

void* rcx_6 = r8_3 + 0x10

if (r8_3 == 0)
    rcx_6 = nullptr

if (rcx_6 != 0)
    char rdx_10 = *(rcx_6 + 0xc)
    
    if ((rdx_10 & 1) != 0)
        *arg2 = *rcx_6
    
    if ((rdx_10 & 2) != 0)
        arg2[1].b = *(rcx_6 + 8)
    
    if ((rdx_10 & 4) != 0)
        *(arg2 + 4) = *(rcx_6 + 4)
    
    if ((rdx_10 & 8) != 0)
        *(arg2 + 9) = *(rcx_6 + 9)

if (*arg2 s< 0)
    *arg2 = 1

return arg2
