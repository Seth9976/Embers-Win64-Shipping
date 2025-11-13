// 函数: sub_141f03650
// 地址: 0x141f03650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t arg_10 = 0
sub_1422883b0(arg1, arg2, 0)
*arg1 = &data_14326edd8
sub_1422b4e50(&arg1[0x2a])
sub_142287b50(&arg1[0x3b])
sub_1422877b0(&arg1[0x43])
arg1[0x4b] = 0
int64_t rsi = sx.q(arg2[0x82].d)
int64_t rbp = arg2[0x81]
arg1[0x4c].d = rsi.d

if (rsi.d != 0)
    sub_1407751d0(&arg1[0x4b], rsi.d, 0)
    memcpy(arg1[0x4b], rbp, (rsi * 0x28).d)
else
    *(arg1 + 0x264) = 0

arg1[0x4d] = 0
arg1[0x4e].d = data_14399f630
arg1[0x50].d = 0xffffffff
*(arg1 + 0x284) = (arg1[0x21][1].d).b
arg1[0x61] = 0
arg1[0x62].d = 0
*(arg1 + 0x314) = 8
arg1[0x63].d = 0xffff0101
*(arg1 + 0x31c) = 0xff
arg1[0x68] = 0
arg1[0x69].d = 0
*(arg1 + 0x34c) = 2
arg1[0x70] = 0
arg1[0x71].d = 0
*(arg1 + 0x38c) = 3
__builtin_memset(&arg1[0x72], 0, 0x18)
arg1[0x4f] = &data_142e3cbf8
__builtin_memset(&arg1[0x75], 0, 0x30)
arg1[0x83].d = 0
*(arg1 + 0x41c) = 4
__builtin_memset(&arg1[0x84], 0, 0x40)
arg1[0x8c] = -1
arg1[0x8d].d = 0xffffffff
__builtin_memset(arg1 + 0x46c, 0, 0x14)
arg1[0x90].d = 0xffffffff
void* rcx_6 = arg2[0x14]

if (rcx_6 != 0)
    sub_1420e3ab0(sub_141dc9840(rcx_6))

if (arg1[0x4c].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx_8 = *(rsi_1 + arg1[0x4b])
        
        if (rcx_8 != 0)
            void var_68
            int64_t rax_6 = *sub_1421268c0(rcx_8, &var_68, arg1[0x21][1].d)
            arg1[0x4d] |= rax_6
        
        i += 1
        rsi_1 = &rsi_1[5]
    while (i s< arg1[0x4c].d)

int64_t* rcx_9 = data_143f5b298
void arg_8
(*(*rcx_9 + 0x300))(rcx_9, arg2, &arg_8)
void var_60
sub_140acc920(&var_60, &arg_8)
sub_1422a3c90(&arg1[0x3b], 1, 1)
sub_1422c8fe0(&arg1[0x2a], 1, 1, 1)
sub_1422a3a50(&arg1[0x43], 1, 1)
void*** arg_18 = arg1

if (sub_140a80f40() == 0)
    uint32_t rax_9
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_9.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_9.b == 0))
        void var_50
        void** rax_10 = sub_141f0ebc0(&var_50, nullptr, 0xff)
        *(*rax_10 + 0x10) = arg1
        void* rcx_18 = *rax_10
        int64_t* rsi_2 = *(rcx_18 + 0x20)
        
        if (rsi_2 != 0)
            rsi_2[9].d += 1
        
        sub_1407c9450(rcx_18, rax_10[1], rax_10[2].d, 1)
        
        if (rsi_2 != 0)
            rsi_2[9].d -= 1
            
            if (rsi_2[9].d == 1)
                sub_140a2f6e0(rsi_2)
    else
        void*** arg_20 = arg1
        sub_141f05a20(&arg_20)
else
    sub_141f05a20(&arg_18)

return arg1
