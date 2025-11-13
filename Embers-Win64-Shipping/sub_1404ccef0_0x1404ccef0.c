// 函数: sub_1404ccef0
// 地址: 0x1404ccef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = (data_143ef86c8.q).d
int64_t var_38 = 0
sub_1405a4c70(&var_38, sbb.d(arg1, arg1, rdi != 0) + 7 + rdi, 0)
memcpy(var_38, data_143ef86c0, rdi * 2)
sub_140a20ba0(&var_38, u"Win64/", 6)
int64_t rcx_4 = var_38
var_38 = 0
int32_t var_10 = rdi
int32_t var_2c
int32_t var_c = var_2c
int32_t var_30
var_30.q = 0

if (rdi s> 1)
    int32_t rax_2 = (data_143ef86e8.q).d
    int32_t rbx_2 = rax_2 - 1
    
    if (rax_2 == 0)
        rbx_2 = 0
    
    int32_t rax_3
    
    if (rdi == 0)
        rax_3 = rdi + 1
    
    if (rdi != 0 || rbx_2 == 0)
        rax_3 = 0
    
    int32_t rdx_7 = rdi + rax_3 + rbx_2
    int64_t var_28 = rcx_4
    int64_t var_18 = 0
    var_10.q = 0
    
    if (rdx_7 s> var_2c)
        sub_1405947f0(&var_28, rdx_7)
    
    sub_140a20ba0(&var_28, data_143ef86e0, rbx_2)
    data_143ef8700 = var_28
    data_143ef8708 = rdi
    data_143ef870c = var_2c
    rcx_4 = var_18
else
    int32_t rbx_1 = (data_143ef86e8.q).d
    int64_t rdi_1 = data_143ef86e0
    data_143ef8700 = 0
    data_143ef8708 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&data_143ef8700, rbx_1, 0)
        memcpy(data_143ef8700, rdi_1, rbx_1 * 2)
        rcx_4 = rcx_4
    else
        data_143ef870c = 0

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return atexit(sub_142ceb410) __tailcall
