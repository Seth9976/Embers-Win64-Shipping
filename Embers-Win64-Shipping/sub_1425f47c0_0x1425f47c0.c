// 函数: sub_1425f47c0
// 地址: 0x1425f47c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t rsi = data_143f70ce8
uint128_t zmm6 = zx.o(arg1[3])
sub_140b34200("HighlightRecorder_SaveInBackground", rsi)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
char rax = sub_1425f6c80(rdi, &arg1[1], zmm6)
void performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
void* rax_1 = *(rdi + 0xa0)
void* rcx_3 = rdi + 0xb0
char arg_8 = rax

if (rax_1 != 0)
    rcx_3 = rax_1

(*(rdi + 0x90))((*(*rcx_3 + 8))(rcx_3), &arg_8)
*(rdi + 0xd0)
*(rdi + 0xd0) = 0
return sub_140b38680("HighlightRecorder_SaveInBackground", rsi) __tailcall
