// 函数: sub_140ee3e40
// 地址: 0x140ee3e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x223) != 0)
    *(arg1 + 0x223) = 0

if (*(arg1 + 0x221) != 0)
    *(arg1 + 0x221) = 0

sub_140745b20(arg1 + 0x210)
sub_140745b20(arg1 + 0x200)
sub_140745b20(arg1 + 0x1c0)
int64_t* rdi = *(arg1 + 0x1a8)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

return sub_140ddea30(arg1) __tailcall
