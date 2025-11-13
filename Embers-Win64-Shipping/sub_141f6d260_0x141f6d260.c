// 函数: sub_141f6d260
// 地址: 0x141f6d260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x88]

if (rcx != 0)
    sub_140cd85e0(rcx)

sub_141f219e0(arg1)
int32_t i = 0

if (data_143de5426 == 0)
    void* rsi_1 = arg1[0x8c]
    void* r14_3 = sx.q(arg1[0x8d].d) * 0x90 + rsi_1
    
    if (rsi_1 != r14_3)
        int32_t* rbx_1 = rsi_1 + 0x2c
        
        do
            rbx_1[-1] = 0
            
            if (*rbx_1 != 0)
                sub_1405a51b0(&rbx_1[-3], 0)
            
            rsi_1 += 0x90
            rbx_1 = &rbx_1[0x24]
        while (rsi_1 != r14_3)

uint64_t result = zx.q(arg1[0x8a].d)
int32_t rcx_3 = 4

if (result.d s>= 4)
    rcx_3 = result.d

arg1[0x8a].d = rcx_3

if (arg1[0x8d].d s> 0)
    int64_t rbx_2 = 0
    
    do
        result = arg1[0x8c]
        int64_t* rcx_4 = *(rbx_2 + result + 0x30)
        
        if (rcx_4 != 0)
            result = sub_141997e80(rcx_4)
        
        i += 1
        rbx_2 += 0x90
    while (i s< arg1[0x8d].d)

return result
