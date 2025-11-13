// 函数: sub_1406be6e0
// 地址: 0x1406be6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(**arg1)()

if (arg2[1].d s<= 1)
    return 0

char rax_1

if (arg3 == 0)
    rax_1 = 0
else
    int64_t rbx_1 = *(*arg3 + 0x28)
    void arg_8
    arg5 = sub_140b58170(&arg_8, "PrecacheFile", 1)
    rax_1 = rbx_1(arg3, &arg_8, 0)

int128_t var_18 = zx.o(0)
char result = sub_1406bded0(arg1, &var_18, arg2, rax_1, arg5, arg4)
void* rdx_2 = var_18:8.q

if (rdx_2 != 0)
    int32_t rcx_3 = *(rdx_2 + 8)
    *(rdx_2 + 8) -= 1
    
    if (rcx_3 == 1)
        int64_t* rbx_2 = var_18:8.q
        (**rbx_2)(rbx_2, rdx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_5 = var_18:8.q
            (*(*rcx_5 + 8))(rcx_5, zx.q(rdi_1))

return result
