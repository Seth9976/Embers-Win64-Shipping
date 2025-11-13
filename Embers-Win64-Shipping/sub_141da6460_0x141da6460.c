// 函数: sub_141da6460
// 地址: 0x141da6460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x2f0))
int32_t rax = (rsi + 1).d
*(arg1 + 0x2f0) = rax

if (rax s> *(arg1 + 0x2f4))
    sub_1405a4f90(arg1 + 0x2e8)

int64_t* rcx_3 = (rsi << 4) + *(arg1 + 0x2e8)
*rcx_3 = *arg2
void* result = arg2[1]
rcx_3[1] = result

if (result != 0)
    *(result + 8) += 1

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
