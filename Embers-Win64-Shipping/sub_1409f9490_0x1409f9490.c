// 函数: sub_1409f9490
// 地址: 0x1409f9490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[8]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

int64_t rcx_2 = arg1[5]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return sub_140d163b0(arg1) __tailcall
