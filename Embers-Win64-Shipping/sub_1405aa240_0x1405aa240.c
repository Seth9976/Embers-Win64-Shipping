// 函数: sub_1405aa240
// 地址: 0x1405aa240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d
int64_t var_60 = 0
int32_t var_58 = 0
int32_t rdx_2 = rdx - *(arg2 + 0x34) + *(arg2 + 8)

if (rdx_2 s> 0)
    sub_1405c5570(&var_60, rdx_2)

int64_t* var_48 = arg3
int64_t* var_50 = &var_60
sub_1405b0e50(&var_50, arg1)
int32_t rdx_4 = *(arg2 + 8)
int64_t var_98 = 0
int64_t var_90 = 0

if (rdx_4 != *(arg2 + 0x34))
    sub_1405c5570(&var_98, rdx_4 - *(arg2 + 0x34))

int32_t r10 = *(arg2 + 0x28)
void* r9 = arg2 + 0x10
int32_t var_84 = 1
int32_t rcx_3 = 0
int32_t var_88 = 0
int32_t r8 = 0
void* var_80 = r9
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *r9
    
    if (rdx_8 != 0)
    label_1405aa338:
        int32_t rax_8 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_74.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_3)
            r8 += 0x20
            rcx_3 += 1
            var_74:4.d = r8
            var_88 = rcx_3
            
            if (rdx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9 + (rdx_9 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1405aa338
        
        var_74.d = r10

int128_t var_28 = 0xffffffff
int128_t var_38 = var_88.o
var_88.o = arg2.o
int64_t var_68 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_78.o = var_38

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rbx_1 = sx.q(var_90.d)
        int32_t rax_11 = (rbx_1 + 1).d
        var_90.d = rax_11
        
        if (rax_11 s> var_90:4.d)
            sub_1405a4d70(&var_98)
        
        int64_t* r8_2 = var_98 + (rbx_1 << 3)
        
        if (r8_2 != 0)
            *r8_2 = *(*var_88.q + sx.q(i) * 0x18)
        
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        i = i_1
    while (i s< *(var_78.q + 0x18))

sub_1405b0e50(&var_50, &var_98)
int64_t rdi_1 = 0
int64_t* rbx_2 = *arg3
uint64_t rsi_1 = sx.q(arg3[1].d) << 3 u>> 3

if (rbx_2 u> &rbx_2[arg3[1]])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx_9 = *rbx_2
        
        if (rcx_9 != 0)
            sub_1405c97e0(rcx_9)
        
        rbx_2 = &rbx_2[1]
        rdi_1 += 1
    while (rdi_1 != rsi_1)

int64_t* result = &var_60

if (arg3 != &var_60)
    int64_t rbx_3 = sx.q(var_58)
    int64_t rdi_2 = var_60
    int32_t r8_3 = *(arg3 + 0xc)
    arg3[1].d = rbx_3.d
    
    if (rbx_3.d != 0 || r8_3 != 0)
        sub_1405c4a00(arg3, rbx_3.d, r8_3)
        result = memcpy(*arg3, rdi_2, (rbx_3 << 3).d)
    else
        *(arg3 + 0xc) = 0

int64_t rcx_12 = var_98

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_60

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
