// 函数: sub_140a5d8f0
// 地址: 0x140a5d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14062c990(arg2, *(arg1 + 8) - *(arg1 + 0x34))
int32_t r11 = *(arg1 + 0x28)
void* r9 = arg1 + 0x10
int32_t var_64 = 1
int32_t var_68 = 0
int32_t rcx_1 = 0
void* var_60 = r9
int32_t r8 = 0
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int32_t var_50 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9
    int32_t var_54_2
    
    if (rdx_4 != 0)
    label_140a5d998:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_54_1 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_54_2 = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            var_50 = rcx_1
            var_68 = r8
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140a5d998
        
        var_54_2 = r11

int128_t var_28 = 0xffffffff
double var_38[0x2] = var_68.o
var_68.o = arg1.o
void* result = nullptr
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rbx_1 = sx.q(arg2[1].d)
        int32_t rax_11 = (rbx_1 + 1).d
        arg2[1].d = rax_11
        
        if (rax_11 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t rbx_2 = rbx_1 << 4
        int64_t* rbx_3 = rbx_2 + *arg2
        
        if (rbx_2 != neg.q(*arg2))
            int64_t* rcx_6 = (sx.q(i) << 5) + *var_68.q
            *rbx_3 = 0
            int32_t rsi_1 = rcx_6[1].d
            int64_t r14_1 = *rcx_6
            rbx_3[1].d = rsi_1
            
            if (rsi_1 != 0)
                sub_1405a4c70(rbx_3, rsi_1, 0)
                memcpy(*rbx_3, r14_1, rsi_1 * 2)
            else
                *(rbx_3 + 0xc) = 0
        
        var_50 &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        result = var_58.q
        i = i_1
    while (i s< *(result + 0x18))

return result
