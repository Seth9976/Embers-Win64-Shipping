// 函数: sub_141f3aed0
// 地址: 0x141f3aed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rdx = *(arg1 + 0x60)
int32_t result_1 = 0
void* var_88 = arg1
int64_t* r14 = nullptr
int32_t result_2 = 0
int64_t* var_c8 = nullptr
int32_t var_bc = 0

if (rdx != *(arg1 + 0x8c))
    sub_1405c5570(&var_c8, rdx - *(arg1 + 0x8c))
    result_1 = result_2
    r14 = var_c8

int32_t r10 = *(arg1 + 0x80)
void* r9 = arg1 + 0x68
int32_t var_b4 = 1
int32_t rcx_1 = 0
int32_t var_b8 = 0
int32_t r8 = 0
void* var_b0 = r9
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r10 != 0)
    void* rax_2 = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_141f3afb8:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_b4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_1
        
        var_a4.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r10)
            var_a4.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_a4:4.d = r8
            var_b8 = rcx_1
            
            if (rdx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141f3afb8
        
        var_a4.d = r10

void* var_78 = arg1 + 0x58
int128_t var_60 = 0xffffffff
int128_t var_70 = var_b8.o
var_b8.o = var_78.o
int64_t var_98 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_a8.o = var_70

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t result_3 = sx.q(result_1)
        result_1 = (result_3 + 1).d
        
        if (result_1 s> var_bc)
            sub_1405a4d70(&var_c8)
            r14 = var_c8
        
        int64_t* r8_2 = &r14[result_3]
        
        if (r8_2 != 0)
            *r8_2 = *(*var_b8.q + sx.q(i) * 0x50)
        
        var_a4:4.d &= not.d(var_b0:4.d)
        sub_14059bdd0(&var_b0)
        i = i_1
    while (i s< *(var_a8.q + 0x18))

uint64_t result = sx.q(result_1)
int64_t* rdi_1 = r14
int64_t rbx = 0
void* rcx_6 = &r14[result]
uint64_t r12_3 = (rcx_6 - r14 + 7) u>> 3

if (r14 u> rcx_6)
    r12_3 = 0

if (r12_3 != 0)
    void* r14_1 = var_88
    
    do
        int64_t rsi_1 = *rdi_1
        int32_t var_90
        sub_140865c40(arg2, &var_90, rsi_1)
        int64_t rax_18 = sx.q(var_90)
        int64_t rcx_8
        
        if (rax_18.d == 0xffffffff)
            rcx_8 = 0
        else
            rcx_8 = *arg2 + rax_18 * 0x18
        
        result = rcx_8 + 8
        
        if (rcx_8 == 0)
            result = 0
        
        if (result != 0)
            int64_t rcx_9 = *result
            
            if (rcx_9 == 0)
                result = sub_141ec92b0(r14_1 + 0x58, rsi_1)
            else
                int64_t var_80 = rcx_9
                sub_141ec3000(r14_1 + 0x58, &var_88, rsi_1)
                int64_t rax_20 = *(r14_1 + 0x58)
                int64_t rdx_12 = sx.q(var_88.d)
                int64_t rcx_12 = rdx_12 * 0xa
                var_78.o = *(rax_20 + (rcx_12 << 3) + 0x10)
                int128_t var_58_1 = *(rax_20 + (rcx_12 << 3) + 0x30)
                var_70 = *(rax_20 + (rcx_12 << 3) + 0x20)
                sub_141dd44f0(r14_1 + 0x58, rdx_12.d)
                result = sub_141eb01e0(r14_1 + 0x58, &var_80, &var_78)
        
        rdi_1 = &rdi_1[1]
        rbx += 1
    while (rbx != r12_3)
    
    r14 = var_c8

if (r14 != 0)
    result = sub_140a74f90(r14)

__security_check_cookie(rax_1 ^ &var_e8)
return result
