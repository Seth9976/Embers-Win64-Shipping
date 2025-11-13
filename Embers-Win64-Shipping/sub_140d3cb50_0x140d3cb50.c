// 函数: sub_140d3cb50
// 地址: 0x140d3cb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0xc)
AcquireSRWLockShared(&data_1439aae08)
int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbx)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int32_t r8_1 = rax_2 s>> 0x10

if (r8_1 s< data_1439aadf0)
    int64_t r9_1 = *(data_1439aade8 + sx.q(r8_1) * 0x10 + 8)
    
    if (r9_1 != 0)
        int64_t result = (*(r9_1 + sx.q(zx.d(rax_2.w) - rdx_1) * 0x10)).q
        ReleaseSRWLockShared(&data_1439aae08)
        return result

ReleaseSRWLockShared(&data_1439aae08)
return 0
