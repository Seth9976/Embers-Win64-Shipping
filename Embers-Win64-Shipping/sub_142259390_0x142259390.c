// 函数: sub_142259390
// 地址: 0x142259390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142427bf0(arg1)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_14328df60
TEB* gsbase

if (data_143f52770 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f52770)
    
    if (data_143f52770 == 0xffffffff)
        sub_140b58260(&data_143f52768, u"OverlapAllDynamic", 1)
        _Init_thread_footer(&data_143f52770)

int64_t* rcx = arg1[0x47]
int64_t r8
r8.b = 1
(*(*rcx + 0x620))(rcx, data_143f52768, r8)
int64_t* rax_3 = sub_142565030()
void* rax_4 = rax_3[0x23]

if (rax_4 == 0)
    int64_t rdx_3 = *rax_3
    (*(rdx_3 + 0x390))(rax_3, rdx_3)
    rax_4 = rax_3[0x23]

arg1[0x4c].d = *(rax_4 + 0x40)
int64_t* rax_6 = sub_142565030()
void* rax_7 = rax_6[0x23]

if (rax_7 == 0)
    int64_t rdx_4 = *rax_6
    (*(rdx_4 + 0x390))(rax_6, rdx_4)
    rax_7 = rax_6[0x23]

arg1[0xb].b |= 8
arg1[0x4b].d = *(rax_7 + 0x3c)
arg1[0x21].d = 0x3dcccccd
sub_141dd8f80(arg1, 0)
return arg1
