// 函数: sub_141d7d8e0
// 地址: 0x141d7d8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
void** var_18 = nullptr
int32_t result_2 = 0
void** r14 = nullptr
int32_t var_c = 0
void* rax_1 = &sub_141d7a3f0()[3]

if (rax_1 != &var_18)
    var_18.o = *rax_1
    result_1 = result_2
    r14 = var_18
    *rax_1 = var_18.o

int64_t result = sx.q(result_1)
void** rdi = r14
int64_t rbx = 0
void* rcx = &r14[result]
uint64_t rsi_3 = (rcx - r14 + 7) u>> 3

if (r14 u> rcx)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        result = sub_141d789d0(*rdi)
        rbx += 1
        rdi = &rdi[1]
    while (rbx != rsi_3)

int64_t* rcx_2 = data_143f38340

if (rcx_2 != 0)
    data_143f38340 = 0
    result = (**rcx_2)(rcx_2, 1)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
