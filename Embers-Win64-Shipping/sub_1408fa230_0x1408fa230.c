// 函数: sub_1408fa230
// 地址: 0x1408fa230
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
int32_t r8_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_2 = arg1[8]
        void* rax_1 = &arg1[7]
        int64_t rdx_3 = (sx.q(*rsi) - 1) & r9_1
        
        if (rcx_2 != 0)
            rax_1 = rcx_2
        
        r9_1 += 1
        *(rax_1 + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = rbx[5].d
void* r9_2 = &rbx[2]
int32_t var_58_1 = 0
int32_t rcx_3 = 0
int32_t var_54_1 = 1
void* var_50_1 = r9_2
int32_t var_48_1 = 0xffffffff
int32_t var_44_1 = 0
int32_t var_40_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_2 + 0x10)
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_6 = *r9_2
    int32_t var_44_3
    
    if (rdx_6 != 0)
    label_1408fa348:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_54_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t var_44_2 = rcx_3 - rax_10 + 0x1f
        
        if (rcx_3 - rax_10 + 0x1f s> r10_1)
            var_44_3 = r10_1
    else
        while (true)
            int64_t rdx_7 = sx.q(r8_2)
            rcx_3 += 0x20
            r8_2 += 1
            int32_t var_40_2 = rcx_3
            var_58_1 = r8_2
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_2 + (rdx_7 << 2) + 4)
            int32_t var_48_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1408fa348
        
        var_44_3 = r10_1

int64_t* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r11_1 = 0

while (true)
    int64_t r9_3 = *rbx
    int64_t r10_2 = sx.q(r11_1) * 3
    uint32_t rcx_6 = (*(r9_3 + (r10_2 << 3)) u>> 4).d
    int32_t rdx_10 = (0x9e3779b9 - rcx_6) ^ rcx_6 << 8
    int32_t r8_5 = neg.d(rdx_10 + rcx_6) ^ rdx_10 u>> 0xd
    int32_t rcx_9 = (rcx_6 - rdx_10 - r8_5) ^ r8_5 u>> 0xc
    int32_t rdx_13 = (rdx_10 - rcx_9 - r8_5) ^ rcx_9 << 0x10
    int32_t r8_8 = (r8_5 - rdx_13 - rcx_9) ^ rdx_13 u>> 5
    int32_t rcx_12 = (rcx_9 - rdx_13 - r8_8) ^ r8_8 u>> 3
    int32_t rdx_16 = (rdx_13 - rcx_12 - r8_8) ^ rcx_12 << 0xa
    int32_t r8_12 = ((r8_8 - rdx_16 - rcx_12) ^ rdx_16 u>> 0xf) & (*rsi - 1)
    void* rax_29 = &arg1[7]
    *(r9_3 + (r10_2 << 3) + 0x14) = r8_12
    void* rdx_18 = arg1[8]
    int64_t r8_13 = sx.q(r8_12)
    
    if (rdx_18 != 0)
        rax_29 = rdx_18
    
    *(r9_3 + (r10_2 << 3) + 0x10) = *(rax_29 + (((sx.q(*rsi) - 1) & r8_13) << 2))
    void* rax_31 = &arg1[7]
    void* rcx_16 = arg1[8]
    
    if (rcx_16 != 0)
        rax_31 = rcx_16
    
    *(rax_31 + (((sx.q(*rsi) - 1) & r8_13) << 2)) = r11_1
    var_20_1.d &= not.d(var_30:4.d)
    sub_14059bdd0(&var_30)
    r11_1 = var_20_1:4.d
    
    if (r11_1 s>= *(var_30:8.q + 0x18))
        break
    
    rbx = var_38_1
