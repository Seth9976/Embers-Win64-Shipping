// 函数: sub_1420cf090
// 地址: 0x1420cf090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2

if (arg2 == 0)
    rdi = sub_14202a680(arg1, arg2.d)

if (rdi == 0)
    return 

int64_t var_28 = 0
int32_t var_20_1 = 0
int64_t* rcx = &var_28
char const* const r8
int32_t r9

if (arg3 == 1)
    sub_1405947f0(rcx, 0x10)
    int32_t rax_1 = var_20_1 + 0x10
    var_20_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_28)
    
    r9 = 0x10
    r8 = "quit background"
else if (arg4 == 0)
    sub_1405947f0(rcx, 5)
    int32_t rax_3 = var_20_1 + 5
    var_20_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_28)
    
    r9 = 5
    r8 = "quit"
else
    sub_1405947f0(rcx, 0xb)
    int32_t rax_2 = var_20_1 + 0xb
    var_20_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_28)
    
    r9 = 0xb
    r8 = "quit force"

sub_1405a7220(var_28, r9, r8, r9, 0x3f)
int64_t r9_1
r9_1.b = 1
int64_t var_18
(*(*rdi + 0xc20))(rdi, &var_18, &var_28, r9_1)
int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)
