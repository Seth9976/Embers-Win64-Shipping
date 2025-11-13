// 函数: sub_140a3dfa0
// 地址: 0x140a3dfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
int64_t* rbp = arg1
*arg2 = 0

if (arg3[1].d != 0 && *arg3 != 0)
    arg2.b = 1
    sub_140599630(arg1, arg2.b)
    int64_t rbx_1 = 0
    
    if (arg3[1].d != 0)
        int64_t* rcx = *arg3
        void arg_10
        
        if (rcx != 0)
            rbx_1 = *(*(*rcx + 0x30))(rcx, &arg_10)
    
    int64_t r14_1 = sx.q(rbp[1].d)
    int32_t rax_3 = (r14_1 + 1).d
    rbp[1].d = rax_3
    
    if (rax_3 s> *(rbp + 0xc))
        sub_1405a4f90(rbp)
    
    *result = rbx_1
    int64_t* rcx_4 = (r14_1 << 4) + *rbp
    *rcx_4 = 0
    *rcx_4 = *arg3
    *arg3 = 0
    rcx_4[1].d = arg3[1].d
    arg3[1].d = 0

return result
