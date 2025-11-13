// 函数: sub_140cf3310
// 地址: 0x140cf3310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rbx_1 = *(rsi_1 + *(arg1 + 0x10))
        
        if (rbx_1 != 0)
            int64_t rcx = rbx_1[2]
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            j_sub_140a74f90(rbx_1)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x18))

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405c5570(arg1 + 0x10, 0)

int32_t var_84 = 1
int32_t rbx_2 = *(arg1 + 0x48)
void* var_80 = arg1 + 0x30
int32_t rcx_4 = 0
int32_t var_88 = 0
int32_t r8 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (rbx_2 != 0)
    void* rax_2 = *(arg1 + 0x40)
    void* r9_1 = arg1 + 0x30
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_2 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_140cf3428:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_84_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> rbx_2)
            var_74.d = rbx_2
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_4)
            r8 += 0x20
            rcx_4 += 1
            var_74:4.d = r8
            var_88 = rcx_4
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140cf3428
        
        var_74.d = rbx_2

int32_t rdx_6 = *(arg1 + 0x48)
int128_t var_28 = 0xffffffff
int32_t rsi_2 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = rsi_2
var_74.d = rdx_6
int128_t var_68 = (arg1 + 0x20).o
int128_t var_58 = var_38

if (rdx_6 != rbx_2)
    void* rax_12 = *(arg1 + 0x40)
    void* r10_1 = arg1 + 0x30
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_2 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_2
    
    if (rdx_10 != 0)
    label_140cf34f2:
        int32_t rax_19 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx_2)
            var_74.d = rbx_2
    else
        while (true)
            int64_t rcx_9 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_9 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_140cf34f2
        
        var_74.d = rbx_2

while (true)
    int64_t rax_21 = sx.q(var_58:0xc.d)
    int64_t* rdx_11 = var_68.q
    
    if (rax_21.d == (var_78_2.q u>> 0x20).d && var_58.q == arg1 + 0x30 && rdx_11 == arg1 + 0x20)
        return sub_140865470(arg1 + 0x20, 0) __tailcall
    
    void* rdi = *(*rdx_11 + rax_21 * 0x18 + 8)
    
    if (rdi != 0)
        *(rdi + 0xa0) = 0
        int64_t rcx_12 = *(rdi + 0x98)
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        *(rdi + 0x60) = 0
        
        if (*(rdi + 0x64) != 0)
            sub_1405a5410(rdi + 0x58, 0)
        
        *(rdi + 0x88) = 0xffffffff
        *(rdi + 0x8c) = 0
        sub_14059a8e0(rdi + 0x68, 0)
        int64_t rcx_15 = *(rdi + 0x78)
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        int64_t rcx_16 = *(rdi + 0x58)
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        *(rdi + 0x50) = 0
        int64_t rcx_17 = *(rdi + 0x48)
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        *(rdi + 0x10) = 0
        
        if (*(rdi + 0x14) != 0)
            sub_1405a51b0(rdi + 8, 0)
        
        *(rdi + 0x38) = 0xffffffff
        *(rdi + 0x3c) = 0
        sub_14059a8e0(rdi + 0x18, 0)
        int64_t rcx_20 = *(rdi + 0x28)
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        int64_t rcx_21 = *(rdi + 8)
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        j_sub_140a74f90(rdi)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
