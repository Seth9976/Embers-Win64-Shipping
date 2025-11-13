// 函数: sub_142012610
// 地址: 0x142012610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x14])
sub_14200d7c0(arg1, arg2)
int32_t rcx_2 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t rdi_1 = arg1[0xf].d
void* var_80 = &arg1[0xc]
int32_t r8 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (rdi_1 != 0)
    void* rax_1 = arg1[0xe]
    void* r9_1 = &arg1[0xc]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1420126d8:
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
        
        var_74.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rdi_1)
            var_74.d = rdi_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_74:4.d = r8
            var_88 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1420126d8
        
        var_74.d = rdi_1

int32_t rdx_5 = arg1[0xf].d
int128_t var_28 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r12
var_74.d = rdx_5
int128_t var_68 = (&arg1[0xa]).o
int128_t var_58 = var_38

if (rdx_5 != rdi_1)
    void* rax_11 = arg1[0xe]
    void* r10_1 = &arg1[0xc]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi_1 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_9 != 0)
    label_1420127a2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi_1)
            var_74.d = rdi_1
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_7 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1420127a2
        
        var_74.d = rdi_1

while (true)
    int64_t result = sx.q(var_58:0xc.d)
    int64_t* rcx_9 = var_68.q
    
    if (result.d == (var_78_2.q u>> 0x20).d && var_58.q == &arg1[0xc] && rcx_9 == &arg1[0xa])
        if (arg1 == -0xa0)
            return result
        
        return LeaveCriticalSection(&arg1[0x14])
    
    sub_14211ef10(*(*rcx_9 + result * 0x10), 0)
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
