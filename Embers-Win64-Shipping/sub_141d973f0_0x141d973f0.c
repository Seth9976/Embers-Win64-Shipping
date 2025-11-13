// 函数: sub_141d973f0
// 地址: 0x141d973f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rax = *arg1
int16_t* var_148 = nullptr
int16_t* rdi = nullptr
int32_t rbx = *(rax + 0x3b8)
int64_t rsi = *(rax + 0x3b0)
int32_t rcx

if (rbx != 0)
    sub_1405a4c70(&var_148, rbx, 0)
    rdi = var_148
    memcpy(rdi, rsi, rbx * 2)
    int32_t var_13c
    rcx = var_13c
else
    rcx = 0

int16_t* var_138 = rdi
int32_t rax_1
rax_1.b = rbx == 0
int32_t rdx_3 = rax_1 + 1 + rbx

if (rdx_3 s> rcx)
    sub_1405947f0(&var_138, rdx_3)

int32_t r15 = 1
sub_140a20ba0(&var_138, &data_142d6bbe8, 1)
int16_t* r14 = var_138
var_138 = nullptr
int32_t var_130
var_130.q = 0
int64_t var_38
int64_t* rax_2 = sub_141d157d0(&var_38)
int32_t rdi_1
int16_t* r15_1

if (rbx s> 1)
    int32_t rax_3 = rax_2[1].d
    int32_t rdi_2 = rax_3 - 1
    
    if (rax_3 == 0)
        rdi_2 = 0
    
    if (rbx != 0 || rdi_2 == 0)
        r15 = 0
    
    var_148 = r14
    int32_t rdx_5 = rdi_2 + r15 + rbx
    int32_t var_13c_1 = rcx
    
    if (rdx_5 s> rcx)
        sub_1405947f0(&var_148, rdx_5)
    
    sub_140a20ba0(&var_148, *rax_2, rdi_2)
    r15_1 = var_148
    rdi_1 = rbx
else
    r15_1 = *rax_2
    *rax_2 = 0
    rdi_1 = rax_2[1].d
    rax_2[1] = 0
    
    if (r14 != 0)
        sub_140a74f90(r14)

int64_t rcx_9 = var_38

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* var_128 = nullptr
int32_t var_120 = 0
sub_140a464c0()
int16_t* const r8_4 = &data_142d40450
int64_t r9
r9.b = 1

if (rdi_1 != 0)
    r8_4 = r15_1

int64_t result = (*(data_14399ea08 + 0x78))(&data_14399ea08, &var_128, r8_4, r9, 0)
int64_t* rdi_3 = var_128
int64_t rbx_2 = sx.q(var_120)
void* r12_1 = arg_10
void* r14_3 = &rdi_3[rbx_2 * 2]

if (rdi_3 != r14_3)
    do
        int64_t var_c8 = 0
        int128_t var_a8
        __builtin_memset(&var_a8, 0, 0x11)
        int32_t var_c0_1 = 0
        int64_t var_b8_1 = 0
        int32_t var_b0_1 = 0
        int64_t var_90_1 = 0
        int64_t var_88_1 = 0
        int32_t var_80_1 = 0xffffffff
        int64_t var_78
        __builtin_memset(&var_78, 0, 0x40)
        int64_t* rax_4 = sub_140b18720(&var_38, rdi_3, 1)
        char rax_5 = sub_141da1e80(*arg1, rax_4, &var_c8, 0)
        int64_t rcx_12 = var_38
        rbx_2.b = rax_5 == 0
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        if (rbx_2.b == 0)
            int32_t rcx_13 = *(arg1 + 0x1c)
            int32_t rax_6 = arg1[3].d
            char rdx_10
            
            if (rax_6 == 0 || rax_6 == var_c8:4.d)
                rdx_10 = 1
            else
                rdx_10 = 0
            
            if (rcx_13 == 0 || rcx_13 == var_c0_1)
                rax_6.b = 1
            else
                rax_6.b = 0
            
            if (rdx_10 != 0 && rax_6.b != 0)
                uint64_t var_118
                __builtin_memset(&var_118, 0, 0x39)
                int32_t var_dc_1 = 0
                char var_d8_1 = 0
                int64_t* rax_7 = sub_140b18720(&var_148, rdi_3, true)
                
                if (&var_118 != rax_7)
                    uint64_t rcx_15 = var_118
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                    
                    var_118 = *rax_7
                    *rax_7 = 0
                    int64_t var_110_1
                    var_110_1.d = rax_7[1].d
                    var_110_1:4.d = *(rax_7 + 0xc)
                    rax_7[1] = 0
                
                int16_t* rcx_17 = var_148
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                int64_t var_100_1
                int32_t r8_8 = var_100_1:4.d
                int64_t var_e8_1
                var_e8_1.d = var_c8.d
                var_100_1.d = var_b0_1
                int64_t var_108
                
                if (var_b0_1 != 0 || r8_8 != 0)
                    sub_1405a4c70(&var_108, var_b0_1, r8_8)
                    memcpy(var_108, var_b8_1, var_b0_1 * 2)
                else
                    var_100_1:4.d = 0
                
                int128_t var_f8_1
                var_f8_1:8.q = var_a8:8.q
                int64_t rax_14 = var_a8.q
                var_f8_1.q = rax_14
                
                if (rax_14 == 0)
                    sub_140a464c0()
                    int64_t* rax_15 = sub_141d9ef80(*arg1, &var_138, &var_118)
                    int16_t* const r8_12
                    
                    if (rax_15[1].d == 0)
                        r8_12 = &data_142d40450
                    else
                        r8_12 = *rax_15
                    
                    var_f8_1.q = *(*(data_14399ea08 + 0xd0))(&data_14399ea08, &arg_10, r8_12)
                    int16_t* rcx_22 = var_138
                    
                    if (rcx_22 != 0)
                        sub_140a74f90(rcx_22)
                
                int64_t rsi_3 = sx.q(*(r12_1 + 0x18))
                int32_t rax_18 = (rsi_3 + 1).d
                *(r12_1 + 0x18) = rax_18
                
                if (rax_18 s> *(r12_1 + 0x1c))
                    sub_140775520(r12_1 + 0x10)
                
                rbx_2 = *(r12_1 + 0x10) + rsi_3 * 0x48
                sub_140596d10(rbx_2, &var_118)
                sub_140596d10(rbx_2 + 0x10, &var_108)
                *(rbx_2 + 0x20) = var_f8_1.q
                *(rbx_2 + 0x28) = var_f8_1:8.q
                *(rbx_2 + 0x30) = var_e8_1.d
                *(rbx_2 + 0x34) = var_e8_1:4.d
                char var_98
                *(rbx_2 + 0x38) = var_98
                *(rbx_2 + 0x3c) = var_c0_1
                *(rbx_2 + 0x40) = var_d8_1
                int64_t rcx_27 = var_108
                
                if (rcx_27 != 0)
                    sub_140a74f90(rcx_27)
                
                uint64_t rcx_28 = var_118
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
        
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int64_t var_58
        sub_141d94e70(&var_58)
        int64_t var_68
        result = sub_141d94e70(&var_68)
        int64_t rcx_32 = var_78
        
        if (rcx_32 != 0)
            result = sub_140a74f90(rcx_32)
        
        if (var_90_1 != 0)
            result = sub_140a74f90(var_90_1)
        
        if (var_b8_1 != 0)
            result = sub_140a74f90(var_b8_1)
        
        rdi_3 = &rdi_3[2]
    while (rdi_3 != r14_3)
    
    rbx_2 = zx.q(var_120)
    rdi_3 = var_128

*(r12_1 + 8) = 0

if (rbx_2.d != 0)
    int32_t i
    
    do
        int64_t rcx_35 = *rdi_3
        
        if (rcx_35 != 0)
            result = sub_140a74f90(rcx_35)
        
        rdi_3 = &rdi_3[2]
        i = rbx_2.d
        rbx_2 = zx.q(rbx_2.d - 1)
    while (i != 1)
    rdi_3 = var_128

if (rdi_3 != 0)
    result = sub_140a74f90(rdi_3)

if (r15_1 == 0)
    return result

return sub_140a74f90(r15_1)
