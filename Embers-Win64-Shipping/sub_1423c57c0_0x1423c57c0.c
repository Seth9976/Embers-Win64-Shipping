// 函数: sub_1423c57c0
// 地址: 0x1423c57c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x3d) & 8) == 0)
    int64_t rax
    rax.b = 1
    return rax

int32_t rbx = 0
int32_t rcx_1

if (arg1[0x1a] == 0)
    rcx_1 = 0
else
    char rax_2 = (*(*arg1 + 0x318))()
    void* rcx = arg1[0x1a]
    
    if (rax_2 == 0)
        rcx_1 = *(rcx + 0x20)
    else
        rcx_1 = *(*(rcx + 0x28) + 4)

int32_t rcx_2 = rcx_1 - arg1[7].d
int32_t rsi = data_1439c7a00

if (rcx_2 s<= rsi)
    rsi = rcx_2

if (rsi s<= 1)
    rsi = 1

void* rax_5 = (*(*arg1 + 0x318))(arg1)
void* rcx_4 = arg1[0xf]

if (rax_5.b == 0)
    if (rcx_4 != 0)
        rax_5 = arg1[0x1a]
        
        if (rax_5 != 0)
            rbx = *(rax_5 + 0x20) - *(rcx_4 + 0x60)
else if (rcx_4 != 0)
    void* rax_6
    rax_6.b = *(*(rcx_4 + 0x50) + 4) - *(rcx_4 + 0x64) s>= rsi
    return rax_6

rax_5.b = rbx s>= rsi
return rax_5
