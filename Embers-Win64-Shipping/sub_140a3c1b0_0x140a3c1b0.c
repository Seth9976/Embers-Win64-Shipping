// 函数: sub_140a3c1b0
// 地址: 0x140a3c1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_54 = 1
int32_t var_58 = 0
int32_t* r9 = &arg1[3]
int32_t var_48 = 0xffffffff
int32_t* var_50 = r9
*arg1 = &data_142e5ea40
int32_t r10 = r9[6]
int32_t rcx = 0
int64_t var_44 = 0

if (r10 != 0)
    int32_t* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_140a3c258:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_44.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_44.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_44:4.d = rcx
            var_58 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9[rdx_4 + 1]
            var_48 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140a3c258
        
        var_44.d = r10

double zmm2[0x2] = var_48.o
double var_18[0x2] = zmm2
double var_28[0x2] = var_58.o
var_58.o = (&arg1[1]).o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
int64_t var_38 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_48.o = var_28

if (rax_12 s< r10)
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t* rcx_3 = *((sx.q(i) << 5) + *var_58.q + 0x10)
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        var_44:4.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        i = i_2
    while (i s< *(var_48.q + 0x18))

DeleteCriticalSection(&arg1[0x1a])
int32_t i_3 = arg1[0x17].d
int64_t* rbx = arg1[0x16]

if (i_3 != 0)
    int32_t i_1
    
    do
        sub_140745b20(rbx)
        rbx = &rbx[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx = arg1[0x16]

if (rbx != 0)
    sub_140a74f90(rbx)

arg1[0x15].d = 0
int64_t rcx_8 = arg1[0x14]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140a3bfe0(&arg1[0xc])
arg1[0xa].d = 0
int64_t rcx_10 = arg1[9]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_1405df330(&arg1[1])
*arg1 = &data_142e5c060
return &data_142e5c060
