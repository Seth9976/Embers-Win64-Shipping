// 函数: sub_140ab0840
// 地址: 0x140ab0840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
bool cond:0 = *(arg1 + 0x38) == 0
uint64_t var_58 = *(arg1 + 0x18)
char var_68 = 1
int32_t var_60 = *(arg1 + 0x10)
char var_38 = 0
int64_t* var_48

if (not(cond:0))
    int64_t var_50_1 = *(arg1 + 0x20)
    int64_t* rax_4 = *(arg1 + 0x28)
    var_48 = rax_4
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    int32_t var_40_1 = *(arg1 + 0x30)
    var_38 = 1

char var_18 = 0
uint128_t var_30
int64_t var_20

if (*(arg1 + 0x58) != 0)
    var_18 = 1
    int64_t zmm1 = *(arg1 + 0x50)
    var_30 = *(arg1 + 0x40)
    var_20 = zmm1

*arg3 = 1
sub_140a99d90(&arg3[8], &var_60)

if (&var_30 != &arg3[0x38])
    if (arg3[0x50] != 0)
        arg3[0x50] = 0
    
    if (var_18 != 0)
        *(arg3 + 0x38) = var_30
        *(arg3 + 0x48) = var_20
        arg3[0x50] = 1

uint128_t* result

if (var_38 == 0 || var_48 == 0)
    result.b = 1
else
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        (**var_48)(var_48)
        int32_t rdi_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_48 + 8))(var_48, zx.q(rdi_1))
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_88)
return result
