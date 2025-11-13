// 函数: sub_1405e23a0
// 地址: 0x1405e23a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1 + 0x68
int64_t i_1 = 4
int64_t i

do
    int64_t* rcx = *rbx
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
        *rbx = 0
    
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return sub_140cdba30(arg1) __tailcall
