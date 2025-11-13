// 函数: sub_14092b590
// 地址: 0x14092b590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_48
(*(*arg1 + 0xf0))(arg1, &var_48, zx.q(arg2))
int64_t* rsi = var_48
int32_t rdi

if (rsi == 0)
    (*(*arg1 + 0xb0))(arg1, zx.q(arg2), 0)
    rdi.b = 0
else
    int128_t var_30_1 = zx.o(0)
    void** const var_38 = &data_142e1f860
    int64_t var_20
    (*(*rsi + 0x30))(rsi, &var_20)
    void var_10
    (*(*rsi + 0x10))(rsi, &var_10)
    var_38 = &data_142e1f860
    sub_14092f530(&arg1[0x39], &var_38)
    int64_t rcx_3 = var_20
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t* rcx_4 = var_30_1:8.q
    
    if (rcx_4 != 0)
        int32_t temp1_1 = *(rcx_4 + 0xc)
        *(rcx_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_4 + 8))(rcx_4, 1)
    
    sub_14092f410(&arg1[0x2f], arg2)
    int64_t r8_1
    r8_1.b = 1
    (*(*arg1 + 0xb0))(arg1, zx.q(arg2), r8_1)
    rdi.b = 1

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp2_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_3 = *var_40
            (*(r8_3 + 8))(var_40, 1, r8_3)

return zx.q(rdi.b)
