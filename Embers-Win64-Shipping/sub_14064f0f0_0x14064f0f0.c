// 函数: sub_14064f0f0
// 地址: 0x14064f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rdi = false
int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t* rdx_2 = arg_10
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
void* result = sub_1423de540(data_143f5b298, rdx_2, 2)

if (result != 0)
    result = sub_14243ac50(result)
    rdi = result.d == 0

*arg3 = rdi
return result
