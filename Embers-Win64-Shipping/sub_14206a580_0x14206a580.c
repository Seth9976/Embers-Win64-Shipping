// 函数: sub_14206a580
// 地址: 0x14206a580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = data_143f41220
int64_t rdx

if (data_143de5480 == 0)
    rdx = 0
else
    rdx.b = GetCurrentThreadId() != data_143de5470

int64_t rax_2 = sx.q(*arg1)

if (rax_2.d u> 0x30)
label_14206a5df:
    
    if (*(rax_2 * 0x14 + 0x143f025f8) s>= 1)
        goto label_14206a5ea
else
    switch (rax_2)
        case 0, 2, 4, 6, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x14, 0x15, 0x16, 0x18, 0x19, 
            0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x30
        label_14206a5ea:
            
            if (*(rdi + (rdx << 2)) == 0)
                uint64_t rax_3
                rax_3.b = (zx.q(arg1[0xc]) & 0x1000002) != 0
                return rax_3
        case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
            goto label_14206a5df

rax_2.b = 0
return rax_2
