// 函数: sub_142a928f0
// 地址: 0x142a928f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx = *arg1
void* rax_1
int32_t rbx_1

if (rcx == 0)
    rbx_1 = arg2 + 8
    rax_1 = sub_142a7dd00(sx.q(rbx_1) + 4)
label_142a9292b:
    *arg1 = rax_1
    
    if (rax_1 == 0)
        return 0
    
    *rax_1 = rbx_1
else if (*rcx s< arg2)
    rbx_1 = arg2 + 8
    rax_1 = sub_142a7dd30(rcx, sx.q(rbx_1) + 4)
    goto label_142a9292b
return *arg1 + 4
