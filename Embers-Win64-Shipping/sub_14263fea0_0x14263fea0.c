// 函数: sub_14263fea0
// 地址: 0x14263fea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14_1 = *(arg1 + 8) - *(arg1 + 0x34)
int32_t i_3 = arg2[1].d

if (i_3 != 0)
    int64_t* rdi_1 = *arg2 + 0x20
    int32_t i
    
    do
        int64_t rcx = *rdi_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rdi_1 = &rdi_1[6]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t rdi_2 = 0
arg2[1].d = 0

if (*(arg2 + 0xc) != r14_1)
    sub_1405a5220(arg2, r14_1)

int32_t r9 = *(arg1 + 0x28)
void* r8 = arg1 + 0x10
int32_t var_68 = 0
int32_t rcx_2 = 0
int32_t var_64 = 1
void* var_60 = r8
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int32_t var_50 = 0

if (r9 != 0)
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9 - 1)
    int32_t rdx_3 = *r8
    int32_t var_54_2
    
    if (rdx_3 != 0)
    label_14263ff76:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        int32_t var_54_1 = rcx_2 - rax_9 + 0x1f
        
        if (rcx_2 - rax_9 + 0x1f s> r9)
            var_54_2 = r9
    else
        while (true)
            int64_t rdx_4 = sx.q(rdi_2)
            rcx_2 += 0x20
            rdi_2 += 1
            var_50 = rcx_2
            var_68 = rdi_2
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r8 + (rdx_4 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14263ff76
        
        var_54_2 = r9

int128_t var_28 = 0xffffffff
double var_38[0x2] = var_68.o
var_68.o = arg1.o
void* result = nullptr
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r9)
    int32_t i_2
    int32_t i_1 = i_2
    
    do
        int64_t rdi_3 = sx.q(arg2[1].d)
        int32_t rax_11 = (rdi_3 + 1).d
        arg2[1].d = rax_11
        
        if (rax_11 s> *(arg2 + 0xc))
            sub_1405c4f50(arg2)
        
        int64_t rcx_6 = rdi_3 * 0x30
        
        if (rcx_6 != neg.q(*arg2))
            sub_141dde360(rcx_6 + *arg2, (sx.q(i_1) << 6) + *var_68.q)
        
        var_50 &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        result = var_58.q
        i_1 = i_2
    while (i_1 s< *(result + 0x18))

return result
