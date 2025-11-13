// 函数: sub_140d303f0
// 地址: 0x140d303f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx
rcx.b = 1
int64_t entry_rdx
int512_t entry_zmm2
int64_t result = sub_140bcd2b0(rcx, entry_rdx, entry_zmm2)
uint64_t r9 = zx.q(data_143e1d7ac)

if (r9.d != 0)
    sub_140af98a0("Unknown", 0x1d6, u"Duplicate native registered: %i", r9)
    result = sub_140afbb40()

uint64_t r9_1 = zx.q(data_143e1d7b0)

if (r9_1.d == 0)
    return result

sub_140af98a0("Unknown", 0x1dc, u"Duplicate cast registered: %i", r9_1)
return sub_140afbb40() __tailcall
