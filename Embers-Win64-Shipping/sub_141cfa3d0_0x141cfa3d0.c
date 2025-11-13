// 函数: sub_141cfa3d0
// 地址: 0x141cfa3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14321cdd0
int64_t* rcx = arg1[4]

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, 1)

int64_t* rcx_1 = arg1[0x26]
arg1[4] = 0

if (rcx_1 != 0)
    sub_140a4fc50(rcx_1)
    arg1[0x26] = 0

int64_t rcx_2 = arg1[0x27]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

DeleteCriticalSection(&arg1[0x20])
void* rbx = &arg1[0x1e]
int64_t rcx_4 = *rbx

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t i_1 = 8
int64_t i

do
    int64_t rcx_5 = *(rbx - 0x18)
    rbx -= 0x18
    sub_140a74f90(rcx_5)
    *rbx = 0
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi))

*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
