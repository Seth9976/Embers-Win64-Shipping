// 函数: sub_1406ebb90
// 地址: 0x1406ebb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = data_143cdf678

if (rsi == 0)
    return 

void** const var_48 = &data_142d96750
void** const* var_10_1 = &var_48

if (rsi[0x1c] == 0)
    int64_t rax_1 = *rsi
    rsi[0x1c] = (*(rax_1 + 0x30))(rax_1)

void* rax_3 = j_sub_140a82f30(0x40)
void* const rdi_1 = rax_3

if (rax_3 == 0)
    rdi_1 = nullptr
else
    *(rax_3 + 0x38) = 0
    
    if (var_10_1 != 0)
        if (var_10_1 != &var_48)
            *(rdi_1 + 0x38) = var_10_1
            var_10_1 = nullptr
        else
            *(rdi_1 + 0x38) = (*var_10_1)[1](var_10_1, rdi_1)
            
            if (var_10_1 != 0)
                void** const* rdx_2
                rdx_2.b = var_10_1 != &var_48
                (*var_10_1)[4](var_10_1, rdx_2)
                var_10_1 = nullptr

int64_t rax_7 = rsi[0x1c]
(*(rax_7 + 0x18))(rax_7, rdi_1, sub_1406e8290)

if (var_10_1 != 0)
    void** const* rdx_4
    rdx_4.b = var_10_1 != &var_48
    (*var_10_1)[4](var_10_1, rdx_4)

data_143cdf678 = 0
