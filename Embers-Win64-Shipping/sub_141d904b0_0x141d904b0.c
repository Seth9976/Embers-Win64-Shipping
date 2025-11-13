// 函数: sub_141d904b0
// 地址: 0x141d904b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rdi = 0
void* r13 = nullptr
void* var_c0 = nullptr
int32_t i_1 = 0
int32_t var_b4 = 0
int64_t var_d0
int64_t* rax_2
int512_t zmm1
rax_2, zmm1 = sub_141d8ff60(&var_d0, arg1 + 0x30)
int16_t* const rax_3

if (rax_2[1].d == 0)
    rax_3 = &data_142d40450
else
    rax_3 = *rax_2

int16_t* const var_60 = rax_3
uint64_t var_b0 = 0
wchar16 const* const var_58 = u"events"
int32_t var_a8 = 0
wchar16 const* const var_50 = u"event"
sub_140b0f5f0(&var_b0, &var_60, 3)
int64_t rcx_2 = var_d0

if (rcx_2 != 0)
    zmm1 = sub_140a74f90(rcx_2)

int32_t rsi = 0
int32_t var_f8 = 0
int16_t* r15_1

while (true)
    int16_t* var_f0 = nullptr
    int32_t var_e8_1 = 0
    sub_140a20c40(&var_f0, rsi)
    int32_t rbx_2
    
    if (var_a8 s> 1)
        int32_t rsi_2
        
        if (var_e8_1 == 0)
            rsi_2 = 0
        else
            rsi_2 = var_e8_1 - 1
        
        int32_t rax_4
        
        if (var_a8 == 0)
            rax_4 = var_a8 + 1
        
        if (var_a8 != 0 || rsi_2 == 0)
            rax_4 = 0
        
        uint64_t r15_2 = var_b0
        int32_t rcx_4 = rax_4 + rsi_2
        int16_t* var_e0 = nullptr
        
        if (var_a8 != 0 || rcx_4 != 0)
            sub_1405a4c70(&var_e0, rcx_4 + var_a8, 0)
            memcpy(var_e0, r15_2, var_a8 * 2)
        else
            int32_t var_d4_1 = 0
        
        sub_140a20ba0(&var_e0, var_f0, rsi_2)
        int16_t* rcx_8 = var_f0
        r15_1 = var_e0
        rbx_2 = var_a8
        var_e0 = nullptr
        int32_t var_d8_1
        var_d8_1.q = 0
        
        if (rcx_8 != 0)
            zmm1 = sub_140a74f90(rcx_8)
    else
        r15_1 = var_f0
        rbx_2 = var_e8_1
        var_f0 = nullptr
        int64_t var_e8_2 = 0
    
    sub_140a464c0()
    int16_t* const rdx_6 = &data_142d40450
    
    if (rbx_2 != 0)
        rdx_6 = r15_1
    
    char const (* r9_1)[0x4] = data_14399ea08
    int64_t* rax_5 = (*(r9_1 + 0x18))(&data_14399ea08, rdx_6, 0, r9_1, var_f8)
    
    if (rax_5 == 0)
        break
    
    var_d0 = 0
    int32_t var_c8_1 = 0
    zmm1 = sub_140a1d9d0(rax_5, &var_d0, zmm1)
    void** const rax_6 = &data_143238d00
    int64_t r12_1 = var_d0
    void** const var_a0 = &data_143238d00
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x28)
    var_60 = nullptr
    var_58.d = var_c8_1
    
    if (var_c8_1 != 0)
        sub_1405a4c70(&var_60, var_c8_1, 0)
        memcpy(var_60, r12_1, var_c8_1 * 2)
        rax_6 = var_a0
    else
        var_58:4.d = 0
    
    rax_6[5](&var_a0, &var_60)
    int16_t* const rcx_13 = var_60
    
    if (rcx_13 != 0)
        zmm1 = sub_140a74f90(rcx_13)
    
    int64_t i_2 = sx.q(i_1)
    i_1 = (i_2 + 1).d
    
    if (i_1 s> var_b4)
        sub_1405c4f50(&var_c0)
        r13 = var_c0
    
    void*** rsi_6 = i_2 * 0x30 + r13
    *rsi_6 = &data_143238d00
    sub_140596d10(&rsi_6[1], &var_98)
    int64_t var_88
    sub_140596d10(&rsi_6[3], &var_88)
    int64_t var_78
    rsi_6[5].d = var_78.d
    *(rsi_6 + 0x2c) = var_78:4.d
    int64_t rcx_17 = var_88
    
    if (rcx_17 != 0)
        zmm1 = sub_140a74f90(rcx_17)
    
    int64_t rcx_18 = var_98
    
    if (rcx_18 != 0)
        zmm1 = sub_140a74f90(rcx_18)
    
    int64_t rcx_19 = var_d0
    var_a0 = &data_142e1f570
    
    if (rcx_19 != 0)
        zmm1 = sub_140a74f90(rcx_19)
    
    rsi = var_f8 + 1
    var_f8 = rsi
    (**rax_5)(rax_5, 1)
    
    if (r15_1 != 0)
        zmm1 = sub_140a74f90(r15_1)

if (r15_1 != 0)
    sub_140a74f90(r15_1)

int32_t r12_2 = arg2
int32_t rdx_14 = -1

if (i_1 s> 0)
    if (r12_2 u>= *(r13 + sx.q(i_1 - 1) * 0x30 + 0x28))
        rdx_14 = i_1 - 1
    else if (i_1 s> 0)
        void* rax_11 = r13 + 0x28
        
        do
            if (r12_2 u< *rax_11)
                rdx_14 = rdi - 1
                break
            
            rdi += 1
            rax_11 += 0x30
        while (rdi s< i_1)

if (rdx_14 s>= 0)
    r12_2 -= *(r13 + sx.q(rdx_14) * 0x30 + 0x28)

int64_t* result = sub_141d901b0(arg1, rdx_14, arg3, r12_2)
uint64_t rcx_26 = var_b0

if (rcx_26 != 0)
    result = sub_140a74f90(rcx_26)

if (i_1 != 0)
    void* rbx_4 = r13 + 8
    int32_t i
    
    do
        int64_t rcx_27 = *(rbx_4 + 0x10)
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        int64_t rcx_28 = *rbx_4
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        result = &data_142e1f570
        *(rbx_4 - 8) = &data_142e1f570
        rbx_4 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r13 != 0)
    result = sub_140a74f90(r13)

__security_check_cookie(rax_1 ^ &var_118)
return result
