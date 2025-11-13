// 函数: sub_140e65450
// 地址: 0x140e65450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int32_t rdx_1 = *(arg1 + 0x138) - *(arg1 + 0x164)

if (rdx_1 s> 0)
    sub_1405a5410(arg2, rdx_1)

int32_t var_94 = 1
int32_t r11 = *(arg1 + 0x158)
void* var_90 = arg1 + 0x140
int32_t rcx_1 = 0
int32_t var_98 = 0
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x150)
    void* r9_1 = arg1 + 0x140
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_140e65528:
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
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_84:4.d = r8
            var_98 = rcx_1
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140e65528
        
        var_84.d = r11

int32_t rdx_6 = *(arg1 + 0x158)
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_6
int128_t var_78 = (arg1 + 0x130).o
int96_t var_68 = var_48:8.12

if (rdx_6 != r11)
    void* rax_11 = *(arg1 + 0x150)
    void* r10_1 = arg1 + 0x140
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_10 != 0)
    label_140e655f2:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_140e655f2
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_11 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x140 && rdx_11 == arg1 + 0x130)
        return arg2
    
    int64_t rax_21 = *rdx_11
    int64_t rcx_9 = rax_20 * 6
    int64_t rax_22 = *(rax_21 + (rcx_9 << 3) + 8)
    int64_t rdx_13 = sx.q(*(rax_21 + (rcx_9 << 3) + 0x10)) * 2
    int64_t* rcx_10 = *(rax_22 + (rdx_13 << 3) - 8)
    int64_t r14_1 = *(rax_22 + (rdx_13 << 3) - 0x10)
    
    if (rcx_10 != 0)
        *(rcx_10 + 0xc) += 1
    
    int64_t* rbx_2 = rcx_10
    
    if (rcx_10 != 0)
        int32_t rax_23 = rcx_10[1].d
        
        if (rax_23 == 0)
            rbx_2 = nullptr
        else
            rcx_10[1].d = rax_23 + 1
        
        int32_t temp4_1 = *(rcx_10 + 0xc)
        *(rcx_10 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rcx_10 + 8))(rcx_10, 1)
        
        rcx_10 = nullptr
    
    if (rbx_2 == 0)
        r14_1 = 0
    
    if (rcx_10 != 0)
        int32_t temp5_1 = *(rcx_10 + 0xc)
        *(rcx_10 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rcx_10 + 8))(rcx_10, 1)
    
    if (r14_1 == 0)
    label_140e65718:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp7_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    else
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_27 = (rsi_1 + 1).d
        arg2[1].d = rax_27
        
        if (rax_27 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rax_30 = (rsi_1 << 4) + *arg2
        *rax_30 = r14_1
        rax_30[1] = rbx_2
        
        if (rbx_2 != 0)
            int32_t rax_31 = rbx_2[1].d
            rbx_2[1].d = rax_31
            
            if (rax_31 == 0)
                (**rbx_2)(rbx_2)
                int32_t temp8_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
            
            goto label_140e65718
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
