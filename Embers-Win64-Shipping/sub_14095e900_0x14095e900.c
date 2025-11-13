// 函数: sub_14095e900
// 地址: 0x14095e900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
int32_t i_1 = arg3[1].d
int64_t r15 = *(arg1 + 0x10)
int64_t* rbx_1 = *arg3
uint64_t var_28 = 0
int32_t i_2 = i_1

if (i_1 != 0)
    sub_1405a4be0(&var_28, i_1, 0)
    uint64_t rcx_2 = var_28
    int32_t i
    
    do
        *rcx_2 = *rbx_1
        void* rax_2 = rbx_1[1]
        *(rcx_2 + 8) = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        rcx_2 += 0x10
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    int32_t var_1c_1 = 0

r15(rax, zx.q(arg2), &var_28)
return sub_140596d80(arg3) __tailcall
