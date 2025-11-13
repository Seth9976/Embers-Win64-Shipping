// 函数: sub_141049740
// 地址: 0x141049740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x10)
void* rbx = *(rdx + 0x20)
int64_t* rcx = *(*(rdx + 0x38) + 0xe8)
int64_t* var_20 = rcx
int64_t rax_2 = (*(*rcx + 0x18))(rcx)
int32_t var_10 = 0
EnterCriticalSection(rbx + 0x510)
int64_t* rax_3 = j_sub_140a82f30(0x28)

if (rax_3 != 0)
    *rax_3 = 0
    *(rax_3 + 8) = arg1.o
    *(rax_3 + 0x18) = rax_2.o
    int64_t** rdx_1 = (rbx + 0x510)->__offset(0x30).q
    (rbx + 0x510)->__offset(0x30).q = rax_3
    *rdx_1 = rax_3

(rbx + 0x510)->__offset(0x40).d += 1
return LeaveCriticalSection(rbx + 0x510) __tailcall
