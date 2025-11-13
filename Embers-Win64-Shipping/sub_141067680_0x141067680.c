// 函数: sub_141067680
// 地址: 0x141067680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rbx_1 = arg2
uint64_t r14_1 = zx.q(*(arg3 + 0x18))
void* i = arg3
int64_t var_5c_1 = 0
int32_t var_54_1 = 0
int64_t var_48_1 = 0
int32_t var_60_1 = 0x1688
int32_t var_64_1 = 1
int32_t var_68_1

if ((*(arg3 + 0x20) & 0x20) == 0)
    int32_t rax_3 = 0x2a
    
    if (r14_1.d == 2)
        rax_3 = 0x39
    
    var_68_1 = rax_3
else
    var_68_1 = 0x27
    var_48_1.d = 1

uint32_t var_50_1 = divu.dp.d(0:(*(arg3 + 0x1c)), r14_1.d)
int32_t var_4c_1 = 0

if (*(arg3 + 0x80) != 0)
    var_5c_1 = divu.dp.q(0:(*(arg3 + 0xc0)), r14_1)

uint128_t var_40 = var_68_1.o
uint64_t var_20_1 = var_48_1
int128_t var_30_1 = 0

do
    if (*(rbx_1 + 0x20) == 0)
        void* rcx_1 = *(i + 0x30)
        *(rbx_1 + 0x20) = rcx_1
        void arg_18
        
        if (rcx_1 != 0)
            *(rbx_1 + 0x28) = *sub_141013ee0(rcx_1 + 0x1b0, &arg_18, rbx_1 + 0x30)
    
    sub_141025d40(rbx_1, &var_40, i + 0x70, r14_1.d, 0)
    i = *(i + 0xe0)
    
    if (i != 0 && *(rbx_1 + 0x90) == 0)
        void*** rax_7 = j_sub_140a82f30(0xa8)
        void*** rsi_1
        
        if (rax_7 == 0)
            rsi_1 = nullptr
        else
            rsi_1 = sub_14100d6c0(rax_7, *(i + 0x30))
        
        sub_1405d16e0(rbx_1 + 0x90, rsi_1)
        
        if (rsi_1 != 0)
            rsi_1[0x13].b = 0
    
    rbx_1 = *(rbx_1 + 0x90)
while (i != 0)
