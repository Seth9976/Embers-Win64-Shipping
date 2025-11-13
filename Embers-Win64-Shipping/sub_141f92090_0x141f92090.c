// 函数: sub_141f92090
// 地址: 0x141f92090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
EnterCriticalSection(arg1 + 0x10)
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int64_t* rsi = nullptr
int32_t rcx_1 = 0
int32_t r8 = 0
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_58 = 0xffffffff
int32_t r11 = *(arg1 + 0x68)
int64_t* var_120
__builtin_memset(&var_120, 0, 0x14)
int32_t var_10c = 1
int32_t* var_108 = arg1 + 0x50
int32_t var_100 = 0xffffffff
int64_t var_fc = 0
int32_t var_110_1

if (r11 != 0)
    int32_t* rax_2 = *(arg1 + 0x60)
    int32_t* r9_1 = arg1 + 0x50
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141f9219b:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_10c_1 = rax_9
        int32_t var_c8_1 = temp0_2
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_fc.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_fc.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_fc:4.d = r8
            var_110_1 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            int32_t var_100_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141f9219b
        
        var_fc.d = r11

int32_t rdx_5 = *(arg1 + 0x68)
int32_t r9_2 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r8_3 = rdx_5 s>> 5
int128_t var_d8 = 0xffffffff
int64_t* var_f0
var_f0.d = r8_3
int128_t var_e8
var_e8:8.d = r9_2
int32_t r9_4 = rdx_5 & 0xffffffe0
int64_t var_98 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_e8:0xc.d = rdx_5
var_d8.d = r9_4
int128_t var_b8 = (arg1 + 0x40).o
int128_t var_a8 = var_110_1.o

if (rdx_5 != r11)
    int32_t* rax_12 = *(arg1 + 0x60)
    int32_t* r10_1 = arg1 + 0x50
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = r10_1[sx.q(r8_3)] & r9_2
    
    if (rdx_9 != 0)
    label_141f9228d:
        int32_t rax_19 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t var_124_1 = temp0_4
        int32_t rdi_1
        
        if (rax_19 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_e8:0xc.d = r9_4 - rdi_1 + 0x1f
        
        if (r9_4 - rdi_1 + 0x1f s> r11)
            var_e8:0xc.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_4 += 0x20
            r8_3 += 1
            var_d8.d = r9_4
            var_f0.d = r8_3
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r10_1[rcx_6 + 1]
            var_e8:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141f9228d
        
        var_e8:0xc.d = r11

while (true)
    int64_t rax_21 = sx.q(var_a8:0xc.d)
    int64_t* rdx_10 = var_b8.q
    int64_t var_118_1
    
    if (rax_21.d == (var_e8:8.q u>> 0x20).d && var_a8.q == arg1 + 0x50 && rdx_10 == arg1 + 0x40)
        int64_t* rdi_3 = rsi
        void* r14_4 = &rsi[sx.q(var_118_1.d) * 2]
        
        if (rsi != r14_4)
            do
                sub_141f96520(arg1 + 0x40, rdi_3)
                rdi_3 = &rdi_3[2]
            while (rdi_3 != r14_4)
        
        sub_141f79130(arg1 + 0x90)
        int64_t rcx_19
        
        if (arg1 + 0xa0 == &var_88)
            rcx_19 = var_48
        else
            sub_140780e10(arg1 + 0xa0, &var_88)
            int64_t r15_1 = var_48
            void var_50
            
            if (r15_1 == 0)
                memmove(arg1 + 0xd8, &var_50, (r15_1 + 4).d)
            int64_t rcx_18 = *(arg1 + 0xe0)
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
                r15_1 = var_48
            
            *(arg1 + 0xe0) = r15_1
            rcx_19 = 0
            int64_t var_48_1 = 0
            *(arg1 + 0xe8) = var_40
        
        int32_t var_40_1 = 0
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int64_t var_80
        var_80.d = 0
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_78
        void* result = sub_14059a8e0(&var_78, 0)
        int64_t var_68
        
        if (var_68 != 0)
            result = sub_140a74f90(var_68)
        
        int64_t rcx_23 = var_88
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
        
        if (rsi != 0)
            result = sub_140a74f90(rsi)
        
        if (arg1 != -0x10)
            result = LeaveCriticalSection(arg1 + 0x10)
        
        __security_check_cookie(rax_1 ^ &var_148)
        return result
    
    int64_t rcx_8 = rax_21 * 5
    int64_t rax_22 = *rdx_10
    int64_t* rdi_2 = rax_22 + (rcx_8 << 3)
    void* rcx_9 = *(rax_22 + (rcx_8 << 3) + 0x18)
    
    if (rcx_9 != 0)
        int32_t rax_23 = 0
        
        if (0 == *(rcx_9 + 8))
            *(rcx_9 + 8) = 0
        else
            rax_23 = *(rcx_9 + 8)
        
        void var_c4
        
        if (rax_23 != 1)
            rsi = var_120
        else if (*sub_141f87b60(arg1 + 0xa0, &var_c4, rdi_2) == 0xffffffff)
            void var_c0
            sub_141f77960(&var_88, &var_c0, rdi_2, nullptr)
            rsi = var_120
        else
            int64_t rsi_1 = sx.q(var_118_1.d)
            int32_t rax_25 = (rsi_1 + 1).d
            var_118_1.d = rax_25
            
            if (rax_25 s> var_118_1:4.d)
                sub_1405a4f90(&var_120)
            
            rsi = var_120
            *(rsi + rsi_1 * 0x10) = *rdi_2
    
    var_a8:8.d &= not.d(var_b8:0xc.d)
    sub_14059bdd0(&var_b8:8)
