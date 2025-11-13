// 函数: sub_1428fc850
// 地址: 0x1428fc850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int64_t* r10 = arg1

if (data_143fecf0c == 0)
    sub_1428fc900(arg1, arg2)
    return 0

char* r9 = arg1

for (int32_t i = 0; i u< 8; )
    uint64_t rax_1 = zx.q(*r9)
    
    if (rax_1.b != *(rax_1 + &data_143518a00))
        return 0xffffffff
    
    i += 1
    r9 = &r9[1]

for (int32_t i_1 = 0; i_1 s< 0x10; i_1 += 1)
    if (*((sx.q(i_1) << 3) + 0x143518b00) == *r10)
        return 0xfffffffe

sub_1428fc900(r10, arg2)
return 0
