// 函数: sub_142366200
// 地址: 0x142366200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* const rcx_3

if (*(arg3 + 0x668) == *(arg3 + 0x694))
labelid_a:
    rcx_3 = nullptr
else
    void* r9_1 = *(arg3 + 0x6a0)
    void* r10_1 = arg3 + 0x698
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t rax_5 =
        *(r10_1 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & (sx.q(*(arg3 + 0x6a8)) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_142366280:
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
                goto label_142366280_1
        
        if (rax_5 == 0xffffffff)
        label_142366280_1:
            rcx_3 = nullptr

void* rax_6 = rcx_3 + 8

if (rcx_3 == 0)
    rax_6 = nullptr

uint64_t rdx_5

if (rax_6 != 0)
    rdx_5 = zx.q(*rax_6)
else
    int64_t rdi_1 = sx.q(*(arg3 + 0x6b8))
    int32_t rax_7 = (rdi_1 + 8).d
    *(arg3 + 0x6b8) = rax_7
    
    if (rax_7 s> *(arg3 + 0x6bc))
        sub_1405daba0(arg3 + 0x6b0)
    
    int32_t arg_18 = rdi_1.d
    *(rdi_1 + *(arg3 + 0x6b0)) = 0
    sub_141cf16a0(arg3 + 0x660, &arg_10, &arg_18)
    rdx_5 = sx.q(arg_18)
    *(rdx_5 + *(arg3 + 0x6b0)) = 1

return zx.q(*(sx.q(rdx_5.d + 4) + *(arg3 + 0x6b0)))
