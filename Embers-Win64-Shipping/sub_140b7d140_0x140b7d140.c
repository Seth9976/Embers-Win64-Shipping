// 函数: sub_140b7d140
// 地址: 0x140b7d140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
*arg2 = 0
arg2[1] = 0
int32_t rdx_1 = *(arg1 + 0x10) - *(arg1 + 0x3c)

if (rdx_1 s> 0)
    sub_1405a5410(arg2, rdx_1)

int32_t var_98 = 0
int32_t r10 = *(arg1 + 0x30)
int32_t var_94 = 1
int32_t rcx_1 = 0
void* var_90 = arg1 + 0x18
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r10 != 0)
    void* rax_1 = *(arg1 + 0x28)
    void* r8_1 = arg1 + 0x18
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r8_1
    
    if (rdx_4 != 0)
    label_140b7d206:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rbx)
            rcx_1 += 0x20
            rbx += 1
            var_84:4.d = rcx_1
            var_98 = rbx
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r8_1 + (rdx_5 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140b7d206
        
        var_84.d = r10

int32_t rdx_7 = *(arg1 + 0x30)
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_7.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_7 s>> 5
int32_t r9_1 = rdx_7 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_7
int128_t var_78 = (arg1 + 8).o
int96_t var_68 = var_48:8.12

if (rdx_7 != r10)
    void* rax_11 = *(arg1 + 0x28)
    void* r10_1 = arg1 + 0x18
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_11 != 0)
    label_140b7d2d2:
        int32_t rax_18 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rsi_1
        
        if (rax_18 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        var_84.d = r9_1 - rsi_1 + 0x1f
        
        if (r9_1 - rsi_1 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_1 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_140b7d2d2
        
        var_84.d = r10

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_12 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x18 && rdx_12 == arg1 + 8)
        return arg2
    
    int64_t rcx_8 = rax_20 * 5
    int64_t rax_21 = *rdx_12
    int64_t* rbx_2 = *(rax_21 + (rcx_8 << 3) + 0x18)
    int64_t r14_1 = *(rax_21 + (rcx_8 << 3) + 0x10)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t rsi_2 = sx.q(arg2[1].d)
    int32_t rax_22 = (rsi_2 + 1).d
    arg2[1].d = rax_22
    
    if (rax_22 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    int64_t* rax_25 = (rsi_2 << 4) + *arg2
    *rax_25 = r14_1
    rax_25[1] = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
