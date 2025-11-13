// 函数: sub_14108c790
// 地址: 0x14108c790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f12308
int64_t rcx = arg1[0x1b]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rbx = arg1[0x19]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

int64_t rcx_3 = arg1[0x16]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = arg1[0x14]

if (rcx_4 != 0)
    (*(*rcx_4 + 0x38))(rcx_4)

*arg1 = &data_142f11e28
return &data_142f11e28
