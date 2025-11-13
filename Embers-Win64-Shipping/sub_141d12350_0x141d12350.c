// 函数: sub_141d12350
// 地址: 0x141d12350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f36250

if (rcx == 0)
    return 

int32_t rax = 0

if (0 == *(rcx + 0x50))
    *(rcx + 0x50) = 0
else
    rax = *(rcx + 0x50)

sub_140b43e30("PakPrecacherRequests", data_143de7030, rax, 0)
sub_140b43e30("PakPrecacherHotBlocksCount", data_143de7030, (data_143f36208).d, 0)
sub_140b43e30("PakPrecacherColdBlocksCount", data_143de7030, (data_143f36210).d, 0)
int64_t rax_2
int32_t rdx_3
rdx_3:rax_2 = sx.o(data_143f36218)
sub_140b43e30("PakPrecacherTotalLoadedMB", data_143de7030, 
    (((zx.q(rdx_3) & 0xfffff) + rax_2) s>> 0x14).d, 0)
int64_t rax_5
int32_t rdx_6
rdx_6:rax_5 = sx.o(*(data_143f36250 + 0x40))
sub_140b43e30("PakPrecacherBlockMemoryMB", data_143de7030, 
    (((zx.q(rdx_6) & 0xfffff) + rax_5) s>> 0x14).d, 0)

if (data_143f36220 != 0)
    int64_t rax_8
    int32_t rdx_9
    rdx_9:rax_8 = sx.o(data_143f36218 - data_143f36220)
    sub_140b43e30("PakPrecacherPerFrameKB", data_143de7030, 
        (((zx.q(rdx_9) & 0x3ff) + rax_8) s>> 0xa).d, 0)

int32_t r8_9 = (data_143f36228).d
int32_t rdx_12 = data_143de7030
data_143f36220 = data_143f36218
sub_140b43e30("PakPrecacherSeeks", rdx_12, r8_9, 0)
sub_140b43e30("PakPrecacherBadSeeks", data_143de7030, (data_143f36230).d, 0)
sub_140b43e30("PakPrecacherContiguousReads", data_143de7030, (data_143f36238).d, 0)
return sub_140b43e30("PakLoads", data_143de7030, *(data_143f36250 + 0x27c), 0) __tailcall
