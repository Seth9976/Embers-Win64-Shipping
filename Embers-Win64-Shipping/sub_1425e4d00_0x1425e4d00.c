// 函数: sub_1425e4d00
// 地址: 0x1425e4d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14095cd40(arg2, 0)
int32_t rcx_1 = 0
int32_t var_54 = 1
int32_t var_58 = 0
int32_t r11 = *(arg1 + 0x40)
void* r9 = arg1 + 0x28
void* var_50 = r9
int32_t r8 = 0
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1425e4d98:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_44.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_44.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_44:4.d = r8
            var_58 = rcx_1
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1425e4d98
        
        var_44.d = r11

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_58.o
var_58.o = (arg1 + 0x18).o
void* result = nullptr
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdx_4 = sx.q(i) * 5
        int64_t rcx_3 = *var_58.q
        void* rbx_2 = *(rcx_3 + (rdx_4 << 3) + 0x18)
        int64_t r14_1 = *(rcx_3 + (rdx_4 << 3) + 0x10)
        
        if (rbx_2 != 0)
            *(rbx_2 + 8) += 1
        
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_13 = (rsi_1 + 1).d
        arg2[1].d = rax_13
        
        if (rax_13 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rax_16 = (rsi_1 << 4) + *arg2
        *rax_16 = r14_1
        rax_16[1] = rbx_2
        var_44:4.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        result = var_48.q
        i = i_1
    while (i s< *(result + 0x18))

return result
