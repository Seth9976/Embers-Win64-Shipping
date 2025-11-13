// 函数: sub_14060e480
// 地址: 0x14060e480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_20 = rbx
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
sub_140588000(arg1 + 0x220)
int16_t* rax_2 = sub_140b738f0()
int32_t rsi = 0
int16_t* r12 = nullptr
int32_t r15 = 0
int16_t* var_118 = nullptr
int64_t var_110 = 0
int64_t rdi = -1
int32_t rax_3

if (rax_2 != 0 && *rax_2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rax_2[rbx_1] != 0)
    
    rbx = zx.q(rbx_1.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_118, rbx.d)
        r15 = var_110:4.d
        rsi = var_110.d
        r12 = var_118
    
    rsi += rbx.d
    var_110.d = rsi
    
    if (rsi s> r15)
        sub_140594770(&var_118)
        r15 = var_110:4.d
        rsi = var_110.d
        r12 = var_118
    
    UnDecorator::getReferenceType(r12, rax_2, rbx.d * 2)
    rax_3 = 0x17

if (rax_2 == 0 || *rax_2 == 0 || rsi == 0)
    rax_3 = 0x18

int32_t rdx_4 = rsi + rax_3
int16_t* var_108 = r12
int32_t var_fc = r15

if (rdx_4 s> r15)
    sub_1405947f0(&var_108, rdx_4)

sub_140a2cf70(&var_108, u"Embers/Backup/LivePlay", 0x16)
int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rsi_1 = &data_142d40450
int16_t* const rdx_5 = &data_142d40450

if (rsi != 0)
    rdx_5 = var_108

if ((*(*rax_4 + 0x178))(rax_4, rdx_5) == 0)
    rbx.b = 0
else
    void* var_f8
    int64_t* rax_7 = sub_140b29020(sub_140b21590(&var_118), &var_f8)
    sub_140a20ba0(rax_7, u".mid", 4)
    int32_t rcx_11 = rax_7[1].d
    int32_t r8_4 = rcx_11 - 1
    
    if (rcx_11 == 0)
        r8_4 = 0
    
    sub_140a2cf70(&var_108, *rax_7, r8_4)
    void* rcx_13 = var_f8
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    char* rdx_9 = nullptr
    char* var_58_1 = nullptr
    
    if (rsi != 0)
        rsi_1 = var_108
    
    if (rsi == 0 || rsi_1 != 0)
        int64_t rax_8 = -1
        
        do
            rax_8 += 1
        while (rsi_1[rax_8] != 0)
        
        int32_t rbx_3 = (rax_8 + 1).d
        int32_t var_48_2 = rax_8.d
        
        if (rbx_3 u> 0x80 && rbx_3 != 0)
            char* rax_9 = sub_140a84c80(0, sx.q(rbx_3), 0)
            rdx_9 = rax_9
            var_58_1 = rax_9
        
        void var_d8
        char* rcx_14 = &var_d8
        
        if (rdx_9 != 0)
            rcx_14 = rdx_9
        
        sub_14060abb0(rcx_14, rbx_3, rsi_1, rbx_3, 0x3f)
        rdx_9 = rcx_14
    else
        int64_t var_50_1 = 0
        int32_t var_48_1 = 0
    
    int64_t var_e8_1 = 0
    int64_t var_e0_1 = 0xf
    var_f8.b = 0
    
    do
        rdi += 1
    while (rdx_9[rdi] != 0)
    
    sub_14058ad40(&var_f8, rdx_9, rdi)
    rbx = zx.q(sub_140587700(arg1 + 0x220, &var_f8))
    
    if (var_e0_1 u>= 0x10)
        void* rcx_17 = var_f8
        void* rax_11 = rcx_17
        
        if (var_e0_1 + 1 u>= 0x1000)
            rcx_17 = *(rcx_17 - 8)
            
            if (rax_11 - rcx_17 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_17)
    
    int64_t var_e8_2 = 0
    int64_t var_e0_2 = 0xf
    var_f8.b = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)

int16_t* rcx_19 = var_108

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

__security_check_cookie(rax_1 ^ &var_148)
return zx.q(rbx.b)
