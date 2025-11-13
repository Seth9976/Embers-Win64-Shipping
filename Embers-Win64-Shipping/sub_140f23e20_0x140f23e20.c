// 函数: sub_140f23e20
// 地址: 0x140f23e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            (*(*rcx + 0x20))(rcx, 1)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140638c50(arg1, 0)

int64_t rcx_2 = *arg1

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)
