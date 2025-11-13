// 函数: sub_141ddc0a0
// 地址: 0x141ddc0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x183)

if ((rax & 0x10) == 0)
    return 1

void* r10 = arg1 + 0x140
*(arg1 + 0x183) = rax & 0xef
int64_t* rsi = nullptr
int32_t r11 = *(r10 + 0x18)
int32_t rcx = 0
int32_t rbx = 0
int64_t* var_b8 = nullptr
int32_t r13 = 0
int32_t var_ac = 0
int32_t r8 = 0
int32_t var_a8 = 0
int32_t var_a4 = 1
void* var_a0 = r10
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    void* r9_1 = r10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141ddc1a8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_94:4.d = r8
            var_a8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141ddc1a8
        
        var_94.d = r11
    
    r10 = var_a0

int32_t r14 = *(r10 + 0x18)
void* r11_1 = arg1 + 0x130
int32_t rdx_4 = *(r11_1 + 0x28)
int32_t r9_2 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_70 = 0xffffffff
uint128_t var_80
var_80:8.d = r9_2
int32_t r9_4 = rdx_4 & 0xffffffe0
int32_t r8_3 = rdx_4 s>> 5
int64_t var_40 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_80:0xc.d = rdx_4
int64_t* var_60 = r11_1.o.q
uint128_t var_50 = var_a8.o

if (rdx_4 != r14)
    void* rax_11 = *(r10 + 0x10)
    
    if (rax_11 != 0)
        r10 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r14 - 1)
    int32_t rdx_8 = *(r10 + (sx.q(r8_3) << 2)) & r9_2
    
    if (rdx_8 != 0)
    label_141ddc282:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_80:0xc.d = r9_4 - rdi_1 + 0x1f
        
        if (r9_4 - rdi_1 + 0x1f s> r14)
            var_80:0xc.d = r14
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_4 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10 + (rcx_5 << 2) + 4)
            var_80:8.d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141ddc282
        
        var_80:0xc.d = r14
    
    r10 = var_a0
    r11_1 = arg1 + 0x130

while (true)
    int64_t rax_20 = sx.q(var_50:0xc.d)
    
    if (rax_20.d == (var_80:8.q u>> 0x20).d && var_50.q == r10 && var_60 == r11_1)
        int64_t r12_2 = 0
        int64_t* rbx_1 = rsi
        void* rcx_13 = &rsi[sx.q(rbx)]
        uint64_t rdi_7 = (rcx_13 - rsi + 7) u>> 3
        
        if (rsi u> rcx_13)
            rdi_7 = 0
        
        if (rdi_7 != 0)
            do
                sub_141dd4b30(arg1, *(*rbx_1 + 0x230))
                rbx_1 = &rbx_1[1]
                r12_2 += 1
            while (r12_2 != rdi_7)
        
        uint8_t rbx_2 = not.b(*(arg1 + 0x183) u>> 4) & 1
        
        if (rsi != 0)
            sub_140a74f90(rsi)
        
        return zx.q(rbx_2)
    
    int64_t r14_1 = _mm_bsrli_si128(*(*var_60 + rax_20 * 0x18), 8).q
    
    if (r14_1 != 0)
        int64_t* rax_22 = sub_141e7ed60(*(arg1 + 0x50), r14_1)
        
        if (rax_22 == 0)
            goto label_141ddc339
        
        int64_t rdx_11 = *rax_22
        char rax_23 = (*(rdx_11 + 0x50))(rax_22, rdx_11)
        
        if (rax_23 != 0 || arg3 != rax_23)
            (*(*rax_22 + 0x40))(rax_22)
        label_141ddc339:
            int64_t rdi_3 = sx.q(rbx)
            rbx = (rdi_3 + 1).d
            
            if (rbx s> r13)
                sub_1405a4d70(&var_b8)
                r13 = var_ac
                rsi = var_b8
            
            rsi[rdi_3] = r14_1
        else
            *(rax_22 + 0x3c) = arg2
            rax_22[8].d = arg2
            *(arg1 + 0x183) |= 0x10
    
    int32_t var_54
    var_50:8.d &= not.d(var_54)
    void var_58
    sub_14059bdd0(&var_58)
    r10 = var_a0
    r11_1 = arg1 + 0x130
