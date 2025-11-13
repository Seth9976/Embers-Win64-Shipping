// 函数: sub_14183bb60
// 地址: 0x14183bb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t var_5c = 0x80
int32_t* r14 = arg2 + 0x10
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t rcx = 0
void* r15 = arg2
int64_t result = 0
int32_t var_54 = 0
int32_t r8 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_58 = 0xffffffff
int32_t rbx = r14[6]
int32_t var_118 = 0
int32_t var_114 = 1
int32_t* var_110 = r14
int32_t var_108 = 0xffffffff
int64_t var_104 = 0

if (rbx != 0)
    int32_t* rax_2 = *(r14 + 0x10)
    int32_t* r9_1 = r14
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_14183bc5c:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_114_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_104.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_104.d = rbx
    else
        while (true)
            int64_t rax_5 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_104:4.d = r8
            var_118 = rcx
            
            if (rax_5.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = r9_1[rax_5 + 1]
            int32_t var_108_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14183bc5c
        
        var_104.d = rbx

int32_t rdx_3 = *(r15 + 0x28)
int32_t rdi = 0xffffffff << (rdx_3.b & 0x1f)
int128_t var_e8 = var_118.o
int32_t rcx_5 = rdx_3 & 0xffffffe0
int32_t r8_3 = rdx_3 s>> 5
int128_t var_d8 = 0xffffffff
int64_t var_90 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_e8
var_e8:8.d = rdi
var_e8:0xc.d = rdx_3
int128_t var_b0 = r15.o
int128_t var_a0 = zmm1

if (rdx_3 != rbx)
    int32_t* rax_11 = *(r14 + 0x10)
    int32_t* r9_2 = r14
    
    if (rax_11 != 0)
        r9_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_7 = r9_2[sx.q(r8_3)] & rdi
    
    if (rdx_7 != 0)
    label_14183bd33:
        int32_t rax_18 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_e8:0xc.d = rcx_5 - r11_1 + 0x1f
        
        if (rcx_5 - r11_1 + 0x1f s> rbx)
            var_e8:0xc.d = rbx
    else
        while (true)
            int64_t rax_15 = sx.q(r8_3)
            rcx_5 += 0x20
            r8_3 += 1
            
            if (rax_15.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_7 = r9_2[rax_15 + 1]
            var_e8:8.d = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_14183bd33
        
        var_e8:0xc.d = rbx

uint64_t rcx_8 = var_e8:8.q u>> 0x20
uint64_t var_b8 = rcx_8

while (true)
    int64_t rax_20 = sx.q(var_a0:0xc.d)
    int64_t* rdx_9 = var_b0.q
    
    if (rax_20.d == rcx_8.d && var_a0.q == r14 && rdx_9 == r15)
        int32_t var_40_1 = 0
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int64_t var_80
        bool cond:3 = var_80:4.d == 0
        var_80.d = 0
        
        if (not(cond:3))
            sub_1405a5130(&var_88, 0)
        
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_78
        sub_14059a8e0(&var_78, 0)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_23 = var_88
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        __security_check_cookie(rax_1 ^ &var_148)
        return result
    
    int32_t var_124
    sub_140926e00(arg1 + 0x200, &var_124, *rdx_9 + rax_20 * 0x18)
    int64_t rax_22 = sx.q(var_124)
    void* const rcx_11
    
    if (rax_22.d == 0xffffffff)
        rcx_11 = nullptr
    else
        rcx_11 = *(arg1 + 0x200) + rax_22 * 0x28
    
    int64_t* rax_24 = rcx_11 + 0x10
    
    if (rcx_11 == 0)
        rax_24 = nullptr
    
    if (rax_24 != 0)
        int64_t* r15_1 = *rax_24
        void* r12_1 = &r15_1[sx.q(rax_24[1].d)]
        void* var_c0_1 = r12_1
        
        if (r15_1 != r12_1)
            do
                void* rax_26 = *r15_1
                int128_t* rbx_1 = *(rax_26 + 0x48)
                void* r14_1 = rbx_1 + sx.q(*(rax_26 + 0x50)) * 0x18
                
                if (rbx_1 != r14_1)
                    do
                        char var_128
                        void var_c8
                        sub_140acafe0(&var_88, &var_c8, rbx_1, &var_128)
                        
                        if (var_128 == 0)
                            int32_t var_120
                            sub_140cba0f0(arg1 + 0x250, &var_120, rbx_1)
                            int64_t rax_28 = sx.q(var_120)
                            void* const rcx_17
                            
                            if (rax_28.d == 0xffffffff)
                                rcx_17 = nullptr
                            else
                                rcx_17 = (rax_28 << 5) + *(arg1 + 0x250)
                            
                            int64_t* rax_29 = rcx_17 + 0x10
                            
                            if (rcx_17 == 0)
                                rax_29 = nullptr
                            
                            if (rax_29 != 0)
                                result += *(*rax_29 + 0x38)
                        
                        rbx_1 += 0x18
                    while (rbx_1 != r14_1)
                    
                    r12_1 = var_c0_1
                
                r15_1 = &r15_1[1]
            while (r15_1 != r12_1)
            
            r14 = var_110
        
        r15 = arg2
    
    var_a0:8.d &= not.d(var_b0:0xc.d)
    sub_14059bdd0(&var_b0:8)
    rcx_8 = var_b8
