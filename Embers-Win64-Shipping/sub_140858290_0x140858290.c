// 函数: sub_140858290
// 地址: 0x140858290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    *(rbx + 0x40) = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = *(rbx + 0x48)
void* r15 = rbx + 0x48

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
        int64_t r8_4 = (sx.q(*r15) - 1) & r9_1
        
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
    label_140858398:
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
                goto label_140858398
        
        var_54_1.d = r10_1

void* var_48_1 = rbx
int128_t var_40 = var_68_1.o
int64_t var_30_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r12_1 = 0

while (true)
    int64_t* rsi_3 = (sx.q(r12_1) << 5) + *rbx
    int64_t rbx_1 = *rsi_3
    int32_t rdi = sub_140b5ead0(rbx_1.d) + (rbx_1 u>> 0x20).d
    int64_t rbx_3 = rsi_3[1]
    int32_t r8_7 = (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d)
    int32_t rdi_2 = (rdi - r8_7) ^ r8_7 u>> 0xd
    int32_t rcx_10 = (0x9e3779b9 - rdi_2 - r8_7) ^ rdi_2 << 8
    int32_t r8_10 = (r8_7 - rcx_10 - rdi_2) ^ rcx_10 u>> 0xd
    int32_t rdi_5 = (rdi_2 - rcx_10 - r8_10) ^ r8_10 u>> 0xc
    int32_t rcx_13 = (rcx_10 - rdi_5 - r8_10) ^ rdi_5 << 0x10
    int32_t r8_13 = (r8_10 - rcx_13 - rdi_5) ^ rcx_13 u>> 5
    int32_t rdi_8 = (rdi_5 - rcx_13 - r8_13) ^ r8_13 u>> 3
    int32_t rcx_16 = (rcx_13 - rdi_8 - r8_13) ^ rdi_8 << 0xa
    int32_t r8_17 = ((r8_13 - rcx_16 - rdi_8) ^ rcx_16 u>> 0xf) & (*r15 - 1)
    void* rax_30 = arg1 + 0x38
    *(rsi_3 + 0x1c) = r8_17
    void* rdx_6 = *(arg1 + 0x40)
    int64_t r8_18 = sx.q(r8_17)
    
    if (rdx_6 != 0)
        rax_30 = rdx_6
    
    rsi_3[3].d = *(rax_30 + (((sx.q(*r15) - 1) & r8_18) << 2))
    void* rax_32 = arg1 + 0x38
    void* rcx_21 = *(arg1 + 0x40)
    
    if (rcx_21 != 0)
        rax_32 = rcx_21
    
    *(rax_32 + (((sx.q(*r15) - 1) & r8_18) << 2)) = r12_1
    var_30_1.d &= not.d(var_40:4.d)
    sub_14059bdd0(&var_40)
    r12_1 = var_30_1:4.d
    
    if (r12_1 s>= *(var_40:8.q + 0x18))
        break
    
    rbx = var_48_1
