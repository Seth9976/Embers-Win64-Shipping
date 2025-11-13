// 函数: sub_140efad90
// 地址: 0x140efad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* var_40
int64_t* rax_4
int32_t rbp

if (sub_140ab3dc0(arg1 + 0xa8) != 0)
    void var_30
    rax_4 = _vfprintf_p_l(&var_30, u"Custom Control", u"WidgetBlock")
    rbp = 2
else
    int64_t var_48 = *(arg1 + 0xa8)
    int64_t* rax_2 = *(arg1 + 0xb0)
    var_40 = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1
    
    rbp = 1
    int32_t var_38_1 = *(arg1 + 0xb8)
    rax_4 = &var_48

int64_t* rdi = rax_4[1]

if (rdi != 0)
    rdi[1].d += 1

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_28
    
    if (var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            (**var_28)(var_28)
            int32_t rax_7 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*var_28 + 8))(var_28, 1)

if ((rbp.b & 1) != 0 && var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rax_11 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rax_11 == 1)
            (*(*var_40 + 8))(var_40, 1)

int64_t var_58 = *(arg1 + 0x98)
void* rax_14 = *(arg1 + 0xa0)
void* var_50 = rax_14

if (rax_14 != 0)
    *(rax_14 + 8) += 1

sub_1405d9400()
int32_t result = sub_140ea2fc0(arg2, &var_58, &data_143cd6fd8, 1, 1)

if (rdi != 0)
    result = rdi[1].d
    rdi[1].d -= 1
    
    if (result == 1)
        result = (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            return (*(*rdi + 8))(rdi, zx.q(rsi_1))

return result
