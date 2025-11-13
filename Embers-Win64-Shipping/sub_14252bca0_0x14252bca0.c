// 函数: sub_14252bca0
// 地址: 0x14252bca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_20
sub_140a96170(&var_20)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_20

if (rax_2 != 0)
    rsi = rax_2

void var_38
sub_140a96170(&var_38)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rdx_4 = &var_38

if (rax_4 != 0)
    rdx_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
int32_t result = std::operator!=<wchar_t,struct std::char_traits<wchar_t> >(rsi, rdx_4)
*arg3 = result.b
int64_t* var_30

if (var_30 != 0)
    result = var_30[1].d
    var_30[1].d -= 1
    
    if (result == 1)
        (**var_30)(var_30)
        result = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_30 + 8))(var_30, 1)

int64_t* var_18

if (var_18 != 0)
    result = var_18[1].d
    var_18[1].d -= 1
    
    if (result == 1)
        result = (**var_18)(var_18)
        int32_t rdi_2 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_18 + 8))(var_18, zx.q(rdi_2))

return result
