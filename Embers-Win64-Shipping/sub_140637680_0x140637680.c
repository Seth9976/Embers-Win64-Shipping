// 函数: sub_140637680
// 地址: 0x140637680
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

if (i_2 s> 0)
    int64_t r8_2 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_2 = arg1[8]
        void* rax_1 = &arg1[7]
        int64_t rdx_3 = (sx.q(*rsi) - 1) & r8_2
        
        if (rcx_2 != 0)
            rax_1 = rcx_2
        
        r8_2 += 1
        *(rax_1 + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = rbx[5].d
void* r9_1 = &rbx[2]
int32_t var_64_1 = 1
int32_t rcx_3 = 0
int32_t var_68_1 = 0
int32_t r8_3 = 0
void* var_60_1 = r9_1
int32_t var_58_1 = 0xffffffff
int64_t var_54_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_1 + 0x10)
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_140637798:
        int32_t rax_8 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_54_1.d = r8_3 - rax_9 + 0x1f
        
        if (r8_3 - rax_9 + 0x1f s> r10_1)
            var_54_1.d = r10_1
    else
        while (true)
            rcx_3 += 1
            r8_3 += 0x20
            var_68_1 = rcx_3
            var_54_1:4.d = r8_3
            
            if (rcx_3 s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            int32_t var_58_2 = 0xffffffff
            rdx_6 = *(r9_1 + (sx.q(rcx_3) << 2))
            
            if (rdx_6 != 0)
                goto label_140637798
        
        var_54_1.d = r10_1

int64_t* var_48_1 = rbx
int128_t var_40 = var_68_1.o
int64_t var_30_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r14 = 0

while (true)
    int64_t rcx_5 = sx.q(r14) * 5
    int64_t rax_12 = *rbx
    int64_t* rbx_1 = rax_12 + (rcx_5 << 3)
    int32_t rax_13 = *(rax_12 + (rcx_5 << 3) + 8)
    int16_t* rdx_7
    
    if (rax_13 == 0)
        rdx_7 = &data_142d40450
    else
        rdx_7 = *rbx_1
    
    int32_t rcx_6 = rax_13 - 1
    
    if (rax_13 == 0)
        rcx_6 = 0
    
    int32_t rax_15 = sub_1405969c0(rcx_6, rdx_7) & (*rsi - 1)
    *(rbx_1 + 0x24) = rax_15
    void* rdx_8 = arg1[8]
    int64_t r8_5 = sx.q(rax_15)
    void* rax_16 = &arg1[7]
    
    if (rdx_8 != 0)
        rax_16 = rdx_8
    
    rbx_1[4].d = *(rax_16 + (((sx.q(*rsi) - 1) & r8_5) << 2))
    void* rax_18 = &arg1[7]
    void* rcx_12 = arg1[8]
    
    if (rcx_12 != 0)
        rax_18 = rcx_12
    
    *(rax_18 + (((sx.q(*rsi) - 1) & r8_5) << 2)) = r14
    var_30_1.d &= not.d(var_40:4.d)
    sub_14059bdd0(&var_40)
    r14 = var_30_1:4.d
    
    if (r14 s>= *(var_40:8.q + 0x18))
        break
    
    rbx = var_48_1
