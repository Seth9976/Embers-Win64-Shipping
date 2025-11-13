// 函数: sub_14238bab0
// 地址: 0x14238bab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)
int64_t rsi = 0

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        rsi = *(arg1 + 8)

int64_t rbx = *(arg1 + 0x18)
int64_t var_38 = *(arg1 + 0x20)
void var_30
sub_140596d10(&var_30, arg1 + 0x28)
int64_t result = rbx(rsi, arg2, arg3, zx.q(arg4), &var_38)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rdi + 8))(rdi, 1)

return result
