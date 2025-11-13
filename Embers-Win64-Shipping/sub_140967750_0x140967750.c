// 函数: sub_140967750
// 地址: 0x140967750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
int32_t r9_1 = arg1[1].d - *(arg1 + 0x34)
int64_t* r14 = arg3
int32_t rax_1 = arg3[1].d - *(arg3 + 0x34)

if (r9_1 s> rax_1)
    r14 = arg1

if (r9_1 s> rax_1)
    r15 = arg3

int64_t* rcx = &arg2[2]
*arg2 = 0
arg2[1] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_2 = rcx[2]

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
rcx[1] = 0
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[8] = 0
arg2[9].d = 0
int32_t rbx_1 = r15[1].d - *(r15 + 0x34)

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
        int32_t rcx_2
        
        if (rbx_2 == 0xfffffff8)
            rcx_2 = 0x20
        else
            rcx_2 = 0x1f - temp0_2
        
        int32_t rcx_4 = rcx_2 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
        char rdx_1
        
        if (rcx_4 == 0)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_3
        
        rdx_2 = 1 << ((not.d(rcx_4)).b & (0x20 - rdx_1))
    
    int32_t rax_8 = arg2[9].d
    
    if (rax_8 == 0 || rax_8 s< rdx_2)
        arg2[9].d = rdx_2
        sub_1405a4480(arg2)

int32_t rbx_4 = r15[5].d
void* r9_2 = &r15[2]
int32_t var_94 = 1
int32_t rcx_8 = 0
int32_t var_98 = 0
int32_t r10 = 0
void* var_90 = r9_2
int32_t r8_1 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rbx_4 != 0)
    void* rax_9 = *(r9_2 + 0x10)
    r10 = rbx_4
    
    if (rax_9 != 0)
        r9_2 = rax_9
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbx_4 - 1)
    int32_t rdx_5 = *r9_2
    
    if (rdx_5 != 0)
    label_1409678d9:
        int32_t rax_16 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_16)
        int32_t var_94_1 = rax_16
        int32_t rsi_1
        
        if (rax_16 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        int32_t rax_17 = r8_1 - rsi_1 + 0x1f
        
        if (rax_17 s> rbx_4)
            rax_17 = rbx_4
        
        r10 = rax_17
        var_84.d = rax_17
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_8)
            r8_1 += 0x20
            rcx_8 += 1
            var_84:4.d = r8_1
            var_98 = rcx_8
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_84.d = rbx_4
                break
            
            rdx_5 = *(r9_2 + (rdx_6 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_1409678d9

double zmm2[0x2] = var_88.o
int128_t var_48 = var_98.o
double var_38[0x2] = zmm2
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t var_78 = r15.o
int96_t var_68 = var_48:8.12

if (r10 s< rbx_4)
    int32_t i_1
    int32_t i = i_1
    
    do
        void** rbx_5 = var_78.q
        int64_t rsi_2 = sx.q(i) * 0x18
        void arg_8
        
        if (*sub_140960120(r14, &arg_8, *rbx_5 + rsi_2) != 0xffffffff)
            void* rbx_6 = *rbx_5
            sub_140598750(arg2, &var_98)
            int64_t* rbx_7 = var_90
            sub_140596d10(rbx_7, rsi_2 + rbx_6)
            rbx_7[2].d = 0xffffffff
            int32_t rax_20 = rbx_7[1].d
            int16_t* rdx_10
            
            if (rax_20 == 0)
                rdx_10 = &data_142d40450
            else
                rdx_10 = *rbx_7
            
            int32_t rcx_14 = rax_20 - 1
            
            if (rax_20 == 0)
                rcx_14 = 0
            
            void arg_10
            sub_14059a6d0(arg2, &arg_10, sub_1405969c0(rcx_14, rdx_10), rbx_7, var_98, nullptr)
        
        var_68:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
        i = i_1
    while (i s< *(var_68.q + 0x18))

return arg2
