// 函数: sub_1420c8300
// 地址: 0x1420c8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = 0
int32_t arg_18 = 0
sub_140aae6a0()
void* var_28
sub_140aac030(&data_143db9ce0, &var_28, arg1)
void* rcx = var_28
int64_t* rax_1

if (rcx != 0)
    void var_18
    rax_1 = sub_140a735e0(rcx, &var_18, arg2)
    rbp = 1

int64_t* rdi

if (rcx == 0 || *rax_1 == 0)
    rdi.b = 0
else
    rdi = 1

int64_t* var_10

if ((rbp & 1) != 0 && var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rax_5 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_10 + 8))(var_10, 1)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        int64_t r8_2 = *var_20
        (*r8_2)(var_20, arg3, r8_2)
        int32_t rsi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_3 = *var_20
            (*(r8_3 + 8))(var_20, zx.q(rsi_1), r8_3)

return zx.q(rdi.b)
