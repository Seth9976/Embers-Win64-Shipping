// 函数: sub_1406d1070
// 地址: 0x1406d1070
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
    label_1406d118b:
        int32_t rax_8 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_44_2 = rcx_3 - rax_9 + 0x1f
        
        if (rcx_3 - rax_9 + 0x1f s> r10_1)
            var_44_3 = r10_1
    else
        while (true)
            int32_t rdx_7 = r8_2 + 1
            rcx_3 += 0x20
            var_58_1 = rdx_7
            r8_2 = rdx_7
            int32_t var_40_2 = rcx_3
            
            if (rdx_7 s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            int32_t var_48_2 = 0xffffffff
            rdx_6 = *(r9_2 + (sx.q(rdx_7) << 2))
            
            if (rdx_6 != 0)
                goto label_1406d118b
        
        var_44_3 = r10_1

int64_t* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r10_2 = 0

while (true)
    int64_t rcx_5 = sx.q(r10_2) * 3
    int64_t rax_12 = *rbx
    void* r9_3 = rax_12 + (rcx_5 << 2)
    uint64_t r8_5 = zx.q(*rsi - 1) & zx.q(*(rax_12 + (rcx_5 << 2)))
    void* rax_14 = &arg1[7]
    *(r9_3 + 8) = r8_5.d
    void* rdx_9 = arg1[8]
    
    if (rdx_9 != 0)
        rax_14 = rdx_9
    
    *(r9_3 + 4) = *(rax_14 + (((sx.q(*rsi) - 1) & r8_5) << 2))
    void* rax_16 = &arg1[7]
    void* rcx_9 = arg1[8]
    
    if (rcx_9 != 0)
        rax_16 = rcx_9
    
    *(rax_16 + (((sx.q(*rsi) - 1) & r8_5) << 2)) = r10_2
    var_20_1.d &= not.d(var_30:4.d)
    sub_14059bdd0(&var_30)
    r10_2 = var_20_1:4.d
    
    if (r10_2 s>= *(var_30:8.q + 0x18))
        break
    
    rbx = var_38_1
