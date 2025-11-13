// 函数: sub_1423b2d00
// 地址: 0x1423b2d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r12 = &data_142d40450
int16_t* rcx

if (arg3[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg3

int32_t rax = sub_14230f1e0(rcx, nullptr)
int64_t* rax_1 = data_143db18d0
int64_t* arg_20 = rax_1

if (rax_1 == 0)
    sub_140a53c40()
    arg_20 = data_143db18d0

int16_t* const var_68

if (arg3[1].d == 0)
    var_68 = &data_142d40450
else
    var_68 = *arg3

int16_t* rbx = nullptr
int16_t* var_60 = nullptr
int64_t var_58 = 0
sub_1405947f0(&var_60, 0xa)
int32_t r13 = var_58:4.d
int32_t r14 = var_58.d + 0xa
var_58.d = r14

if (r14 s> r13)
    sub_140594770(&var_60)
    r13 = var_58:4.d
    r14 = var_58.d

int16_t* r15 = var_60
int16_t var_88 = 0x3f
sub_1405a7220(r15, 0xa, "ShowFlag.", 0xa, 0x3f)
int32_t rsi_2 = arg3[1].d
bool cond:2_1

if (r14 s> 1)
    int32_t r12_1 = rsi_2 - 1
    
    if (rsi_2 == 0)
        r12_1 = 0
    
    int32_t rax_3
    
    if (r14 == 0)
        rax_3 = r14 + 1
    
    if (r14 != 0 || r12_1 == 0)
        rax_3 = 0
    
    var_60 = r15
    int32_t rdx_4 = r12_1 + rax_3 + r14
    var_58.d = r14
    var_58:4.d = r13
    r15 = nullptr
    
    if (rdx_4 s> r13)
        sub_1405947f0(&var_60, rdx_4)
    
    sub_140a20ba0(&var_60, *arg3, r12_1)
    int16_t* rax_4 = var_60
    r12 = &data_142d40450
    var_60 = nullptr
    int64_t var_58_1 = 0
    rbx = rax_4
    cond:2_1 = var_58.d != 0
else
    int64_t rdi_1 = *arg3
    uint64_t var_50 = 0
    cond:2_1 = rsi_2 != 0
    
    if (rsi_2 != 0)
        sub_1405a4c70(&var_50, rsi_2, 0)
        rbx = var_50
        memcpy(rbx, rdi_1, rsi_2 * 2)
        cond:2_1 = rsi_2 != 0

if (cond:2_1)
    r12 = rbx

int64_t rax_6 = *arg1
var_88.q = rax_6 + 0xc
(*(*arg_20 + 0x48))(arg_20, r12, var_68, zx.q(rax), 0x3f, rax_6 + 0x14, 
    Allows to override a specific showflag (works in editor and game, "show" only works in ", 1, var_68)

if (rbx != 0)
    sub_140a74f90(rbx)

if (r15 != 0)
    sub_140a74f90(r15)

int64_t result
result.b = 1
return result
