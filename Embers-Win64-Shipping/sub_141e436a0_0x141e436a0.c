// 函数: sub_141e436a0
// 地址: 0x141e436a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 3)
    return 

int32_t rcx = 0
int32_t r8_1 = 0
int32_t r10_1 = *(arg2 + 0x38)
int32_t var_88_1 = 0
int32_t var_84_1 = 1
void* var_80_1 = arg2 + 0x20
int32_t var_78_1 = 0xffffffff
int64_t var_74_1 = 0

if (r10_1 != 0)
    void* rax_1 = *(arg2 + 0x30)
    void* r9_1 = arg2 + 0x20
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141e43749:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74_1.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> r10_1)
            var_74_1.d = r10_1
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8_1 += 0x20
            rcx += 1
            var_74_1:4.d = r8_1
            var_88_1 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_78_2 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141e43749
        
        var_74_1.d = r10_1

int32_t rdx_4 = *(arg2 + 0x38)
var_74_1.d = rdx_4
int128_t var_28_1 = 0xffffffff
int128_t var_38_1 = var_88_1.o
int32_t r15_1 = 0xffffffff << (rdx_4 & 0x1f).b
int32_t r8_4 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_3 = r15_1
int128_t var_68 = (arg2 + 0x10).o
int128_t var_58_1 = var_38_1

if (rdx_4 != r10_1)
    void* rax_12 = *(arg2 + 0x30)
    void* r11_1 = arg2 + 0x20
    
    if (rax_12 != 0)
        r11_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10_1 - 1)
    int32_t rdx_8 = *(r11_1 + (sx.q(r8_4) << 2)) & r15_1
    
    if (rdx_8 != 0)
    label_141e43826:
        int32_t rax_18 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_74_1.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r10_1)
            var_74_1.d = r10_1
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r11_1 + (rcx_4 << 2) + 4)
            var_78_3 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141e43826
        
        var_74_1.d = r10_1

while (true)
    int64_t rcx_6 = sx.q(var_58_1:0xc.d)
    int32_t rax
    
    if (rcx_6.d != (var_78_3.q u>> 0x20).d || var_58_1.q != arg2 + 0x20)
        rax.b = 0
    else
        rax.b = 1
    
    int64_t* rdx_9 = var_68.q
    
    if (rax.b == 0 || rdx_9 != arg2 + 0x10)
        rax.b = 1
    else
        rax.b = 0
    
    if (rax.b == 0)
        break
    
    void* rbx_2 = *(*rdx_9 + rcx_6 * 0x18 + 8)
    
    if (rbx_2 != 0)
        void* rax_19 = sub_142597430()
        void* rcx_8 = *(rbx_2 + 0x10)
        int64_t rax_20 = sx.q(*(rax_19 + 0x38))
        
        if (rax_20.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rax_20 << 3)) == rax_19 + 0x30)
            sub_141e43910(rbx_2)
    
    int32_t var_5c
    var_58_1:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
