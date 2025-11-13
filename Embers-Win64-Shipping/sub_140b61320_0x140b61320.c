// 函数: sub_140b61320
// 地址: 0x140b61320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t rcx = *(arg1 + 0x2468)

if (rcx != 0)
    *(rbx + 0x2468) = sub_140a84c80(rcx, 0, 0)

void* rsi = rbx + 0x2470
int32_t i_2 = *rsi

if (i_2 == 0)
    return 

sub_140b63200(arg1 + 0x2068, 0, i_2, 4)
int32_t rcx_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rdx_1 = *(arg1 + 0x2468)
        void* rax_1 = arg1 + 0x2068
        int64_t r8_4 = (sx.q(*rsi) - 1) & r9_1
        
        if (rdx_1 != 0)
            rax_1 = rdx_1
        
        r9_1 += 1
        *(rax_1 + (r8_4 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

void* r9_2 = rbx + 0x2010
int32_t var_58_1 = 0
int32_t r10_1 = *(r9_2 + 0x48)
int32_t r8_5 = 0
int32_t var_54_1 = 1
void* var_50_1 = r9_2
int32_t var_48_1 = 0xffffffff
int64_t var_44_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_2 + 0x40)
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_4 = *r9_2
    
    if (rdx_4 != 0)
    label_140b61448:
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
                goto label_140b61448
        
        var_44_1.d = r10_1

void* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r9_3 = 0

while (true)
    void* rax_12 = *(rbx + 0x2000)
    
    if (rax_12 != 0)
        rbx = rax_12
    
    void* rbx_1 = rbx + (sx.q(r9_3) << 4)
    int32_t rax_15 = *rbx_1
    uint32_t rcx_4 = zx.d(rax_15.w)
    int32_t rcx_7 = ((rax_15 u>> 0x10) * 0x80001 + rcx_4 * 0x10001 + (rcx_4 u>> 4)) & (*rsi - 1)
    void* rax_22 = arg1 + 0x2068
    *(rbx_1 + 0xc) = rcx_7
    void* rdx_8 = *(arg1 + 0x2468)
    int64_t r8_9 = sx.q(rcx_7)
    
    if (rdx_8 != 0)
        rax_22 = rdx_8
    
    *(rbx_1 + 8) = *(rax_22 + (((sx.q(*rsi) - 1) & r8_9) << 2))
    void* rax_24 = arg1 + 0x2068
    void* rcx_11 = *(arg1 + 0x2468)
    
    if (rcx_11 != 0)
        rax_24 = rcx_11
    
    *(rax_24 + (((sx.q(*rsi) - 1) & r8_9) << 2)) = r9_3
    var_20_1.d &= not.d(var_30:4.d)
    sub_140b5e440(&var_30)
    r9_3 = var_20_1:4.d
    
    if (r9_3 s>= *(var_30:8.q + 0x48))
        break
    
    rbx = var_38_1
