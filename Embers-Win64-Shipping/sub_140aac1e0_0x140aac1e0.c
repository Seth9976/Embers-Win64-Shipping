// 函数: sub_140aac1e0
// 地址: 0x140aac1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x50)
int32_t r11 = *(arg1 + 0x28)
int32_t r10 = 0
int32_t var_a4 = 1
int32_t rcx_1 = 0
int32_t var_a8 = 0
void* var_a0 = arg1 + 0x10
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x20)
    void* r8 = arg1 + 0x10
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r8
    
    if (rdx_2 != 0)
    label_140aac298:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r10)
            rcx_1 += 0x20
            r10 += 1
            var_94:4.d = rcx_1
            var_a8 = r10
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r8 + (rdx_3 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140aac298
        
        var_94.d = r11

int32_t rdx_5 = *(arg1 + 0x28)
double zmm2[0x2] = var_98.o
double var_48[0x2] = zmm2
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_58 = var_a8.o
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_1 = rdx_5 & 0xffffffe0
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_98_1 = r12
var_94.d = rdx_5
int128_t var_88 = arg1.o
int128_t var_78 = var_58
uint64_t rdi

if (rdx_5 != r11)
    void* rax_11 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_9 != 0)
    label_140aac362:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        
        if (rax_18 == 0)
            rdi = 0x20
        else
            rdi = zx.q(0x1f - temp0_4)
        
        var_94.d = r9_1 - rdi.d + 0x1f
        
        if (r9_1 - rdi.d + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_1 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_98_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140aac362
        
        var_94.d = r11

while (true)
    int64_t rcx_8 = sx.q(var_78:0xc.d)
    int64_t rax_20 = var_88.q
    
    if (rcx_8.d == (var_98_1.q u>> 0x20).d && var_78.q == arg1 + 0x10 && rax_20 == arg1)
        rdi.b = 0
        break
    
    rdi = (rcx_8 << 5) + *rax_20
    var_a8.q = 0
    int64_t var_a0_1 = 0
    
    if (sub_140a73c60(*(rdi + 8), arg2, &var_a8) != 0)
        *arg3 = *rdi
        
        if (arg4 == &var_a8)
            int64_t rcx_14 = var_a8.q
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
        else
            int64_t rcx_13 = *arg4
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            *arg4 = var_a8.q
            arg4[1].d = var_a0_1.d
            *(arg4 + 0xc) = var_a0_1:4.d
        
        rdi.b = 1
        break
    
    int64_t rcx_10 = var_a8.q
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)

if (arg1 != -0x50)
    LeaveCriticalSection(arg1 + 0x50)

return zx.q(rdi.b)
