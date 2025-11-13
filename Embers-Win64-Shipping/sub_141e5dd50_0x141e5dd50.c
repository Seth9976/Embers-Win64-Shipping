// 函数: sub_141e5dd50
// 地址: 0x141e5dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_88 = 0xffffffff
int32_t var_98 = 0
int32_t rdi = arg1[0x80].d
void* var_90 = &arg1[0x7d]
uint64_t rbx
rbx.b = 0
int32_t var_84 = 0
int32_t var_94 = 1
int32_t rcx = 0
int32_t var_80 = 0

if (rdi != 0)
    void* rax_1 = arg1[0x7f]
    void* r9_1 = &arg1[0x7d]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_84_2
    
    if (rdx_3 != 0)
    label_141e5de08:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rdi)
            var_84_2 = rdi
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_80_1 = rcx
            var_98 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e5de08
        
        var_84_2 = rdi

int32_t rdx_6 = arg1[0x80].d
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
int32_t var_84_3 = rdx_6
int128_t var_78 = (&arg1[0x7b]).o
int96_t var_68 = var_48:8.12

if (rdx_6 != rdi)
    void* rax_11 = arg1[0x7f]
    void* r10_1 = &arg1[0x7d]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    int32_t var_84_5
    
    if (rdx_10 != 0)
    label_141e5ded2:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_84_4 = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi)
            var_84_5 = rdi
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141e5ded2
        
        var_84_5 = rdi

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t* result = var_78.q
    
    if (rcx_7.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[0x7d] && result == &arg1[0x7b])
        if (rbx.b != 0)
            return result
        
        return (*(*arg1 + 0x478))(arg1)
    
    rbx = zx.q(rbx.b)
    
    if (*(*((rcx_7 << 5) + *result + 8) + 0xe0) != 0)
        rbx = 1
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
