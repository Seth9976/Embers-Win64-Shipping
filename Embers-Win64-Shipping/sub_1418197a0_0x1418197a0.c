// 函数: sub_1418197a0
// 地址: 0x1418197a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* r15 = *arg1
int64_t rax = *arg2
int64_t* rsi = arg2[1]
__builtin_memset(arg2, 0, 0x20)
int64_t rdi = arg2[2]
int32_t rbp = arg2[3].d
int32_t r14 = *(arg2 + 0x1c)
int64_t var_28 = rdi
int64_t var_38 = rax
int64_t* var_30 = rsi

if (r15 + 0x80 != &var_38)
    *(r15 + 0x80) = rax
    var_38 = 0
    sub_1405aeff0(r15 + 0x88, &var_30)
    rdi = var_28
    rsi = var_30

if (r15 + 0x90 != &var_28)
    int64_t rcx_1 = *(r15 + 0x90)
    
    if (rcx_1 != 0)
        arg5 = sub_140a74f90(rcx_1)
    
    *(r15 + 0x90) = rdi
    *(r15 + 0x98) = rbp
    *(r15 + 0x9c) = r14
else if (rdi != 0)
    arg5 = sub_140a74f90(rdi)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        int64_t* rbx_2 = var_30
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_4 = var_30
            (*(*rcx_4 + 8))(rcx_4, zx.q(rdi_1))

return sub_1405fc0f0(r15, arg5, arg3, arg4) __tailcall
