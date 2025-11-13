// 函数: sub_14200d210
// 地址: 0x14200d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x14])
void* rax = *arg3
void* var_90 = rax

if (rax != 0)
    *(rax + 8) += 1

void* rax_1 = *arg4
void* var_88 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t var_60 = arg2
int128_t var_80 = *arg5
void** var_58 = &var_90
int128_t var_70 = *arg6
void arg_8
sub_141ff1fa0(arg1, &arg_8, &var_60, nullptr)
sub_1405d1550(&var_88)
sub_1405d1550(&var_90)
int32_t rcx_4 = 0
int32_t var_d4 = 1
int32_t var_d8 = 0
int32_t r11 = arg1[0xf].d
void* var_d0 = &arg1[0xc]
int32_t r8_1 = 0
int32_t var_c8 = 0xffffffff
int64_t var_c4 = 0

if (r11 != 0)
    void* rax_4 = arg1[0xe]
    void* r9 = &arg1[0xc]
    
    if (rax_4 != 0)
        r9 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14200d339:
        int32_t rax_11 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_d4_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_c4.d = r8_1 - rax_12 + 0x1f
        
        if (r8_1 - rax_12 + 0x1f s> r11)
            var_c4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_4)
            r8_1 += 0x20
            rcx_4 += 1
            var_c4:4.d = r8_1
            var_d8 = rcx_4
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_c8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14200d339
        
        var_c4.d = r11

int32_t rdx_5 = arg1[0xf].d
var_90 = &arg1[0xa]
var_88.o = var_d8.o
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t zmm0_1 = var_90.o
int32_t r8_4 = rdx_5 s>> 5
int32_t r9_2 = rdx_5 & 0xffffffe0
int32_t var_40 = r12
int32_t var_3c = rdx_5
var_80 = 0xffffffff
int64_t var_98 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_b8 = zmm0_1
int128_t var_a8 = var_80

if (rdx_5 != r11)
    void* rax_14 = arg1[0xe]
    void* r10_1 = &arg1[0xc]
    
    if (rax_14 != 0)
        r10_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r12
    int32_t var_3c_2
    
    if (rdx_9 != 0)
    label_14200d403:
        int32_t rax_21 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
        int32_t rdi_1
        
        if (rax_21 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        int32_t var_3c_1 = r9_2 - rdi_1 + 0x1f
        
        if (r9_2 - rdi_1 + 0x1f s> r11)
            var_3c_2 = r11
    else
        while (true)
            int64_t rcx_9 = sx.q(r8_4)
            r9_2 += 0x20
            r8_4 += 1
            
            if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_9 << 2) + 4)
            var_40 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14200d403
        
        var_3c_2 = r11

while (true)
    int64_t result = sx.q(var_a8:0xc.d)
    int64_t* rcx_11 = var_b8.q
    
    if (result.d == (var_40.q u>> 0x20).d && var_a8.q == &arg1[0xc] && rcx_11 == &arg1[0xa])
        if (arg1 == -0xa0)
            return result
        
        return LeaveCriticalSection(&arg1[0x14])
    
    sub_14211ef10(*(*rcx_11 + result * 0x10), 0)
    var_a8:8.d &= not.d(var_b8:0xc.d)
    sub_14059bdd0(&var_b8:8)
