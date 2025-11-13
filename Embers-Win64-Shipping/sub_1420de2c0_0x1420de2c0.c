// 函数: sub_1420de2c0
// 地址: 0x1420de2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t entry_zmm3

if (sub_141f8cba0() == 0)
    void*** rax_1
    rax_1, entry_zmm3 = sub_141f88540()
    void** r8_1 = *rax_1
    r8_1[0xa](rax_1, arg1, r8_1)

int128_t zmm2 = sub_140cd7d40(arg1)
void* rcx_2 = *(arg1 + 0x248)

if (rcx_2 != 0)
    sub_1424414c0(rcx_2, arg1)

void* rax_2 = *(arg1 + 0xb8)
void* rcx_3 = rax_2

if (rax_2 != 0 && arg1 == *(rax_2 + 0x30))
    int64_t* r8_2 = *(rax_2 + 0x1b0)
    
    if (r8_2 != 0)
        (*(*r8_2 + 0x168))(r8_2, 0)
        int64_t* rcx_5 = *(*(arg1 + 0xb8) + 0x1b0)
        (*(*rcx_5 + 0x170))(rcx_5, 0)
        rcx_3 = *(arg1 + 0xb8)

if (rcx_3 != 0)
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
        void* rcx_8 = *(arg1 + 0x140)
        
        if (rcx_8 != 0)
            sub_1422a9f00(rcx_8, *(*(arg1 + 0xb8) + 0x1b0))
        
        void* rcx_9 = *(arg1 + 0x148)
        
        if (rcx_9 != 0)
            sub_1422a9f50(rcx_9, *(*(arg1 + 0xb8) + 0x1b0))

return sub_141997ac0(arg1 + 0x1c0, 0, zmm2, entry_zmm3) __tailcall
