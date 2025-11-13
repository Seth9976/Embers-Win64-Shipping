// 函数: sub_141d4aa30
// 地址: 0x141d4aa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x29]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

sub_140596eb0(&arg1[0x24])
sub_141d4abf0(&arg1[0x16])
int64_t rcx_4 = arg1[0x14]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

DeleteCriticalSection(&arg1[0xc])
sub_1408ffb10(&arg1[0xa])
sub_1408ffb10(&arg1[8])
sub_1408ffb10(&arg1[6])
arg1[3] = &data_142e1ce40
int64_t rcx_9 = arg1[1]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

*arg1 = &IModuleInterface::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
