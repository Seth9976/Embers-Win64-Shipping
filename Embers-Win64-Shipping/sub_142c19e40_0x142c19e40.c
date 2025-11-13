// 函数: sub_142c19e40
// 地址: 0x142c19e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg2 + 0x90)
int128_t* const rbx = &data_14369a5d0
uint64_t r9_1 = zx.q(*(arg1 + 3))
uint16_t r8_1 = zx.w(*(arg1 + 2))
int128_t* const rcx_2

if (0 != r8_1 * 0x100 + r9_1.w)
    rcx_2 = (zx.q(r8_1.b) << 8) + arg1 + r9_1
else
    rcx_2 = &data_14369a5d0

int32_t rdx = *(*(r9 + 0x70) + zx.q(*(r9 + 0x5c)) * 0x14)
uint32_t r8_4 = (zx.d(*rcx_2) << 8) + zx.d(*(rcx_2 + 1))
uint32_t result

if (r8_4 == 1)
    result = sub_142c1e900(rcx_2, rdx)
label_142c19ed5:
    
    if (result != 0xffffffff)
        uint16_t rdx_1 = zx.w(*(arg1 + 4))
        uint64_t r8_6 = zx.q(*(arg1 + 5))
        int128_t* const r14
        
        if (0 != rdx_1 * 0x100 + r8_6.w)
            r14 = (zx.q(rdx_1.b) << 8) + arg1 + r8_6
        else
            r14 = &data_14369a5d0
        
        uint16_t rdx_2 = zx.w(*(arg1 + 6))
        uint64_t r8_7 = zx.q(*(arg1 + 7))
        int128_t* const rsi
        
        if (0 != rdx_2 * 0x100 + r8_7.w)
            rsi = (zx.q(rdx_2.b) << 8) + arg1 + r8_7
        else
            rsi = &data_14369a5d0
        
        uint16_t rdx_3 = zx.w(*(arg1 + 8))
        uint64_t r8_8 = zx.q(*(arg1 + 9))
        int128_t* const rbp
        
        if (0 != rdx_3 * 0x100 + r8_8.w)
            rbp = (zx.q(rdx_3.b) << 8) + arg1 + r8_8
        else
            rbp = &data_14369a5d0
        
        void* rdx_4 = *(arg2 + 0x90)
        int32_t rax_4 = sub_142c1e750(rsi, *(*(rdx_4 + 0x70) + zx.q(*(rdx_4 + 0x5c)) * 0x14))
        int128_t* const rax_5
        
        if (rax_4 u< (zx.d(*(arg1 + 0xa)) << 8) + zx.d(*(arg1 + 0xb)))
            rax_5 = arg1 + ((zx.q(rax_4) + 6) << 1)
        else
            rax_5 = &data_14369a5d0
        
        uint16_t rdx_9 = zx.w(*rax_5)
        uint64_t r8_9 = zx.q(*(rax_5 + 1))
        
        if (0 != rdx_9 * 0x100 + r8_9.w)
            rbx = (zx.q(rdx_9.b) << 8) + arg1 + r8_9
        
        int128_t* const var_40 = r14
        int64_t (* var_48)(int32_t arg1, char* arg2, char* arg3) = sub_142c22150
        int128_t* const var_38 = rsi
        int128_t* const var_30 = rbp
        return sub_142c1a300(rbx, arg2, &var_48)
else if (r8_4 == 2)
    result = sub_142c1e990(rcx_2, rdx)
    goto label_142c19ed5

result.b = 0
return result
