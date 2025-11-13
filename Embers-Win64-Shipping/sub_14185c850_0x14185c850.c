// 函数: sub_14185c850
// 地址: 0x14185c850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14_1 = *(arg1 + 8) - *(arg1 + 0x34)
int32_t i_3 = arg2[1].d
void* rbx = *arg2

if (i_3 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x38)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx += 0x48
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t rbx_1 = 0
arg2[1].d = 0

if (*(arg2 + 0xc) != r14_1)
    sub_140775c70(arg2, r14_1)

int32_t r9 = *(arg1 + 0x28)
void* r8 = arg1 + 0x10
int32_t var_68 = 0
int32_t rcx_3 = 0
int32_t var_64 = 1
void* var_60 = r8
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r9 != 0)
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9 - 1)
    int32_t rdx_3 = *r8
    
    if (rdx_3 != 0)
    label_14185c936:
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
        
        var_54.d = rcx_3 - rax_9 + 0x1f
        
        if (rcx_3 - rax_9 + 0x1f s> r9)
            var_54.d = r9
    else
        while (true)
            int64_t rdx_4 = sx.q(rbx_1)
            rcx_3 += 0x20
            rbx_1 += 1
            var_54:4.d = rcx_3
            var_68 = rbx_1
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r8 + (rdx_4 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14185c936
        
        var_54.d = r9

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
        int64_t rbx_2 = sx.q(arg2[1].d)
        int32_t rax_11 = (rbx_2 + 1).d
        arg2[1].d = rax_11
        
        if (rax_11 s> *(arg2 + 0xc))
            sub_140775520(arg2)
        
        int64_t* rsi = *arg2 + rbx_2 * 0x48
        
        if (rsi != 0)
            void* rbx_4 = sx.q(i_1) * 0x58 + *var_68.q
            sub_140596d10(rsi, rbx_4 + 8)
            rsi[2] = *(rbx_4 + 0x18)
            rsi[3] = *(rbx_4 + 0x20)
            *(rsi + 0x20) = *(rbx_4 + 0x28)
            rsi[6].d = *(rbx_4 + 0x38)
            *(rsi + 0x34) = *(rbx_4 + 0x3c)
            sub_140596d10(&rsi[7], rbx_4 + 0x40)
        
        var_54:4.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        result = var_58.q
        i_1 = i_2
    while (i_1 s< *(result + 0x18))

return result
