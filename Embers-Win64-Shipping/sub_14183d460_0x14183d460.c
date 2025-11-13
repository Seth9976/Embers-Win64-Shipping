// 函数: sub_14183d460
// 地址: 0x14183d460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg2 + 0x28)
int64_t result = 0
int32_t var_84 = 1
int32_t var_88 = 0
void* var_80 = arg2 + 0x10
int32_t var_78 = 0xffffffff
int32_t r8 = 0
int64_t var_74 = 0
int32_t r9 = 0

if (rbx != 0)
    void* rax_1 = *(arg2 + 0x20)
    void* r10_1 = arg2 + 0x10
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_14183d50a:
        int32_t rax_7 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_84_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_74.d = r9 - rax_8 + 0x1f
        
        if (r9 - rax_8 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rax_4 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_74:4.d = r9
            var_88 = r8
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rcx = *(r10_1 + (rax_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_14183d50a
        
        var_74.d = rbx

int32_t rdx_4 = *(arg2 + 0x28)
var_74.d = rdx_4
int32_t r12 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_2 = rdx_4 s>> 5
int32_t rcx_5 = rdx_4 & 0xffffffe0
int32_t var_78_2 = r12
int128_t var_28 = 0xffffffff
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = arg2.o
int128_t var_58 = var_38

if (rdx_4 != rbx)
    void* rax_10 = *(arg2 + 0x20)
    void* r9_2 = arg2 + 0x10
    
    if (rax_10 != 0)
        r9_2 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_8 = *(r9_2 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_8 != 0)
    label_14183d5d2:
        int32_t rax_17 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        int32_t r11_1
        
        if (rax_17 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = rcx_5 - r11_1 + 0x1f
        
        if (rcx_5 - r11_1 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rax_14 = sx.q(r8_2)
            rcx_5 += 0x20
            r8_2 += 1
            
            if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_8 = *(r9_2 + (rax_14 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_14183d5d2
        
        var_74.d = rbx

while (true)
    int64_t rax_19 = sx.q(var_58:0xc.d)
    int64_t* rdx_10 = var_68.q
    
    if (rax_19.d == (var_78_2.q u>> 0x20).d && var_58.q == arg2 + 0x10 && rdx_10 == arg2)
        return result
    
    int64_t r8_3 = *arg1
    result += (*(r8_3 + 0xa0))(arg1, *rdx_10 + rax_19 * 0x18, r8_3)
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
