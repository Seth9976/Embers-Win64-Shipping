// 函数: sub_142663f50
// 地址: 0x142663f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* arg_10 = arg2
char rdi_1 = 0
int32_t arg_18 = 0

if ((*(arg2 + 0xcc) & 1) != 0)
    return 

if (((*(arg2 + 0xcc) u>> 0x12).b & 1) == 0)
label_14266406b:
    
    if (*sub_1408296b0(arg1 + 0x3c0, &arg_18, arg2) == 0xffffffff)
        int64_t* rcx_8 = arg2[0x23]
        
        if (rcx_8 == 0)
            (*(*arg2 + 0x390))(arg2)
            rcx_8 = arg2[0x23]
        
        (*(*rcx_8 + 0x278))(rcx_8)
        sub_140ca9be0(arg1 + 0x3c0, &arg_18, &arg_10, nullptr)
        sub_1426600b0(arg1, arg2, 0)
    
    return 

arg_18.q = arg2[3]
int64_t var_28
sub_140b63b70(&arg_18, &var_28)
int64_t rax = sub_140a23cf0(&var_28, u"SKEL_", 1, 0, 0xffffffff)
int64_t rcx_2 = var_28
int64_t rsi
rsi.b = rax.d != 0xffffffff

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (rsi.b != 0)
    return 

rax = sub_140d21d80(arg2)

if (rax == 0)
    rsi.b = 0
else
    arg_18.q = *(rax + 0x18)
    sub_140b63b70(&arg_18, &var_28)
    rdi_1 = 1
    
    if (sub_140a23cf0(&var_28, u"/Developers/", 1, 0, 0xffffffff).d == 0xffffffff)
        rsi.b = 0
    else
        rsi = 1

if ((rdi_1 & 1) != 0)
    int64_t rcx_6 = var_28
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

if (rsi.b == 0)
    goto label_14266406b
