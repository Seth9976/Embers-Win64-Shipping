// 函数: sub_14182a7a0
// 地址: 0x14182a7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0xa7]
sub_1405d9400()
int64_t var_28 = data_143cd6fd8
void* rdx_1 = data_143cd6fe0
void* var_20 = rdx_1

if (rdx_1 != 0)
    *(rdx_1 + 8) += 1

int32_t var_18 = data_143cd6fe8
(*(*rbx + 0x38))(rbx, 7, data_1439c67f0, 0, &var_28)

if ((*(*arg1 + 0x20))(arg1) != 0)
    (*(*arg1 + 0xc0))(arg1)

EnterCriticalSection(&arg1[0x23])
*(arg1 + 0x369) = 1
int64_t* rbx_1 = arg1[0xbf]
int64_t rdi_1 = 0
uint64_t rsi_1 = sx.q(arg1[0xc0].d) << 3 u>> 3

if (rbx_1 u> &rbx_1[arg1[0xc0]])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx_4 = *rbx_1
        (*(*rcx_4 + 0x10))(rcx_4)
        rdi_1 += 1
        rbx_1 = &rbx_1[1]
    while (rdi_1 != rsi_1)

return LeaveCriticalSection(&arg1[0x23]) __tailcall
