// 函数: sub_14219df60
// 地址: 0x14219df60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x30)
*(r9 + 0x2a) &= (not.d(1 << (*(arg1 + 0x28) u% 0x20))).b
void* r8_2 = *(arg1 + 0x30)
*(r8_2 + 0x2a) |= (1 << (arg2 u% 0x20)).b
void* r8_3 = *(arg1 + 0x50)
*(r8_3 + 0x2a) &= (not.d(1 << (*(arg1 + 0x28) u% 0x20))).b
void* rdx_2 = *(arg1 + 0x50)
uint64_t result = zx.q(*(rdx_2 + 0x2a)) | zx.q(1 << (arg2 u% 0x20))
*(rdx_2 + 0x2a) = result.b
void* r8_4 = *(arg1 + 0x48)

if (r8_4 != 0)
    *(r8_4 + 0x2a) &= (not.d(1 << (*(arg1 + 0x28) u% 0x20))).b
    void* rdx_5 = *(arg1 + 0x48)
    result = zx.q(*(rdx_5 + 0x2a)) | zx.q(1 << (arg2 u% 0x20))
    *(rdx_5 + 0x2a) = result.b

int32_t i = 0

if (*(arg1 + 0x40) s> 0)
    int64_t r10_1 = 0
    
    do
        result = *(arg1 + 0x38)
        void* r9_1 = *(r10_1 + result)
        
        if (r9_1 != 0)
            result = (zx.q(*(r9_1 + 0x2a)) & zx.q((not.d(1 << (*(arg1 + 0x28) u% 0x20))).b))
                | zx.q(1 << (arg2 u% 0x20))
            *(r9_1 + 0x2a) = result.b
        
        i += 1
        r10_1 += 8
    while (i s< *(arg1 + 0x40))

*(arg1 + 0x28) = arg2
return result
