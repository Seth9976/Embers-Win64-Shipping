// 函数: sub_1408c20a0
// 地址: 0x1408c20a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int64_t rcx = arg1[8]

if (rcx != 0)
    rbx[8] = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = rbx[9].d
void* rsi = &rbx[9]

if (i_2 == 0)
    return 

sub_1405a4aa0(&arg1[7], 0, i_2, 4)
int32_t rcx_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rdx_1 = arg1[8]
        void* rax_1 = &arg1[7]
        int64_t r8_4 = (sx.q(*rsi) - 1) & r9_1
        
        if (rdx_1 != 0)
            rax_1 = rdx_1
        
        r9_1 += 1
        *(rax_1 + (r8_4 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = rbx[5].d
void* r9_2 = &rbx[2]
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
    label_1408c21bb:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_44_1.d = r8_5 - rax_9 + 0x1f
        
        if (r8_5 - rax_9 + 0x1f s> r10_1)
            var_44_1.d = r10_1
    else
        while (true)
            int32_t rdx_5 = rcx_2 + 1
            r8_5 += 0x20
            var_58_1 = rdx_5
            rcx_2 = rdx_5
            var_44_1:4.d = r8_5
            
            if (rdx_5 s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            int32_t var_48_2 = 0xffffffff
            rdx_4 = *(r9_2 + (sx.q(rdx_5) << 2))
            
            if (rdx_4 != 0)
                goto label_1408c21bb
        
        var_44_1.d = r10_1

int64_t* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r10_2 = 0

while (true)
    int64_t rcx_4 = sx.q(r10_2) * 3
    int64_t rax_12 = *rbx
    void* r9_3 = rax_12 + (rcx_4 << 3)
    uint32_t rcx_6 = (*(rax_12 + (rcx_4 << 3)) u>> 4).d
    int32_t rdx_7 = (0x9e3779b9 - rcx_6) ^ rcx_6 << 8
    int32_t r8_9 = neg.d(rdx_7 + rcx_6) ^ rdx_7 u>> 0xd
    int32_t rcx_9 = (rcx_6 - rdx_7 - r8_9) ^ r8_9 u>> 0xc
    int32_t rdx_10 = (rdx_7 - rcx_9 - r8_9) ^ rcx_9 << 0x10
    int32_t r8_12 = (r8_9 - rdx_10 - rcx_9) ^ rdx_10 u>> 5
    int32_t rcx_12 = (rcx_9 - rdx_10 - r8_12) ^ r8_12 u>> 3
    int32_t rdx_13 = (rdx_10 - rcx_12 - r8_12) ^ rcx_12 << 0xa
    int32_t r8_16 = ((r8_12 - rdx_13 - rcx_12) ^ rdx_13 u>> 0xf) & (*rsi - 1)
    void* rax_29 = &arg1[7]
    *(r9_3 + 0x14) = r8_16
    void* rdx_15 = arg1[8]
    int64_t r8_17 = sx.q(r8_16)
    
    if (rdx_15 != 0)
        rax_29 = rdx_15
    
    *(r9_3 + 0x10) = *(rax_29 + (((sx.q(*rsi) - 1) & r8_17) << 2))
    void* rax_31 = &arg1[7]
    void* rcx_16 = arg1[8]
    
    if (rcx_16 != 0)
        rax_31 = rcx_16
    
    *(rax_31 + (((sx.q(*rsi) - 1) & r8_17) << 2)) = r10_2
    var_20_1.d &= not.d(var_30:4.d)
    sub_14059bdd0(&var_30)
    r10_2 = var_20_1:4.d
    
    if (r10_2 s>= *(var_30:8.q + 0x18))
        break
    
    rbx = var_38_1
