// 函数: sub_140950300
// 地址: 0x140950300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d80(&arg1[0x357])
int64_t* rdi = arg1[0x356]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140596d80(&arg1[0x353])
int64_t* rcx_4 = arg1[0x34f]

if (rcx_4 != 0)
    rcx_4[9].d -= 1
    
    if (rcx_4[9].d == 1)
        sub_140a2f6e0(rcx_4)

int64_t rcx_5 = arg1[0x34d]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

DeleteCriticalSection(&arg1[0x348])
sub_14094c510(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
