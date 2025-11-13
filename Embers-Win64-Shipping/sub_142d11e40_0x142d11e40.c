// 函数: sub_142d11e40
// 地址: 0x142d11e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = data_143f70ce8
data_143b4fc80 = &data_14344b3e0
sub_140b34200("EnableRecording", rbx)
TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    void*** rcx_2 = data_143b4fcf0
    
    if (rcx_2 != 0)
        data_143b4fcf0 = 0
        sub_1425f4ac0(rcx_2, 1)

sub_140b38680("EnableRecording", rbx)
void*** rcx_3 = data_143b4fcf0

if (rcx_3 != 0)
    sub_1425f4ac0(rcx_3, 1)

int64_t rcx_4 = data_143b4fcc8

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = data_143b4fcb8

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

data_143b4fc80 = &data_143311520
return sub_140596eb0(&data_143b4fc88) __tailcall
