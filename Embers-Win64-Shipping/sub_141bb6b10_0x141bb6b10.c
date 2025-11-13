// 函数: sub_141bb6b10
// 地址: 0x141bb6b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t rbx = sx.q(*(arg1 + 0x350))
void (* var_118)(int64_t arg1, int64_t* arg2) = arg2
int64_t (* var_100)(int64_t* arg1, int64_t* arg2) = arg1
int64_t rdi = 0
int64_t var_138
__builtin_memset(&var_138, 0, 0x20)
int32_t rsi = 0
int32_t temp0 = rbx.d
int64_t var_130

if (temp0 != 0)
    if (temp0 s> 0)
        sub_1405c5570(&var_138, rbx.d)
        rsi = var_130.d
        rdi = var_138
    
    memcpy(rdi + (sx.q(rsi) << 3), *(arg1 + 0x348), (rbx << 3).d)
    rsi += rbx.d
    var_130.d = rsi

void* var_128
sub_141b6d5e0(&var_128, arg1 + 0x338)
int64_t var_120
int32_t i_2 = var_120.d
void* i = *(arg1 + 0x40)
int32_t i_3 = i_2
void (* var_150)(int64_t arg1, int64_t* arg2)
int64_t result_1

for (; i != 0; i = *(i + 0x40))
    void* rax_3 = sub_141c1b420()
    void* rdx_3 = *(i + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s> *(rdx_3 + 0x38))
        break
    
    if (*(*(rdx_3 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        break
    
    int64_t rdi_1 = sx.q(*(i + 0x350))
    
    if (rdi_1.d != 0)
        int32_t rdx_4 = rsi + rdi_1.d
        
        if (rdx_4 s> var_130:4.d)
            sub_1405c5570(&var_138, rdx_4)
            rsi = var_130.d
        
        memcpy(var_138 + (sx.q(rsi) << 3), *(i + 0x348), (rdi_1 << 3).d)
        rsi += rdi_1.d
        var_130.d = rsi
    
    int32_t rdi_2 = *(i + 0x340)
    var_150.d = rdi_2
    
    if (rdi_2 != 0)
        int32_t rdx_6 = i_2 + rdi_2
        
        if (rdx_6 s> var_120:4.d)
            sub_1405a5310(&var_128, rdx_6)
            i_2 = var_120.d
            i_3 = i_2
        
        int64_t* r15_1 = *(i + 0x338)
        result_1.d = rdi_2
        int32_t j_1 = result_1.d
        void* rdi_3 = &r15_1[6]
        void* rsi_3 = sx.q(i_2) * 0x50 + var_128
        void* rbx_1 = rsi_3 + 0x2c
        int32_t j
        
        do
            sub_140596d10(rsi_3, r15_1)
            *(rbx_1 - 0x1c) = *(rdi_3 - 0x20)
            *(rbx_1 - 0x14) = *(rdi_3 - 0x18)
            *(rbx_1 - 0xc) = 0
            int64_t r14_1 = sx.q(*(rdi_3 - 8))
            result_1 = *(rdi_3 - 0x10)
            *(rbx_1 - 4) = r14_1.d
            
            if (r14_1.d != 0)
                sub_1407751d0(rbx_1 - 0xc, r14_1.d, 0)
                memcpy(*(rbx_1 - 0xc), result_1, (r14_1 * 0x28).d)
            else
                *rbx_1 = 0
            
            rsi_3 += 0x50
            *(rbx_1 + 4) = *rdi_3
            r15_1 = &r15_1[0xa]
            *(rbx_1 + 0xc) = *(rdi_3 + 8)
            *(rbx_1 + 0x14) = *(rdi_3 + 0x10)
            char rax_14 = *(rdi_3 + 0x18)
            rdi_3 += 0x50
            *(rbx_1 + 0x1c) = rax_14
            rbx_1 += 0x50
            j = j_1
            j_1 -= 1
        while (j != 1)
        i_2 = i_3 + var_150.d
        rsi = var_130.d
        i_3 = i_2
        var_120.d = i_2

void (* r14_2)(int64_t arg1, int64_t* arg2) = var_118
int64_t (* r15_2)(int64_t* arg1, int64_t* arg2) = var_100
var_150 = r14_2
int64_t rdx_10 = *(r15_2 + 0x328)
int64_t result = zx.q(*(r14_2 + 8) u>> 5)

if ((result.b & 1) == 0)
    int64_t result_2 = *(r14_2 + 0x1a8)
    result_1 = result_2
    
    if (*(r14_2 + 0x1b4) s>= 0)
        if (result_2 == 0)
            int32_t rax_17 = data_143f312d4 + 1
            data_143f312d4 = rax_17
            
            if (rdx_10 != 0)
                void var_d8
                sub_140d15830(&var_d8, rdx_10, r14_2)
                int32_t var_c0
                int32_t var_c0_1 = var_c0 & 0xfffbfffe
                int32_t var_ac_1 = 0
                void* rax_18 = sub_140d2e350(&var_d8)
                void* rbx_2 = rax_18
                void* rax_19
                void* rcx_15
                int64_t rdx_13
                
                if (rax_18 != 0)
                    rax_19 = sub_141c243c0()
                    rcx_15 = *(rbx_2 + 0x10)
                    rdx_13 = sx.q(*(rax_19 + 0x38))
                
                if (rax_18 == 0 || rdx_13.d s> *(rcx_15 + 0x38)
                        || *(*(rcx_15 + 0x30) + (rdx_13 << 3)) != rax_19 + 0x30)
                    rbx_2 = nullptr
                
                *(r14_2 + 0x1a8) = rbx_2
                *(rbx_2 + 8) |= 0x800040
                void var_a0
                sub_1405ae080(&var_a0)
                rax_17 = data_143f312d4
                r14_2 = var_150
            
            data_143f312d4 = rax_17 - 1
            result = *(r14_2 + 0x1a8)
            result_1 = result
        
        if (result_2 != 0 || result != 0)
            sub_141b93140(r14_2, &var_138)
            void (* rcx_19)(int64_t arg1, int64_t* arg2) = *(var_150 + 0x10)
            void** var_f0 = &var_118
            void (** var_e8_1)(int64_t arg1, int64_t* arg2) = &var_150
            void** var_e0_1 = &result_1
            void*** var_f8_1 = &var_f0
            var_118 = rcx_19
            int64_t result_3 = result_1
            var_100 = sub_141b97140
            sub_141ba8580(result_3, &var_100)
            goto label_141bb6ee0
    else
        char var_158 = 0
        char* var_110_1 = &var_158
        var_118 = sub_141b97150
        sub_141ba8580(result_2, &var_118)
        sub_141b93140(var_150, &var_138)
    label_141bb6ee0:
        sub_141bb60f0(var_150, &var_128)
        result = sub_141e95820(r15_2, var_150)
        i_2 = var_120.d

void* rdi_4 = var_128
void* rbx_3 = rdi_4

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_22 = *(rbx_3 + 0x20)
        
        if (rcx_22 != 0)
            result = sub_140a74f90(rcx_22)
        
        int64_t rcx_23 = *rbx_3
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
        
        rbx_3 += 0x50
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (rdi_4 != 0)
    result = sub_140a74f90(rdi_4)

int64_t rdi_5 = var_138

if (rdi_5 != 0)
    result = sub_140a74f90(rdi_5)

__security_check_cookie(rax_1 ^ &var_178)
return result
