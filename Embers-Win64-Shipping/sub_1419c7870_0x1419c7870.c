// 函数: sub_1419c7870
// 地址: 0x1419c7870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* r13 = *(arg2 + 0xf8)
int16_t* const r14 = &data_142d40450
int64_t* rsi = arg4
void* rbx = *(r13 + 0x80)
void* var_d8 = arg2
int32_t var_60 = arg3
void* var_d0 = arg1
int64_t* var_c8 = arg4
int64_t var_c0 = 0
int32_t var_b8 = 0
int32_t var_94 = 0x80
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x1c)
int32_t var_90 = 0xffffffff
int32_t var_8c = 0
int64_t var_80 = 0
int32_t var_78 = 0
int64_t var_70 = 0
int64_t var_68 = 0
char var_5c = 1
sub_1419c6b10(&var_d8, rbx, &data_142d40450, 0)
*(arg1 + 0x90) = *(rbx + 0x94)
int16_t* var_128 = nullptr
int32_t var_120 = 0
sub_1405947f0(&var_128, 0x16)
int32_t rax_3 = var_120 + 0x16
var_120 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_128)

int16_t* rdi_1 = var_128
UnDecorator::getReferenceType(rdi_1, u"_RootShaderParameters", 0x2c)
int32_t var_118
sub_1408f1b50(rsi, &var_118, &var_128)
int64_t rax_4 = sx.q(var_118)
int64_t rcx_6
int16_t* rbx_1

if (rax_4.d != 0xffffffff)
    rcx_6 = rax_4 << 5
    rbx_1 = rcx_6 + *rsi + 0x10

if (rax_4.d == 0xffffffff || rcx_6 == neg.q(*rsi))
    rbx_1 = nullptr

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

int64_t var_110
int64_t var_108
void var_100

if (rbx_1 != 0)
    var_118.w = *rbx_1
    *(rbx_1 + 7) = 1
    var_110 = 0
    var_108 = 0
    sub_1405947f0(&var_110, 0x16)
    int32_t r15_1 = var_108:4.d
    int32_t rdi_2 = var_108.d + 0x16
    var_108.d = rdi_2
    
    if (rdi_2 s> r15_1)
        sub_140594770(&var_110)
        r15_1 = var_108:4.d
        rdi_2 = var_108.d
    
    UnDecorator::getReferenceType(var_110, u"_RootShaderParameters", 0x2c)
    var_128 = nullptr
    int16_t** var_120_1 = nullptr
    sub_1405947f0(&var_128, 0x16)
    int32_t r12 = var_120_1:4.d
    int32_t rsi_1 = var_120_1.d + 0x16
    var_120_1.d = rsi_1
    
    if (rsi_1 s> r12)
        sub_140594770(&var_128)
        r12 = var_120_1:4.d
        rsi_1 = var_120_1.d
    
    int16_t* r13_1 = var_128
    UnDecorator::getReferenceType(r13_1, u"_RootShaderParameters", 0x2c)
    sub_1405d1820(&var_c0, &var_128)
    int16_t* rdx_6 = r13_1
    int64_t rax_6 = var_110
    *var_120_1 = r13_1
    var_120_1[1].d = rsi_1
    *(var_120_1 + 0xc) = r12
    var_120_1[2] = rax_6
    var_120_1[3].d = rdi_2
    *(var_120_1 + 0x1c) = r15_1
    var_120_1[4].d = 0xffffffff
    int32_t rax_7 = var_120_1[1].d
    
    if (rax_7 == 0)
        rdx_6 = &data_142d40450
    
    int32_t rcx_16 = rax_7 - 1
    
    if (rax_7 == 0)
        rcx_16 = 0
    
    sub_1405d2a60(&var_c0, &var_100, sub_1405969c0(rcx_16, rdx_6), var_120_1, var_128.d, nullptr)
    rsi = arg4
    *(arg1 + 0x94) = var_118.w

var_128 = nullptr
int32_t var_120_2 = 0
sub_1419be9a0(rsi, &var_128)
int64_t rdi_3 = sx.q(var_120_2)
int16_t* r15_2 = var_128

if (var_b8 - var_8c != rdi_3.d)
    sub_140a2e390(&var_128, 
        Shader %s has unbound parameters not represented in the parameter struct:", *(r13 + 0x18))
    int16_t* rbx_3 = r15_2
    void* rsi_4 = &r15_2[rdi_3 * 8]
    
    if (r15_2 != rsi_4)
        do
            if (*sub_14062d6e0(&var_c0, &var_100, rbx_3) == 0xffffffff)
                int16_t* const r8_4
                
                if (*(rbx_3 + 8) == 0)
                    r8_4 = &data_142d40450
                else
                    r8_4 = *rbx_3
                
                sub_140a2e390(&var_110, u"\n  %s", r8_4)
                int32_t r8_5 = var_108.d
                int32_t r8_6
                
                if (r8_5 == 0)
                    r8_6 = 0
                else
                    r8_6 = r8_5 - 1
                
                sub_140a20ba0(&var_128, var_110, r8_6)
                int64_t rcx_24 = var_110
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
            
            rbx_3 = &rbx_3[8]
        while (rbx_3 != rsi_4)
    
    if (var_120_2 != 0)
        r14 = var_128
    
    sub_140af98a0("Unknown", 0x16a, u"%s", r14)
    sub_140afbb40()
    int16_t* rcx_25 = var_128
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)

int16_t* rbx_4 = r15_2

if (rdi_3.d != 0)
    int32_t i
    
    do
        int64_t rcx_26 = *rbx_4
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        rbx_4 = &rbx_4[8]
        i = rdi_3.d
        rdi_3 = zx.q(rdi_3.d - 1)
    while (i != 1)

if (r15_2 != 0)
    sub_140a74f90(r15_2)

if (var_70 != 0)
    sub_140a74f90(var_70)

int32_t var_78_1 = 0

if (var_80 != 0)
    sub_140a74f90(var_80)

int64_t result = sub_1405e1b50(&var_c0, 0)
int64_t var_a0

if (var_a0 != 0)
    result = sub_140a74f90(var_a0)

int64_t rcx_32 = var_c0

if (rcx_32 != 0)
    result = sub_140a74f90(rcx_32)

__security_check_cookie(rax_1 ^ &var_158)
return result
