// 函数: sub_140b51e40
// 地址: 0x140b51e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xa20)

if (result == *(arg1 + 0xa44))
    return result

int32_t r8_1 = 0
int32_t rcx = 0
int32_t rbx_1 = *(arg1 + 0xa38)
int32_t var_a8_1 = 0
int32_t var_a4_1 = 1
void* var_a0_1 = arg1 + 0xa28
int32_t var_98_1 = 0xffffffff
int64_t var_94_1 = 0

if (rbx_1 != 0)
    void* rax = *(arg1 + 0xa30)
    void* r9_1 = arg1 + 0xa28
    
    if (rax != 0)
        r9_1 = rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140b51f08:
        int32_t rax_7 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_a4_2 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_94_1.d = rcx - rax_8 + 0x1f
        
        if (rcx - rax_8 + 0x1f s> rbx_1)
            var_94_1.d = rbx_1
    else
        while (true)
            int64_t rdx_4 = sx.q(r8_1)
            rcx += 0x20
            r8_1 += 1
            var_94_1:4.d = rcx
            var_a8_1 = r8_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_98_2 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140b51f08
        
        var_94_1.d = rbx_1

int32_t rdx_6 = *(arg1 + 0xa38)
int128_t var_70_1 = 0xffffffff
int32_t rsi_1 = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_40_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_3 = rsi_1
var_94_1.d = rdx_6
uint128_t var_50_1 = var_a8_1.o

if (rdx_6 != rbx_1)
    void* rax_10 = *(arg1 + 0xa30)
    void* r10_1 = arg1 + 0xa28
    
    if (rax_10 != 0)
        r10_1 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_1 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_1
    
    if (rdx_10 != 0)
    label_140b51fd2:
        int32_t rax_17 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        int32_t r11_1
        
        if (rax_17 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_94_1.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx_1)
            var_94_1.d = rbx_1
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_98_3 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_140b51fd2
        
        var_94_1.d = rbx_1

while (true)
    int64_t rcx_7 = sx.q(var_50_1:0xc.d)
    void* rdx_11 = (arg1 + 0x18).o.q
    
    if (rcx_7.d == (var_98_3.q u>> 0x20).d && var_50_1.q == arg1 + 0xa28 && rdx_11 == arg1 + 0x18)
        return sub_140b4fb20(arg1 + 0x18, 0)
    
    void* rax_19 = *(rdx_11 + 0xa00)
    int32_t* rbx_2 = *(arg1 + 8)
    
    if (rax_19 != 0)
        rdx_11 = rax_19
    
    void* rsi_2 = rdx_11 + rcx_7 * 0x28
    void* rdx_14 = &rbx_2[sx.q(*(arg1 + 0x10)) * 8]
    
    if (rbx_2 == rdx_14)
    label_140b52098:
        rbx_2 = nullptr
    else
        uint128_t zmm0 = *rsi_2
        int64_t r10_2 = zmm0.q
        int64_t r11_2 = _mm_bsrli_si128(zmm0, 8).q
        
        while (((rbx_2[2] ^ r11_2.d) | (rbx_2[3] ^ (r11_2 u>> 0x20).d)
                | (rbx_2[1] ^ (r10_2 u>> 0x20).d) | (*rbx_2 ^ r10_2.d)) != 0)
            rbx_2 = &rbx_2[8]
            
            if (rbx_2 == rdx_14)
                goto label_140b52098
    
    if (rbx_2 == 0)
        var_a8_1.o = *rsi_2
        void arg_10
        int64_t* rax_28 = sub_140b58260(&arg_10, *(rsi_2 + 0x18), 1)
        int64_t rbx_3 = sx.q(*(arg1 + 0x10))
        uint128_t var_80_1
        var_80_1:8.d = *(rsi_2 + 0x10)
        var_70_1.q = *rax_28
        int32_t rax_30 = (rbx_3 + 1).d
        var_80_1:0xc.d = 1
        *(arg1 + 0x10) = rax_30
        
        if (rax_30 s> *(arg1 + 0x14))
            sub_1405c4e40(arg1 + 8)
        
        int64_t rax_31 = *(arg1 + 8)
        int64_t rcx_20 = rbx_3 << 5
        *(rcx_20 + rax_31) = var_a8_1.o
        *(rcx_20 + rax_31 + 0x10) = var_80_1
    else
        void arg_8
        
        if (rbx_2[4] == *(rsi_2 + 0x10))
            sub_140b5b9d0(sub_140b50d70(rbx_2, &arg_8), *(rsi_2 + 0x18))
        rbx_2[5] += 1
    
    int32_t var_54
    var_50_1:8.d &= not.d(var_54)
    void var_58
    sub_140b4fe60(&var_58)
