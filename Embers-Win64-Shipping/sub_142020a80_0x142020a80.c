// 函数: sub_142020a80
// 地址: 0x142020a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x30)
int64_t rbx_1

if (rbx == 0)
    rbx_1 = 0
else
    rbx_1 = *(rbx + 0x278)

int64_t var_28 = 0
int64_t var_20 = 0
int64_t* rax = sub_142168400()

if ((*(*rax + 0x310))(rax, rbx_1, arg3, &var_28) == 0)
    rbx_1.b = 0
else
    void* rax_2 = sub_1423dd9f0(data_143f5b298, rbx_1, arg2)
    
    if (rax_2 == 0)
        rbx_1.b = 0
    else
        int64_t* rcx_2 = *(rax_2 + 0x30)
        
        if (rcx_2 == 0)
            rbx_1.b = 0
        else
            int64_t var_18 = 0
            int64_t var_10_1 = 0
            var_18.o = var_18.o
            sub_142264250(rcx_2, &var_28, nullptr, 0, &var_18)
            rbx_1.b = 1

int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return zx.q(rbx_1.b)
