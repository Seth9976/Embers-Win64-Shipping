// 函数: sub_1406eb140
// 地址: 0x1406eb140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = data_143cdf678

if (rsi[5] == 0)
    int64_t rax_1 = *rsi
    rsi[5] = (*(rax_1 + 0x18))(rax_1)

void** const var_48 = &data_142d96780
void** const* var_10 = &var_48
void* rax_3 = j_sub_140a82f30(0x40)
void* const rbx = rax_3

if (rax_3 == 0)
    rbx = nullptr
else
    *(rax_3 + 0x38) = 0
    
    if (var_10 != 0)
        if (var_10 != &var_48)
            *(rbx + 0x38) = var_10
            var_10 = nullptr
        else
            *(rbx + 0x38) = (*var_10)[1](var_10, rbx)
            
            if (var_10 != 0)
                void** const* rdx_2
                rdx_2.b = var_10 != &var_48
                (*var_10)[4](var_10, rdx_2)
                var_10 = nullptr

int64_t rax_7 = rsi[5]
int64_t result = (*(rax_7 + 0x18))(rax_7, rbx, sub_1406e8290)

if (var_10 == 0)
    return result

void** const* rdx_4
rdx_4.b = var_10 != &var_48
return (*var_10)[4](var_10, rdx_4)
