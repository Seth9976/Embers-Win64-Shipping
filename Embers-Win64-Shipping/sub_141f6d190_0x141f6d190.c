// 函数: sub_141f6d190
// 地址: 0x141f6d190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eefdd0(arg1)
int32_t rax = *(arg1 + 0x234)
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rax)
int32_t rdx = data_1439c7a8c
int64_t __saved_rbx
int32_t rcx

if (&__saved_rbx == 0x20)
    rcx = 0x20
else
    rcx = 0x1f - temp0

uint64_t rflags_1
char temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(rax - 1)
char r9

if (rax == 1)
    r9 = 0x20
else
    r9 = 0x1f - temp0_1

int32_t rax_2 = 1 << ((not.d(rcx << 0x1a s>> 0x1f)).b & (0x20 - r9))

if (rax_2 s< 8)
    rdx = 8
else if (rax_2 s< rdx)
    rdx = rax_2

bool cond:2 = (*(arg1 + 0x14c) & 0x20) == 0
*(arg1 + 0x234) = rdx

if (not(cond:2) && (arg1[1].b & 0x30) == 0)
    char result = sub_141f74360(arg1)
    
    if (result == 0)
        return result

EnterCriticalSection(&data_143f3b838)
int64_t* arg_8 = arg1
sub_1409d7d20(&data_143f3b9c0, &arg_8)
return LeaveCriticalSection(&data_143f3b838) __tailcall
