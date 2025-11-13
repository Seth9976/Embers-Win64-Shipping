// 函数: sub_142343aa0
// 地址: 0x142343aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    *(rbx + 0x40) = sub_140a84c80(rcx, 0, 0)

int32_t i_4 = *(rbx + 0x48)
void* r14 = rbx + 0x48

if (i_4 == 0)
    return 

sub_1405a4aa0(arg1 + 0x38, 0, i_4, 4)

if (i_4 s> 0)
    int64_t r8_2 = 0
    uint64_t i_3 = zx.q(i_4)
    uint64_t i
    
    do
        void* rcx_2 = *(arg1 + 0x40)
        void* rax_1 = arg1 + 0x38
        int64_t rdx_3 = (sx.q(*r14) - 1) & r8_2
        
        if (rcx_2 != 0)
            rax_1 = rcx_2
        
        r8_2 += 1
        *(rax_1 + (rdx_3 << 2)) = 0xffffffff
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t r10_1 = *(rbx + 0x28)
void* r9_1 = rbx + 0x10
int32_t rcx_3 = 0
int32_t var_54_1 = 1
int32_t r8_3 = 0
int32_t var_58_1 = 0
void* var_50_1 = r9_1
int32_t var_48_1 = 0xffffffff
int64_t var_44_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_1 + 0x10)
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_142343bb8:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_54_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_44_1.d = r8_3 - rax_10 + 0x1f
        
        if (r8_3 - rax_10 + 0x1f s> r10_1)
            var_44_1.d = r10_1
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_3)
            r8_3 += 0x20
            rcx_3 += 1
            var_44_1:4.d = r8_3
            var_58_1 = rcx_3
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            int32_t var_48_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_142343bb8
        
        var_44_1.d = r10_1

void* var_38_1 = rbx
uint128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t rdi = 0

while (true)
    void* r11_3 = sx.q(rdi) * 0x30 + *rbx
    void* r9_2 = r11_3
    void* rax_13 = *(r11_3 + 0x10)
    uint32_t r8_7 = (*(r11_3 + 0x18) + 0x1f) u>> 5
    uint32_t rcx_5 = r8_7
    
    if (rax_13 != 0)
        r9_2 = rax_13
    
    uint64_t rdx_8 = 0
    
    if (r8_7 != 0)
        if (r8_7 u>= 8)
            uint128_t zmm1 = zx.o(0)
            uint128_t zmm2 = zx.o(0)
            uint128_t zmm0_1
            
            do
                zmm0_1 = *(r9_2 + (rdx_8 << 2))
                uint64_t rax_14 = zx.q((rdx_8 + 4).d)
                rdx_8 = zx.q(rdx_8.d + 8)
                zmm1 ^= zmm0_1
                zmm0_1 = *(r9_2 + (rax_14 << 2)) ^ zmm2
                zmm2 = zmm0_1
            while (rdx_8.d u< (r8_7 & 0xfffffff8))
            
            zmm1 ^= zmm0_1
            zmm1 ^= _mm_bsrli_si128(zmm1, 8)
            rcx_5 = (zmm1 ^ _mm_bsrli_si128(zmm1, 4)).d ^ r8_7
        
        if (rdx_8.d u< r8_7)
            void* rax_15 = r9_2 + (rdx_8 << 2)
            uint64_t i_2 = zx.q(r8_7 - rdx_8.d)
            uint64_t i_1
            
            do
                rcx_5 ^= *rax_15
                rax_15 += 4
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    
    int32_t rax_18 = (*r14 - 1) & rcx_5
    *(r11_3 + 0x2c) = rax_18
    void* rdx_9 = *(arg1 + 0x40)
    int64_t r8_9 = sx.q(rax_18)
    void* rax_19 = arg1 + 0x38
    
    if (rdx_9 != 0)
        rax_19 = rdx_9
    
    *(r11_3 + 0x28) = *(rax_19 + (((sx.q(*r14) - 1) & r8_9) << 2))
    void* rax_21 = arg1 + 0x38
    void* rcx_10 = *(arg1 + 0x40)
    
    if (rcx_10 != 0)
        rax_21 = rcx_10
    
    *(rax_21 + (((sx.q(*r14) - 1) & r8_9) << 2)) = rdi
    var_20_1.d &= not.d(var_30:4.d)
    sub_14059bdd0(&var_30)
    rdi = var_20_1:4.d
    
    if (rdi s>= *(var_30:8.q + 0x18))
        break
    
    rbx = var_38_1
