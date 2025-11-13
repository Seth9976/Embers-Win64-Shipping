// 函数: sub_141e4d1c0
// 地址: 0x141e4d1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14_1 = *(arg1 + 8) - *(arg1 + 0x34)
int32_t i_3 = arg2[1].d

if (i_3 != 0)
    int64_t* rbx_1 = *arg2 + 8
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[4]
        i = i_3
        i_3 -= 1
    while (i != 1)

arg2[1].d = 0

if (*(arg2 + 0xc) != r14_1)
    sub_1405a51b0(arg2, r14_1)

int32_t r10 = *(arg1 + 0x28)
void* r9 = arg1 + 0x10
int32_t var_74 = 1
int32_t rcx_2 = 0
int32_t var_78 = 0
int32_t r8 = 0
void* var_70 = r9
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141e4d298:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_64.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_64:4.d = r8
            var_78 = rcx_2
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e4d298
        
        var_64.d = r10

int128_t var_38 = 0xffffffff
double var_48[0x2] = var_78.o
var_78.o = arg1.o
void* result = nullptr
int64_t var_58 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68.o = var_48

if (0 s< r10)
    int32_t i_2
    int32_t i_1 = i_2
    
    do
        int64_t rbx_2 = sx.q(arg2[1].d)
        int32_t rax_11 = (rbx_2 + 1).d
        arg2[1].d = rax_11
        
        if (rax_11 s> *(arg2 + 0xc))
            sub_1405c4e40(arg2)
        
        int64_t rbx_3 = rbx_2 << 5
        int16_t* rbx_4 = rbx_3 + *arg2
        
        if (rbx_3 != neg.q(*arg2))
            void* r14_4 = sx.q(i_1) * 0x30 + *var_78.q
            *rbx_4 = *(r14_4 + 8)
            *(rbx_4 + 8) = 0
            int64_t r15_1 = sx.q(*(r14_4 + 0x18))
            int64_t r12_1 = *(r14_4 + 0x10)
            *(rbx_4 + 0x10) = r15_1.d
            
            if (r15_1.d != 0)
                sub_1405a4be0(&rbx_4[4], r15_1.d, 0)
                memcpy(*(rbx_4 + 8), r12_1, (r15_1 << 4).d)
            else
                *(rbx_4 + 0x14) = 0
            
            rbx_4[0xc].b = *(r14_4 + 0x20)
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68.q
        i_1 = i_2
    while (i_1 s< *(result + 0x18))

return result
