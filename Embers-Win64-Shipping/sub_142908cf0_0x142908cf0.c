// 函数: sub_142908cf0
// 地址: 0x142908cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t* rdi = nullptr
void* rbx = nullptr
int64_t* var_20
void var_10
int32_t arg_20
sub_1428a2700(nullptr, &var_10, &arg_20, &var_20, arg2)
int32_t* var_18
int32_t arg_18
sub_1428daf50(nullptr, &arg_18, &var_18, var_20)
int32_t rax_1
int32_t r8_2

if (arg_18 == 0x10)
    int32_t* rcx = var_18
    int64_t var_28
    int64_t* rdx_2 = &var_28
    var_28 = *(rcx + 8)
    int32_t r8_3 = *rcx
    void* rax_3
    
    if (*(arg1 + 0x10) != &data_14351c7e0)
        rax_3 = sub_14291c4c0(nullptr, rdx_2, r8_3)
    else
        rax_3 = sub_14291c4e0(nullptr, rdx_2, r8_3)
    
    rbx = rax_3
    
    if (rax_3 != 0)
        int32_t* rax_4 = sub_1428c36d0(nullptr, &var_10, arg_20)
        rdi = rax_4
        
        if (rax_4 != 0)
            int64_t rax_5 = sub_1428e49a0(rdi, nullptr)
            *(rbx + 0x20) = rax_5
            
            if (rax_5 != 0)
                sub_1428c3460(rdi)
                sub_142896310(arg1, **(arg1 + 0x10), rbx)
                return 1
            
            rax_1 = 0x52
            r8_2 = 0x6d
        else
            rax_1 = (&rdi[0x13]).d
            r8_2 = (&rdi[0x1a]).d
    else
        rax_1 = (rbx + 0x47).d
        r8_2 = (rbx + 0x68).d
else
    rax_1 = 0x3e
    r8_2 = 0x69

int64_t* var_38
var_38.d = rax_1
sub_1428a5670(5, 0x6c, r8_2, "crypto\dh\dh_ameth.c", var_38.d)
sub_1428c3460(rdi)
sub_1428c1620(rbx)
return 0
