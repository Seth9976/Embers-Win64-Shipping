// 函数: sub_142a1d880
// 地址: 0x142a1d880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
char* rbx = arg2

if (*(arg1 + 0xbb8) s<= 0)
    return 

int128_t* rdi_1 = arg5

do
    char r8 = *rbx
    int32_t rsi_1
    
    if (r8 == 4 || r8 == 9 || rbx[9] == 0)
        rsi_1 = 0
    else
        rsi_1 = 1
    
    uint64_t r14_1 = zx.q(*(zx.q(*(zx.q(r8) + arg1 + 0xc10 + 0xd00)) + arg1 + 0xc10
        + ((zx.q(rbx[2]) + (zx.q(rbx[0xb]) << 2)) << 2) + 0xc40))
    
    if (r14_1.d != 0)
        if (i s> 0)
            sub_1403ad7f3(rdi_1, arg4, (zx.q(r14_1.d) << 4) + arg1 + 0xc10)
        
        if (rsi_1 == 0)
            sub_142a21c40(rdi_1, arg4, ((r14_1 + 0x40) << 4) + arg1 + 0xc10)
        
        if (arg3 s> 0)
            sub_1403ad6ab(rdi_1, arg4, (r14_1 << 4) + arg1 + 0xc10)
        
        if (rsi_1 == 0)
            sub_142a21b50(rdi_1, zx.q(arg4), ((r14_1 + 0x40) << 4) + arg1 + 0xc10)
    
    rdi_1 = &rdi_1[1]
    rbx = &rbx[0x4c]
    i += 1
while (i s< *(arg1 + 0xbb8))
