// 函数: sub_14276fbb0
// 地址: 0x14276fbb0
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
int32_t var_68_1 = 0
int32_t r8_5 = 0
int32_t var_64_1 = 1
void* var_60_1 = r9_2
int32_t var_58_1 = 0xffffffff
int64_t var_54_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_2 + 0x10)
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_4 = *r9_2
    
    if (rdx_4 != 0)
    label_14276fcb8:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_64_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_54_1.d = r8_5 - rax_10 + 0x1f
        
        if (r8_5 - rax_10 + 0x1f s> r10_1)
            var_54_1.d = r10_1
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8_5 += 0x20
            rcx_2 += 1
            var_54_1:4.d = r8_5
            var_68_1 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_2 + (rdx_5 << 2) + 4)
            int32_t var_58_2 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_14276fcb8
        
        var_54_1.d = r10_1

void* var_48_1 = rbx
int128_t var_40 = var_68_1.o
int64_t var_30_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r11_1 = 0

while (true)
    int32_t* r10_4 = (sx.q(r11_1) << 5) + *rbx
    int32_t rax_12 = *r10_4
    uint32_t r8_7 = zx.d(rax_12:2.w)
    uint32_t r9_3 = zx.d((r10_4[1].w).b)
    uint32_t rdx_8 = (zx.d(rax_12.w) - r8_7) ^ r8_7 u>> 0xd
    int32_t rcx_6 = (0x9e3779b9 - rdx_8 - r8_7) ^ rdx_8 << 8
    int32_t r8_10 = (r8_7 - rcx_6 - rdx_8) ^ rcx_6 u>> 0xd
    int32_t rdx_11 = (rdx_8 - rcx_6 - r8_10) ^ r8_10 u>> 0xc
    int32_t rcx_9 = (rcx_6 - rdx_11 - r8_10) ^ rdx_11 << 0x10
    int32_t r8_13 = (r8_10 - rcx_9 - rdx_11) ^ rcx_9 u>> 5
    int32_t rdx_14 = (rdx_11 - rcx_9 - r8_13) ^ r8_13 u>> 3
    int32_t rcx_12 = (rcx_9 - rdx_14 - r8_13) ^ rdx_14 << 0xa
    int32_t r8_16 = (r8_13 - rcx_12 - rdx_14) ^ rcx_12 u>> 0xf
    int32_t rcx_15 = r8_16 - r9_3
    int32_t rdx_19 = (0 - r8_16 - 0x61c88647) ^ rcx_15 << 8
    int32_t r9_6 = (r9_3 - rdx_19 - rcx_15) ^ rdx_19 u>> 0xd
    int32_t rcx_18 = (rcx_15 - rdx_19 - r9_6) ^ r9_6 u>> 0xc
    int32_t rdx_22 = (rdx_19 - rcx_18 - r9_6) ^ rcx_18 << 0x10
    int32_t r9_9 = (r9_6 - rdx_22 - rcx_18) ^ rdx_22 u>> 5
    int32_t rcx_21 = (rcx_18 - rdx_22 - r9_9) ^ r9_9 u>> 3
    int32_t rdx_25 = (rdx_22 - rcx_21 - r9_9) ^ rcx_21 << 0xa
    int32_t r9_13 = ((r9_9 - rdx_25 - rcx_21) ^ rdx_25 u>> 0xf) & (*rsi - 1)
    void* rax_46 = arg1 + 0x38
    r10_4[7] = r9_13
    void* rdx_27 = *(arg1 + 0x40)
    int64_t r8_17 = sx.q(r9_13)
    
    if (rdx_27 != 0)
        rax_46 = rdx_27
    
    r10_4[6] = *(rax_46 + (((sx.q(*rsi) - 1) & r8_17) << 2))
    void* rax_48 = arg1 + 0x38
    void* rcx_25 = *(arg1 + 0x40)
    
    if (rcx_25 != 0)
        rax_48 = rcx_25
    
    *(rax_48 + (((sx.q(*rsi) - 1) & r8_17) << 2)) = r11_1
    var_30_1.d &= not.d(var_40:4.d)
    sub_14059bdd0(&var_40)
    r11_1 = var_30_1:4.d
    
    if (r11_1 s>= *(var_40:8.q + 0x18))
        break
    
    rbx = var_48_1
