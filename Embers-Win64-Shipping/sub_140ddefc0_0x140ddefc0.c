// 函数: sub_140ddefc0
// 地址: 0x140ddefc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x268)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (*(arg1 + 0x230) != 0)
    *(arg1 + 0x230) = 0

if (*(arg1 + 0x228) != 0)
    *(arg1 + 0x228) = 0

if (*(arg1 + 0x220) != 0)
    *(arg1 + 0x220) = 0

if (*(arg1 + 0x218) != 0)
    *(arg1 + 0x218) = 0

sub_140745b20(arg1 + 0x1d0)
int64_t* rdi_1 = *(arg1 + 0x1b8)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

return sub_140ddea30(arg1) __tailcall
