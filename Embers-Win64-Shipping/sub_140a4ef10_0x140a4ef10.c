// 函数: sub_140a4ef10
// 地址: 0x140a4ef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg1 + 0xb8))
int32_t rax = (rbp + 1).d
*(arg1 + 0xb8) = rax

if (rax s> *(arg1 + 0xbc))
    sub_1405a4f90(arg1 + 0xb0)

int64_t* rdx_3 = (rbp << 4) + *(arg1 + 0xb0)
*rdx_3 = 0
rdx_3[1].d = 0

if (arg3 == rdx_3)
label_140a4ef74:
    
    if (arg3[1].d == 0)
        *arg2 = 0
    else
        int64_t* rcx_2 = *arg3
        void arg_8
        
        if (rcx_2 == 0)
            *arg2 = 0
        else
            *arg2 = *(*(*rcx_2 + 0x30))(rcx_2, &arg_8)
else
    if (arg3[1].d != 0)
        int64_t* rcx_1 = *arg3
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1)
        
        goto label_140a4ef74
    
    *arg2 = 0

return arg2
