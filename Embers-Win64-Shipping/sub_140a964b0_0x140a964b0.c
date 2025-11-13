// 函数: sub_140a964b0
// 地址: 0x140a964b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int32_t arg_8 = 0
char* rax = j_sub_140a82f30(0xb0)
int64_t* var_20
char* rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    sub_1405d9400()
    int64_t* rcx = data_143cd6fe0
    int64_t var_28 = data_143cd6fd8
    var_20 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    int32_t var_18_1 = 0
    void var_38
    int64_t* rax_1
    uint128_t zmm1_1
    rax_1, zmm1_1 = sub_140aaea00(&var_38)
    rbx_1 = sub_140a96f40(rax, &var_28, rax_1, zmm1_1)
    rsi = 1

*arg1 = rbx_1
void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 != 0)
    rax_3[1].d = 1
    *rax_3 = &data_142e66838
    *(rax_3 + 0xc) = 1
    rax_3[2] = rbx_1

arg1[1] = rax_3

if ((rsi & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rsi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rsi_1))

return arg1
