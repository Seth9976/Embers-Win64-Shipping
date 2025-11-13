// 函数: sub_141cef890
// 地址: 0x141cef890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int64_t rcx = arg1[8]

if (rcx != 0)
    rbx[8] = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = rbx[9].d
void* r14 = &rbx[9]

if (i_2 == 0)
    return 

sub_1405a4aa0(&arg1[7], 0, i_2, 4)
int32_t r8_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_2 = arg1[8]
        void* rax_1 = &arg1[7]
        int64_t rdx_3 = (sx.q(*r14) - 1) & r9_1
        
        if (rcx_2 != 0)
            rax_1 = rcx_2
        
        r9_1 += 1
        *(rax_1 + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = rbx[5].d
void* r9_2 = &rbx[2]
int32_t var_88_1 = 0
int32_t rcx_3 = 0
int32_t var_84_1 = 1
void* var_80_1 = r9_2
int32_t var_78_1 = 0xffffffff
int32_t var_74_1 = 0
int32_t var_70_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_2 + 0x10)
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_6 = *r9_2
    int32_t var_74_3
    
    if (rdx_6 != 0)
    label_141cef9a8:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_84_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t var_74_2 = rcx_3 - rax_10 + 0x1f
        
        if (rcx_3 - rax_10 + 0x1f s> r10_1)
            var_74_3 = r10_1
    else
        while (true)
            int64_t rdx_7 = sx.q(r8_2)
            rcx_3 += 0x20
            r8_2 += 1
            int32_t var_70_2 = rcx_3
            var_88_1 = r8_2
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_2 + (rdx_7 << 2) + 4)
            int32_t var_78_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141cef9a8
        
        var_74_3 = r10_1

int64_t* var_68_1 = rbx
uint32_t var_60[0x4] = var_88_1.o
int64_t var_50_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r15_1 = 0

while (true)
    int64_t rbx_1 = *rbx
    int128_t* rdi = sx.q(r15_1) * 0x1c
    uint32_t zmm2[0x4] = *(rdi + rbx_1)
    uint32_t zmm1[0x4] = *(rdi + rbx_1 + 4)
    uint32_t arg_8
    
    if (_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999994e-09f)
        arg_8 = zmm2[0]
    else
        arg_8 = 0
    
    if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f)
        uint32_t arg_c = zmm1[0]
    else
        arg_c = 0
    
    int32_t rax_13 = sub_140b21160(&arg_8, 8, 0)
    int32_t rcx_8 = (*r14 - 1) & rax_13
    void* rax_14 = &arg1[7]
    *(rdi + rbx_1 + 0x18) = rcx_8
    void* rdx_9 = arg1[8]
    int64_t r8_3 = sx.q(rcx_8)
    
    if (rdx_9 != 0)
        rax_14 = rdx_9
    
    *(rdi + rbx_1 + 0x14) = *(rax_14 + (((sx.q(*r14) - 1) & r8_3) << 2))
    void* rax_16 = &arg1[7]
    void* rcx_12 = arg1[8]
    
    if (rcx_12 != 0)
        rax_16 = rcx_12
    
    *(rax_16 + (((sx.q(*r14) - 1) & r8_3) << 2)) = r15_1
    int32_t var_5c
    var_50_1.d &= not.d(var_5c)
    sub_14059bdd0(&var_60)
    r15_1 = var_50_1:4.d
    void* var_58
    
    if (r15_1 s>= *(var_58 + 0x18))
        break
    
    rbx = var_68_1
