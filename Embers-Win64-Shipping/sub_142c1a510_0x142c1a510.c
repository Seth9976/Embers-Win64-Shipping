// 函数: sub_142c1a510
// 地址: 0x142c1a510
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

int32_t rdx_1 = *(*(r9 + 0x70) + zx.q(*(r9 + 0x5c)) * 0x14)
uint32_t r8_4 = (zx.d(*rcx_2) << 8) + zx.d(*(rcx_2 + 1))
uint32_t result

if (r8_4 == 1)
    result = sub_142c1e900(rcx_2, rdx_1)
label_142c1a5aa:
    
    if (result != 0xffffffff)
        uint16_t rdx_2 = zx.w(*(arg1 + 4))
        uint64_t r8_6 = zx.q(*(arg1 + 5))
        int128_t* const rdi_1
        
        if (0 != rdx_2 * 0x100 + r8_6.w)
            rdi_1 = (zx.q(rdx_2.b) << 8) + arg1 + r8_6
        else
            rdi_1 = &data_14369a5d0
        
        void* rdx_3 = *(arg2 + 0x90)
        int32_t rax_4 = sub_142c1e750(rdi_1, *(*(rdx_3 + 0x70) + zx.q(*(rdx_3 + 0x5c)) * 0x14))
        void* rax_5
        
        if (rax_4 u< (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7)))
            rax_5 = arg1 + ((zx.q(rax_4) + 4) << 1)
        else
            rax_5 = &data_14369a5d0
        
        uint16_t rdx_8 = zx.w(*rax_5)
        uint64_t r8_7 = zx.q(*(rax_5 + 1))
        
        if (0 != rdx_8 * 0x100 + r8_7.w)
            rbx = (zx.q(rdx_8.b) << 8) + arg1 + r8_7
        
        int128_t* const var_20_1 = rdi_1
        int64_t (* var_28)(int32_t arg1, char* arg2, char* arg3) = sub_142c22150
        return sub_142c1c5e0(rbx, arg2, &var_28)
else if (r8_4 == 2)
    result = sub_142c1e990(rcx_2, rdx_1)
    goto label_142c1a5aa

result.b = 0
return result
