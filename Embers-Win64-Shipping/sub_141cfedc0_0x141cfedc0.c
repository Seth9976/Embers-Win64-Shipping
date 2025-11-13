// 函数: sub_141cfedc0
// 地址: 0x141cfedc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = *arg2
*(arg3 + 0x44) = r14 u>> 0x17 & 0x3f
void* const rax_6

if ((r14 u>> 0x1f).b == 0)
    rax_6 = 8
    *arg3 = *(arg2 + 4)
else
    *arg3 = zx.q(arg2[1])
    rax_6 = 4

void* rcx = rax_6 + &arg2[1]
int64_t rax_10

if (((r14 u>> 0x1e).b & 1) == 0)
    rax_10 = 8
    arg3[2] = *rcx
else
    arg3[2] = zx.q(*rcx)
    rax_10 = 4

void* rsi = rcx + rax_10

if (*(arg3 + 0x44) == 0)
    arg3[1] = arg3[2]
else if (((r14 u>> 0x1d).b & 1) == 0)
    arg3[1] = *rsi
    rsi += 8
else
    uint64_t rax_13 = zx.q(*rsi)
    rsi += 4
    arg3[1] = rax_13

char rcx_1 = arg3[9].b
char rcx_2 = rcx_1 | 1

if (((r14 u>> 0x16).b & 1) == 0)
    rcx_2 = rcx_1 & 0xfe

int32_t i = 0
arg3[9].b = rcx_2
uint32_t r15 = zx.d((r14 u>> 6).w)
int32_t rax_19 = 0
arg3[7].d = 0

if (*(arg3 + 0x3c) != r15)
    sub_140888c10(&arg3[6], r15)
    rax_19 = arg3[7].d

if (r15 s> rax_19)
    arg3[7].d = r15
    
    if (r15 s> *(arg3 + 0x3c))
        sub_140888950(&arg3[6], rax_19)
else if (r15 s< rax_19 && rax_19 != r15)
    arg3[7].d = r15
    sub_140888a70(&arg3[6])

arg3[8].d = 0

if (r15 != 0)
    uint64_t rax_21 = arg3[2]
    
    if (rax_21 s>= 0x10000)
        rax_21 = zx.q((r14 & 0x3f) << 0xb)
    
    arg3[8].d = rax_21.d

uint64_t r10 = 0
uint64_t result
result.b = arg3[9].b & 0xfd
*(arg3 + 0x49) = 1
arg3[9].b = result.b
int32_t r9 = *(arg1 + 0xa4)

if (r9 s< 5)
    r10 = *arg3

int64_t rdx_5 = sx.q(arg3[7].d)
bool cond:3_1

if (rdx_5.d == 1)
    char temp1_1 = rdx_5.b & result.b
    cond:3_1 = temp1_1 != 0
    
    if (temp1_1 != 0)
        goto label_141cfef9b
    
    void* rdx_6 = arg3[6]
    
    if ((rdx_6.b & 1) != 0)
        rdx_6 = (rdx_6 s>> 1) + &arg3[6]
    
    int64_t rcx_6 = 0x30
    
    if (r9 s>= 3)
        rcx_6 = 0x35
        
        if (*(arg3 + 0x44) != 0)
            rcx_6 = 0x49
    
    int64_t rax_22 = rcx_6 + 8
    
    if (r9 s>= 2)
        rax_22 = rcx_6
    
    int64_t rcx_7 = rax_22 + r10
    *rdx_6 = rcx_7
    *(rdx_6 + 8) = rcx_7 + arg3[1]
else if (rdx_5.d s> 0)
    cond:3_1 = (result.b & 1) != 0
label_141cfef9b:
    int64_t r11_1 = 1
    
    if (cond:3_1)
        r11_1 = 0x10
    
    int64_t rcx_9 = 0x30
    
    if (r9 s>= 3)
        rcx_9 = 0x35
        
        if (*(arg3 + 0x44) != 0)
            rcx_9 = (rdx_5 << 4) + 0x39
    
    int64_t r8 = rcx_9 + 8
    
    if (r9 s>= 2)
        r8 = rcx_9
    
    int64_t r8_1 = r8 + r10
    
    if (rdx_5.d s> 0)
        int64_t r9_1 = 0
        
        do
            void* rdx_9 = arg3[6]
            
            if ((rdx_9.b & 1) != 0)
                rdx_9 = (rdx_9 s>> 1) + &arg3[6]
            
            *(rdx_9 + r9_1) = r8_1
            i += 1
            uint64_t rcx_12 = zx.q(*rsi)
            rsi += 4
            *(rdx_9 + r9_1 + 8) = rcx_12 + r8_1
            r9_1 += 0x10
            r8_1 += (r11_1 - 1 + rcx_12) & neg.q(r11_1)
        while (i s< arg3[7].d)
result.b = 1
return result
