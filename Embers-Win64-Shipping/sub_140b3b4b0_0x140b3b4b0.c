// 函数: sub_140b3b4b0
// 地址: 0x140b3b4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void var_58
sub_140b3b750(&data_143de7b60, &var_58, arg2, arg3, sub_140b3d770(), 0)
char var_40
char var_28
int64_t var_38

if (var_28 == 0 || var_40 != 0)
    int32_t rcx_3 = 0
    *arg1 = 0
    arg1[1] = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(arg1, rbx_1.d + 1)
            rcx_3 = arg1[1].d
        
        int32_t rax_2 = rcx_3 + rbx_1.d + 1
        arg1[1].d = rax_2
        
        if (rax_2 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, arg2, (rbx_1.d + 1) * 2)
    
    if (var_28 != 0 && var_38 != 0)
        sub_140a74f90(var_38)
    
    int64_t* var_50
    
    if (var_40 != 0 && var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t rsi_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_50 + 8))(var_50, zx.q(rsi_1))
else
    *arg1 = var_38
    int32_t var_30
    arg1[1].d = var_30
    int32_t var_2c
    *(arg1 + 0xc) = var_2c
__security_check_cookie(rax_1 ^ &var_88)
return arg1
