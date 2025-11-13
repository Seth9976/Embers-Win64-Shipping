// 函数: sub_140b52190
// 地址: 0x140b52190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t rcx = *(arg1 + 0xab0)

if (rcx != 0)
    *(rbx + 0xab0) = sub_140a84c80(rcx, 0, 0)

void* rsi = rbx + 0xab8
int32_t i_2 = *rsi

if (i_2 == 0)
    return 

sub_1407c3460(arg1 + 0xa30, 0, i_2, 4)
int32_t rcx_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rdx_1 = *(arg1 + 0xab0)
        void* rax_1 = arg1 + 0xa30
        int64_t r8_4 = (sx.q(*rsi) - 1) & r9_1
        
        if (rdx_1 != 0)
            rax_1 = rdx_1
        
        r9_1 += 1
        *(rax_1 + (r8_4 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

void* r9_2 = rbx + 0xa10
int32_t var_58_1 = 0
int32_t r10_1 = *(r9_2 + 0x10)
int32_t r8_5 = 0
int32_t var_54_1 = 1
void* var_50_1 = r9_2
int32_t var_48_1 = 0xffffffff
int64_t var_44_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_2 + 8)
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_4 = *r9_2
    
    if (rdx_4 != 0)
    label_140b522b8:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_54_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_44_1.d = r8_5 - rax_10 + 0x1f
        
        if (r8_5 - rax_10 + 0x1f s> r10_1)
            var_44_1.d = r10_1
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8_5 += 0x20
            rcx_2 += 1
            var_44_1:4.d = r8_5
            var_58_1 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_2 + (rdx_5 << 2) + 4)
            int32_t var_48_2 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140b522b8
        
        var_44_1.d = r10_1

void* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r14 = 0

while (true)
    void* rax_12 = *(rbx + 0xa00)
    
    if (rax_12 != 0)
        rbx = rax_12
    
    void* rbx_1 = rbx + sx.q(r14) * 0x28
    int32_t rax_14 = sub_140a6b260(rbx_1, 0x10)
    int32_t rcx_8 = (*rsi - 1) & rax_14
    void* rax_15 = arg1 + 0xa30
    *(rbx_1 + 0x24) = rcx_8
    void* rdx_6 = *(arg1 + 0xab0)
    int64_t r8_7 = sx.q(rcx_8)
    
    if (rdx_6 != 0)
        rax_15 = rdx_6
    
    *(rbx_1 + 0x20) = *(rax_15 + (((sx.q(*rsi) - 1) & r8_7) << 2))
    void* rax_17 = arg1 + 0xa30
    void* rcx_12 = *(arg1 + 0xab0)
    
    if (rcx_12 != 0)
        rax_17 = rcx_12
    
    *(rax_17 + (((sx.q(*rsi) - 1) & r8_7) << 2)) = r14
    var_20_1.d &= not.d(var_30:4.d)
    sub_140b4fe60(&var_30)
    r14 = var_20_1:4.d
    
    if (r14 s>= *(var_30:8.q + 0x10))
        break
    
    rbx = var_38_1
