// 函数: sub_14135de70
// 地址: 0x14135de70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*arg1)
int64_t rcx

if (rax.d != 0xb && rax.d != 0x1e)
    rcx = rax * 5

int32_t rsi
int32_t rdi

if (rax.d != 0xb && rax.d != 0x1e && (*(&data_143f025f0 + (rcx << 2)) != data_143f025b8
        || (*((rcx << 2) + &data_143f025fc) & 1) == 0))
    rdi = 8
    rsi = 2
else
    rdi = 4
    rsi = 4

sub_1405d3490(arg2 + 0x2a8, u"THREADGROUP_SIZEX", 8)
sub_1405d3490(arg2 + 0x2a8, u"THREADGROUP_SIZEY", zx.q(rdi))
sub_1405d3490(arg2 + 0x2a8, u"LOOP_SIZEX", 2)
sub_1405d3490(arg2 + 0x2a8, u"LOOP_SIZEY", zx.q(rsi))
sub_1405d3490(arg2 + 0x2a8, u"HISTOGRAM_COMPUTE_SHADER", 1)
int64_t rdi_1 = sx.q(*(arg2 + 0xb8))
int32_t rax_2 = (rdi_1 + 1).d
*(arg2 + 0xb8) = rax_2

if (rax_2 s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

int64_t result = *(arg2 + 0xb0)
*(result + (rdi_1 << 2)) = 4
return result
