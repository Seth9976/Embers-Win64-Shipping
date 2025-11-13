// 函数: sub_14290a4f0
// 地址: 0x14290a4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t* rdi = nullptr
void* rbx = nullptr
int64_t* var_28
void var_10
int32_t arg_20
sub_1428a2700(nullptr, &var_10, &arg_20, &var_28, arg2)
int32_t* var_20
int32_t arg_18
sub_1428daf50(nullptr, &arg_18, &var_20, var_28)
int32_t rax_1 = arg_18
int32_t rax_4
int32_t r8_3

if (rax_1 == 0x10)
    int32_t* rcx = var_20
    int64_t var_18 = *(rcx + 8)
    void* rax_3 = sub_1428f0970(nullptr, &var_18, *rcx)
    rbx = rax_3
    
    if (rax_3 != 0)
    label_14290a5b6:
        int32_t* rax_6 = sub_1428c36d0(nullptr, &var_10, arg_20)
        rdi = rax_6
        
        if (rax_6 != 0)
            int64_t rax_7 = sub_1428e49a0(rdi, nullptr)
            *(rbx + 0x20) = rax_7
            
            if (rax_7 != 0)
                sub_1428c3460(rdi)
                sub_142896310(arg1, 0x74, rbx)
                return 1
            
            rax_4 = 0x3e
            r8_3 = 0x6c
        else
            rax_4 = (rdi + 0x39).d
            r8_3 = (&rdi[0x1a]).d
    else
        rax_4 = 0x2a
        r8_3 = 0x68
else if (rax_1 == 5 || rax_1 == 0xffffffff)
    void* rax_5 = sub_1428d5910()
    rbx = rax_5
    
    if (rax_5 != 0)
        goto label_14290a5b6
    
    rax_4 = (rbx + 0x30).d
    r8_3 = (rbx + 0x41).d
else
    rax_4 = 0x34
    r8_3 = 0x69

int64_t* var_38
var_38.d = rax_4
sub_1428a5670(0xa, 0x75, r8_3, "crypto\dsa\dsa_ameth.c", var_38.d)
sub_1428c3460(rdi)
sub_1428d5800(rbx)
return 0
