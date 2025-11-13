// 函数: sub_141e47360
// 地址: 0x141e47360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x18)
int64_t rdi = 0
int64_t var_e8 = 0
int64_t var_e0 = 0

if (rdx != *(arg1 + 0x44))
    sub_1405c5570(&var_e8, rdx - *(arg1 + 0x44))

int32_t r10 = *(arg1 + 0x38)
void* r9 = arg1 + 0x20
int32_t var_c4 = 1
int32_t rcx_1 = 0
int32_t var_c8 = 0
int32_t r8 = 0
void* var_c0 = r9
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_141e47418:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t arg_8 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_b4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_b4.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_b4:4.d = r8
            var_c8 = rcx_1
            
            if (rdx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141e47418
        
        var_b4.d = r10

void* var_60 = arg1 + 0x10
int128_t var_48 = 0xffffffff
double var_58[0x2] = var_c8.o
double var_98[0x2] = var_60.o
int64_t var_78 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r10)
    int32_t i = var_58[1]:4.d
    
    do
        int64_t rbx_1 = sx.q(var_e0.d)
        int32_t rax_11 = (rbx_1 + 1).d
        var_e0.d = rax_11
        
        if (rax_11 s> var_e0:4.d)
            sub_1405a4d70(&var_e8)
        
        int64_t* r8_2 = var_e8 + (rbx_1 << 3)
        
        if (r8_2 != 0)
            *r8_2 = *(*var_98[0] + sx.q(i) * 0x18 + 8)
        
        var_58[1].d &= not.d(var_98[1]:4.d)
        sub_14059bdd0(&var_98[1])
        i = var_58[1]:4.d
    while (i s< *(var_58[0] i+ 0x18))

sub_1405b8890(arg1 + 0x10, 0)

if (*(arg1 + 0xb0) != 0)
    sub_1409d7d20(&var_e8, arg1 + 8)
    void* var_68_1 = arg1 + 8
    void* var_70 = arg1 + 0xb4
    int32_t arg_10
    sub_140b92a80(arg1 + 0x10, &arg_10, &var_70, nullptr)

int64_t arg_20 = 0
uint64_t result = sub_1409d7d20(&var_e8, &arg_20)
int64_t rbx_3 = sx.q(var_e0.d)

if (rbx_3.d != 0)
    uint64_t var_d8 = 0
    int32_t result_1 = rbx_3.d
    sub_1405c4a00(&var_d8, rbx_3.d, 0)
    uint64_t r15_1 = var_d8
    memcpy(r15_1, var_e8, (rbx_3 << 3).d)
    
    if (sub_140a80f40() == 0)
        uint32_t rax_21
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_21.b = GetCurrentThreadId() == data_143de5470
        
        int32_t var_cc
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_21.b == 0))
            int64_t* rax_24 = sub_141e3c560(&var_60, nullptr, 0xff)
            void* rdx_15 = *rax_24
            *(rdx_15 + 0x10) = r15_1
            *(rdx_15 + 0x18) = result_1
            *(rdx_15 + 0x1c) = var_cc
            void* rcx_22 = *rax_24
            int32_t r8_6 = rax_24[2].d
            int64_t* rdx_16 = rax_24[1]
            int64_t* rbx_5 = *(rcx_22 + 0x28)
            int64_t* arg_18 = rbx_5
            void* rdi_1 = &rbx_5[9]
            
            if (rbx_5 != 0)
                *rdi_1 += 1
                rbx_5 = arg_18
            
            result = sub_1405e48c0(rcx_22, rdx_16, r8_6, 1)
            
            if (rbx_5 != 0)
                result = zx.q(*rdi_1)
                *rdi_1 -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(arg_18)
        else
            int32_t result_2 = result_1
            int32_t var_9c_1 = var_cc
            uint64_t var_a8 = r15_1
            result = sub_141e3a2d0(&var_a8)
            uint64_t rcx_18 = var_a8
            
            if (rcx_18 != 0)
                result = sub_140a74f90(rcx_18)
    else
        result = sx.q(result_1)
        uint64_t rsi_1 = r15_1
        uint64_t rcx_12 = r15_1 + (result << 3)
        uint64_t r14_4 = (rcx_12 - r15_1 + 7) u>> 3
        
        if (r15_1 u> rcx_12)
            r14_4 = 0
        
        if (r14_4 != 0)
            do
                int64_t* rbx_4 = *rsi_1
                result = sub_1422ce940(rbx_4)
                
                if (rbx_4 != 0)
                    sub_1422b5540(rbx_4)
                    result = j_sub_140a74f90(rbx_4)
                
                rsi_1 += 8
                rdi += 1
            while (rdi != r14_4)
        
        if (r15_1 != 0)
            result = sub_140a74f90(r15_1)

int64_t rcx_24 = var_e8

if (rcx_24 == 0)
    return result

return sub_140a74f90(rcx_24)
