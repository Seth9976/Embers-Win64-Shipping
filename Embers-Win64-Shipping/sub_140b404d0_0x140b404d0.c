// 函数: sub_140b404d0
// 地址: 0x140b404d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t* rax = sub_140b3a6e0(arg1, &var_18, arg2)
int64_t* rbx = rax[1]
void* rbp = *rax

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rax_4 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*var_10 + 8))(var_10, 1)

int64_t* rdi

if (rbp == 0 || *(rbp + 0x28) == 0)
    rdi.b = 0
else
    rdi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, arg3, r8_1)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, zx.q(rsi_1), r8_2)

return zx.q(rdi.b)
