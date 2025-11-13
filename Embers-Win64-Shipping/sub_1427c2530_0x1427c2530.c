// 函数: sub_1427c2530
// 地址: 0x1427c2530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x1a]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t i_1 = arg1[0x19].d
int64_t* rbx = arg1[0x18]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x18]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rbx_1 = arg1[8]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi))

arg1[5] = &data_14322cbf0
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
