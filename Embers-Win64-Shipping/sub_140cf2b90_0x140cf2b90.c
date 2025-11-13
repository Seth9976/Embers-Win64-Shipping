// 函数: sub_140cf2b90
// 地址: 0x140cf2b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t var_94 = 1
void* r10 = &arg1[0xb]
int32_t var_98 = 0
int32_t r11 = *(r10 + 0x28)
void* r13 = r10 + 0x10
int32_t r8 = 0
void* var_90 = r13
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_140cf2c4a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r9)
            r8 += 0x20
            r9 += 1
            var_84:4.d = r8
            var_98 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_140cf2c4a
        
        var_84.d = r11
    
    r10 = &arg1[0xb]

int32_t rdx_2 = *(r10 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_2.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_2 s>> 5
int32_t r9_2 = rdx_2 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_2
int128_t var_78 = r10.o
int96_t var_68 = var_48:8.12

if (rdx_2 != r11)
    void* rax_11 = *(r13 + 0x10)
    void* r10_2 = r13
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_6 != 0)
    label_140cf2d22:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_84.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_140cf2d22
        
        var_84.d = r11
    
    r10 = &arg1[0xb]

while (true)
    int32_t var_5c
    int64_t rcx_8 = sx.q(var_5c)
    int64_t* result = var_78.q
    
    if (rcx_8.d == (var_88_2.q u>> 0x20).d && var_68.q == r13 && result == r10)
        return result
    
    int64_t* r14_1 = *(*result + rcx_8 * 0x10)
    char rax_22
    
    if ((not.b(arg3) & 1) == 0)
        rax_22 = sub_140d23d40(*r14_1, *arg1)
    
    if ((not.b(arg3) & 1) != 0 || rax_22 == 0)
        int64_t* rax_23 = j_sub_140a82f30(0x20)
        int64_t* rbx_2 = rax_23
        
        if (rax_23 == 0)
            rbx_2 = nullptr
        else
            __builtin_memset(rbx_2, 0, 0x20)
        
        int64_t rdi_1 = sx.q(rbx_2[1].d)
        int32_t rax_24 = (rdi_1 + 1).d
        rbx_2[1].d = rax_24
        
        if (rax_24 s> *(rbx_2 + 0xc))
            sub_1405a4d70(rbx_2)
        
        *(*rbx_2 + (rdi_1 << 3)) = arg1
        int64_t rdi_2 = sx.q(rbx_2[1].d)
        int32_t rax_26 = (rdi_2 + 1).d
        rbx_2[1].d = rax_26
        
        if (rax_26 s> *(rbx_2 + 0xc))
            sub_1405a4d70(rbx_2)
        
        *(*rbx_2 + (rdi_2 << 3)) = r14_1
        sub_140cfdea0(rbx_2)
        int64_t rdi_3 = sx.q(arg2[1].d)
        int32_t rax_28 = (rdi_3 + 1).d
        arg2[1].d = rax_28
        
        if (rax_28 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rdi_3 << 3)) = rbx_2
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
    r10 = &arg1[0xb]
