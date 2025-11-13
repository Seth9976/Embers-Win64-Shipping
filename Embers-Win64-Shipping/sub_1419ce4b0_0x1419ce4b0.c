// 函数: sub_1419ce4b0
// 地址: 0x1419ce4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int16_t* const r8

if (arg3[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg3

int16_t* var_48
sub_140a2e390(&var_48, u"ShaderArchive-%s-", r8)
int32_t var_40
int32_t rdi_1

if (var_40 == 0)
    rdi_1 = 0
else
    rdi_1 = var_40 - 1

int32_t rsi = arg2[1].d
int32_t r14 = 1
int32_t rax_2

if (rsi == 0)
    rax_2 = rsi + 2

if (rsi != 0 || rdi_1 == 0xffffffff)
    rax_2 = 1

int64_t r15_1 = *arg2
int32_t rcx_1 = rax_2 + rdi_1
int64_t var_78 = 0
int32_t var_6c

if (rsi != 0 || rcx_1 != 0)
    sub_1405a4c70(&var_78, rsi + rcx_1, 0)
    memcpy(var_78, r15_1, rsi * 2)
else
    var_6c = 0

sub_140a2cf70(&var_78, var_48, rdi_1)
int64_t var_38
int64_t* rax_3 = sub_140b63b70(&arg_20, &var_38)
int32_t rax_4
int64_t rsi_1
int32_t r8_5

if (rsi s> 1)
    int32_t rax_5 = rax_3[1].d
    int32_t rsi_2 = rax_5 - 1
    
    if (rax_5 == 0)
        rsi_2 = 0
    
    int32_t rcx_6
    
    if (rsi == 0)
        rcx_6 = 1
    
    if (rsi != 0 || rsi_2 == 0)
        rcx_6 = 0
    
    int64_t var_68 = var_78
    int32_t rdx_5 = rsi_2 + rcx_6 + rsi
    var_78 = 0
    int32_t var_70
    var_70.q = 0
    
    if (rdx_5 s> var_6c)
        sub_1405947f0(&var_68, rdx_5)
    
    sub_140a20ba0(&var_68, *rax_3, rsi_2)
    rax_4 = rsi
    r8_5 = var_6c
    rsi_1 = var_68
    int32_t var_60_1
    var_60_1.q = 0
    var_68 = 0
else
    rsi_1 = *rax_3
    *rax_3 = 0
    rax_4 = rax_3[1].d
    r8_5 = *(rax_3 + 0xc)
    rax_3[1] = 0

if (rax_4 s> 1)
    int32_t rcx_12 = (data_143f1ee28.q).d
    int32_t rdi_4 = rcx_12 - 1
    
    if (rcx_12 == 0)
        rdi_4 = 0
    
    if (rax_4 != 0 || rdi_4 == 0)
        r14 = 0
    
    int64_t var_58 = rsi_1
    int32_t rdx_10 = rax_4 + r14 + rdi_4
    
    if (rdx_10 s> r8_5)
        sub_1405947f0(&var_58, rdx_10)
    
    sub_140a20ba0(&var_58, data_143f1ee20, rdi_4)
    *arg1 = var_58
    arg1[1].d = rax_4
    *(arg1 + 0xc) = r8_5
else
    *arg1 = 0
    int32_t rdi_3 = (data_143f1ee28.q).d
    int64_t r14_1 = data_143f1ee20
    arg1[1].d = rdi_3
    
    if (rdi_3 != 0)
        sub_1405a4c70(arg1, rdi_3, 0)
        memcpy(*arg1, r14_1, rdi_3 * 2)
    else
        *(arg1 + 0xc) = 0
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

int64_t rcx_15 = var_78

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_48

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = var_38

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return arg1
