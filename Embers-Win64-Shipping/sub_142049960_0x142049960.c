// 函数: sub_142049960
// 地址: 0x142049960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = &data_1432ab988

if (arg1[0xea].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx = *(rsi_1 + arg1[0xe9])
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[0xea].d)

int64_t rcx_1 = arg1[0xe9]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0xe7]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xe5]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140dde9c0(&arg1[0xcc])
int64_t* rdi = arg1[0xcb]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_2 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_2))

return sub_142381a50(arg1) __tailcall
