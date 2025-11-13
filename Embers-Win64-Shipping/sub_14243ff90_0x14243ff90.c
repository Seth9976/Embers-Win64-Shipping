// 函数: sub_14243ff90
// 地址: 0x14243ff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int64_t rcx = arg1[8]

if (rcx != 0)
    rbx[8] = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = rbx[9].d
void* r15 = &rbx[9]

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

int32_t r10_1 = rbx[5].d
void* r9_2 = &rbx[2]
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
    label_1424400a8:
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
                goto label_1424400a8
        
        var_54_3 = r10_1

int64_t* var_48_1 = rbx
int128_t var_40 = var_68_1.o
int64_t var_30_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r12_1 = 0

while (true)
    int64_t rcx_5 = sx.q(r12_1) * 5
    int64_t rax_13 = *rbx
    void* rsi_1 = rax_13 + (rcx_5 << 3)
    int64_t* rcx_6 = *(rax_13 + (rcx_5 << 3) + 8)
    char rax_15
    
    if (rcx_6 != 0)
        rax_15 = (*(*rcx_6 + 0x28))(rcx_6)
    
    int32_t rcx_10
    
    if (rcx_6 == 0 || rax_15 == 0)
        rcx_10 = -1
    else
        int64_t* rdi = *(rsi_1 + 8)
        int32_t rax_17 = (*(*rdi + 0x20))(rdi)
        int64_t rdx_9 = *rdi
        rcx_10 = sub_140a6af60((*(rdx_9 + 0x18))(rdi, rdx_9), rax_17)
    
    int32_t rax_22 = (*r15 - 1) & rcx_10
    *(rsi_1 + 0x24) = rax_22
    void* rdx_11 = arg1[8]
    int64_t r8_3 = sx.q(rax_22)
    void* rax_23 = &arg1[7]
    
    if (rdx_11 != 0)
        rax_23 = rdx_11
    
    *(rsi_1 + 0x20) = *(rax_23 + (((sx.q(*r15) - 1) & r8_3) << 2))
    void* rax_25 = &arg1[7]
    void* rcx_14 = arg1[8]
    
    if (rcx_14 != 0)
        rax_25 = rcx_14
    
    *(rax_25 + (((sx.q(*r15) - 1) & r8_3) << 2)) = r12_1
    var_30_1.d &= not.d(var_40:4.d)
    sub_14059bdd0(&var_40)
    r12_1 = var_30_1:4.d
    
    if (r12_1 s>= *(var_40:8.q + 0x18))
        break
    
    rbx = var_48_1
