// 函数: sub_1419fd7c0
// 地址: 0x1419fd7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14301ec10
int64_t* rcx = arg1[7]

if (rcx != 0)
    (**rcx)(rcx, 1)

int32_t i = 0

if (arg1[3].d s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx_1 = *(rdi_1 + arg1[8])
        (*(*rcx_1 + 0x30))(rcx_1)
        int64_t* rcx_2 = *(rdi_1 + arg1[8])
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2, 1)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg1[3].d)

j_sub_140a74f90(arg1[8])
j_sub_140a74f90(arg1[9])

if (data_143f0f21f != 0)
    uint64_t rdx_1 = zx.q(data_143f0f1a0)
    
    if (((*(&data_143f025fc + sx.q(rdx_1.d) * 0x14) u>> 0x13).b & 1) != 0
            && test_bit(data_143f13cd8, rdx_1) && arg1[0xf].d s> 0)
        do
            int64_t rdx_2 = sx.q(arg1[0xf].d)
            int64_t* rdi_2 = arg1[0xe - 1][rdx_2]
            arg1[0xf].d = (rdx_2 - 1).d
            sub_1405c53d0(&arg1[0xe])
            (*(*rdi_2 + 0x30))(rdi_2)
            (**rdi_2)(rdi_2, 1)
        while (arg1[0xf].d s> 0)

int64_t* rcx_9 = arg1[0xa]

if (rcx_9 != 0)
    (**rcx_9)(rcx_9, 1)

int64_t* rcx_10 = arg1[5]

if (rcx_10 != 0)
    (**rcx_10)(rcx_10, 1)

int64_t rcx_11 = arg1[0xe]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* rdi_3 = arg1[0xc]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rsi = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rsi == 1)
            (*(*rdi_3 + 8))(rdi_3, zx.q(rsi))

*arg1 = &data_142d5a028
return &data_142d5a028
