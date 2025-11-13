// 函数: sub_1417e2910
// 地址: 0x1417e2910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x20)
int64_t rax
rax.b = rcx != 0
*(arg2 + 0x20) = rax + rcx
int64_t var_28
int64_t* rax_2 = sub_1417d9b90(&var_28)

if (arg3 != rax_2)
    int64_t rcx_2 = *arg3
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *arg3 = *rax_2
    *rax_2 = 0
    arg3[1].d = rax_2[1].d
    *(arg3 + 0xc) = *(rax_2 + 0xc)
    rax_2[1] = 0

int64_t rcx_4 = var_28
char result = rax_2[2].b
arg3[2].b = result

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
