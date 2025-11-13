// 函数: sub_1418debb0
// 地址: 0x1418debb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418c2e90(arg1[1])
int64_t rbp

if (arg2 == 0 || data_1439c7230 == 0)
    rbp.b = 0
else
    rbp.b = 1

int64_t rdx = *arg1
uint64_t result

if (rbp.b == 0)
    result = data_143efbac0(*(arg1[1] + 8), rdx, 0)
else
    *arg2 = rdx
    result = arg1[2]
    arg2[1] = result

void* rsi = arg1[1]
int32_t i = 0
*arg1 = 0

if (arg1[0xe].d s> 0)
    do
        result = sub_1418c54b0(rsi + 0x438, arg1[0xd] + (sx.q(i) << 3))
        i += 1
    while (i s< arg1[0xe].d)

int32_t i_1 = 0

if (arg1[0xc].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx_5 = *(rsi_1 + arg1[0xb])
        result = zx.q(rcx_5[1].d)
        rcx_5[1].d -= 1
        
        if (result.d == 1 && rcx_5 != 0)
            result = (**rcx_5)(rcx_5, 1)
        
        i_1 += 1
        rsi_1 = &rsi_1[1]
    while (i_1 s< arg1[0xc].d)

if (rbp.b == 0)
    result = data_143efbae0(arg1[0xa], arg1[2], 0)

arg1[2] = 0
return result
