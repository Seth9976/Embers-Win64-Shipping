// 函数: sub_141819990
// 地址: 0x141819990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* rsi = *arg1
int64_t r8 = *arg2
int64_t* rcx = arg2[1]
arg2[1] = 0
*arg2 = 0
int64_t var_18 = r8
int64_t* var_10 = rcx

if (rsi + 0x80 != &var_18)
    *(rsi + 0x80) = r8
    var_18 = 0
    sub_1405aeff0(rsi + 0x88, &var_10)
    rcx = var_10

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        int64_t* rbx_1 = var_10
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_3 = var_10
            (*(*rcx_3 + 8))(rcx_3, zx.q(rdi_1))

return sub_1405fc0f0(rsi, arg5, arg3, arg4) __tailcall
