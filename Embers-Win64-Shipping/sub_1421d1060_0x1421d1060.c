// 函数: sub_1421d1060
// 地址: 0x1421d1060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x40)
*(rax + 0x40) = *(arg1 + 0xe0)
*(rax + 0x50) = *(arg1 + 0xf0)
*(rax + 0x60) = *(arg1 + 0x100)
*(rax + 0x70) = *(arg1 + 0x110)
*(*(arg1 + 0x40) + 0x1b4) = *(arg1 + 0xd0)
*(*(arg1 + 0x40) + 0x1b0) = *(arg1 + 0xd4)
void* rcx_2 = *(arg1 + 0x40)
*(rcx_2 + 0x1bc) ^= (*(rcx_2 + 0x1bc) ^ *(arg1 + 0x178)) & 1
void* rcx_3 = *(arg1 + 0x40)
*(rcx_3 + 0x1bc) ^= (*(rcx_3 + 0x1bc) ^ *(arg1 + 0x178)) & 2
void* rcx_4 = *(arg1 + 0x40)
*(rcx_4 + 0x1bc) ^= (*(rcx_4 + 0x1bc) ^ *(arg1 + 0x178)) & 4
void* rcx_5 = *(arg1 + 0x40)
*(rcx_5 + 0x1bc) ^= (*(rcx_5 + 0x1bc) ^ *(arg1 + 0x178)) & 8
void* rdx = *(arg1 + 0x40)

if (*(rdx + 0xc0) != 0)
    sub_1424256a0(rdx + 0xc0, arg1 + 0x90)
    rdx = *(arg1 + 0x40)

*(rdx + 0x80) = *(arg1 + 0x48)
*(rdx + 0x90) = *(arg1 + 0x58)
*(rdx + 0x98) = *(arg1 + 0x60)
uint128_t zmm1

if (*(arg1 + 0x70) != 0)
    uint128_t* rax_17 = *(arg1 + 0x40) + 0xa0
    
    if (rax_17 != arg1 + 0x68)
        zmm1 = *rax_17
        *rax_17 = *(arg1 + 0x68)
        *(arg1 + 0x68) = zmm1

if (*(arg1 + 0x80) != 0)
    uint128_t* rax_19 = *(arg1 + 0x40) + 0xb0
    
    if (rax_19 != arg1 + 0x78)
        zmm1 = *rax_19
        *rax_19 = *(arg1 + 0x78)
        *(arg1 + 0x78) = zmm1

char rbp = *(arg1 + 0x28)
int32_t rdi = *(*(arg1 + 0x30) + 0x8c)
uint32_t result = sub_1405fba70(rdi, 3)
int64_t rsi

if (result.b == 0)
    rsi.b = 0
else
    result = sub_1419a4830(rdi)
    
    if (result.b != 0)
        rsi.b = 0
    else
        rsi.b = 1

void* rcx_11

if (rbp != 0)
    rcx_11 = *(arg1 + 0x40)

if (rbp == 0 || *(rcx_11 + 0x208) == 0 || *(rcx_11 + 0x20c) != 0)
    void* rdi_1 = *(arg1 + 0x40)
    
    if (*(rdi_1 + 0x208) != 0 && *(rdi_1 + 0x20c) == 1)
        result = sub_1405fba70(*(*(arg1 + 0x30) + 0x8c), 3)
        
        if (result.b != 0)
            *(rdi_1 + 0x204) = 1
        else if (rbp == 0 || rsi.b == 0)
            *(rdi_1 + 0x204) = 0
        else
            *(rdi_1 + 0x204) = 2
else
    result = zx.d(rsi.b) * 2
    *(rcx_11 + 0x204) = result

return result
