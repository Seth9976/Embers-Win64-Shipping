// 函数: sub_14077b510
// 地址: 0x14077b510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg2)
void* const rsi = rax
void* rax_1
int64_t rax_2
void* rdx

if (rax != 0)
    rax_1 = sub_142591550()
    rdx = *(rsi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rax == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rsi = nullptr

*arg1 = rsi
void* rsi_1 = nullptr
arg1[1] = *(arg2 + 0x58)
arg1[4] = 0
void* rax_5 = *(arg2 + 0x58)

if (rax_5 != 0)
    rsi_1 = *(**(rax_5 + 0x58) + (sx.q(arg2[0x1a]) << 3))
    
    if (arg2[0x86].b != 0)
        void* rax_8 = sub_140d3c6e0(arg2)
        void* rax_9
        void* rcx_4
        int64_t rdx_1
        
        if (rax_8 != 0)
            rax_9 = sub_142591550()
            rcx_4 = *(rax_8 + 0x10)
            rdx_1 = sx.q(*(rax_9 + 0x38))
        
        void* rax_11
        
        if (rax_8 == 0 || rdx_1.d s> *(rcx_4 + 0x38)
                || *(*(rcx_4 + 0x30) + (rdx_1 << 3)) != rax_9 + 0x30 || *(rax_8 + 0x430) == 0)
            rax_11 = rsi_1 + 0x138
        else
            rax_11 = sub_141f66050(rax_8, arg2[0x1a])
        
        arg1[4] = rax_11

arg1[3] = rsi_1
int64_t rax_12

if (rsi_1 == 0)
    rax_12 = 0
else
    rax_12 = *(rsi_1 + 0x18)

arg1[5] = rax_12
arg1[8] = *(arg2 + 0x70)
int64_t rax_14 = *(arg2 + 0x68)
arg1[9] = rax_14
int64_t rdx_3 = *(arg2 + 0x58)

if (rdx_3 == 0)
    arg1[6] = 0
    arg1[7] = 0
    return rax_14

arg1[6] = sx.q(**(arg2 + 0x80)) * 0x30 + *(rdx_3 + 0x308)
int64_t rax_21 = sx.q(**(arg2 + 0x80)) * 0x78 + *(rdx_3 + 0x328)
arg1[7] = rax_21
return rax_21
