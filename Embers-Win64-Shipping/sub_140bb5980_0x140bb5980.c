// 函数: sub_140bb5980
// 地址: 0x140bb5980
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
    label_140bb5a88:
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
                goto label_140bb5a88
        
        var_44_1.d = r10_1

int64_t* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r11_1 = 0

while (true)
    int64_t* r10_2 = *rbx + sx.q(r11_1) * 0x18
    uint32_t r9_4 = (*r10_2 u>> 4).d
    int32_t r8_8 = (0x9e3779b9 - r9_4) ^ r9_4 << 8
    int32_t rdx_8 = neg.d(r8_8 + r9_4) ^ r8_8 u>> 0xd
    int32_t r9_7 = (r9_4 - r8_8 - rdx_8) ^ rdx_8 u>> 0xc
    int32_t r8_11 = (r8_8 - r9_7 - rdx_8) ^ r9_7 << 0x10
    int32_t rdx_11 = (rdx_8 - r8_11 - r9_7) ^ r8_11 u>> 5
    int32_t r9_10 = (r9_7 - r8_11 - rdx_11) ^ rdx_11 u>> 3
    int32_t r8_14 = (r8_11 - r9_10 - rdx_11) ^ r9_10 << 0xa
    int32_t rcx_11 = ((*(r10_2 + 0xc) << 0xe ^ r10_2[1].d) << 0xd ^ r8_14 u>> 0xf
        ^ (rdx_11 - r8_14 - r9_10)) & (*rsi - 1)
    void* rax_32 = &arg1[7]
    *(r10_2 + 0x14) = rcx_11
    void* rdx_14 = arg1[8]
    int64_t r8_15 = sx.q(rcx_11)
    
    if (rdx_14 != 0)
        rax_32 = rdx_14
    
    r10_2[2].d = *(rax_32 + (((sx.q(*rsi) - 1) & r8_15) << 2))
    void* rax_34 = &arg1[7]
    void* rcx_15 = arg1[8]
    
    if (rcx_15 != 0)
        rax_34 = rcx_15
    
    *(rax_34 + (((sx.q(*rsi) - 1) & r8_15) << 2)) = r11_1
    var_20_1.d &= not.d(var_30:4.d)
    sub_14059bdd0(&var_30)
    r11_1 = var_20_1:4.d
    
    if (r11_1 s>= *(var_30:8.q + 0x18))
        break
    
    rbx = var_38_1
