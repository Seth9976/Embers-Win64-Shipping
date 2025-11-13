// 函数: sub_141f1bee0
// 地址: 0x141f1bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xf0)

for (void* rdx = i + sx.q(*(arg1 + 0xf8)) * 0x48; i != rdx; i += 0x48)
    if (*(i + 0x10) == *arg3)
        int32_t rcx_2 = *(i + 0xc)
        *arg2 = *(i + 4)
        arg2[1].d = rcx_2
        break

int64_t* rbx = arg3[2]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
