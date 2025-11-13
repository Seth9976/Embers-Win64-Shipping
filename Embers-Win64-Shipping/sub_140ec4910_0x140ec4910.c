// 函数: sub_140ec4910
// 地址: 0x140ec4910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x28))()
int64_t* rcx = *arg2
int64_t var_18 = *arg3
void* rax_2 = arg3[1]
void* var_10 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

(*(*rcx + 0x10))(rcx, &var_18)
void* const rcx_1 = arg1[2]
int64_t rdx_1 = 0
int64_t* r8 = *arg2

if (rcx_1 != 0)
    int32_t rax_4 = *(rcx_1 + 8)
    
    if (rax_4 != 0)
        *(rcx_1 + 8) = rax_4 + 1
        rax_4.b = 1
    
    if (rax_4.b == 0)
        rcx_1 = nullptr
    
    if (rcx_1 != 0)
        rdx_1 = arg1[1]

var_18 = rdx_1
void* const var_10_1 = rcx_1
(*(*r8 + 0x18))(r8, &var_18)
int64_t* rcx_3 = *arg2
(*(*rcx_3 + 0x28))(rcx_3, zx.q(arg4), zx.q(arg5))
int64_t* rcx_4 = *arg2
void* rdx_4 = *(*arg3 + 0x3a0)
(*(*rcx_4 + 0x20))(rcx_4, *(rdx_4 + 0x60), rdx_4 + 0x68)
int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
