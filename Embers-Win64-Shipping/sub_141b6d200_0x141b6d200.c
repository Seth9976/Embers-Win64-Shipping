// 函数: sub_141b6d200
// 地址: 0x141b6d200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
(*(*arg1 + 0x40))(arg1, *arg2, zx.q(arg2[1].d), 0, 0)
int32_t r10 = *(arg4 + 0x28)
int32_t var_98 = 0
int32_t rcx = 0
int32_t var_94 = 1
void* var_90 = arg4 + 0x10
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r10 != 0)
    void* rax_1 = *(arg4 + 0x20)
    void* r8_1 = arg4 + 0x10
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r8_1
    
    if (rdx_3 != 0)
    label_141b6d2b8:
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
        
        var_84.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rbx)
            rcx += 0x20
            rbx += 1
            var_84:4.d = rcx
            var_98 = rbx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r8_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141b6d2b8
        
        var_84.d = r10

int32_t rdx_6 = *(arg4 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_1 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_6
int128_t var_78 = arg4.o
int96_t var_68 = var_48:8.12

if (rdx_6 != r10)
    void* rax_11 = *(arg4 + 0x20)
    void* r10_1 = arg4 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_10 != 0)
    label_141b6d383:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r14_1
        
        if (rax_18 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_4
        
        var_84.d = r9_1 - r14_1 + 0x1f
        
        if (r9_1 - r14_1 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_1 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141b6d383
        
        var_84.d = r10

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_11 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == arg4 + 0x10 && rdx_11 == arg4)
        return sub_140b909e0(arg1, arg3, 0, 0) __tailcall
    
    (*(*arg1 + 0x38))(arg1, *rdx_11 + ((rax_20 * 3 + 1) << 3), 0, 0)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
