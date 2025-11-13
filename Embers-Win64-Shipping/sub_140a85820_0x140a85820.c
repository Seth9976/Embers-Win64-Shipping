// 函数: sub_140a85820
// 地址: 0x140a85820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x1a48)
void* rbx = arg1

if (rsi != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    *(rbx + 0x1a48) = (*(*rcx + 0x20))(rcx, rsi, 0, 0)

void* rsi_1 = rbx + 0x1a50
int32_t i_2 = *rsi_1

if (i_2 == 0)
    return 

sub_140a88440(arg1 + 0x1848, 0, i_2, 4)
int32_t rcx_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rdx_2 = *(arg1 + 0x1a48)
        void* rax_2 = arg1 + 0x1848
        int64_t r8_4 = (sx.q(*rsi_1) - 1) & r9_1
        
        if (rdx_2 != 0)
            rax_2 = rdx_2
        
        r9_1 += 1
        *(rax_2 + (r8_4 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

void* r9_2 = rbx + 0x1810
int32_t var_58_1 = 0
int32_t r10_1 = *(r9_2 + 0x28)
int32_t r8_5 = 0
int32_t var_54_1 = 1
void* var_50_1 = r9_2
int32_t var_48_1 = 0xffffffff
int64_t var_44_1 = 0

if (r10_1 != 0)
    void* rax_3 = *(r9_2 + 0x20)
    
    if (rax_3 != 0)
        r9_2 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_5 = *r9_2
    
    if (rdx_5 != 0)
    label_140a85968:
        int32_t rax_10 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_54_2 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_44_1.d = r8_5 - rax_11 + 0x1f
        
        if (r8_5 - rax_11 + 0x1f s> r10_1)
            var_44_1.d = r10_1
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_2)
            r8_5 += 0x20
            rcx_2 += 1
            var_44_1:4.d = r8_5
            var_58_1 = rcx_2
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_2 + (rdx_6 << 2) + 4)
            int32_t var_48_2 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140a85968
        
        var_44_1.d = r10_1

void* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r10_2 = 0

while (true)
    void* rax_13 = *(rbx + 0x1800)
    
    if (rax_13 != 0)
        rbx = rax_13
    
    void* r9_3 = rbx + sx.q(r10_2) * 0x18
    int32_t rax_17 = (*rsi_1 - 1) & *r9_3
    *(r9_3 + 0x14) = rax_17
    void* rdx_7 = *(arg1 + 0x1a48)
    int64_t r8_7 = sx.q(rax_17)
    void* rax_18 = arg1 + 0x1848
    
    if (rdx_7 != 0)
        rax_18 = rdx_7
    
    *(r9_3 + 0x10) = *(rax_18 + (((sx.q(*rsi_1) - 1) & r8_7) << 2))
    void* rax_20 = arg1 + 0x1848
    void* rcx_8 = *(arg1 + 0x1a48)
    
    if (rcx_8 != 0)
        rax_20 = rcx_8
    
    *(rax_20 + (((sx.q(*rsi_1) - 1) & r8_7) << 2)) = r10_2
    var_20_1.d &= not.d(var_30:4.d)
    sub_140a736e0(&var_30)
    r10_2 = var_20_1:4.d
    
    if (r10_2 s>= *(var_30:8.q + 0x28))
        break
    
    rbx = var_38_1
