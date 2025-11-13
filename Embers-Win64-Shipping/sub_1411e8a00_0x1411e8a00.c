// 函数: sub_1411e8a00
// 地址: 0x1411e8a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    *(rbx + 0x40) = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = *(rbx + 0x48)
void* rsi = rbx + 0x48

if (i_2 == 0)
    return 

sub_1405a4aa0(arg1 + 0x38, 0, i_2, 4)
int32_t rcx_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rdx_1 = *(arg1 + 0x40)
        void* rax_1 = arg1 + 0x38
        int64_t r8_4 = (sx.q(*rsi) - 1) & r9_1
        
        if (rdx_1 != 0)
            rax_1 = rdx_1
        
        r9_1 += 1
        *(rax_1 + (r8_4 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = *(rbx + 0x28)
void* r9_2 = rbx + 0x10
int32_t var_58_1 = 0
int32_t r8_5 = 0
int32_t var_54_1 = 1
void* var_50_1 = r9_2
int32_t var_48_1 = 0xffffffff
int64_t var_44_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_2 + 0x10)
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_4 = *r9_2
    
    if (rdx_4 != 0)
    label_1411e8b08:
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
                goto label_1411e8b08
        
        var_44_1.d = r10_1

void* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r10_2 = 0

while (true)
    int64_t* r9_5 = sx.q(r10_2) * 0x30 + *rbx
    uint32_t rcx_5 = (*r9_5 u>> 4).d
    int32_t rdx_7 = (0x9e3779b9 - rcx_5) ^ rcx_5 << 8
    int32_t r8_9 = neg.d(rdx_7 + rcx_5) ^ rdx_7 u>> 0xd
    int32_t rcx_8 = (rcx_5 - rdx_7 - r8_9) ^ r8_9 u>> 0xc
    int32_t rdx_10 = (rdx_7 - rcx_8 - r8_9) ^ rcx_8 << 0x10
    int32_t r8_12 = (r8_9 - rdx_10 - rcx_8) ^ rdx_10 u>> 5
    int32_t rcx_11 = (rcx_8 - rdx_10 - r8_12) ^ r8_12 u>> 3
    int32_t rdx_13 = (rdx_10 - rcx_11 - r8_12) ^ rcx_11 << 0xa
    int32_t r8_16 = ((r8_12 - rdx_13 - rcx_11) ^ rdx_13 u>> 0xf) & (*rsi - 1)
    void* rax_29 = arg1 + 0x38
    *(r9_5 + 0x2c) = r8_16
    void* rdx_15 = *(arg1 + 0x40)
    int64_t r8_17 = sx.q(r8_16)
    
    if (rdx_15 != 0)
        rax_29 = rdx_15
    
    r9_5[5].d = *(rax_29 + (((sx.q(*rsi) - 1) & r8_17) << 2))
    void* rax_31 = arg1 + 0x38
    void* rcx_15 = *(arg1 + 0x40)
    
    if (rcx_15 != 0)
        rax_31 = rcx_15
    
    *(rax_31 + (((sx.q(*rsi) - 1) & r8_17) << 2)) = r10_2
    var_20_1.d &= not.d(var_30:4.d)
    sub_14059bdd0(&var_30)
    r10_2 = var_20_1:4.d
    
    if (r10_2 s>= *(var_30:8.q + 0x18))
        break
    
    rbx = var_38_1
