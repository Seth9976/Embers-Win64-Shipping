// 函数: sub_1406e71a0
// 地址: 0x1406e71a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x20)
int64_t var_18 = 0
int32_t var_10 = 0
int64_t rax
rax.b = rcx != 0
*(arg2 + 0x20) = rax + rcx
sub_1405947f0(&var_18, 0x98)
int32_t rdi = var_10 + 0x98

if (rdi s> 0)
    sub_140594770(&var_18)

int64_t rsi = var_18
sub_1405a7220(rsi, 0x98, 
    "([A-Z]{3}|[A-Z]?[\u0024\u20AC\u00A3\u00A5\u00A2\u20B9\u20A8\u20B1\u20A9\u0E3F\u20AB\u20AA])?\s?(\d"
"{1,3}((,\d{1,3})+)?(.\d{1,3})?(.\d{1,3})?(,\d{1,3})?)", 
    0x98, 0x3f)
int64_t* result = &var_18

if (arg3 != &var_18)
    int32_t r8 = *(arg3 + 0xc)
    arg3[1].d = rdi
    
    if (rdi != 0 || r8 != 0)
        sub_1405a4c70(arg3, rdi, r8)
        result = memcpy(*arg3, rsi, rdi * 2)
    else
        *(arg3 + 0xc) = 0

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
