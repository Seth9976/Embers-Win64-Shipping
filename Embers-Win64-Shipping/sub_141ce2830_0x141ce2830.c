// 函数: sub_141ce2830
// 地址: 0x141ce2830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t rbx = arg1[0x21].d
void* r9 = &arg1[0x1e]
void* var_80 = r9
int32_t var_78 = 0xffffffff
int32_t rcx = 0
int32_t var_74 = 0
int32_t var_70 = 0

if (rbx != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9
    int32_t var_74_2
    
    if (rdx_3 != 0)
    label_141ce28d8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_74_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_74_2 = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_70_1 = rcx
            var_88 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141ce28d8
        
        var_74_2 = rbx

int32_t rdx_6 = arg1[0x21].d
int32_t r14 = arg1[0x21].d
int128_t var_28 = 0xffffffff
int128_t var_38 = var_88.o
int32_t r12 = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_2 = rdx_6 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r12
int32_t var_74_3 = rdx_6
int128_t var_68 = (&arg1[0x1c]).o
int128_t var_58 = var_38

if (rdx_6 != r14)
    void* rax_11 = arg1[0x20]
    void* r10_1 = &arg1[0x1e]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r14 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    int32_t var_74_5
    
    if (rdx_10 != 0)
    label_141ce29b2:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_74_4 = r9_2 - r11_1 + 0x1f
        
        if (r9_2 - r11_1 + 0x1f s> r14)
            var_74_5 = r14
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_2 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141ce29b2
        
        var_74_5 = r14

while (true)
    int32_t result = var_58:0xc.d
    int64_t rcx_7 = var_58.q
    
    if (result == (var_78_2.q u>> 0x20).d && rcx_7 == &arg1[0x1e] && var_68.q == &arg1[0x1c])
        return result
    
    int32_t result_1 = data_143a1c6c8
    
    if (result s< *(rcx_7 + 0x18))
        result_1 = result
    
    sub_141cd95d0(arg1, result_1)
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
