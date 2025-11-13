// 函数: sub_141bf61a0
// 地址: 0x141bf61a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x910)
int64_t rdx

if (*(rdi + 0x18) == 0)
    void*** rax_1
    rax_1, rdx = j_sub_140a82f30(0x38)
    void*** rcx_1
    
    if (rax_1 == 0)
        rcx_1 = nullptr
    else
        void*** rax_2
        rax_2, rdx = sub_141b7bc70(rax_1, 1, 1)
        rcx_1 = rax_2
    
    *(*(arg1 + 0x910) + 0x18) = rcx_1
    rdi = *(arg1 + 0x910)

int64_t* rbx_1 = *(rdi + 0x20)
void* rdi_1 = *(rdi + 0x18)
TEB* gsbase
void* rsi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
*(rdi_1 + 0x2a) = 1

if (data_143cd80cc s> *(rsi + 0x14))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    int64_t* rcx_3 = *(rdi_1 + 0x18)
    rdx.b = 1
    (*(*rcx_3 + 8))(rcx_3, rdx)

uint32_t result = *(rsi + 0x14)

if (data_143cd80cc s> result)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    int64_t* rcx_4 = *(rdi_1 + 0x18)
    result = (*(*rcx_4 + 0x10))(rcx_4, 0)

*(rdi_1 + 0x28) = 0

if (rbx_1 != 0)
    result = zx.d(rbx_1[0xc].b)
    
    if ((result.b & 1) != 0)
        result.b &= 0xfe
        rbx_1[0x17].d = 0x3f800000
        rbx_1[0xc].b = result.b
        return (*(*rbx_1 + 0x2f8))(rbx_1)

return result
