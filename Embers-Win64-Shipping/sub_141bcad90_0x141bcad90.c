// 函数: sub_141bcad90
// 地址: 0x141bcad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0

if (*(arg1 - 0x68) != 0)
    int64_t* rcx = *(arg1 - 0x70)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
        int64_t* rcx_1
        
        if (*(arg1 - 0x68) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 - 0x70)
        
        *(arg1 - 0x78) = (*(*rcx_1 + 0x48))(rcx_1)

if (*(arg1 - 0x78) == 0)
    return 

int64_t i = *(arg1 + 0x190)
int32_t rcx_2 = 0
void** r14_1 = *(arg1 + 0x1e8)

if (i != 0)
    int64_t* r9_1 = *r14_1
    int64_t* rcx_3 = r9_1
    void* r8_1 = &r9_1[sx.q(r14_1[1].d)]
    
    if (r9_1 == r8_1)
    label_141bcae13:
        rcx_2 = -1
    else
        while (*rcx_3 != i)
            rcx_3 = &rcx_3[1]
            
            if (rcx_3 == r8_1)
                goto label_141bcae13
        
        rcx_2 = ((rcx_3 - r9_1) s>> 3).d

void* r10_1 = *r14_1
int64_t r9_2 = sx.q(r14_1[1].d)
void* rdx = r10_1
void* r8_2 = r10_1 + (r9_2 << 3)
int32_t rdx_1

if (r10_1 == r8_2)
label_141bcae3e:
    rdx_1 = -1
else
    while (*rdx != arg2)
        rdx += 8
        
        if (rdx == r8_2)
            goto label_141bcae3e
    
    rdx_1 = ((rdx - r10_1) s>> 3).d

int32_t r8_3

if (rcx_2 s>= 0)
    r8_3 = r9_2.d
    
    if (rcx_2 s< r9_2.d)
        r8_3 = rcx_2
else
    r8_3 = 0

if (rdx_1 s>= 0)
    if (rdx_1 s< r9_2.d)
        r9_2 = zx.q(rdx_1)
    
    rsi = r9_2.d

int32_t rax = r8_3

if (rsi s>= r8_3)
    rax = rsi

if (rsi s>= r8_3)
    rsi = r8_3

if (rsi s<= rax)
    int64_t rbx_2 = sx.q(rsi) << 3
    uint64_t i_2 = zx.q(rax - rsi + 1)
    uint64_t i_1
    
    do
        int32_t arg_8
        sub_140b91690(arg1 + 0x138, &arg_8, *r14_1 + rbx_2, nullptr)
        rbx_2 += 8
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

Dbg1::Reset(arg1 - 0x50)
