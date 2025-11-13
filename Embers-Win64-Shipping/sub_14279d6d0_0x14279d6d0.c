// 函数: sub_14279d6d0
// 地址: 0x14279d6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t result = 0
void* r9 = nullptr
int64_t rax = *rcx
void* var_88 = nullptr

if (rax != 0)
    void* rax_1 = rcx[2]
    void* rcx_1 = &rcx[4]
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    (**rcx_1)(rcx_1, &var_88, arg3, 0)
    r9 = var_88

int32_t var_e8 = 0
int32_t r15 = *(arg2 + 0x1c8)
int32_t var_e4 = 1
int32_t rcx_2 = 0
void* var_e0 = arg2 + 0x1b0
int32_t r8 = 0
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r15 != 0)
    void* rax_3 = *(arg2 + 0x1c0)
    void* r10_1 = arg2 + 0x1b0
    
    if (rax_3 != 0)
        r10_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r15 - 1)
    int32_t rdx_3 = *r10_1
    
    if (rdx_3 != 0)
    label_14279d7ac:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_e4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_d4.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r15)
            var_d4.d = r15
    else
        while (true)
            int64_t rax_6 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_d4:4.d = r8
            var_e8 = rcx_2
            
            if (rax_6.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_3 = *(r10_1 + (rax_6 << 2) + 4)
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14279d7ac
        
        var_d4.d = r15

int32_t rdx_4 = *(arg2 + 0x1c8)
var_d4.d = rdx_4
int32_t r12 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_50 = var_e8.o
int32_t r8_3 = rdx_4 s>> 5
int32_t rcx_7 = rdx_4 & 0xffffffe0
int32_t var_d8_2 = r12
int128_t var_40 = 0xffffffff
int64_t var_a8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_c8 = (arg2 + 0x1a0).o
int128_t var_b8 = var_50

if (rdx_4 != r15)
    void* rax_12 = *(arg2 + 0x1c0)
    void* r10_2 = arg2 + 0x1b0
    
    if (rax_12 != 0)
        r10_2 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r15 - 1)
    int32_t rdx_8 = *(r10_2 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_8 != 0)
    label_14279d881:
        int32_t rax_19 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_d4.d = rcx_7 - r11_1 + 0x1f
        
        if (rcx_7 - r11_1 + 0x1f s> r15)
            var_d4.d = r15
    else
        while (true)
            int64_t rax_16 = sx.q(r8_3)
            rcx_7 += 0x20
            r8_3 += 1
            
            if (rax_16.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_8 = *(r10_2 + (rax_16 << 2) + 4)
            var_d8_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_14279d881
        
        var_d4.d = r15

while (true)
    int64_t rcx_9 = sx.q(var_b8:0xc.d)
    int64_t* rax_21 = var_c8.q
    void var_78
    
    if (rcx_9.d == (var_d8_2.q u>> 0x20).d && var_b8.q == arg2 + 0x1b0 && rax_21 == arg2 + 0x1a0)
        if (rax != 0)
            void* rcx_15 = &var_78
            
            if (r9 != 0)
                rcx_15 = r9
            
            int64_t rdx_11 = *rcx_15
            (*(rdx_11 + 0x10))(rcx_15, rdx_11)
        
        return result
    
    int64_t arg_8 = *(*rax_21 + rcx_9 * 0x10)
    void* rcx_12 = &var_78
    
    if (r9 != 0)
        rcx_12 = r9
    
    if (rax((*(*rcx_12 + 8))(rcx_12), &arg_8) != 0)
        result += 1
    
    var_b8:8.d &= not.d(var_c8:0xc.d)
    sub_14059bdd0(&var_c8:8)
    r9 = var_88
