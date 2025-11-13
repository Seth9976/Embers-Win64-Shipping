// 函数: sub_142c1a690
// 地址: 0x142c1a690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg2 + 0x90)
int128_t* const rcx

if (0 != zx.w(*(arg1 + 7)) + zx.w(*(arg1 + 6)) * 0x100)
    rcx = zx.q(*(arg1 + 7)) + (zx.q(*(arg1 + 6)) << 8) + arg1
else
    rcx = &data_14369a5d0

int32_t rdx = *(*(r9 + 0x70) + zx.q(*(r9 + 0x5c)) * 0x14)
uint32_t r8_3 = (zx.d(*rcx) << 8) + zx.d(*(rcx + 1))
uint32_t result

if (r8_3 == 1)
    result = sub_142c1e900(rcx, rdx)
label_142c1a726:
    
    if (result != 0xffffffff)
        uint32_t rcx_4 = (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3))
        uint32_t r9_4 = zx.d(*(arg1 + 4)) << 8
        uint32_t rdx_2 = zx.d(*(arg1 + 2)) << 8
        int64_t (* var_18)(int32_t arg1, char* arg2, int64_t arg3) = sub_142c22190
        void* var_10 = arg1
        return sub_142c1d9c0(arg2, rdx_2 + zx.d(*(arg1 + 3)), arg1 + 8, r9_4 + zx.d(*(arg1 + 5)), 
            &(arg1 + 6)[zx.q(rcx_4 * 2)], &var_18)
else if (r8_3 == 2)
    result = sub_142c1e990(rcx, rdx)
    goto label_142c1a726

result.b = 0
return result
