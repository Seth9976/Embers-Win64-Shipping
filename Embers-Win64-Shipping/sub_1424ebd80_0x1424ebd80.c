// 函数: sub_1424ebd80
// 地址: 0x1424ebd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = data_142d3f660
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rdi = &var_28
int128_t var_18 = data_142d3f660

if (rax_2 != 0)
    rdi = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int128_t* rax_4 = *(arg2 + 0x38)
int128_t* rcx_2 = &var_18

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
int32_t result = *rcx_2

if (result f!= *rdi)
    *arg3 = 0
else
    result = *(rcx_2 + 4)
    
    if (result f!= *(rdi + 4))
        *arg3 = 0
    else
        result = *(rcx_2 + 8)
        
        if (result f!= *(rdi + 8))
            *arg3 = 0
        else
            result = *(rcx_2 + 0xc)
            
            if (result f!= *(rdi + 0xc))
                *arg3 = 0
            else
                *arg3 = 1

return result
