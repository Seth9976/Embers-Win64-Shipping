// 函数: sub_1428b47d0
// 地址: 0x1428b47d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint32_t* rax = sub_142890ec0(arg1)

if (sub_1429027c0(arg2, sub_142890ee0(arg1) << 3, rax) s< 0)
    sub_1428a5670(6, 0x9f, 0x9d, "crypto\evp\e_camellia.c", 0xdd)
    return 0

int32_t rax_7 = sub_142890eb0(sub_140687ad0(arg1)) & 0xf0007
int64_t (* rax_8)(char* arg1, uint8_t* arg2, void* arg3)
int64_t (* rcx_5)(int64_t* arg1, int128_t* arg2, int64_t arg3, int64_t arg4, int32_t arg5)
bool cond:0_1

if (rax_7 - 1 u> 1 || arg4 != 0)
    rcx_5 = nullptr
    cond:0_1 = rax_7 == 2
    rax_8 = sub_142902790
else
    rcx_5 = nullptr
    cond:0_1 = rax_7 == 2
    rax_8 = sub_142902760

*(rax + 0x118) = rax_8

if (cond:0_1)
    rcx_5 = sub_142902820

*(rax + 0x120) = rcx_5
return 1
