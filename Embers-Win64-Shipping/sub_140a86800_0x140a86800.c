// 函数: sub_140a86800
// 地址: 0x140a86800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x40)
void* rdi = arg1

if (rbx != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    *(rdi + 0x40) = (*(*rcx + 0x20))(rcx, rbx, 0, 0)

int32_t i_2 = *(rdi + 0x48)
void* r15 = rdi + 0x48

if (i_2 == 0)
    return 

sub_1405a4aa0(arg1 + 0x38, 0, i_2, 4)
int32_t r8_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_2 = *(arg1 + 0x40)
        void* rax_2 = arg1 + 0x38
        int64_t rdx_4 = (sx.q(*r15) - 1) & r9_1
        
        if (rcx_2 != 0)
            rax_2 = rcx_2
        
        r9_1 += 1
        *(rax_2 + (rdx_4 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = *(rdi + 0x28)
void* r9_2 = rdi + 0x10
int32_t var_68_1 = 0
int32_t rcx_3 = 0
int32_t var_64_1 = 1
void* var_60_1 = r9_2
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int32_t var_50_1 = 0

if (r10_1 != 0)
    void* rax_3 = *(r9_2 + 0x10)
    
    if (rax_3 != 0)
        r9_2 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_7 = *r9_2
    int32_t var_54_3
    
    if (rdx_7 != 0)
    label_140a86928:
        int32_t rax_10 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_64_2 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        int32_t var_54_2 = rcx_3 - rax_11 + 0x1f
        
        if (rcx_3 - rax_11 + 0x1f s> r10_1)
            var_54_3 = r10_1
    else
        while (true)
            int64_t rdx_8 = sx.q(r8_2)
            rcx_3 += 0x20
            r8_2 += 1
            int32_t var_50_2 = rcx_3
            var_68_1 = r8_2
            
            if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r9_2 + (rdx_8 << 2) + 4)
            int32_t var_58_2 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_140a86928
        
        var_54_3 = r10_1

void* var_48_1 = rdi
int128_t var_40 = var_68_1.o
int64_t var_30_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r14_1 = 0

while (true)
    int64_t* rbx_2 = sx.q(r14_1) * 0x68 + *rdi
    int16_t* rcx_5
    
    if (rbx_2[1].d == 0)
        rcx_5 = &data_142d40450
    else
        rcx_5 = *rbx_2
    
    int32_t rax_15 = sub_140a5ff80(rcx_5, 0) & (*r15 - 1)
    *(rbx_2 + 0x64) = rax_15
    void* rdx_10 = *(arg1 + 0x40)
    int64_t r8_3 = sx.q(rax_15)
    void* rax_16 = arg1 + 0x38
    
    if (rdx_10 != 0)
        rax_16 = rdx_10
    
    rbx_2[0xc].d = *(rax_16 + (((sx.q(*r15) - 1) & r8_3) << 2))
    void* rax_18 = arg1 + 0x38
    void* rcx_11 = *(arg1 + 0x40)
    
    if (rcx_11 != 0)
        rax_18 = rcx_11
    
    *(rax_18 + (((sx.q(*r15) - 1) & r8_3) << 2)) = r14_1
    var_30_1.d &= not.d(var_40:4.d)
    sub_14059bdd0(&var_40)
    r14_1 = var_30_1:4.d
    
    if (r14_1 s>= *(var_40:8.q + 0x18))
        break
    
    rdi = var_48_1
