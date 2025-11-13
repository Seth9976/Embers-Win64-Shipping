// 函数: sub_1419de530
// 地址: 0x1419de530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "StaticMeshComponent0", 1)
void* rax_1 = sub_1419e8b00()
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, rax_1)
sub_14237dbd0(arg1)
int64_t* rbx_1 = arg1[0x44]
*arg1 = &data_143011c18
int64_t r8_1
r8_1.b = 1
(*(*rbx_1 + 0x620))(rbx_1, data_143f3a590, r8_1)
*(rbx_1 + 0x14f) = 0
uint64_t rbx_2 = *sub_140b58260(&arg_8, u"CollisionCylinder", 1)
int64_t* rax_4 = sub_142488170()
void* rax_5
int64_t r8_3
rax_5, r8_3 = sub_140cd9110(arg1, rbx_2, rax_4, rax_4, 1, 0)
uint64_t rcx_7 = zx.q(data_14401b1a0)
arg1[0x46] = rax_5
*(rax_5 + 0x424) = 0x42700000
*(rax_5 + 0x420) = 0x43480000
TEB* gsbase

if (data_143f22390 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_7 << 3))))
    _Init_thread_header(&data_143f22390)
    
    if (data_143f22390 == 0xffffffff)
        sub_140b58260(&data_143f22388, u"OverlapAllDynamic", 1)
        _Init_thread_footer(&data_143f22390)

int64_t* rcx_9 = arg1[0x46]
r8_3.b = 1
(*(*rcx_9 + 0x620))(rcx_9, data_143f22388, r8_3)
*(arg1[0x46] + 0x14f) = 0
int64_t rax_10 = arg1[0x46]
*(arg1 + 0x32) |= 2
arg1[0x26] = rax_10
sub_141dd7d00(arg1, 1)
*(arg1 + 0x5a) |= 2
*(arg1 + 0xf2) = 3
__builtin_memcpy(&arg1[0x4d], 
    "\x00\x00\xa0\x41\x00\x00\x20\x41\x00\x00\x20\x41\x9a\x99\x99\x3e\x00\x00\x00\x40\x00\x50\xc3\x47\x"
"00\x00\x7a\x44\x00\x50\xc3\x47\x00\x00\x80\x3f", 
    0x24)
return arg1
