// 函数: sub_1420e5fa0
// 地址: 0x1420e5fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb8) == 0 || (*(arg1 + 0x1f4) & 0x20) == 0)
    return 

TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 != 0 && data_143de5427 == 0) || data_143cd80c8 != 0)
    return 

void* rax_2 = sub_1420f98f0(*(arg1 + 0xb8))
void* rdi_1 = *(arg1 + 0x1e0)

if (rax_2 != 0)
    rax_2 = *(rax_2 + 0x1e0)
    
    if (rax_2 != 0)
        rdi_1 = rax_2

int64_t** rcx_1 = *(arg1 + 0x140)
int128_t var_18

if (rcx_1[1].b == 0)
    int64_t* rdx_4 = *(*(arg1 + 0xb8) + 0x1b0)
    var_18 = *(arg1 + 0x1d0)
    sub_14228ed90(rcx_1, rdx_4, rdi_1, &var_18)

uint64_t* rcx_2 = *(arg1 + 0x148)

if (rcx_2[1].b == 0)
    void* rdx_5 = *(arg1 + 0xb8)
    rax_2.b = 0
    var_18 = *(arg1 + 0x1d0)
    
    if (rdx_5 != 0)
        rax_2.b = arg1 == *(rdx_5 + 0x30)
    
    sub_14228ef00(rcx_2, *(rdx_5 + 0x1b0), rdi_1, &var_18, rax_2.b)

void* rcx_3 = *(*(arg1 + 0xb8) + 0x1b0)

if (rcx_3 != 0 && rdi_1 != 0)
    sub_1420fea10(rdi_1, *(rcx_3 + 8))
