// 函数: sub_141efdf70
// 地址: 0x141efdf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_9c = 0x80
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x2c)
int32_t var_94 = 0
int64_t var_88 = 0
int32_t var_80 = 0
int32_t var_98 = 0xffffffff
sub_140cd48b0(&var_c8, arg1)

if (sub_140a80f40() == 0)
    uint32_t rax_3
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
        void var_e8
        int64_t* rax_4 = sub_141ede9c0(&var_e8, nullptr, 0xff)
        sub_14077e140(*rax_4 + 0x10, &var_c8)
        void* rcx_8 = *rax_4
        int32_t r8_1 = rax_4[2].d
        int64_t* rdx_3 = rax_4[1]
        int64_t* rbx_2 = *(rcx_8 + 0x68)
        int64_t* var_f8_1 = rbx_2
        int32_t* rsi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rsi_1 += 1
            rbx_2 = var_f8_1
        
        sub_14106e0b0(rcx_8, rdx_3, r8_1, 1)
        
        if (rbx_2 != 0)
            int32_t rax_5 = *rsi_1
            *rsi_1 -= 1
            
            if (rax_5 == 1)
                sub_140a2f6e0(var_f8_1)
    else
        void var_78
        sub_14077e140(&var_78, &var_c8)
        sub_141ed49d0(&var_78, &data_143f02b98)
        sub_141ed3ef0(&var_78)
else
    sub_141ed49d0(&var_c8, &data_143f02b98)

int32_t var_80_1 = 0

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t var_c0
var_c0.d = 0
int32_t var_98_1 = 0xffffffff
int32_t var_94_1 = 0
int64_t var_b8
sub_14059a8e0(&var_b8, 0)
int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

int64_t rcx_14 = var_c8

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

arg1[9].d = 0
int64_t rcx_15 = arg1[8]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405a5410(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_18 = arg1[4]

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int64_t rcx_19 = *arg1

if (rcx_19 != 0)
    result = sub_140a74f90(rcx_19)

__security_check_cookie(rax_1 ^ &var_118)
return result
