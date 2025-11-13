// 函数: sub_140841790
// 地址: 0x140841790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3
int64_t* rdi = arg2

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int64_t rax_1 = sub_14085a140(arg1, arg3 + arg5, arg4)
void* rbx = *arg1

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + arg1

if (i_1 != 0)
    int32_t i
    
    do
        *rbx = 0
        void* rsi_1 = *rdi
        int32_t rbp_1 = rdi[1].d
        
        if ((rsi_1.b & 1) != 0)
            rsi_1 = (rsi_1 s>> 1) + rdi
        
        *(rbx + 8) = rbp_1
        
        if (rbp_1 != 0)
            sub_1405e3e80(rbx, rbp_1, 0)
            void* rcx_1 = *rbx
            
            if ((rcx_1.b & 1) != 0)
                rcx_1 = (rcx_1 s>> 1) + rbx
            
            rax_1 = memcpy(rcx_1, rsi_1, rbp_1 * 2)
        else
            *(rbx + 0xc) = 0
        
        rbx += 0x10
        rdi = &rdi[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
