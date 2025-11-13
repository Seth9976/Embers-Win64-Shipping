// 函数: sub_140d962e0
// 地址: 0x140d962e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
int64_t* rbx = arg2[7]
int64_t var_18 = arg2[6]

if (rbx != 0)
    rbx[1].d += 1

if (&var_18 != &arg1[6])
    var_18.o = *(arg1 + 0x30)
    *(arg1 + 0x30) = var_18.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx
            (*(r8_1 + 8))(rbx, 1, r8_1)

arg1[8] = arg2[8]
arg1[9].d = arg2[9].d
*(arg1 + 0x4c) = *(arg2 + 0x4c)
return arg1
