// 函数: sub_1420f91f0
// 地址: 0x1420f91f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r15 = nullptr
int16_t* r14 = arg2
int64_t rsi = -1
int16_t* var_48

if (arg2 == 0)
label_1420f929f:
    var_48 = nullptr
    int64_t var_40_1 = 0
    sub_1405947f0(&var_48, 0x10)
    int32_t rdi_2 = var_40_1:4.d
    int32_t rbx_3 = var_40_1.d + 0x10
    var_40_1.d = rbx_3
    
    if (rbx_3 s> rdi_2)
        sub_140594770(&var_48)
        rdi_2 = var_40_1:4.d
        rbx_3 = var_40_1.d
    
    r15 = var_48
    UnDecorator::getReferenceType(r15, u"../../Binaries/", 0x20)
    
    if (r14 != 0 && *r14 != 0)
        do
            rsi += 1
        while (r14[rsi] != 0)
        
        int32_t rax_5
        
        if (rbx_3 != 0 || rsi.d == 0)
            rax_5 = 0
        else
            rax_5 = rbx_3 + 1
        
        var_48 = r15
        int32_t rdx_2 = rax_5 + rbx_3 + rsi.d
        var_40_1.d = rbx_3
        var_40_1:4.d = rdi_2
        
        if (rdx_2 s> rdi_2)
            sub_1405947f0(&var_48, rdx_2)
        
        sub_140a20ba0(&var_48, r14, rsi.d)
        r15 = var_48
        rbx_3 = var_40_1.d
    
    r14 = &data_142d40450
    
    if (rbx_3 != 0)
        r14 = r15
else
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((*u"Binaries")[rbx_1] != 0)
    
    int16_t rcx = *arg2
    void* rdi_1 = &arg2[1]
    
    if (rcx == 0)
        goto label_1420f929f
    
    while (true)
        int32_t rax_2
        rax_2.w = sbb.w(rcx - 0x61, rcx - 0x61, zx.d(rcx) - 0x61 u< 0x1a)
        rax_2.w &= 0x20
        
        if (rcx - rax_2.w == 0x42 && sub_140a546e0(rdi_1, &(*Binaries")[1], sx.q(rbx_1.d - 1)) == 0)
            break
        
        rcx = *rdi_1
        rdi_1 += 2
        
        if (rcx == 0)
            goto label_1420f929f
    
    if (rdi_1 == 2)
        goto label_1420f929f

uint64_t var_38 = 0
int32_t var_30 = 0
char i = sub_140b1f370(&var_38, r14, 0, 0)

if (i != 0)
    int16_t* const rax_6 = &data_142d40450
    var_48 = nullptr
    
    if (var_30 != 0)
        rax_6 = var_38
    
    int16_t* const arg_10 = rax_6
    int32_t var_40_2 = 0
    
    for (i = sub_140b1e210(&arg_10, &var_48, 0); i != 0; i = sub_140b1e210(&arg_10, &var_48, 0))
        int16_t* rdi_3 = &data_142d40450
        
        if (var_40_2 != 0)
            rdi_3 = var_48
        
        (*(arg1[5] + 8))(&arg1[5], (*(*arg1 + 0x150))(arg1), rdi_3, arg3)
    
    int16_t* rcx_12 = var_48
    
    if (rcx_12 != 0)
        i = sub_140a74f90(rcx_12)

uint64_t rcx_13 = var_38

if (rcx_13 != 0)
    i = sub_140a74f90(rcx_13)

if (r15 == 0)
    return i

return sub_140a74f90(r15)
