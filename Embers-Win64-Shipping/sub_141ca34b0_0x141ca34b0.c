// 函数: sub_141ca34b0
// 地址: 0x141ca34b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int16_t* var_188
sub_140b63b70(&arg_18, &var_188)
int64_t var_118
(*(*arg1 + 0x50))(arg1, &var_118, arg_18, 0)
int32_t var_6c = 0x80
void* var_98 = nullptr
int32_t var_90 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
int32_t var_68 = 0xffffffff
int32_t var_c8
sub_140598750(&var_98, &var_c8)
int64_t* var_c0
*var_c0 = 0
int16_t* rsi = var_188
int32_t var_180
var_c0[1].d = var_180

if (var_180 != 0)
    sub_1405a4c70(var_c0, var_180, 0)
    memcpy(*var_c0, rsi, var_180 * 2)
else
    *(var_c0 + 0xc) = 0

var_c0[2].d = 0xffffffff
int16_t* const r15 = &data_142d40450
int32_t rax_3 = var_c0[1].d
int16_t* rdx_5

if (rax_3 == 0)
    rdx_5 = &data_142d40450
else
    rdx_5 = *var_c0

int32_t rcx_5 = rax_3 - 1

if (rax_3 == 0)
    rcx_5 = 0

void var_128
sub_14059a6d0(&var_98, &var_128, sub_1405969c0(rcx_5, rdx_5), var_c0, var_c8, nullptr)
int64_t i
int64_t var_e0

while (i == *(sub_140cdddf0() + 0x18))
    int128_t var_150
    void var_a8
    int64_t var_178
    int64_t var_140
    int64_t var_138_1
    void var_f0
    
    if (sub_1408301c0(&var_118, *sub_140b58170(&var_a8, "DestinationObject", 1), &var_188) == 0)
        __builtin_memset(&var_178, 0, 0x48)
    label_141ca3884:
        var_118 = var_178
        int64_t var_110_2
        __builtin_memset(&var_110_2, 0, 0x20)
        sub_140de18c0(&var_f0, &var_150)
        int64_t rcx_27 = var_e0
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        var_e0 = var_140
        int32_t var_d8_2 = var_138_1.d
        int32_t var_d4_2 = var_138_1:4.d
        int32_t var_130
        int32_t var_d0_2 = var_130
    else
        sub_140d304e0(&var_188, 0)
        int32_t rbx_1
        
        if (var_90 == var_64)
        label_141ca36cb:
            rbx_1 = -1
        else
            int32_t rdi_1 = var_180
            int16_t* r14_1 = var_188
            int32_t rcx_10
            int16_t* rdx_8
            
            if (rdi_1 == 0)
                rdx_8 = &data_142d40450
                rcx_10 = 0
            else
                rdx_8 = r14_1
                rcx_10 = rdi_1 - 1
            
            int64_t rdx_10 = sx.q(var_50 - 1) & sx.q(sub_1405969c0(rcx_10, rdx_8))
            void var_60
            void* rcx_12 = &var_60
            
            if (var_58 != 0)
                rcx_12 = var_58
            
            rbx_1 = *(rcx_12 + (rdx_10 << 2))
            
            if (rbx_1 == 0xffffffff)
            label_141ca36cb_1:
                rbx_1 = -1
            else
                void* rdx_11 = var_98
                
                while (true)
                    int64_t rsi_1 = sx.q(rbx_1) * 0x18
                    int64_t* rcx_14 = rdx_11 + rsi_1
                    int16_t* rdx_12 = &data_142d40450
                    
                    if (rdi_1 != 0)
                        rdx_12 = r14_1
                    
                    int16_t* const rcx_15
                    
                    if (rcx_14[1].d == 0)
                        rcx_15 = &data_142d40450
                    else
                        rcx_15 = *rcx_14
                    
                    if (sub_140a54510(rcx_15, rdx_12) == 0)
                        break
                    
                    rdx_11 = var_98
                    rbx_1 = *(rdx_11 + rsi_1 + 0x10)
                    
                    if (rbx_1 == 0xffffffff)
                        goto label_141ca36cb_1
                    
                    rdi_1 = var_180
                    r14_1 = var_188
        
        if (rbx_1 != 0xffffffff)
            __builtin_memset(&var_178, 0, 0x28)
            var_138_1 = 0
            goto label_141ca3884
        
        int32_t var_b8
        sub_140598750(&var_98, &var_b8)
        int64_t* var_b0
        *var_b0 = 0
        int16_t* rsi_2 = var_188
        var_b0[1].d = var_180
        
        if (var_180 != 0)
            sub_1405a4c70(var_b0, var_180, 0)
            memcpy(*var_b0, rsi_2, var_180 * 2)
        else
            *(var_b0 + 0xc) = 0
        
        var_b0[2].d = 0xffffffff
        int32_t rax_17 = var_b0[1].d
        int16_t* rdx_16
        
        if (rax_17 == 0)
            rdx_16 = &data_142d40450
        else
            rdx_16 = *var_b0
        
        int32_t rcx_19 = rax_17 - 1
        
        if (rax_17 == 0)
            rcx_19 = 0
        
        sub_14059a6d0(&var_98, &var_128, sub_1405969c0(rcx_19, rdx_16), var_b0, var_b8, nullptr)
        int64_t rbx_3 = *arg1
        int16_t* rdx_18 = &data_142d40450
        
        if (var_180 != 0)
            rdx_18 = var_188
        
        int64_t* rax_20
        int64_t r9_2
        rax_20, r9_2 = sub_140b58260(&var_c8, rdx_18, 1)
        r9_2.b = 1
        int64_t* rax_21 = (*(rbx_3 + 0x50))(arg1, &var_178, *rax_20, r9_2)
        var_118 = *rax_21
        int64_t var_110_1 = rax_21[1]
        int64_t var_108_1 = rax_21[2]
        int64_t var_100_1 = rax_21[3]
        i = rax_21[4]
        sub_140de18c0(&var_f0, &rax_21[5])
        
        if (&var_e0 != &rax_21[7])
            int64_t rcx_24 = var_e0
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            var_e0 = rax_21[7]
            rax_21[7] = 0
            int32_t var_d8_1 = rax_21[8].d
            int32_t var_d4_1 = *(rax_21 + 0x44)
            rax_21[8] = 0
        
        int32_t var_d0_1 = rax_21[9].d
        
        if (var_140 != 0)
            sub_140a74f90(var_140)
    int64_t* rbx_5 = var_150:8.q
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp3_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)

if (var_180 != 0)
    r15 = var_188

sub_140b58260(arg2, r15, 1)
int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_140669e00(&var_98)
int64_t rcx_33 = var_e0

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int64_t* var_e8

if (var_e8 != 0)
    var_e8[1].d -= 1
    
    if (var_e8[1].d == 1)
        (**var_e8)(var_e8)
        int32_t temp1_1 = *(var_e8 + 0xc)
        *(var_e8 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_9 = *var_e8
            (*(r8_9 + 8))(var_e8, 1, r8_9)

int16_t* rcx_36 = var_188

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg2
