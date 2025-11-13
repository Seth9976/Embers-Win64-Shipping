// 函数: sub_141bb5a70
// 地址: 0x141bb5a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
void* var_30
sub_141bab3c0(arg1, &var_30)
void* rcx = var_30
uint32_t rdi

if (rcx == 0)
    rdi.b = 0
else
    int32_t var_20
    
    if (arg3 s< 0)
        char var_14_1 = 0
    else
        var_20 = arg3
        char var_1c_1 = 1
    
    char var_34_1 = 0
    void var_18
    void* rax_2 = &var_18
    
    if (arg3 s>= 0)
        rax_2 = &var_20
    
    int32_t var_38
    
    if (*(rax_2 + 4) != 0)
        var_38 = *rax_2
        char var_34_2 = 1
    
    rdi = zx.d(sub_140e19910(rcx, arg2, &var_38, arg4))

int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t temp1_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_28 + 8))(var_28, 1)

__security_check_cookie(rax_1 ^ &var_58)
return zx.q(rdi.b)
