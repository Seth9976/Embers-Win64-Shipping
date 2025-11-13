// 函数: sub_140ab0ab0
// 地址: 0x140ab0ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rbp = 0
int32_t arg_8 = 0
int64_t rax = *(arg1 + 8)
int64_t* var_10
int64_t* rsi
int16_t rdi_2

if (rax == 0)
    rsi = var_10
    rdi_2 = 0
else
    rsi = *(arg1 + 0x10)
    int64_t var_18 = rax
    var_10 = rsi
    
    if (rsi != 0)
        rsi[1].d += 1
        rsi = var_10
    
    void* rax_1 = sub_140aae970()
    EnterCriticalSection(rax_1 + 8)
    sub_1405e21c0(rax_1 + 0xd0, &arg_8, &var_18)
    int64_t rax_2 = sx.q(arg_8)
    void* const rcx_4
    
    if (rax_2.d == 0xffffffff)
        rcx_4 = nullptr
    else
        rcx_4 = (rax_2 << 5) + *(rax_1 + 0xd0)
    
    int16_t* rax_3 = rcx_4 + 0x10
    
    if (rcx_4 == 0)
        rax_3 = nullptr
    
    if (rax_3 != 0)
        rbp = *rax_3
    
    if (rax_1 != -8)
        LeaveCriticalSection(rax_1 + 8)
    
    rdi_2 = rbp
    rbp = 1

if ((rbp.b & 1) != 0 && rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**var_10)(var_10)
        int32_t rbp_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t r8_3 = *var_10
            (*(r8_3 + 8))(var_10, zx.q(rbp_1), r8_3)

return zx.q(rdi_2)
