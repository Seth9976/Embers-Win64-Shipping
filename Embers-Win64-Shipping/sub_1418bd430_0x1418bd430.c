// 函数: sub_1418bd430
// 地址: 0x1418bd430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1 + 0x18
int64_t i_1 = 3
int64_t i

do
    int64_t* rcx = *rbx
    *rbx = 0
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**rcx)(rcx, 1)
    
    rbx = &rbx[6]
    i = i_1
    i_1 -= 1
while (i != 1)
