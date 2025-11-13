// 函数: sub_140d1fa10
// 地址: 0x140d1fa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg3 & 0x10000000) != 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t rax_1 = *arg1

if (rax_1 == 0)
    sub_140a20ba0(arg2, u"None", 4)
else
    int64_t var_28 = rax_1
    int64_t var_20
    sub_140596d10(&var_20, &arg1[1])
    int64_t var_38
    int64_t* rax_2 = sub_140d30800(&var_28, &var_38)
    int32_t rcx_2 = rax_2[1].d
    int32_t r8_1 = rcx_2 - 1
    
    if (rcx_2 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg2, *rax_2, r8_1)
    int64_t rcx_4 = var_38
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_20
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
        int64_t rax_4
        rax_4.b = 1
        return rax_4

int64_t rax_3
rax_3.b = 1
return rax_3
