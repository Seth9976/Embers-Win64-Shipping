// 函数: sub_141e42c30
// 地址: 0x141e42c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_84 = 1
int32_t rbx = *(arg1 + 0x38)
int32_t rcx = 0
void* var_80 = arg1 + 0x20
int64_t result = 0
int32_t var_88 = 0
int32_t r8 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x30)
    void* r9_1 = arg1 + 0x20
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141e42cd9:
        int32_t rax_7 = neg.d(rdx_3) & rdx_3
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
        
        if (r8 - rax_8 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rax_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_74:4.d = r8
            var_88 = rcx
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rax_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e42cd9
        
        var_74.d = rbx

int32_t rdx_4 = *(arg1 + 0x38)
var_74.d = rdx_4
int32_t r15 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_3 = rdx_4 s>> 5
int32_t rcx_5 = rdx_4 & 0xffffffe0
int32_t var_78_2 = r15
int128_t var_28 = 0xffffffff
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = (arg1 + 0x10).o
int128_t var_58 = var_38

if (rdx_4 != rbx)
    void* rax_10 = *(arg1 + 0x30)
    void* r9_2 = arg1 + 0x20
    
    if (rax_10 != 0)
        r9_2 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_8 = *(r9_2 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_8 != 0)
    label_141e42da2:
        int32_t rax_17 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        int32_t r10_1
        
        if (rax_17 == 0)
            r10_1 = 0x20
        else
            r10_1 = 0x1f - temp0_4
        
        var_74.d = rcx_5 - r10_1 + 0x1f
        
        if (rcx_5 - r10_1 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rax_14 = sx.q(r8_3)
            rcx_5 += 0x20
            r8_3 += 1
            
            if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_8 = *(r9_2 + (rax_14 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141e42da2
        
        var_74.d = rbx

while (true)
    int64_t rax_19 = sx.q(var_58:0xc.d)
    int64_t* rdx_10 = var_68.q
    
    if (rax_19.d == (var_78_2.q u>> 0x20).d && var_58.q == arg1 + 0x20 && rdx_10 == arg1 + 0x10)
        return result
    
    void* rdx_11 = *(*rdx_10 + rax_19 * 0x18 + 8)
    int32_t rcx_8
    rcx_8.b = *(rdx_11 + 0x28) != 0
    result += zx.q((rcx_8 + 2) * *(rdx_11 + 0x44) + (*(rdx_11 + 0x80) << 2))
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
