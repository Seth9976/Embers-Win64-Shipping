// 函数: sub_141804990
// 地址: 0x141804990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x68) s<= 0)
    return 

int32_t* rcx = data_143ef9d08
int32_t i_1 = 0xffffffff
sub_142c535b0(rcx, &i_1, arg3, arg4, arg2)
uint64_t i = zx.q(i_1)

if (i.d != 0 && i.d == *(arg1 + 0x68))
    return 

int32_t* rcx_1 = data_143ef9d08
int32_t arg_8 = 0
i = sub_142c53520(rcx_1, &arg_8)
uint64_t i_2 = i

while (i != 0)
    if (*i_2 == 1)
        int64_t* rsi_1 = *(i_2 + 8)
        sub_142c536b0(data_143ef9d08, rsi_1)
        int32_t arg_20
        sub_140865c40(arg1 + 0x88, &arg_20, rsi_1)
        int64_t rax = sx.q(arg_20)
        void* const rcx_4
        
        if (rax.d == 0xffffffff)
            rcx_4 = nullptr
        else
            rcx_4 = *(arg1 + 0x88) + rax * 0x18
        
        int64_t* r8_2 = rcx_4 + 8
        
        if (rcx_4 == 0)
            r8_2 = nullptr
        
        if (r8_2 != 0)
            void* r8_3 = *r8_2
            *(r8_3 + 0x98) = *(i_2 + 0x10)
            *(r8_3 + 0x8c)
            *(r8_3 + 0x8c) = 1
            sub_140868c90(arg1 + 0x88, rsi_1)
    
    int32_t* rcx_6 = data_143ef9d08
    arg_8 = 0
    i = sub_142c53520(rcx_6, &arg_8)
    i_2 = i
