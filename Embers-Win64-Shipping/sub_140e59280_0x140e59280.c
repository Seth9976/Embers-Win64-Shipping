// 函数: sub_140e59280
// 地址: 0x140e59280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x198))
int32_t rax = (rsi + 1).d
*(arg1 + 0x198) = rax

if (rax s> *(arg1 + 0x19c))
    sub_1405a4f90(arg1 + 0x190)

int64_t* rcx_3 = (rsi << 4) + *(arg1 + 0x190)
*rcx_3 = *arg2
void* rax_2 = arg2[1]
rcx_3[1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg1
