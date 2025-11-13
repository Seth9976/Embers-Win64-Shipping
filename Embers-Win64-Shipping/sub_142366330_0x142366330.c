// 函数: sub_142366330
// 地址: 0x142366330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* const rcx_3

if (*(arg3 + 0x668) == *(arg3 + 0x694))
labelid_12:
    rcx_3 = nullptr
else
    void* r9_1 = *(arg3 + 0x6a0)
    void* r10_1 = arg3 + 0x698
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t rax_5 =
        *(r10_1 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & (sx.q(*(arg3 + 0x6a8)) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1423663c0:
        rcx_3 = nullptr
    else
        int64_t r8 = *(arg3 + 0x660)
        
        while (true)
            int64_t rdx_2 = sx.q(rax_5) * 3
            rcx_3 = r8 + (rdx_2 << 3)
            
            if (*(r8 + (rdx_2 << 3)) == arg2)
                break
            
            rax_5 = *(rcx_3 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_1423663c0_1
        
        if (rax_5 == 0xffffffff)
        label_1423663c0_1:
            rcx_3 = nullptr

void* rax_6 = rcx_3 + 8

if (rcx_3 == 0)
    rax_6 = nullptr

int32_t rax_11
int32_t rcx_6
int32_t* rdx_5
int32_t* rsi_2

if (rax_6 != 0)
    int64_t rcx_7 = sx.q(*rax_6)
    rdx_5 = *(arg3 + 0x6b0)
    rax_11 = (rcx_7 + 4).d
    rsi_2 = rdx_5 + rcx_7
    rcx_6 = *(rdx_5 + rcx_7)
else
    int64_t rdi_1 = sx.q(*(arg3 + 0x6b8))
    int32_t rax_7 = (rdi_1 + 8).d
    *(arg3 + 0x6b8) = rax_7
    
    if (rax_7 s> *(arg3 + 0x6bc))
        sub_1405daba0(arg3 + 0x6b0)
    
    int32_t arg_8 = rdi_1.d
    *(rdi_1 + *(arg3 + 0x6b0)) = 0
    sub_141cf16a0(arg3 + 0x660, &arg_10, &arg_8)
    int64_t rax_10 = sx.q(arg_8)
    rcx_6 = 1
    rsi_2 = rax_10 + *(arg3 + 0x6b0)
    rax_11 = rax_10.d + 4
    *rsi_2 = 1
    rdx_5 = *(arg3 + 0x6b0)

void* rbx_2 = sx.q(rax_11) + rdx_5

if (rcx_6 != 0)
    *rbx_2 = sub_14235b790(arg1)
    *rsi_2 = 0

int64_t r8_2 = sx.q(*rbx_2)

if (r8_2.d s< *(arg1 + 0x30))
    int64_t* rsi_3 = *(*(arg1 + 0x28) + (r8_2 << 3))
    
    if (rsi_3 != 0)
        jump(*(*rsi_3 + 0x2b8))

return 0
