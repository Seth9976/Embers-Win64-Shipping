// 函数: sub_140d3ae20
// 地址: 0x140d3ae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = *(arg1 + 0x38) - *(arg1 + 0x64)
int64_t rdi = 0
int64_t* var_78 = nullptr
int32_t result_1 = 0
int32_t result_2 = 0
int64_t* r14 = nullptr
int32_t var_6c = 0

if (rdx_1 s> 0)
    sub_1405c5570(&var_78, rdx_1)
    result_1 = result_2
    r14 = var_78

int32_t r10 = *(arg1 + 0x58)
void* r9 = arg1 + 0x40
int32_t var_64 = 1
int32_t rcx_1 = 0
int32_t var_68 = 0
int32_t r8 = 0
void* var_60 = r9
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_140d3aee8:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_54.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_54.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_54:4.d = r8
            var_68 = rcx_1
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140d3aee8
        
        var_54.d = r10

int128_t var_28 = 0xffffffff
double var_38[0x2] = var_68.o
var_68.o = (arg1 + 0x30).o
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t result_3 = sx.q(result_1)
        int64_t r12_1 = *var_68.q
        result_1 = (result_3 + 1).d
        
        if (result_1 s> var_6c)
            sub_1405a4d70(&var_78)
            r14 = var_78
        
        r14[result_3] = *(r12_1 + sx.q(i) * 0x10)
        int32_t var_5c
        var_54:4.d &= not.d(var_5c)
        sub_14059bdd0(&var_60)
        i = i_1
    while (i s< *(var_58.q + 0x18))

int64_t result = sx.q(result_1)
int64_t* rbx = r14
void* rcx_5 = &r14[result]
uint64_t rsi_4 = (rcx_5 - r14 + 7) u>> 3

if (r14 u> rcx_5)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        *rbx
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_4)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
