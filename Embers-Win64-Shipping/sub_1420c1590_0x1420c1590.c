// 函数: sub_1420c1590
// 地址: 0x1420c1590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t* var_38
int32_t var_30
int64_t var_28

if (arg3 s< 0)
    if (arg2 == 0)
        var_38 = nullptr
        var_30 = 0
        sub_1405947f0(&var_38, 5)
        int32_t rax_2 = var_30 + 5
        var_30 = rax_2
        
        if (rax_2 s> 0)
            sub_140594770(&var_38)
        
        UnDecorator::getReferenceType(var_38, u"None", 0xa)
    else
        sub_140b63b70(arg2 + 0x28, &var_38)
    
    int64_t rbx_3 = &data_142d40450
    int64_t* r8_3 = &data_142d40450
    
    if (var_30 != 0)
        r8_3 = var_38
    
    sub_140a2e390(&var_28, 
        Attempted to resize an array using negative size: Array = %s, Size = %d!", r8_3)
    data_143f47e00
    int32_t var_20
    
    if (var_20 != 0)
        rbx_3 = var_28
    
    sub_140d23f50(rbx_3, 3)
    int64_t rcx_9 = var_28
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t* rcx_10 = var_38
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
else
    int64_t rax = *(arg2 + 0x78)
    int32_t r9_1 = *(arg2 + 0x80)
    int32_t r8 = *(rax + 0x3c)
    int32_t var_14_1 = r9_1
    r9_1.b = not.b(r9_1.b)
    r9_1.b &= 1
    var_28 = rax
    int32_t var_18_1 = r8
    int64_t* var_20_1 = arg1
    int32_t rbx_1 = arg1[1].d
    
    if (arg3 s> rbx_1)
        int32_t rdi_2 = arg3 - rbx_1
        int32_t rax_1 = rbx_1 + rdi_2
        arg1[1].d = rax_1
        int32_t rdx = *(arg1 + 0xc)
        
        if (r9_1.b != 0)
            if (rax_1 s> rdx)
                sub_140ce4cd0(arg1, zx.q(rbx_1), r8)
        else if (rax_1 s> rdx)
            sub_140ce4c40(arg1, rbx_1, r8)
        
        sub_1420b6b60(&var_28, rbx_1, rdi_2)
    else if (arg3 s< rbx_1)
        int32_t rbx_2 = rbx_1 - arg3
        sub_140cd9680(&var_28, arg3, rbx_2)
        var_30 = arg3
        var_38 = &var_28
        var_30 = rbx_2
        sub_140cd32c0(&var_28, &var_38)
