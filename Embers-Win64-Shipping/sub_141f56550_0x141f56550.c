// 函数: sub_141f56550
// 地址: 0x141f56550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143f3b838)
int64_t* arg_8 = arg1
sub_1409d7d20(&data_143f3b9c0, &arg_8)
LeaveCriticalSection(&data_143f3b838)
arg_8 = arg1
sub_1409d7d20(&data_143f3b9d0, &arg_8)
int64_t* rdi = arg1[0x4d]
arg1[0x4d] = 0
int128_t entry_zmm2

if (rdi != 0)
    rdi[0xd].d -= 1
    
    if (rdi[0xd].d == 1)
        entry_zmm2 = sub_141997f50(rdi)
        sub_141997870(&rdi[9])

int64_t* rcx_2 = arg1[0x61]
arg1[0x61] = 0

if (rcx_2 != 0)
    entry_zmm2 = sub_1422ce7f0(rcx_2)

int128_t entry_zmm3
sub_141997ac0(&arg1[0x7b], 0, entry_zmm2, entry_zmm3)
return sub_141f34810(arg1) __tailcall
