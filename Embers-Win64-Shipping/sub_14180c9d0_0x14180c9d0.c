// 函数: sub_14180c9d0
// 地址: 0x14180c9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[6].b != 0)
    void* var_18 = nullptr
    int32_t i_2 = 0
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 0xb)
    int32_t rax_1 = var_20_1 + 0xb
    var_20_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"SessionEnd", 0x16)
    (*(*arg1 + 0xc8))(arg1, &var_28, &var_18)
    int32_t i_1 = i_2
    void* rbx_1 = var_18
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *(rbx_1 + 0x10)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1 += 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = var_18
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

int64_t result = (*(*arg1 + 0x20))(arg1)
arg1[0x18].d = 0

if (*(arg1 + 0xc4) != 0)
    result = sub_1405947f0(&arg1[0x17], 0)

arg1[6].b = 0
return result
