// 函数: sub_141d69540
// 地址: 0x141d69540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x4a] == 0 || sub_14243ade0((*(*arg1 + 0x150))()).b == 0)
    return 

int64_t* rax = sub_141d68f10(arg1)
int64_t* rbp_1 = rax
bool cond:1_1

if (rax != 0)
    cond:1_1 = rax == *(arg1[0x49] + 0x460)
label_141d695f1:
    
    if (not(cond:1_1))
        void* rax_8 = sub_141dc9840(arg1)
        int32_t var_48
        var_48.q = &arg1[0x4f]
        sub_141d691b0(arg1[0x49], rbp_1, rax_8, &arg1[0x46])
    
    return 

if (data_14399fa10() == 0)
    int64_t* rax_4 = sub_140d30a00(&arg1[0x4a], 0)
    rbp_1 = rax_4
    void* rax_5
    int64_t rax_6
    void* rdx_1
    
    if (rax_4 != 0)
        rax_5 = sub_141d6f080()
        rdx_1 = rbp_1[2]
        rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (rax_4 == 0 || rax_6.d s> *(rdx_1 + 0x38)
            || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
        rbp_1 = nullptr
    
    cond:1_1 = rbp_1 == arg1[0x49][0x8c]
    goto label_141d695f1

void (* var_38)(void* arg1, int64_t arg2, int64_t arg3, int32_t arg4) = sub_141d69c70
int32_t var_30_1 = 0
var_38.o = var_38.o
void var_18
int64_t* rax_9 = sub_141d64870(&var_18, arg1, &var_38)
int64_t var_28
sub_140bcb5c0(sub_1415206f0(&arg1[0x4a], &var_28), rax_9, 0, 0, 0xffffffff)
int64_t rcx_10 = var_28

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)
