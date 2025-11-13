// 函数: sub_140eb6c90
// 地址: 0x140eb6c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* r9 = &arg2[2]
*arg2 = 0
arg2[1] = 0
r9[2] = 0
r9[3].d = 0
*(r9 + 0x1c) = 0x80
int64_t* rax = r9[2]

if (rax != 0)
    r9 = rax

*r9 = 0
r9[1] = 0
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[8] = 0
arg2[9].d = 0
int32_t rsi_1 = *(arg1 + 8) - *(arg1 + 0x34)

if (rsi_1 s> arg2[1].d - *(arg2 + 0x34))
    sub_140976540(arg2, rsi_1)
    int32_t rdx_2
    
    if (rsi_1 u< 4)
        rdx_2 = 1
    else
        uint32_t rsi_2 = rsi_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rsi_2 + 8)
        int32_t rcx_1
        
        if (rsi_2 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rsi_2 + 7)
        char rdx_1
        
        if (rcx_3 == 0)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_3
        
        rdx_2 = 1 << ((not.d(rcx_3)).b & (0x20 - rdx_1))
    
    int32_t rax_6 = arg2[9].d
    
    if (rax_6 == 0 || rax_6 s< rdx_2)
        arg2[9].d = rdx_2
        sub_1405c0420(arg2)

int32_t r9_1 = *(arg1 + 0x28)
void* r8_1 = arg1 + 0x10
int32_t var_78 = 0
int32_t rcx_7 = 0
int32_t var_74 = 1
void* var_70 = r8_1
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r9_1 != 0)
    void* rax_7 = *(r8_1 + 0x10)
    
    if (rax_7 != 0)
        r8_1 = rax_7
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9_1 - 1)
    int32_t rdx_5 = *r8_1
    
    if (rdx_5 != 0)
    label_140eb6de6:
        int32_t rax_14 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_14)
        int32_t var_74_1 = rax_14
        int32_t r14_1
        
        if (rax_14 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_4
        
        var_64.d = rcx_7 - r14_1 + 0x1f
        
        if (rcx_7 - r14_1 + 0x1f s> r9_1)
            var_64.d = r9_1
    else
        while (true)
            int64_t rdx_6 = sx.q(rbx)
            rcx_7 += 0x20
            rbx += 1
            var_64:4.d = rcx_7
            var_78 = rbx
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r8_1 + (rdx_6 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140eb6de6
        
        var_64.d = r9_1

int128_t var_38 = 0xffffffff
double var_48[0x2] = var_78.o
var_78.o = arg1.o
int64_t var_58 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68.o = var_48

if (0 s< r9_1)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rbx_1 = *var_78.q + sx.q(i) * 0x18
        void arg_8
        void arg_10
        
        if (*sub_140e10ae0(arg3, &arg_8, rbx_1) == 0xffffffff)
            sub_140e903b0(arg2, &arg_10, rbx_1, nullptr)
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))

return arg2
