// 函数: sub_14234eb60
// 地址: 0x14234eb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = data_143f3d228
void* rax = sub_1425a1340()
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, rax)
int64_t rbx_1 = data_143f3d318
sub_140d19090(arg2, rbx_1)
sub_140d17260(&arg2[4], rbx_1, nullptr)
sub_141fa4200(arg1)
*arg1 = &data_143333200
arg1[0x44] = &data_14328cd08
sub_141dd7d00(arg1, 0)
*(arg1 + 0x5a) &= 0xfd
void* rax_1 = arg1[0x51]
uint64_t rcx_6 = zx.q(data_14401b1a0)
*(arg1 + 0x22c) = 0
*(arg1 + 0xf2) = 1
*(rax_1 + 0xe8) &= 0x7f
TEB* gsbase

if (data_143f596d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_6 << 3))))
    _Init_thread_header(&data_143f596d8)
    
    if (data_143f596d8 == 0xffffffff)
        sub_140b58260(&data_143f596d0, u"Spectator", 1)
        _Init_thread_footer(&data_143f596d8)

int64_t* rcx_8 = arg1[0x52]
int64_t r8_1
r8_1.b = 1
(*(*rcx_8 + 0x620))(rcx_8, data_143f596d0, r8_1)
return arg1
