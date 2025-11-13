// 函数: sub_142064b60
// 地址: 0x142064b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
int64_t rcx = arg1[8]

if (rcx != 0)
    rdi[8] = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = rdi[9].d
void* r15 = &rdi[9]

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
        int64_t rdx_3 = (sx.q(*r15) - 1) & r9_1
        
        if (rcx_2 != 0)
            rax_1 = rcx_2
        
        r9_1 += 1
        *(rax_1 + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = rdi[5].d
void* r9_2 = &rdi[2]
int32_t var_68_1 = 0
int32_t rcx_3 = 0
int32_t var_64_1 = 1
void* var_60_1 = r9_2
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int32_t var_50_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_2 + 0x10)
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_6 = *r9_2
    int32_t var_54_3
    
    if (rdx_6 != 0)
    label_142064c78:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_64_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t var_54_2 = rcx_3 - rax_10 + 0x1f
        
        if (rcx_3 - rax_10 + 0x1f s> r10_1)
            var_54_3 = r10_1
    else
        while (true)
            int64_t rdx_7 = sx.q(r8_2)
            rcx_3 += 0x20
            r8_2 += 1
            int32_t var_50_2 = rcx_3
            var_68_1 = r8_2
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_2 + (rdx_7 << 2) + 4)
            int32_t var_58_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_142064c78
        
        var_54_3 = r10_1

int64_t* var_48_1 = rdi
int128_t var_40 = var_68_1.o
int64_t var_30_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r12_1 = 0

while (true)
    int64_t rdi_1 = *rdi
    int64_t rsi_1 = sx.q(r12_1) * 5
    int64_t rbx = *(rdi_1 + (rsi_1 << 3))
    int32_t rax_13 = sub_140b5ead0(rbx.d)
    int32_t rcx_8 = (*r15 - 1) & (rax_13 + (rbx u>> 0x20).d)
    void* rax_15 = &arg1[7]
    *(rdi_1 + (rsi_1 << 3) + 0x24) = rcx_8
    void* rdx_9 = arg1[8]
    int64_t r8_3 = sx.q(rcx_8)
    
    if (rdx_9 != 0)
        rax_15 = rdx_9
    
    *(rdi_1 + (rsi_1 << 3) + 0x20) = *(rax_15 + (((sx.q(*r15) - 1) & r8_3) << 2))
    void* rax_17 = &arg1[7]
    void* rcx_12 = arg1[8]
    
    if (rcx_12 != 0)
        rax_17 = rcx_12
    
    *(rax_17 + (((sx.q(*r15) - 1) & r8_3) << 2)) = r12_1
    var_30_1.d &= not.d(var_40:4.d)
    sub_14059bdd0(&var_40)
    r12_1 = var_30_1:4.d
    
    if (r12_1 s>= *(var_40:8.q + 0x18))
        break
    
    rdi = var_48_1
