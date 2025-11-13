// 函数: sub_142908f90
// 地址: 0x142908f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t* rdi = nullptr
void* rbx = nullptr
int64_t* var_20
void var_18
int32_t arg_20
sub_1428f1040(nullptr, &var_18, &arg_20, &var_20, arg2)
int32_t* var_10
int32_t arg_18
sub_1428daf50(nullptr, &arg_18, &var_10, var_20)
void* var_38

if (arg_18 != 0x10)
label_1429090b1:
    var_38.d = 0xc3
    sub_1428a5670(5, 0x6e, 0x72, "crypto\dh\dh_ameth.c", var_38.d)
else
    int32_t* rax_1 = sub_1428c36d0(nullptr, &var_18, arg_20)
    rdi = rax_1
    
    if (rax_1 == 0)
        goto label_1429090b1
    
    int32_t* rdx_3 = var_10
    int64_t var_28 = *(rdx_3 + 8)
    int32_t r8_3 = *rdx_3
    int64_t* rdx_4 = &var_28
    void* rax_2
    
    if (*(arg1 + 0x10) != &data_14351c7e0)
        rax_2 = sub_14291c4c0(nullptr, rdx_4, r8_3)
    else
        rax_2 = sub_14291c4e0(nullptr, rdx_4, r8_3)
    
    rbx = rax_2
    
    if (rax_2 == 0)
        goto label_1429090b1
    
    int64_t* rax_3 = sub_142890740()
    *(rbx + 0x28) = rax_3
    int64_t rax_4
    
    if (rax_3 != 0)
        rax_4 = sub_1428e49a0(rdi, rax_3)
    
    if (rax_3 == 0 || rax_4 == 0)
        var_38.d = 0xb5
        sub_1428a5670(5, 0x6e, 0x6a, "crypto\dh\dh_ameth.c", var_38.d)
    else if (sub_14291a840(rbx) != 0)
        sub_142896310(arg1, **(arg1 + 0x10), rbx)
        sub_1428f2970(rdi)
        return 1
sub_1428c1620(rbx)
sub_1428f2970(rdi)
return 0
