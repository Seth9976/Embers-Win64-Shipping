// 函数: sub_142bf6c20
// 地址: 0x142bf6c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142bf6b80(arg1, arg2)
int32_t* result = Concurrency::details::SchedulerBase::Create(rax)
sub_142bfb040(rax)
void* rax_1 = *(arg1 + 0x88)
char rdx

if (rax_1 == 0 || *(rax_1 + 8) != 0x73796d62)
    rdx = 0
else
    rdx = 1

CRITICAL_SECTION* rax_2 = sub_142bf5fe0(arg1, rdx, 0)
sub_142bf4ab0(result, sub_142bf60f0(), rax_2, sub_142bf60c0)

if (*(result + 0x50) == sub_142bf60c0)
    void* rcx_4 = *(*(result + 0x48) + 0x28)
    void* rax_5 = *(rcx_4 + 0x80)
    uint64_t rdx_2 = zx.q(*(rcx_4 + 0x68))
    sub_142bf4b50(result, ((rdx_2 * sx.q(*(rax_5 + 0x1c)) + 0x8000) u>> 0x10).d, 
        ((sx.q(*(rax_5 + 0x20)) * rdx_2 + 0x8000) u>> 0x10).d)

return result
