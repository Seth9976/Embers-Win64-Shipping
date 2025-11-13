// 函数: sub_1420deb90
// 地址: 0x1420deb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1f4) &= 0xfd
int32_t i = 0
int64_t* rdi = *(arg1 + 0xc8)
int64_t rsi = 0
void* result = &rdi[sx.q(*(arg1 + 0xd0))]
uint64_t r14_1 = sx.q(*(arg1 + 0xd0)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rdi
        
        if (rcx != 0 && (rcx[0x11].b & 1) != 0)
            result = sub_141efdf10(rcx)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

if (*(arg1 + 0xa0) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        result = *(arg1 + 0x98)
        int64_t* rcx_1 = *(rdi_1 + result)
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x4c8))(rcx_1, 0)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0xa0))

return result
