// 函数: sub_141835260
// 地址: 0x141835260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

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
int32_t rbx_1 = *(arg1 + 8) - *(arg1 + 0x34)

if (rbx_1 s> arg2[1].d - *(arg2 + 0x34))
    sub_140976540(arg2, rbx_1)
    int32_t rdx_2
    
    if (rbx_1 u< 4)
        rdx_2 = 1
    else
        uint32_t rbx_2 = rbx_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
        int32_t rcx_1
        
        if (rbx_2 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
        char rdx_1
        
        if (rcx_3 == 0)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_3
        
        rdx_2 = 1 << ((not.d(rcx_3)).b & (0x20 - rdx_1))
    
    int32_t rax_6 = arg2[9].d
    
    if (rax_6 == 0 || rax_6 s< rdx_2)
        arg2[9].d = rdx_2
        sub_1405a4480(arg2)

int32_t rbx_4 = *(arg1 + 0x28)
void* r10 = arg1 + 0x10
int32_t var_94 = 1
int32_t rcx_7 = 0
int32_t var_98 = 0
int32_t r9_1 = 0
void* var_90 = r10
int32_t r8_1 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rbx_4 != 0)
    void* rax_7 = *(r10 + 0x10)
    r9_1 = rbx_4
    
    if (rax_7 != 0)
        r10 = rax_7
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbx_4 - 1)
    int32_t rdx_5 = *r10
    
    if (rdx_5 != 0)
    label_1418353c9:
        int32_t rax_14 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_14)
        int32_t var_94_1 = rax_14
        int32_t rsi_1
        
        if (rax_14 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        int32_t rax_15 = r8_1 - rsi_1 + 0x1f
        
        if (rax_15 s> rbx_4)
            rax_15 = rbx_4
        
        r9_1 = rax_15
        var_84.d = rax_15
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_7)
            r8_1 += 0x20
            rcx_7 += 1
            var_84:4.d = r8_1
            var_98 = rcx_7
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_84.d = rbx_4
                break
            
            rdx_5 = *(r10 + (rdx_6 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_1418353c9

double zmm2[0x2] = var_88.o
int128_t var_48 = var_98.o
double var_38[0x2] = zmm2
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t var_78 = arg1.o
int96_t var_68 = var_48:8.12

if (r9_1 s< rbx_4)
    int32_t i_1
    int32_t i = i_1
    
    do
        void** rbx_5 = var_78.q
        int64_t rsi_2 = sx.q(i) * 0x18
        void arg_8
        
        if (*sub_140960120(arg3, &arg_8, *rbx_5 + rsi_2) == 0xffffffff)
            void* rbx_6 = *rbx_5
            sub_140598750(arg2, &var_98)
            sub_140596d10(var_90, rsi_2 + rbx_6)
            *(var_90 + 0x10) = 0xffffffff
            int32_t rax_18 = *(var_90 + 8)
            int16_t* rdx_10
            
            if (rax_18 == 0)
                rdx_10 = &data_142d40450
            else
                rdx_10 = *var_90
            
            int32_t rcx_13 = rax_18 - 1
            
            if (rax_18 == 0)
                rcx_13 = 0
            
            void arg_10
            sub_14059a6d0(arg2, &arg_10, sub_1405969c0(rcx_13, rdx_10), var_90, var_98, nullptr)
        
        var_68:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
        i = i_1
    while (i s< *(var_68.q + 0x18))

return arg2
