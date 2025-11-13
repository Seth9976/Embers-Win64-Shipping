// 函数: sub_140666260
// 地址: 0x140666260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14_1 = *(arg1 + 8) - *(arg1 + 0x34)
int32_t i_3 = arg2[1].d
int64_t* rbx = *arg2

if (i_3 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_3
        i_3 -= 1
    while (i != 1)

arg2[1].d = 0

if (*(arg2 + 0xc) != r14_1)
    sub_14061cd70(arg2, r14_1)

int32_t r10 = *(arg1 + 0x28)
void* r9 = arg1 + 0x10
int32_t var_64 = 1
int32_t rcx_2 = 0
int32_t var_68 = 0
int32_t r8 = 0
void* var_60 = r9
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_140666348:
        int32_t rax_7 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_64_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_1
        
        var_54.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r10)
            var_54.d = r10
    else
        while (true)
            rcx_2 += 1
            r8 += 0x20
            var_68 = rcx_2
            var_54:4.d = r8
            
            if (rcx_2 s> ((temp1_1 & 0x1f) + temp2_1) s>> 5)
                break
            
            var_58 = 0xffffffff
            rdx_3 = *(r9 + (sx.q(rcx_2) << 2))
            
            if (rdx_3 != 0)
                goto label_140666348
        
        var_54.d = r10

int128_t var_28 = 0xffffffff
int128_t var_38 = var_68.o
var_68.o = arg1.o
void* result = nullptr
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r10)
    int32_t i_2
    int32_t i_1 = i_2
    
    do
        int64_t rbx_1 = sx.q(arg2[1].d)
        int32_t rax_10 = (rbx_1 + 1).d
        arg2[1].d = rax_10
        
        if (rax_10 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t rbx_2 = rbx_1 << 4
        int64_t* rbx_3 = rbx_2 + *arg2
        
        if (rbx_2 != neg.q(*arg2))
            int64_t rdx_5 = sx.q(i_1) * 5
            int64_t rcx_5 = *var_68.q
            *rbx_3 = 0
            int32_t rsi = *(rcx_5 + (rdx_5 << 3) + 8)
            int64_t r14_2 = *(rcx_5 + (rdx_5 << 3))
            rbx_3[1].d = rsi
            
            if (rsi != 0)
                sub_1405a4c70(rbx_3, rsi, 0)
                memcpy(*rbx_3, r14_2, rsi * 2)
            else
                *(rbx_3 + 0xc) = 0
        
        var_54:4.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        result = var_58.q
        i_1 = i_2
    while (i_1 s< *(result + 0x18))

return result
