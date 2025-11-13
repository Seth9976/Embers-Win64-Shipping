// 函数: sub_1423e6b10
// 地址: 0x1423e6b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
*arg2 = 0
int64_t rax = sub_140d3c6e0(arg3)

if (rax == 0)
    return arg2

int32_t arg_10
sub_140ba6ab0(arg1 + 0xf0, &arg_10, rax)
int64_t rax_1 = sx.q(arg_10)
void* const rax_4

if (rax_1.d == 0xffffffff)
    rax_4 = nullptr
else
    rax_4 = rax_1 * 0x60 + *(arg1 + 0xf0)

void* r15 = rax_4 + 8

if (rax_4 == 0)
    r15 = nullptr

if (r15 == 0)
    return arg2

int32_t r11_1 = *(r15 + 0x28)
int32_t rcx_2 = 0
int32_t var_88_1 = 0
int32_t var_84_1 = 1
void* var_80 = r15 + 0x10
int32_t var_78_1 = 0xffffffff
int64_t var_74_1 = 0

if (r11_1 != 0)
    void* rax_5 = *(r15 + 0x20)
    void* r8_1 = r15 + 0x10
    
    if (rax_5 != 0)
        r8_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_3 = *r8_1
    
    if (rdx_3 != 0)
    label_1423e6c13:
        int32_t rax_12 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_84_2 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_74_1.d = rcx_2 - rax_13 + 0x1f
        
        if (rcx_2 - rax_13 + 0x1f s> r11_1)
            var_74_1.d = r11_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rbx)
            rcx_2 += 0x20
            rbx += 1
            var_74_1:4.d = rcx_2
            var_88_1 = rbx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r8_1 + (rdx_4 << 2) + 4)
            var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1423e6c13
        
        var_74_1.d = r11_1

int32_t r14_1 = *(r15 + 0x28)
int32_t r8_3 = r14_1 s>> 5
int128_t var_58_1 = var_88_1.o
int32_t r9_2 = r14_1 & 0xffffffe0
int128_t var_48_1 = 0xffffffff
int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_88_1.o = r15.o
var_78_1.o = var_58_1

if (r14_1 != r11_1)
    void* rax_15 = *(r15 + 0x20)
    void* r11_2 = r15 + 0x10
    
    if (rax_15 != 0)
        r11_2 = rax_15
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11_1 - 1)
    int32_t rdx_9 = *(r11_2 + (sx.q(r8_3) << 2)) & 0xffffffff << (r14_1.b & 0x1f)
    
    if (rdx_9 != 0)
    label_1423e6ccb:
        int32_t rax_22 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t rdi_1
        
        if (rax_22 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        int32_t rax_23 = *(r15 + 0x28)
        r14_1 = r9_2 - rdi_1 + 0x1f
        
        if (r14_1 s> rax_23)
            r14_1 = rax_23
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_2 + (rcx_8 << 2) + 4)
            
            if (rdx_9 != 0)
                goto label_1423e6ccb
        
        r14_1 = *(r15 + 0x28)

while (true)
    int32_t var_6c
    int64_t rax_24 = sx.q(var_6c)
    int64_t* rbx_1 = var_88_1.q
    
    if (rax_24.d == r14_1 && var_78_1.q == r15 + 0x10 && rbx_1 == r15)
        return arg2
    
    int64_t rbx_3 = *(*rbx_1 + rax_24 * 0x10)
    void* rcx_12 = (zx.q(rbx_3.d) & 0xffffff) * 0x90 + *(arg1 + 8)
    
    if (*(rcx_12 + 1) != 4)
        if (*(rcx_12 + 0x20) != *arg3 || *(rcx_12 + 0x24) != arg3[1])
            if (sub_140d3e110(rcx_12 + 0x20) == 0 && sub_140d3e110(arg3) == 0)
                goto label_1423e6d6e
        else
        label_1423e6d6e:
            
            if (*(rcx_12 + 0x28) == *(arg3 + 8))
                *arg2 = rbx_3
                return arg2
    
    var_74_1:4.d &= not.d(var_80:4.d)
    sub_14059bdd0(&var_80)
