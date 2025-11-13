// 函数: sub_1408375a0
// 地址: 0x1408375a0
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
    label_1408376a8:
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
                goto label_1408376a8
        
        var_44_1.d = r10_1

int64_t* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r10_2 = 0

while (true)
    int32_t* r9_3 = *rbx + sx.q(r10_2) * 0x18
    int32_t r8_7 = r9_3[2]
    int32_t rdx_8 = (r9_3[1] - r8_7) ^ r8_7 u>> 0xd
    int32_t rcx_7 = (0x9e3779b9 - rdx_8 - r8_7) ^ rdx_8 << 8
    int32_t r8_10 = (r8_7 - rcx_7 - rdx_8) ^ rcx_7 u>> 0xd
    int32_t rdx_11 = (rdx_8 - rcx_7 - r8_10) ^ r8_10 u>> 0xc
    int32_t rcx_10 = (rcx_7 - rdx_11 - r8_10) ^ rdx_11 << 0x10
    int32_t r8_13 = (r8_10 - rcx_10 - rdx_11) ^ rcx_10 u>> 5
    int32_t rdx_14 = (rdx_11 - rcx_10 - r8_13) ^ r8_13 u>> 3
    int32_t rcx_13 = (rcx_10 - rdx_14 - r8_13) ^ rdx_14 << 0xa
    int32_t r8_16 = (r8_13 - rcx_13 - rdx_14) ^ rcx_13 u>> 0xf
    int32_t rdx_17 = (*r9_3 - r8_16) ^ r8_16 u>> 0xd
    int32_t rcx_17 = (0x9e3779b9 - rdx_17 - r8_16) ^ rdx_17 << 8
    int32_t r8_19 = (r8_16 - rcx_17 - rdx_17) ^ rcx_17 u>> 0xd
    int32_t rdx_20 = (rdx_17 - rcx_17 - r8_19) ^ r8_19 u>> 0xc
    int32_t rcx_20 = (rcx_17 - rdx_20 - r8_19) ^ rdx_20 << 0x10
    int32_t r8_22 = (r8_19 - rcx_20 - rdx_20) ^ rcx_20 u>> 5
    int32_t rdx_23 = (rdx_20 - rcx_20 - r8_22) ^ r8_22 u>> 3
    int32_t rcx_23 = (rcx_20 - rdx_23 - r8_22) ^ rdx_23 << 0xa
    int32_t r8_26 = ((r8_22 - rcx_23 - rdx_23) ^ rcx_23 u>> 0xf) & (*rsi - 1)
    void* rax_48 = &arg1[7]
    r9_3[5] = r8_26
    void* rdx_24 = arg1[8]
    int64_t r8_27 = sx.q(r8_26)
    
    if (rdx_24 != 0)
        rax_48 = rdx_24
    
    r9_3[4] = *(rax_48 + (((sx.q(*rsi) - 1) & r8_27) << 2))
    void* rax_50 = &arg1[7]
    void* rcx_28 = arg1[8]
    
    if (rcx_28 != 0)
        rax_50 = rcx_28
    
    *(rax_50 + (((sx.q(*rsi) - 1) & r8_27) << 2)) = r10_2
    var_20_1.d &= not.d(var_30:4.d)
    sub_14059bdd0(&var_30)
    r10_2 = var_20_1:4.d
    
    if (r10_2 s>= *(var_30:8.q + 0x18))
        break
    
    rbx = var_38_1
