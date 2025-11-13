// 函数: sub_1426f2ed0
// 地址: 0x1426f2ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0x11]
*arg1 = &data_14347d0c8
arg1[0xf] = 0
arg1[0x10] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x15].d = 0xffffffff
*(arg1 + 0xac) = 0
arg1[0x17] = 0
arg1[0x18].d = 0
__builtin_memset(&arg1[0x19], 0, 0x28)
uint8_t rax_2 = (arg1[1].d u>> 4).b
__builtin_memset(&arg1[5], 0, 0x28)

if ((rax_2 & 1) == 0)
    void* rax_3 = sub_142624a10()
    arg1[0x1d] = rax_3
    sub_14262cbe0(rax_3, 0x800)
    void* rax_4 = j_sub_140a82f30(0x78)
    void* const rsi_1 = rax_4
    
    if (rax_4 == 0)
        rsi_1 = nullptr
    else
        memset(rax_4, 0, 0x78)
        *(rsi_1 + 0x30) = 0
        void* rcx_3 = rsi_1 + 0x38
        *(rcx_3 + 0x10) = 0
        *(rcx_3 + 0x18) = 0
        *(rcx_3 + 0x1c) = 0x80
        void* rax_5 = *(rcx_3 + 0x10)
        
        if (rax_5 != 0)
            rcx_3 = rax_5
        
        *rcx_3 = 0
        *(rcx_3 + 8) = 0
        *(rsi_1 + 0x58) = 0xffffffff
        *(rsi_1 + 0x5c) = 0
        *(rsi_1 + 0x68) = 0
        *(rsi_1 + 0x70) = 0
    
    arg1[0x1c] = rsi_1
    memset(rsi_1, 0, 0x78)
    *arg1[0x1c] = 0xffffffff
    arg1[0x1c][4] = arg1[0x1d]

int128_t zmm0 = data_14347eef0
arg1[0xa].d = 0x32
arg1[0xe].d = (arg1[0xe].d & 0xffffffea) | 0xa
__builtin_memcpy(arg1 + 0x54, 
    "\x00\x00\xc8\x42\x06\x00\x00\x00\x08\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\xbf\x"
"00\x00\x80\x3f", 
    0x1c)
int64_t rsi_2 = sx.q(arg1[7].d)
int128_t var_24 = zmm0
int32_t var_14 = 0x40200000
int32_t var_10 = 0x10205ff
int32_t rax_11 = (rsi_2 + 1).d
arg1[7].d = rax_11

if (rax_11 s> *(arg1 + 0x3c))
    sub_1405c50f0(&arg1[6])

int64_t rcx_7 = arg1[6]
int128_t* rdx_1 = rsi_2 * 0x1c
int32_t var_14_1 = 0x40200000
int32_t var_10_1 = 0x20205ff
*(rdx_1 + rcx_7) = 0x3f000000.o
zmm0 = data_14347eef0
*(rdx_1 + rcx_7 + 0x10) = var_24:0xc.q
*(rdx_1 + rcx_7 + 0x18) = 0x10205ff
int64_t rsi_3 = sx.q(arg1[7].d)
int128_t var_24_1 = zmm0
int32_t rax_12 = (rsi_3 + 1).d
arg1[7].d = rax_12

if (rax_12 s> *(arg1 + 0x3c))
    sub_1405c50f0(&arg1[6])

int64_t rcx_9 = arg1[6]
int128_t* rdx_3 = rsi_3 * 0x1c
int32_t var_14_2 = 0x40200000
int32_t var_10_2 = 0x30207ff
*(rdx_3 + rcx_9) = 0x3f000000.o
zmm0 = data_14347eef0
*(rdx_3 + rcx_9 + 0x10) = var_24_1:0xc.q
*(rdx_3 + rcx_9 + 0x18) = 0x20205ff
int64_t rsi_4 = sx.q(arg1[7].d)
int128_t var_24_2 = zmm0
int32_t rax_13 = (rsi_4 + 1).d
arg1[7].d = rax_13

if (rax_13 s> *(arg1 + 0x3c))
    sub_1405c50f0(&arg1[6])

int64_t rcx_11 = arg1[6]
int128_t* rdx_5 = rsi_4 * 0x1c
int32_t var_14_3 = 0x40200000
int32_t var_10_3 = 0x30307ff
*(rdx_5 + rcx_11) = 0x3f000000.o
zmm0 = data_14347eef0
*(rdx_5 + rcx_11 + 0x10) = var_24_2:0xc.q
*(rdx_5 + rcx_11 + 0x18) = 0x30207ff
int64_t rsi_5 = sx.q(arg1[7].d)
int32_t rax_14 = (rsi_5 + 1).d
arg1[7].d = rax_14

if (rax_14 s> *(arg1 + 0x3c))
    sub_1405c50f0(&arg1[6])

int64_t rcx_13 = arg1[6]
int128_t* rdx_7 = rsi_5 * 0x1c
*(rdx_7 + rcx_13) = 0x3f000000.o
*(rdx_7 + rcx_13 + 0x10) = zmm0:0xc.q
*(rdx_7 + rcx_13 + 0x18) = 0x30307ff
return arg1
