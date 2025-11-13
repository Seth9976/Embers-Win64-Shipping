// 函数: sub_14290a7c0
// 地址: 0x14290a7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t* rdi = nullptr
void* rbx = nullptr
int32_t rbp = 0
int64_t* var_38
void var_30
int32_t arg_18
sub_1428f1040(nullptr, &var_30, &arg_18, &var_38, arg2)
int32_t* var_28
int32_t arg_20
sub_1428daf50(nullptr, &arg_20, &var_28, var_38)
int32_t* rax = sub_1428c36d0(nullptr, &var_30, arg_18)
int32_t rax_6
int32_t r8_4

if (rax == 0 || rax[1] == 0x102 || arg_20 != 0x10)
label_14290a93d:
    rax_6 = 0xc2
    r8_4 = 0x68
label_14290a94b:
    int64_t* var_48
    var_48.d = rax_6
    sub_1428a5670(0xa, 0x73, r8_4, "crypto\dsa\dsa_ameth.c", var_48.d)
    sub_1428d5800(rbx)
else
    int32_t* rcx = var_28
    int64_t var_20 = *(rcx + 8)
    void* rax_2 = sub_1428f0970(nullptr, &var_20, *rcx)
    rbx = rax_2
    
    if (rax_2 == 0)
        goto label_14290a93d
    
    int64_t* rax_3 = sub_142890740()
    *(rbx + 0x28) = rax_3
    int64_t rax_4
    
    if (rax_3 != 0)
        rax_4 = sub_1428e49a0(rax, rax_3)
    
    if (rax_3 == 0 || rax_4 == 0)
        rax_6 = 0xa9
        r8_4 = 0x6d
        goto label_14290a94b
    
    void* rax_5 = sub_142890500()
    *(rbx + 0x20) = rax_5
    
    if (rax_5 == 0)
        rax_6 = 0xae
        r8_4 = 0x41
        goto label_14290a94b
    
    int64_t* rax_7 = sub_1428d8d60()
    rdi = rax_7
    
    if (rax_7 == 0)
        rax_6 = 0xb2
        r8_4 = (rdi + 0x41).d
        goto label_14290a94b
    
    sub_1428908d0(*(rbx + 0x28), 4)
    
    if (sub_142905ff0(*(rbx + 0x20), *(rbx + 0x18), *(rbx + 0x28), *(rbx + 8), rdi) == 0)
        rax_6 = 0xb8
        r8_4 = 0x6d
        goto label_14290a94b
    
    sub_142896310(arg1, 0x74, rbx)
    rbp = 1
sub_1428d8ae0(rdi)
sub_1428f2970(rax)
return zx.q(rbp)
