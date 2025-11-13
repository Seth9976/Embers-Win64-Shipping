// 函数: sub_141e60cd0
// 地址: 0x141e60cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int16_t* var_58
sub_140b63b70(&arg_18, &var_58)
int64_t var_48
sub_140baaa80(&var_48, &var_58)
int16_t* const r14 = &data_142d40450
int64_t var_68 = 0
int16_t* const r8 = &data_142d40450
int64_t var_60 = 0
int32_t var_50

if (var_50 != 0)
    r8 = var_58

int16_t* var_78
sub_140a2e390(&var_78, u"%s.%s", r8)
int16_t* rdx_2 = &data_142d40450
int32_t var_70

if (var_70 != 0)
    rdx_2 = var_78

int32_t arg_20
sub_140b58260(&arg_20, rdx_2, 0)
int16_t* rcx_4 = var_78

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t rcx_5
rcx_5.b = sub_140b5b8a0(arg_20, 0) == 0
int16_t* var_38

if ((arg4 != 0 | rcx_5.b) == 0)
label_141e60de7:
    int16_t* r8_2 = &data_142d40450
    
    if (var_50 != 0)
        r8_2 = var_58
    
    sub_140a2e390(&var_38, u"%s.%s_C", r8_2)
    int32_t var_30
    
    if (var_30 != 0)
        r14 = var_38
    
    int64_t* rax_4 = sub_140b58260(&var_78, r14, 0)
    int16_t* rcx_11 = var_38
    int64_t rax_5 = *rax_4
    arg_20.q = rax_5
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
        rax_5 = arg_20.q
    
    int32_t rcx_12
    rcx_12.b = sub_140b5b8a0(rax_5.d, 0) == 0
    
    if ((arg4 != 0 | rcx_12.b) != 0)
        int64_t* rax_8 = (*(*arg1 + 0x2c8))(arg1, &var_38, arg_20.q)
        int64_t var_60_2 = rax_8[1]
        var_68 = *rax_8
else
    int64_t* rax_2 = (*(*arg1 + 0x2c8))(arg1, &var_38, arg_20.q)
    var_78 = nullptr
    int64_t rcx_7 = *rax_2
    int64_t rdi_1 = rax_2[1]
    var_68 = rcx_7
    int64_t var_60_1 = rdi_1
    
    if (rcx_7 == 0)
        goto label_141e60de7
    
    int32_t rcx_8
    rcx_8.b = sub_140b5b8a0(rdi_1.d, 0) == 0
    rcx_8.b |= (rdi_1 u>> 0x20).d != 0
    
    if (rcx_8.b == 0)
        goto label_141e60de7
int64_t rcx_15 = var_48
*arg2 = var_68.o

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_58

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

return arg2
