// 函数: sub_142c1a3e0
// 地址: 0x142c1a3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg2 + 0x90)
int128_t* const rbx = &data_14369a5d0
uint16_t rcx = zx.w(*(arg1 + 2))
uint64_t r8_1 = zx.q(*(arg1 + 3))
int128_t* const rcx_1

if (0 != rcx * 0x100 + r8_1.w)
    rcx_1 = (zx.q(rcx.b) << 8) + arg1 + r8_1
else
    rcx_1 = &data_14369a5d0

int32_t rdx_2 = *(*(r9 + 0x70) + zx.q(*(r9 + 0x5c)) * 0x14)
uint32_t r8_4 = (zx.d(*rcx_1) << 8) + zx.d(*(rcx_1 + 1))
uint32_t result

if (r8_4 == 1)
    result = sub_142c1e900(rcx_1, rdx_2)
label_142c1a47f:
    
    if (result != 0xffffffff)
        void* rax_3
        
        if (result u< (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)))
            rax_3 = arg1 + ((zx.q(result) + 3) << 1)
        else
            rax_3 = &data_14369a5d0
        
        uint16_t rdx_4 = zx.w(*rax_3)
        uint64_t r8_6 = zx.q(*(rax_3 + 1))
        
        if (0 != rdx_4 * 0x100 + r8_6.w)
            rbx = (zx.q(rdx_4.b) << 8) + arg1 + r8_6
        
        int64_t var_10_1 = 0
        uint32_t (* var_18)(int32_t arg1, char* arg2) = sub_142c22220
        return sub_142c1c5e0(rbx, arg2, &var_18)
else if (r8_4 == 2)
    result = sub_142c1e990(rcx_1, rdx_2)
    goto label_142c1a47f

result.b = 0
return result
