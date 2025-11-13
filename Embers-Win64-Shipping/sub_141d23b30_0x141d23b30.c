// 函数: sub_141d23b30
// 地址: 0x141d23b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a4 = 1
int64_t* var_b8 = nullptr
int32_t rsi = *(arg1 + 0x30)
void* r10 = arg1 + 0x18
int32_t var_ac = 0
int32_t rcx = 0
int32_t var_a8 = 0
int64_t* r12 = nullptr
void* var_a0 = r10
int32_t r14 = 0
int32_t var_98 = 0xffffffff
int32_t r11 = 0
int32_t var_94 = 0
int32_t r8 = 0
int32_t var_90 = 0

if (rsi != 0)
    void* rax_1 = *(r10 + 0x10)
    void* r9_1 = r10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi - 1)
    int32_t rdx_2 = *r9_1
    int32_t var_94_2
    
    if (rdx_2 != 0)
    label_141d23bf8:
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
        
        int32_t var_94_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rsi)
            var_94_2 = rsi
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_90_1 = rcx
            var_a8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141d23bf8
        
        var_94_2 = rsi
    r10 = arg1 + 0x18

int32_t rdx_5 = *(arg1 + 0x30)
int32_t rsi_1 = *(r10 + 0x18)
int128_t var_80 = var_a8.o
int32_t r13_1 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_3 = rdx_5 & 0xffffffe0
int128_t var_70 = 0xffffffff
int32_t r8_2 = rdx_5 s>> 5
int64_t var_40 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_80
var_80:8.d = r13_1
var_80:0xc.d = rdx_5
int64_t var_60 = (arg1 + 8).o.q
int128_t var_50 = zmm1

if (rdx_5 != rsi_1)
    void* rax_11 = *(r10 + 0x10)
    
    if (rax_11 != 0)
        r10 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rsi_1 - 1)
    int32_t rdx_9 = *(r10 + (sx.q(r8_2) << 2)) & r13_1
    
    if (rdx_9 != 0)
    label_141d23cc2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_80:0xc.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> rsi_1)
            var_80:0xc.d = rsi_1
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10 + (rcx_5 << 2) + 4)
            var_80:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141d23cc2
        
        var_80:0xc.d = rsi_1
    
    r10 = var_a0
    r11 = 0

while (true)
    int64_t rax_20 = sx.q(var_50:0xc.d)
    
    if (rax_20.d == (var_80:8.q u>> 0x20).d && var_50.q == r10 && var_60 == arg1 + 8)
        int64_t r15_1 = 0
        int64_t* rdi_5 = r12
        void* rcx_11 = &r12[sx.q(r14)]
        uint64_t rsi_6 = (rcx_11 - r12 + 7) u>> 3
        
        if (r12 u> rcx_11)
            rsi_6 = 0
        
        if (rsi_6 != 0)
            int32_t var_b0
            var_b0.q = arg2
            
            do
                var_b8 = *rdi_5
                sub_141d208d0(arg1 + 8, &var_b8)
                r15_1 += 1
                rdi_5 = &rdi_5[1]
            while (r15_1 != rsi_6)
        
        uint64_t result = sub_140943780(arg1 + 0x58, arg2)
        
        if (r12 == 0)
            return result
        
        return sub_140a74f90(r12)
    
    int64_t* rdi_4 = rax_20 * 0x30 + *var_60
    
    if (rdi_4[1] == arg2)
        int64_t rsi_2 = sx.q(r14)
        r14 = (rsi_2 + 1).d
        
        if (r14 s> r11)
            sub_1405a4d70(&var_b8)
            r12 = var_b8
        
        r12[rsi_2] = *rdi_4
    
    if (*(rdi_4 + 0x14) == arg2)
        int64_t arg_20
        sub_140b58170(&arg_20, &data_1437020ab, 1)
        *(rdi_4 + 0x14) = arg_20
    
    int32_t var_54
    var_50:8.d &= not.d(var_54)
    void var_58
    sub_14059bdd0(&var_58)
    r11 = var_ac
    r10 = arg1 + 0x18
