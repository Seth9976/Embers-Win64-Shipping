// 函数: sub_140aac470
// 地址: 0x140aac470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int64_t* rax_1 = (*(*rcx + 0x28))(rcx)

if ((*(*rax_1 + 8))(rax_1) != 0xb)
    return 0

int64_t* rcx_2 = *arg2
(*(*rcx_2 + 0x38))(rcx_2)
int64_t* rcx_3 = *arg2
void var_28
int64_t* rax_5 = (*(*rcx_3 + 0x18))(rcx_3, &var_28)
int64_t var_38 = *rax_5
int64_t* rcx_5 = rax_5[1]
rax_5[1] = 0
*rax_5 = 0
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rax_8 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_20 + 8))(var_20, 1)

int64_t* rsi

if (sub_140aac1e0(arg1, &var_38, arg3, arg4) != 0)
    rsi.b = 1
else
    int64_t* rcx_9 = *arg2
    int64_t* rax_12 = (*(*rcx_9 + 0x28))(rcx_9)
    int64_t rdx_2 = *rax_12
    
    if ((*(rdx_2 + 8))(rax_12, rdx_2) != 0xb)
        rsi.b = 0
    else
        int64_t* rcx_11 = *arg2
        void* rcx_12 = *((*(*rcx_11 + 0x28))(rcx_11) + 0x10)
        
        if (rcx_12 != 0)
            sub_140ab20f0(rcx_12, arg3, arg4)
        
        rsi.b = 1

if (rcx_5 != 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1)
        (**rcx_5)(rcx_5)
        int32_t rdi_1 = *(rcx_5 + 0xc)
        *(rcx_5 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_3 = *rcx_5
            (*(r8_3 + 8))(rcx_5, zx.q(rdi_1), r8_3)

return zx.q(rsi.b)
