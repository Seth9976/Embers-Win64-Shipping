// 函数: sub_140e53770
// 地址: 0x140e53770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(arg1 + 0x2d8)
sub_140745b20(arg1 + 0x2c0)
sub_140745b20(arg1 + 0x2a0)
sub_140745b20(arg1 + 0x278)
int64_t* rbx = *(arg1 + 0x268)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(arg1 + 0x238)
int64_t* rbx_1 = *(arg1 + 0x218)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 0x1d8)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

sub_140745b20(arg1 + 0x1c0)
int64_t* rbx_3 = *(arg1 + 0x1a8)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rsi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(rsi_1))

return sub_140ddea30(arg1) __tailcall
