// 函数: sub_140ee1d80
// 地址: 0x140ee1d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t var_18
sub_140e149c0(*(*(data_143e29f28 + 0x20) + 8), &var_18)
int64_t* rax_3 = j_sub_140a82f30(0x60)
int64_t* rsi = rax_3
int64_t* var_10

if (rax_3 == 0)
    rsi = nullptr
else
    *rsi = var_18
    rsi[1] = var_10
    
    if (var_10 != 0)
        *(var_10 + 0xc) += 1
    
    void* rcx_2 = &rsi[4]
    rsi[2] = 0
    rsi[3] = 0
    *(rcx_2 + 0x10) = 0
    *(rcx_2 + 0x18) = 0
    *(rcx_2 + 0x1c) = 0x80
    void* rax_7 = *(rcx_2 + 0x10)
    
    if (rax_7 != 0)
        rcx_2 = rax_7
    
    *rcx_2 = 0
    *(rcx_2 + 8) = 0
    rsi[8].d = 0xffffffff
    *(rsi + 0x44) = 0
    rsi[0xa] = 0
    rsi[0xb].d = 0

void*** rax_8 = j_sub_140a82f30(0x18)

if (rax_8 == 0)
    rax_8 = nullptr
else
    rax_8[1].d = 1
    *rax_8 = &data_142ee2120
    *(rax_8 + 0xc) = 1
    rax_8[2] = rsi

arg1[2] = rsi
arg1[3] = rax_8

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

arg1[4].b = 0
__builtin_memset(&arg1[5], 0, 0x40)
arg1[0xd].b = 7
return arg1
