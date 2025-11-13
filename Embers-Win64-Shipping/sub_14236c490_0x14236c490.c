// 函数: sub_14236c490
// 地址: 0x14236c490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg2 + 0xc0)
int64_t rax = sub_141e5f950(arg2 + 0xb0, arg1)
int64_t arg_10 = rax
void* const rcx_6

if (*(r15 + 0x668) == *(r15 + 0x694))
label_14236c530:
    rcx_6 = nullptr
else
    void* r8_1 = *(r15 + 0x6a0)
    void* r9_1 = r15 + 0x698
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_3 =
        *(r9_1 + ((sx.q((rax u>> 0x20).d * 0x17 + rax.d) & (sx.q(*(r15 + 0x6a8)) - 1)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_14236c530_1:
        rcx_6 = nullptr
    else
        int64_t r8_2 = *(r15 + 0x660)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_3) * 3
            rcx_6 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == rax)
                break
            
            rax_3 = *(rcx_6 + 0x10)
            
            if (rax_3 == 0xffffffff)
                goto label_14236c530_2
        
        if (rax_3 == 0xffffffff)
        label_14236c530_2:
            rcx_6 = nullptr

void* rax_4 = rcx_6 + 8

if (rcx_6 == 0)
    rax_4 = nullptr

uint64_t rdx_6

if (rax_4 != 0)
    rdx_6 = zx.q(*rax_4)
else
    int64_t rsi_1 = sx.q(*(r15 + 0x6b8))
    int32_t rax_5 = (rsi_1 + 0x10).d
    *(r15 + 0x6b8) = rax_5
    
    if (rax_5 s> *(r15 + 0x6bc))
        sub_1405daba0(r15 + 0x6b0)
    
    int32_t arg_8 = rsi_1.d
    int64_t* rax_7 = rsi_1 + *(r15 + 0x6b0)
    *rax_7 = 0
    rax_7[1] = 0
    sub_141cf16a0(r15 + 0x660, &arg_10, &arg_8)
    rdx_6 = sx.q(arg_8)
    *(rdx_6 + *(r15 + 0x6b0)) = 1

int32_t* r8_5 = sx.q(rdx_6.d + 4) + *(r15 + 0x6b0)
int32_t rdx_8 = *r8_5
int32_t r9_3 = r8_5[1] + 1
r8_5[1] = r9_3
int32_t rcx_9 = rdx_8
int32_t result = *(arg1 + 0x30)

if (rdx_8 s< result && r9_3 == r8_5[2])
    int32_t rdx_9 = rdx_8 + 1
    *r8_5 = rdx_9
    
    if (rdx_9 s< *(arg1 + 0x30))
        while (*(*(arg1 + 0x28) + (sx.q(rdx_9) << 3)) == 0)
            rdx_9 += 1
            *r8_5 = rdx_9
            
            if (rdx_9 s>= *(arg1 + 0x30))
                break
    
    r8_5[1] = 0
    *(arg2 + 0x100) &= 0xfffffff3
    rcx_9 = *r8_5
    result = *(arg1 + 0x30)

result.b = rcx_9 s< result
return result
