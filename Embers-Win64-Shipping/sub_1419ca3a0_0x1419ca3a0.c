// 函数: sub_1419ca3a0
// 地址: 0x1419ca3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f1da40

if (rcx != 0)
    sub_1419c9f40(rcx, 0)
    rcx = data_143f1da40

int32_t rdx_1 = 0
int32_t r8 = 0
int64_t var_18 = 0
int64_t var_10 = 0

if ((*u"Embers")[0] != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((*u"Embers")[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        r8 = var_10:4.d
        rdx_1 = var_10.d
    
    int32_t rax_1 = rbx_1.d + 1 + rdx_1
    var_10.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, u"Embers", (rbx_1.d + 1) * 2)
    r8 = var_10:4.d
    rcx = data_143f1da40

if (arg1[1].d s> 0)
    uint64_t rax = *arg1
    
    if (&var_18 != rax)
        int32_t rbx_3 = *(rax + 8)
        int64_t rdi_1 = *rax
        var_10.d = rbx_3
        
        if (rbx_3 != 0 || r8 != 0)
            sub_1405a4c70(&var_18, rbx_3, r8)
            memcpy(var_18, rdi_1, rbx_3 * 2)
            rcx = data_143f1da40
        else
            var_10:4.d = r8

if (rcx != 0)
    sub_1419d35b0(rcx, &var_18, data_143f0f1a0)

int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)
