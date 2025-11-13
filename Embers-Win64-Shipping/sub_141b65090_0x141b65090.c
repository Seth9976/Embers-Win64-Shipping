// 函数: sub_141b65090
// 地址: 0x141b65090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x10)
*(arg1 + 8) = 0

if (rsi == 0)
    *(arg1 + 0x10) = 0
    return 

int64_t* rax = *(rsi + 0x20)

if (rax != 0)
    *rax = 0

int64_t* rbx = *(rsi + 0x28)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

j_sub_140a74f90(rsi)
*(arg1 + 0x10) = 0
