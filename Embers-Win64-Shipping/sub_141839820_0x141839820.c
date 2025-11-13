// 函数: sub_141839820
// 地址: 0x141839820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
void* r14 = arg1
void* rsi = arg2
int64_t result = 0
int32_t r8 = 0
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_58 = 0xffffffff
int32_t rbx = *(arg2 + 0x28)
int32_t rcx = 0
int32_t var_120 = 0
int32_t var_11c = 1
int32_t* var_118 = arg2 + 0x10
int32_t var_110 = 0xffffffff
int64_t var_10c = 0

if (rbx != 0)
    int32_t* rax_2 = *(arg2 + 0x20)
    int32_t* r9_1 = arg2 + 0x10
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_14183991c:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_11c_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_10c.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_10c.d = rbx
    else
        while (true)
            int64_t rax_5 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_10c:4.d = r8
            var_120 = rcx
            
            if (rax_5.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = r9_1[rax_5 + 1]
            int32_t var_110_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14183991c
        
        var_10c.d = rbx

int32_t rdx_3 = *(rsi + 0x28)
var_10c.d = rdx_3
int32_t rdi = 0xffffffff << (rdx_3.b & 0x1f)
int128_t var_a8 = var_120.o
int32_t r8_3 = rdx_3 s>> 5
int32_t rcx_5 = rdx_3 & 0xffffffe0
int32_t var_110_2 = rdi
int128_t var_98 = 0xffffffff
int64_t var_b8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_d8 = rsi.o
int128_t var_c8 = var_a8

if (rdx_3 != rbx)
    int32_t* rax_11 = *(arg2 + 0x20)
    int32_t* r9_2 = arg2 + 0x10
    
    if (rax_11 != 0)
        r9_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_7 = r9_2[sx.q(r8_3)] & rdi
    
    if (rdx_7 != 0)
    label_1418399f3:
        int32_t rax_18 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_10c.d = rcx_5 - r11_1 + 0x1f
        
        if (rcx_5 - r11_1 + 0x1f s> rbx)
            var_10c.d = rbx
    else
        while (true)
            int64_t rax_15 = sx.q(r8_3)
            rcx_5 += 0x20
            r8_3 += 1
            
            if (rax_15.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_7 = r9_2[rax_15 + 1]
            var_110_2 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_1418399f3
        
        var_10c.d = rbx

while (true)
    int64_t rax_20 = sx.q(var_c8:0xc.d)
    int64_t* rdx_9 = var_d8.q
    
    if (rax_20.d == (var_110_2.q u>> 0x20).d && var_c8.q == arg2 + 0x10 && rdx_9 == rsi)
        int32_t var_40_1 = 0
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int64_t var_80
        var_80.d = 0
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_78
        sub_14059a8e0(&var_78, 0)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_16 = var_88
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        __security_check_cookie(rax_1 ^ &var_148)
        return result
    
    int32_t var_100
    sub_140926e00(r14 + 0x200, &var_100, *rdx_9 + rax_20 * 0x18)
    int64_t rax_22 = sx.q(var_100)
    void* const rcx_9
    
    if (rax_22.d == 0xffffffff)
        rcx_9 = nullptr
    else
        rcx_9 = *(r14 + 0x200) + rax_22 * 0x28
    
    int64_t* rax_24 = rcx_9 + 0x10
    
    if (rcx_9 == 0)
        rax_24 = nullptr
    
    if (rax_24 != 0)
        int64_t* rbx_1 = *rax_24
        int64_t rdi_1 = 0
        uint64_t r14_2 = sx.q(rax_24[1].d) << 3 u>> 3
        
        if (rbx_1 u> &rbx_1[rax_24[1]])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                int64_t rsi_1 = *rbx_1
                int64_t var_e8 = rsi_1
                char var_128
                void var_f0
                sub_140812a70(&var_88, &var_f0, &var_e8, &var_128)
                
                if (var_128 == 0)
                    result += *(rsi_1 + 0x58)
                
                rbx_1 = &rbx_1[1]
                rdi_1 += 1
            while (rdi_1 != r14_2)
            
            rsi = arg2
        
        r14 = arg1
    
    var_c8:8.d &= not.d(var_d8:0xc.d)
    sub_14059bdd0(&var_d8:8)
