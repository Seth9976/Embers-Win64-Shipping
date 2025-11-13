// 函数: sub_140a98c10
// 地址: 0x140a98c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e63d28
int64_t rcx = arg1[5]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[3] = &data_142e63698
int64_t* rdi = arg1[2]

if (rdi == 0)
    *arg1 = &data_142e61248
    return &data_142e61248

rdi[1].d -= 1

if (rdi[1].d == 1)
    (**rdi)(rdi)
    int32_t rsi_1 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rdi + 8))(rdi, zx.q(rsi_1))

*arg1 = &data_142e61248
return &data_142e61248
