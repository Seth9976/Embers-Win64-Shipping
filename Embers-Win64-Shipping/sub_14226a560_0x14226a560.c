// 函数: sub_14226a560
// 地址: 0x14226a560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx == 0 && *arg2 == rcx)
    int64_t result
    result.b = 0
    return result

int64_t* rbx = nullptr
int64_t* rdi = nullptr

if (rcx != 0)
    rdi = (*(*rcx + 0x30))(rcx)

if (arg2 != 0)
    int64_t* rcx_1 = *arg2
    
    if (rcx_1 != 0)
        int64_t rdx = *rcx_1
        rbx = (*(rdx + 0x30))(rcx_1, rdx)

if (rdi == rbx)
label_14226a5da:
    
    if (rdi != 0)
        (*(*rdi + 0x358))(rdi, 0, 0)
    
label_14226a5f0:
    
    if (rbx != 0)
        (*(*rbx + 0x358))(rbx, 0, 0)
else
    if (rdi == 0)
        goto label_14226a5f0
    
    if (rbx == 0)
        goto label_14226a5da

(*arg3)(*(arg3 + 8), arg1, arg2)
int64_t* rsi

if (rdi != 0 || rbx != 0)
    rsi.b = 1
    
    if (rdi != 0)
        int64_t rdx_2 = *rdi
        (*(rdx_2 + 0x360))(rdi, rdx_2)
    
    if (rbx != 0)
        int64_t rdx_3 = *rbx
        (*(rdx_3 + 0x360))(rbx, rdx_3)
else
    rsi.b = 0

return zx.q(rsi.b)
