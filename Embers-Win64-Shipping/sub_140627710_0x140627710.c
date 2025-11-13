// 函数: sub_140627710
// 地址: 0x140627710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
int64_t* rbx = arg2[2]
int64_t var_18 = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

if (&var_18 != &arg1[1])
    var_18.o = *(arg1 + 8)
    *(arg1 + 8) = var_18.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx = *rbx
        (*rdx)(rbx, rdx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx
            (*(r8_1 + 8))(rbx, 1, r8_1)

return arg1
