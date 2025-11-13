// 函数: sub_140838220
// 地址: 0x140838220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x3c]

if (rdi != 0)
    uint64_t rax = (*(*arg1 + 0x58))()
    *(rdi + 0x10) -= rax.d
    int64_t* rcx = arg1[0x3c]
    arg1[0x3c] = 0
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**rcx)(rcx, 1)

if (data_143f0f21f == 0)
    return 

uint64_t rdx_1 = zx.q(data_143f0f1a0)

if (((*(&data_143f025fc + sx.q(rdx_1.d) * 0x14) u>> 0x13).b & 1) != 0
        && test_bit(data_143f13cd8, rdx_1))
    (*(arg1[6] + 0x30))(&arg1[6])
    sub_1408081b0(&arg1[2])
