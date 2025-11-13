// 函数: sub_1417e42f0
// 地址: 0x1417e42f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_90, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

void var_88
sub_1417d67e0(&var_88)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_4 = *(arg2 + 0x38)
void* rsi = &var_88
int64_t var_98 = 0

if (rax_4 != 0)
    rsi = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_98, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t rax_6 = *(arg2 + 0x20)
int64_t r8_6 = var_98
int64_t rcx_4 = var_90
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
uint64_t result = sub_1417debc0(rcx_4, rsi, r8_6)
*arg3 = result
int64_t* var_38

if (var_38 != 0)
    result = zx.q(var_38[1].d)
    var_38[1].d -= 1
    
    if (result.d == 1)
        result = (**var_38)(var_38)
        int32_t rdi_2 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (rdi_2 == 1)
            result = (*(*var_38 + 8))(var_38, zx.q(rdi_2))

__security_check_cookie(rax_1 ^ &var_b8)
return result
