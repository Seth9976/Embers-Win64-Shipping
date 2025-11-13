// 函数: sub_14189f460
// 地址: 0x14189f460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe95b8
arg1[0x16].d = 0
int64_t rcx = arg1[0x15]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14189def0(&arg1[0xd])
int64_t* rdi = arg1[0xa]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

int64_t rcx_4 = arg1[7]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

DeleteCriticalSection(&arg1[1])
*arg1 = &data_142e61248

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
