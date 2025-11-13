// 函数: sub_141dc7660
// 地址: 0x141dc7660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t var_84 = 1
int32_t var_78 = 0xffffffff
int32_t r9 = *(arg1 + 0x1c8)
void* var_80 = arg1 + 0x1b0
int32_t rcx = 0
int32_t var_88 = 0
int64_t var_74 = 0
int32_t r8 = 0

if (r9 != 0)
    void* rax_1 = *(arg1 + 0x1c0)
    void* r10_1 = arg1 + 0x1b0
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_2 = *r10_1
    
    if (rdx_2 != 0)
    label_141dc771a:
        int32_t rax_7 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_84_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r9)
            var_74.d = r9
    else
        while (true)
            int64_t rax_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_74:4.d = r8
            var_88 = rcx
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r10_1 + (rax_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141dc771a
        
        var_74.d = r9

int32_t rdx_3 = *(arg1 + 0x1c8)
var_74.d = rdx_3
int32_t rsi = 0xffffffff << (rdx_3 & 0x1f).b
int128_t var_38 = var_88.o
int32_t rcx_4 = rdx_3 & 0xffffffe0
int32_t r8_3 = rdx_3 s>> 5
int32_t var_78_2 = rsi
int128_t var_28 = 0xffffffff
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = (arg1 + 0x1a0).o
int128_t var_58 = var_38
uint64_t rax_11

if (rdx_3 != r9)
    void* rax_12 = *(arg1 + 0x1c0)
    void* r10_2 = arg1 + 0x1b0
    
    if (rax_12 != 0)
        r10_2 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9 - 1)
    int32_t rdx_7 = *(r10_2 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_7 != 0)
    label_141dc77e3:
        int32_t rax_18 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        rax_11 = zx.q(rcx_4 - rbx_1 + 0x1f)
        var_74.d = rax_11.d
        
        if (rax_11.d s> r9)
            var_74.d = r9
    else
        while (true)
            rax_11 = sx.q(r8_3)
            rcx_4 += 0x20
            r8_3 += 1
            
            if (rax_11.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_7 = *(r10_2 + (rax_11 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_141dc77e3
        
        var_74.d = r9

while (true)
    int64_t rdx_9 = sx.q(var_58:0xc.d)
    
    if (rdx_9.d != (var_78_2.q u>> 0x20).d || var_58.q != arg1 + 0x1b0)
        rax_11.b = 0
    else
        rax_11.b = 1
    
    int64_t* rcx_6 = var_68.q
    
    if (rax_11.b == 0 || rcx_6 != arg1 + 0x1a0)
        rax_11.b = 1
    else
        rax_11.b = 0
    
    if (rax_11.b == 0)
        break
    
    int64_t* rbx_2 = *(*rcx_6 + rdx_9 * 0x10)
    
    if (rbx_2 != 0)
        void* rax_21 = sub_142577430()
        void* rcx_8 = rbx_2[2]
        int64_t rax_22 = sx.q(*(rax_21 + 0x38))
        
        if (rax_22.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rax_22 << 3)) == rax_21 + 0x30
                && (*(*rbx_2 + 0x4c8))(rbx_2, rax_22) != 0)
            int32_t rax_27 = (*(*rbx_2 + 0x4d0))(rbx_2, zx.q(arg2))
            
            if (rax_27 s>= rdi)
                rdi = rax_27
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)

return zx.q(rdi)
