// 函数: sub_141e13c60
// 地址: 0x141e13c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg3 + 0x28)
int32_t r9 = 0
int32_t var_a8 = 0
int32_t var_a4 = 1
int128_t zmm6 = arg4
void* var_a0 = arg3 + 0x10
int32_t var_98 = 0xffffffff
int64_t var_94 = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(arg3 + 0x20)
    void* r10_1 = arg3 + 0x10
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_141e13d1a:
        int32_t rax_8 = neg.d(rcx) & rcx
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
            int64_t rcx_1 = sx.q(r9)
            r8 += 0x20
            r9 += 1
            var_94:4.d = r8
            var_a8 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141e13d1a
        
        var_94.d = r11

int32_t rdx_2 = *(arg3 + 0x28)
int128_t var_48 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_2.b & 0x1f)
int128_t var_58 = var_a8.o
int32_t r8_3 = rdx_2 s>> 5
int32_t r9_2 = rdx_2 & 0xffffffe0
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = rsi
var_94.d = rdx_2
int128_t var_88 = arg3.o
int128_t var_78 = var_58

if (rdx_2 != r11)
    void* rax_11 = *(arg3 + 0x20)
    void* r10_2 = arg3 + 0x10
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_6 != 0)
    label_141e13de2:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_94.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141e13de2
        
        var_94.d = r11

while (true)
    int64_t rcx_8 = sx.q(var_78:0xc.d)
    int64_t result = var_88.q
    
    if (rcx_8.d == (var_98_2.q u>> 0x20).d && var_78.q == arg3 + 0x10 && result == arg3)
        return result
    
    int64_t* rdi_3 = (rcx_8 << 5) + *result
    int64_t rbx_2 = *rdi_3
    zmm6 = sub_141e13ea0(arg1, arg2, &rdi_3[1], 
        sub_141e107a0(&arg1[8], sub_140b5ead0(rbx_2.d) + (rbx_2 u>> 0x20).d, rdi_3), zmm6.d)
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
