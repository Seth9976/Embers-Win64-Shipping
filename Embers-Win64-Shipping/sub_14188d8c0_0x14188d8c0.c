// 函数: sub_14188d8c0
// 地址: 0x14188d8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t* rcx = *(arg1 + 8)
uint64_t rsi
uint64_t arg_10 = rsi
int64_t* rax_1 = (*(*rcx + 0xc0))(rcx, rdx, 0)

if (rax_1 == 0)
    rsi.b = 0
else
    int64_t rax_2 = *rax_1
    char* var_28 = nullptr
    char* rdi_1 = nullptr
    int32_t var_1c_1 = 0
    uint64_t rax_3 = (*(rax_2 + 0x40))(rax_1)
    int32_t var_20_1 = rax_3.d
    rsi = rax_3
    
    if (rax_3.d s> 0)
        sub_1405daba0(&var_28)
        rsi = zx.q(var_20_1)
        rdi_1 = var_28
    
    if ((*(*rax_1 + 0x20))(rax_1, rdi_1, sx.q(rsi.d)) == 0)
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        rsi.b = 0
    else
        var_28 = nullptr
        var_20_1.q = 0
        sub_140b0e940(&var_28, rdi_1, rsi.d)
        char rax_6 = sub_141882860(arg1, &var_28, arg3)
        char* rcx_6 = var_28
        rsi = zx.q(rax_6)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)

if (rax_1 != 0)
    int64_t r8_3 = *rax_1
    (*r8_3)(rax_1, 1, r8_3)

return zx.q(rsi.b)
