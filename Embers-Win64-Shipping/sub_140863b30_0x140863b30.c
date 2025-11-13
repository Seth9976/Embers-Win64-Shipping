// 函数: sub_140863b30
// 地址: 0x140863b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg3
int64_t var_80 = data_14396f0d8
int16_t var_78 = data_14396f0e0
int64_t var_88 = 0
int32_t var_76 = 0xffffffff
int64_t var_70 = 0
int64_t var_68 = 0
int64_t* var_a8
char rax_3 = sub_140a32ae0(sub_140b63b70(arg2, &var_a8), u"User.", 1)
int64_t* rcx_2 = var_a8

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t var_60
int64_t var_48
int64_t arg_8

if (rax_3 == 0)
    int64_t var_98
    int64_t* rax_4 = sub_140b63b70(arg2, &var_98)
    var_a8 = nullptr
    int32_t rdx_3 = 0
    int64_t* rsi_1 = nullptr
    int32_t var_a0_1 = 0
    int32_t rcx_5 = rax_4[1].d
    int32_t rbx_1 = rcx_5 - 1
    int32_t rcx_6 = 0
    
    if (rcx_5 == 0)
        rbx_1 = 0
    
    int32_t var_9c_1 = 0
    
    if (rbx_1 + 6 s> 0)
        sub_1405947f0(&var_a8, rbx_1 + 6)
        rcx_6 = var_9c_1
        rdx_3 = var_a0_1
        rsi_1 = var_a8
    
    int32_t r14_2 = rbx_1 + 6 + rdx_3
    
    if (r14_2 s> rcx_6)
        sub_140594770(&var_a8)
        rsi_1 = var_a8
    
    *rsi_1 = 0x72006500730055
    rsi_1[1].w = 0x2e
    int64_t rbx_2 = sx.q(rbx_1)
    memcpy(rsi_1 + 0xa, *rax_4, rbx_2.d * 2)
    int64_t* rdx_6 = &data_142d40450
    *(rsi_1 + (rbx_2 << 1) + 0xa) = 0
    
    if (r14_2 != 0)
        rdx_6 = rsi_1
    
    sub_140b58260(&arg_8, rdx_6, 1)
    var_60 = arg_8
    int64_t var_58_1 = *(arg2 + 8)
    int128_t zmm0_2 = var_60.o
    int32_t var_4e_1 = 0xffffffff
    var_78.q = arg2[4].w.q
    var_48 = 0
    int64_t var_40_1 = 0
    var_88.o = zmm0_2
    sub_14081d8c0(&var_70, &var_48)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    int64_t rcx_13 = var_98
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    rsi = arg3
else
    var_88.o = *arg2
    var_78.q = *(arg2 + 0x10)
    sub_14081d8c0(&var_70, &arg2[6])

var_a8 = sub_140866170(arg1, &var_60, &var_88)
int32_t var_a0
var_a0.q = &var_88
sub_140862ed0(arg1 + 0xb8, &arg_8, &var_a8, nullptr)
int64_t rcx_16 = var_48

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

char rax_11 = sub_14081fd00(arg1, &var_88, rsi, arg4, arg5)
int64_t rcx_18 = var_70

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

return zx.q(rax_11)
