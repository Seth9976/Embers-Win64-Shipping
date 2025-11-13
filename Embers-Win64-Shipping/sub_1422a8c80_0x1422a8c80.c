// 函数: sub_1422a8c80
// 地址: 0x1422a8c80
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
int32_t rcx_3 = 0
int32_t var_54_1 = 1
int32_t r8_3 = 0
int32_t var_58_1 = 0
void* var_50_1 = r9_1
int32_t var_48_1 = 0xffffffff
int64_t var_44_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_1 + 0x10)
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_1422a8d98:
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
        
        var_44_1.d = r8_3 - rax_10 + 0x1f
        
        if (r8_3 - rax_10 + 0x1f s> r10_1)
            var_44_1.d = r10_1
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_3)
            r8_3 += 0x20
            rcx_3 += 1
            var_44_1:4.d = r8_3
            var_58_1 = rcx_3
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            int32_t var_48_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1422a8d98
        
        var_44_1.d = r10_1

int64_t* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r10_2 = 0

while (true)
    int64_t rcx_5 = sx.q(r10_2) * 3
    int64_t rax_13 = *rbx
    void* r9_2 = rax_13 + (rcx_5 << 3)
    void* rcx_6 = *(rax_13 + (rcx_5 << 3))
    int32_t rdx_9
    
    if (rcx_6 == 0)
        rdx_9 = 0
    else
        int64_t rcx_7 = *(rcx_6 + 0x20)
        rdx_9 = (rcx_7 u>> 0x20).d * 0x17 + rcx_7.d
    
    int32_t rax_18 = (*rsi - 1) & rdx_9
    *(r9_2 + 0x14) = rax_18
    void* rdx_10 = arg1[8]
    int64_t r8_5 = sx.q(rax_18)
    void* rax_19 = &arg1[7]
    
    if (rdx_10 != 0)
        rax_19 = rdx_10
    
    *(r9_2 + 0x10) = *(rax_19 + (((sx.q(*rsi) - 1) & r8_5) << 2))
    void* rax_21 = &arg1[7]
    void* rcx_11 = arg1[8]
    
    if (rcx_11 != 0)
        rax_21 = rcx_11
    
    *(rax_21 + (((sx.q(*rsi) - 1) & r8_5) << 2)) = r10_2
    var_20_1.d &= not.d(var_30:4.d)
    sub_14059bdd0(&var_30)
    r10_2 = var_20_1:4.d
    
    if (r10_2 s>= *(var_30:8.q + 0x18))
        break
    
    rbx = var_38_1
