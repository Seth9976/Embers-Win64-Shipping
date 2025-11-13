// 函数: sub_1423dce70
// 地址: 0x1423dce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    arg3 = rax_2 s>> 0x10
    arg2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
    rax_7 = *(data_143e1d9a0 + (sx.q(arg3) << 3)) + (arg2 << 3)

*(rax_7 + 8) &= 0xbfffffff

if (((arg1[1].d u>> 4).b & 1) == 0)
    data_143f5b298 = 0
    (*(*arg1 + 0x298))(arg1, arg2, arg3)
    Concurrency::details::UMSThreadScheduler::OneShotStaticDestruction()

return sub_140cdba30(arg1) __tailcall
