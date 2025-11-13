// 函数: sub_14198b920
// 地址: 0x14198b920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1

if (rdx == 0)
    return 

int64_t rax_1 = 0

if (0 == *(rdx + 8))
    *(rdx + 8) = 0
else
    rax_1 = *(rdx + 8)

if (((rax_1 u>> 0x1a).b & 1) != 0)
    return 

int128_t entry_zmm2
int128_t entry_zmm3

if (data_143f02bac u> 0)
    sub_14196ef60(&data_143f02b88, &data_143f02b98, entry_zmm2, entry_zmm3)
int32_t rdi_1 = data_14399e5e0
int64_t* rax_2 = sub_140a242a0()
char rax_3
int64_t r9_2
rax_3, r9_2 = (*(*rax_2 + 0x20))(rax_2, zx.q(rdi_1))

if (rax_3 != 0)
    sub_140af98a0("Unknown", 0x341, u"Deadlock in WaitOnRHIThreadFence.", r9_2)
    sub_140afbb40()

sub_1405a6220(sub_140a242a0(), arg1)
