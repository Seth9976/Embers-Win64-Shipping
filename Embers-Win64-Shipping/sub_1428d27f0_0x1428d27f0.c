// 函数: sub_1428d27f0
// 地址: 0x1428d27f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int64_t i_3 = arg3
__builtin_memset(&arg1[6], 0, 0x20)
char* rsi = arg2
arg1[0x2e] = 0
int32_t rdi

if (arg3 != 0xc)
    int64_t i_4 = i_3
    
    if (i_3 u>= 0x10)
        uint64_t i_2 = i_3 u>> 4
        i_3 -= i_2 * 0x10
        uint64_t i
        
        do
            arg1[8].b ^= *rsi
            *(arg1 + 0x41) ^= rsi[1]
            *(arg1 + 0x42) ^= rsi[2]
            *(arg1 + 0x43) ^= rsi[3]
            *(arg1 + 0x44) ^= rsi[4]
            *(arg1 + 0x45) ^= rsi[5]
            *(arg1 + 0x46) ^= rsi[6]
            *(arg1 + 0x47) ^= rsi[7]
            arg1[9].b ^= rsi[8]
            *(arg1 + 0x49) ^= rsi[9]
            *(arg1 + 0x4a) ^= rsi[0xa]
            *(arg1 + 0x4b) ^= rsi[0xb]
            *(arg1 + 0x4c) ^= rsi[0xc]
            *(arg1 + 0x4d) ^= rsi[0xd]
            *(arg1 + 0x4e) ^= rsi[0xe]
            *(arg1 + 0x4f) ^= rsi[0xf]
            sub_1428d2c70(&arg1[8], &arg1[0xc])
            rsi = &rsi[0x10]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (i_3 != 0)
        void* rcx_1 = &arg1[8]
        int64_t i_1
        
        do
            *rcx_1 ^= *(rsi - arg1 + rcx_1 - 0x40)
            rcx_1 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        sub_1428d2c70(&arg1[8], &arg1[0xc])
    
    int64_t r15_1 = i_4 << 3
    *(arg1 + 0x4f) ^= r15_1.b
    arg1[9].b ^= (r15_1 u>> 0x38).b
    *(arg1 + 0x49) ^= (r15_1 u>> 0x30).b
    *(arg1 + 0x4a) ^= (r15_1 u>> 0x28).b
    *(arg1 + 0x4b) ^= (r15_1 u>> 0x20).b
    *(arg1 + 0x4c) ^= (r15_1 u>> 0x18).b
    *(arg1 + 0x4d) ^= (r15_1 u>> 0x10).b
    *(arg1 + 0x4e) ^= (r15_1 u>> 8).b
    sub_1428d2c70(&arg1[8], &arg1[0xc])
    rdi = ((zx.d(*(arg1 + 0x4c)) << 8 | zx.d(*(arg1 + 0x4d))) << 8 | zx.d(*(arg1 + 0x4e))) << 8
        | zx.d(*(arg1 + 0x4f))
    *arg1 = arg1[8]
    arg1[1] = arg1[9]
else
    rdi = (arg3 - 0xb).d
    *arg1 = *arg2
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = 0x1000000

arg1[8] = 0
arg1[9] = 0
arg1[0x2f](arg1, &arg1[4], arg1[0x30])
*(arg1 + 0xf) = (rdi + 1).b
*(arg1 + 0xc) = ((rdi + 1) u>> 0x18).b
*(arg1 + 0xd) = ((rdi + 1) u>> 0x10).b
uint8_t result = ((rdi + 1) u>> 8).b
*(arg1 + 0xe) = result
return result
