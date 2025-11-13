// 函数: sub_1417e38e0
// 地址: 0x1417e38e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void var_78
sub_1417d67e0(&var_78)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* rax_3 = *(arg2 + 0x38)
void* rcx_2 = &var_78

if (rax_3 != 0)
    rcx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
int32_t result = sub_1417dca20(rcx_2)
*arg3 = result.b
int64_t* var_28

if (var_28 != 0)
    result = var_28[1].d
    var_28[1].d -= 1
    
    if (result == 1)
        result = (**var_28)(var_28)
        int32_t rdi_2 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rdi_2 == 1)
            result = (*(*var_28 + 8))(var_28, zx.q(rdi_2))

__security_check_cookie(rax_1 ^ &var_98)
return result
