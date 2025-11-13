// 函数: sub_140ce5390
// 地址: 0x140ce5390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = arg2

if (arg2 != 0)
    void* rax_1 = sub_140cdddf0()
    void* rdx = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t rax_4 = sub_140d3cb50(rdi)
        
        if (rax_4 != 0)
            int32_t rdx_1 = *(rdi + 8)
            
            if (((rdx_1 u>> 0x15).b & 1) == 0)
                *(rdi + 8) = rdx_1 | 0x400
                sub_140cc45a0(rax_4 + 0x200, rdi)
        
        rdi = *(rdi + 0x28)

int32_t rax_5 = sub_140ce67d0(arg1, rdi)
int32_t rax_6 = sub_140ce6a30(arg1, rdi)
int32_t r10 = arg1[0x32].d
int64_t rsi_1 = 0
int32_t var_a4 = 1
int32_t r14_2 = rax_5 + rax_6 + arg1[0x2e].d - *(arg1 + 0x19c)
void* var_a0 = &arg1[0x2f]
int32_t rcx_9 = 0
int32_t var_a8 = 0
int32_t var_98 = 0xffffffff
int32_t r8_2 = 0
int64_t var_94 = 0

if (r10 != 0)
    void* rax_7 = arg1[0x31]
    void* r9_1 = &arg1[0x2f]
    
    if (rax_7 != 0)
        r9_1 = rax_7
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *r9_1
    
    if (rdx_8 != 0)
    label_140ce54c8:
        int32_t rax_14 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
        int32_t var_a4_1 = rax_14
        int32_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0x20
        else
            rax_15 = 0x1f - temp0_2
        
        var_94.d = r8_2 - rax_15 + 0x1f
        
        if (r8_2 - rax_15 + 0x1f s> r10)
            var_94.d = r10
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_9)
            r8_2 += 0x20
            rcx_9 += 1
            var_94:4.d = r8_2
            var_a8 = rcx_9
            
            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140ce54c8
        
        var_94.d = r10

int32_t rdx_10 = arg1[0x32].d
var_94.d = rdx_10
int128_t var_48 = 0xffffffff
int128_t var_58 = var_a8.o
int32_t r12 = 0xffffffff << (rdx_10 & 0x1f).b
int32_t r8_5 = rdx_10 s>> 5
int32_t r9_3 = rdx_10 & 0xffffffe0
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = r12
int128_t var_88 = (&arg1[0x2d]).o
int128_t var_78 = var_58

if (rdx_10 != r10)
    void* rax_19 = arg1[0x31]
    void* r11_1 = &arg1[0x2f]
    
    if (rax_19 != 0)
        r11_1 = rax_19
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_14 = *(r11_1 + (sx.q(r8_5) << 2)) & r12
    
    if (rdx_14 != 0)
    label_140ce55a6:
        int32_t rax_25 = neg.d(rdx_14) & rdx_14
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
        int32_t r15_1
        
        if (rax_25 == 0)
            r15_1 = 0x20
        else
            r15_1 = 0x1f - temp0_4
        
        var_94.d = r9_3 - r15_1 + 0x1f
        
        if (r9_3 - r15_1 + 0x1f s> r10)
            var_94.d = r10
    else
        while (true)
            int64_t rcx_13 = sx.q(r8_5)
            r9_3 += 0x20
            r8_5 += 1
            
            if (rcx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r11_1 + (rcx_13 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_140ce55a6
        
        var_94.d = r10

while (true)
    int64_t rcx_15 = sx.q(var_78:0xc.d)
    int32_t rax_18
    
    if (rcx_15.d != (var_98_2.q u>> 0x20).d || var_78.q != &arg1[0x2f])
        rax_18.b = 0
    else
        rax_18.b = 1
    
    int64_t* rdx_15 = var_88.q
    
    if (rax_18.b == 0 || rdx_15 != &arg1[0x2d])
        rax_18.b = 1
    else
        rax_18.b = 0
    
    if (rax_18.b == 0)
        break
    
    int64_t* rcx_17 = *(*rdx_15 + rcx_15 * 0x10)
    (*(*rcx_17 + 0x2c8))(rcx_17, rdi)
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)

arg1[0x2e].d = 0

if (*(arg1 + 0x174) != 0)
    sub_1405a5410(&arg1[0x2d], 0)

arg1[0x33].d = 0xffffffff
*(arg1 + 0x19c) = 0
sub_14059a8e0(&arg1[0x2f], 0)
int32_t i_2 = arg1[0x36].d

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_21 = arg1[0x35]
        void* rax_30 = &arg1[0x34]
        int64_t rdx_19 = (sx.q(arg1[0x36].d) - 1) & rsi_1
        
        if (rcx_21 != 0)
            rax_30 = rcx_21
        
        rsi_1 += 1
        *(rax_30 + (rdx_19 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rax_31 = sub_140ce5720(arg1, rdi)
sub_140cda4d0(&arg1[2], 0)
sub_140cda450(&arg1[0xc], 0)
*(arg1 + 0xc) = 1
return zx.q(r14_2 + rax_31)
