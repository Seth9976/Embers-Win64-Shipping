// 函数: sub_14094f810
// 地址: 0x14094f810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e32dd8
int64_t* rcx = arg1[5]

if (rcx != 0)
    (*(*rcx + 0xa8))(rcx)
    int64_t* rcx_1 = arg1[5]
    (*(*rcx_1 + 0x98))(rcx_1)

DeleteCriticalSection(&arg1[0x16])
int64_t* rdi = arg1[0x15]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

int64_t rcx_5 = arg1[0x11]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0xd]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0xb]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rcx_8 = arg1[5]

if (rcx_8 != 0)
    (*(*rcx_8 + 0x28))(rcx_8, 1)

int64_t rcx_9 = arg1[3]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
