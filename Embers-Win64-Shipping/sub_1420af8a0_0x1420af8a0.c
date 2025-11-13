// 函数: sub_1420af8a0
// 地址: 0x1420af8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432bfd00
arg1[1] = *arg2
sub_140596d10(&arg1[2], &arg2[1])
sub_142380ac0(&arg1[4])
arg1[0x21] = 0
arg1[0x22] = 0
arg1[0x23] = *(arg3 + 8)
arg1[0x24].d = *arg3
sub_140d3a3a0(arg1 + 0x124, *(arg3 + 0x10))
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 0x20)
int32_t rax_3 = var_40 + 0x20
var_40 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"RequestAsyncLoad SingleDelegate", 0x40)
int64_t var_38 = 0
int32_t var_30 = 0
int64_t* var_28
int64_t** rax_4 = sub_142395f80(&arg1[4], &var_28, &arg1[1], &var_38, 0, 0, 0, &var_48)

if (&arg1[0x21] != rax_4)
    arg1[0x21] = *rax_4
    *rax_4 = nullptr
    int64_t rcx_8 = rax_4[1]
    int64_t* rbx_1 = arg1[0x22]
    
    if (rcx_8 != rbx_1)
        rax_4[1] = 0
        arg1[0x22] = rcx_8
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

return arg1
