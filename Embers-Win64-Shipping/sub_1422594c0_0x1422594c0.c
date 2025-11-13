// 函数: sub_1422594c0
// 地址: 0x1422594c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_14330db90
arg1[0x46] = 0
arg1[0x52].d = 0
sub_1420f3820(&arg1[0x54])
arg1[0x10e].d = 0
sub_1420f3820(&arg1[0x110])
arg1[0x1ca] = 0
sub_1420f3820(&arg1[0x1cc])
arg1[0x286] = 0
arg1[0x288] = 0
sub_1420f3820(&arg1[0x28a])
arg1[0x344] = 0
*(arg1 + 0x1a34) = 0
arg1[0x347].b = 1
arg1[0x348].d &= 0xfffffffe
*(arg1 + 0x1a3c) = 0x40000000
arg1[0x349] = 0
arg1[0x34a] = 0
arg1[0x34b] = 2
arg1[0x34c].d = 0
sub_1420f3820(&arg1[0x34e])
arg1[0x408].d = 0
sub_1420f3820(&arg1[0x40a])
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_6 = zx.q(data_14401b1a0)
__builtin_memset(&arg1[0x4c4], 0, 0x20)
int64_t rdx = *(ThreadLocalStoragePointer + (rcx_6 << 3))
arg1[0x4ce] = 0
arg1[0x4cf] = 0
__builtin_memset(&arg1[0x4d9], 0, 0x40)

if (data_143f52788 s> *(0x14 + rdx))
    _Init_thread_header(&data_143f52788)
    
    if (data_143f52788 == 0xffffffff)
        sub_140b58260(&data_143f52780, u"Default", 1)
        _Init_thread_footer(&data_143f52788)

arg1[0x4e2].d &= 0xfffffffd
rdx.b = 1
arg1[0x47].d = 0x42b40000
arg1[0x49].d = 0x3faaaa8f
arg1[0x48].d = 0x44000000
sub_141dd84c0(arg1, rdx.b)
arg1[0x4e2].d &= 0xfffffeff
arg1[0x4e2].d |= 0x80
*(arg1 + 0x5b) &= 0xfe
arg1[0x4c8].d = 0x43800000
*(arg1 + 0x2714) = 0xc2b3cccd
arg1[0x4e3] = 0x42b3cccd
arg1[0x4e4].d = 0x43b3ffdf
*(arg1 + 0x2724) = 0xc2b3cccd
arg1[0x4e5].d = 0x42b3cccd
arg1[0x46] = data_143f52780
sub_141dd7d00(arg1, 0)
*(arg1 + 0x272c) = 0
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"TransformComponent0", 1)
int64_t* rax_3 = sub_1425881f0()
void* rax_4 = sub_140cd9110(arg1, rbx, rax_3, rax_3, 1, 0)
arg1[0x45] = rax_4
arg1[0x26] = rax_4
int64_t rax_5 = sub_1424846b0()
int64_t rbp = sx.q(arg1[0x4c7].d)
int32_t rax_6 = (rbp + 1).d
arg1[0x4c7].d = rax_6

if (rax_6 s> *(arg1 + 0x263c))
    sub_1405a4d70(&arg1[0x4c6])

arg1[0x4c6][rbp] = rax_5
return arg1
