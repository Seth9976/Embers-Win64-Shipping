// 函数: sub_1419ffcf0
// 地址: 0x1419ffcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x208)

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1419fd970(arg1 + 0x1b8)
int64_t rcx_2 = *(arg1 + 0x1a8)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rdi = *(arg1 + 0xa8)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
