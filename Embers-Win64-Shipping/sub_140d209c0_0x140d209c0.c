// 函数: sub_140d209c0
// 地址: 0x140d209c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0xc))
AcquireSRWLockShared(&data_1439aabe8)

if (rbx.d s>= data_1439aabe0)
    ReleaseSRWLockShared(&data_1439aabe8)
else
    int32_t rbx_1 = *(data_1439aabd8 + (rbx << 2))
    ReleaseSRWLockShared(&data_1439aabe8)
    
    if (rbx_1 != 0xffffffff)
        if (rbx_1 s>= data_143e1d9b4)
            return *nullptr
        
        int16_t temp0
        int32_t temp1
        temp0:temp1 = sx.q(rbx_1)
        uint32_t rdx_1 = zx.d(temp0)
        int32_t rax_4 = temp1 + rdx_1
        return
            *(*(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_1) * 0x18)

void* result = Concurrency::details::SchedulerBase::FoundAvailableVirtualProcessor(*(arg1 + 0x10), 
    *(arg1 + 0x20), *(arg1 + 0x18), *(arg1 + 8), 0)

if (result == 0)
    return result

void* rax_11 = *(arg1 + 0x20)

if (rax_11 == 0 || ((*(rax_11 + 8) u>> 0xa).b & 1) == 0)
    int32_t arg_8 = *(result + 0xc)
    sub_140d176b0(&data_1439aabd0, arg1, &arg_8)

return result
