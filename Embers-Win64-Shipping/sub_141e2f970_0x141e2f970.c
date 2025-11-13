// 函数: sub_141e2f970
// 地址: 0x141e2f970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t rcx = *(arg1 + 0x138)

if (rcx != 0)
    *(rbx + 0x138) = sub_140a84c80(rcx, 0, 0)

void* rsi = rbx + 0x140
int32_t i_2 = *rsi

if (i_2 == 0)
    return 

sub_140bced70(arg1 + 0x130, 0, i_2, 4)
int32_t rcx_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rdx_1 = *(arg1 + 0x138)
        void* rax_1 = arg1 + 0x130
        int64_t r8_4 = (sx.q(*rsi) - 1) & r9_1
        
        if (rdx_1 != 0)
            rax_1 = rdx_1
        
        r9_1 += 1
        *(rax_1 + (r8_4 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

void* r9_2 = rbx + 0x110
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
    label_141e2fa98:
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
                goto label_141e2fa98
        
        var_44_1.d = r10_1

void* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r9_3 = 0

while (true)
    void* rax_12 = *(rbx + 0x100)
    
    if (rax_12 != 0)
        rbx = rax_12
    
    void* rbx_1 = rbx + (sx.q(r9_3) << 6)
    int32_t r8_7 = *(rbx_1 + 4)
    int32_t rdx_8 = (*rbx_1 - r8_7) ^ r8_7 u>> 0xd
    int32_t rcx_6 = (0x9e3779b9 - rdx_8 - r8_7) ^ rdx_8 << 8
    int32_t r8_10 = (r8_7 - rcx_6 - rdx_8) ^ rcx_6 u>> 0xd
    int32_t rdx_11 = (rdx_8 - rcx_6 - r8_10) ^ r8_10 u>> 0xc
    int32_t rcx_9 = (rcx_6 - rdx_11 - r8_10) ^ rdx_11 << 0x10
    int32_t r8_13 = (r8_10 - rcx_9 - rdx_11) ^ rcx_9 u>> 5
    int32_t rdx_14 = (rdx_11 - rcx_9 - r8_13) ^ r8_13 u>> 3
    int32_t rcx_12 = (rcx_9 - rdx_14 - r8_13) ^ rdx_14 << 0xa
    int32_t r8_17 = ((r8_13 - rcx_12 - rdx_14) ^ rcx_12 u>> 0xf) & (*rsi - 1)
    void* rax_33 = arg1 + 0x130
    *(rbx_1 + 0x3c) = r8_17
    void* rdx_15 = *(arg1 + 0x138)
    int64_t r8_18 = sx.q(r8_17)
    
    if (rdx_15 != 0)
        rax_33 = rdx_15
    
    *(rbx_1 + 0x38) = *(rax_33 + (((sx.q(*rsi) - 1) & r8_18) << 2))
    void* rax_35 = arg1 + 0x130
    void* rcx_17 = *(arg1 + 0x138)
    
    if (rcx_17 != 0)
        rax_35 = rcx_17
    
    *(rax_35 + (((sx.q(*rsi) - 1) & r8_18) << 2)) = r9_3
    var_20_1.d &= not.d(var_30:4.d)
    sub_140b4fe60(&var_30)
    r9_3 = var_20_1:4.d
    
    if (r9_3 s>= *(var_30:8.q + 0x10))
        break
    
    rbx = var_38_1
