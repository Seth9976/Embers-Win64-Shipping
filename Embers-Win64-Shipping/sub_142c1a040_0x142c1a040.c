// 函数: sub_142c1a040
// 地址: 0x142c1a040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const r9 = &data_14369a5d0
void* rsi = arg1 + (((zx.q(*(arg1 + 2)) << 8) + zx.q(*(arg1 + 3)) + 2) << 1)
void* r8_3 = *(arg2 + 0x90)
int128_t* const rax_5 = &data_14369a5d0

if (zx.d(*rsi) << 8 != neg.d(zx.d(*(rsi + 1))))
    rax_5 = rsi + 2

uint16_t rdx_1 = zx.w(*rax_5)
uint64_t r8_4 = zx.q(*(rax_5 + 1))

if (0 != rdx_1 * 0x100 + r8_4.w)
    r9 = (zx.q(rdx_1.b) << 8) + arg1 + r8_4

int32_t rdx_2 = *(*(r8_3 + 0x70) + zx.q(*(r8_3 + 0x5c)) * 0x14)
uint32_t r8_7 = (zx.d(*r9) << 8) + zx.d(*(r9 + 1))
uint32_t rax_6

if (r8_7 == 1)
    rax_6 = sub_142c1e900(r9, rdx_2)
label_142c1a0fd:
    
    if (rax_6 != 0xffffffff)
        uint64_t r8_9 = zx.q(*(rsi + 1))
        uint32_t r9_4 = zx.d(*rsi)
        int64_t rax_10 = (zx.q(r9_4) << 8) + 1 + r8_9
        int64_t (* var_28)(int32_t arg1, char* arg2, int64_t arg3) = sub_142c22190
        uint64_t rdx_3 = zx.q(*(rsi + (rax_10 << 1) + 1))
        void* rcx_7 = rsi + (rax_10 << 1)
        uint32_t rdi = zx.d(*rcx_7)
        uint64_t rax_13 = (zx.q(rdi) << 8) + rdx_3
        void* var_20 = arg1
        void* var_18 = arg1
        void* var_10 = arg1
        int64_t rax_16 = sub_142c1d850(arg2, (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3)), 
            arg1 + 4, (r9_4 << 8) + r8_9.d, rsi + 4, (rdi << 8) + rdx_3.d, rcx_7 + 2, 
            (zx.d(*(rcx_7 + (rax_13 << 1) + 2)) << 8) + zx.d(*(rcx_7 + (rax_13 << 1) + 3)), 
            rcx_7 + ((rax_13 + 2) << 1), &var_28)
        return rax_16
else if (r8_7 == 2)
    rax_6 = sub_142c1e990(r9, rdx_2)
    goto label_142c1a0fd

rax_6.b = 0
return rax_6
