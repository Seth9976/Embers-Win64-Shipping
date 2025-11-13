// 函数: sub_14204b960
// 地址: 0x14204b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xfd].d = 0
int64_t rcx = arg1[0xfc]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_142049500(&arg1[0xf4])
int64_t rcx_2 = arg1[0xf2]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xee]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rdi = arg1[0xec]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

sub_142049960(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
