// 函数: sub_141d02df0
// 地址: 0x141d02df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t rdx = 0
int64_t* rax_6 = sx.q(not.d(*(arg1 + 0xdc)) & arg2) * 0x30 + *(arg1 + 0xb8)
uint64_t rcx = zx.q(*(rax_6 + 6))
int64_t r9 = *rax_6
int64_t rsi = rax_6[1]
int64_t rdi_1 = r9 & 0xffffffffffff
void* rbp_1 = rcx * 0x98 + *(arg1 + 0xa8)

if (rcx.w == (arg3 u>> 0x30).w)
    rdx = arg3

if (rdx != 0)
    if (rdi_1 u>= (rdx & 0xffffffffffff))
        rdx = r9
    
    int64_t rdx_1 = rdx & 0xffffffffffff
    int64_t rax_12 = rdx_1 - rdi_1
    rdi_1 = rdx_1
    rsi -= rax_12

TEB* gsbase

if (data_143f36910 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f36910)
    
    if (data_143f36910 == 0xffffffff)
        data_143f36900 = 0
        data_143f36908 = 0
        atexit(sub_142cf7b60)
        _Init_thread_footer(&data_143f36910)

int32_t rcx_3 = data_143f36908:4.d
uint64_t r13_1 = rdi_1 & 0xffffffffffff0000
int32_t rsi_1 = 0
int64_t rax_18
int16_t rdx_2
rdx_2:rax_18 = sx.o(((rdi_1 + 0xffff + rsi) & 0xffffffffffff0000) - 1 - r13_1 + 0x10000)
int32_t rax_20 = ((rax_18 + zx.q(rdx_2)) s>> 0x10).d
uint64_t rdi_3 = zx.q((rax_20 + 0x3f) u>> 6)

if (rcx_3 s< 0)
    data_143f36908.d = 0
    
    if (rcx_3 != 0)
        sub_1405c5570(&data_143f36900, 0)
        rcx_3 = data_143f36908:4.d
        rsi_1 = data_143f36908.d

int32_t rax_21 = rsi_1 + rdi_3.d
data_143f36908.d = rax_21

if (rax_21 s> rcx_3)
    sub_1405a4d70(&data_143f36900)

memset(data_143f36900 + (sx.q(rsi_1) << 3), 0, rdi_3 << 3)
int32_t rax_24 = rdi_3.d << 6

if (rax_20 != rax_24)
    *(data_143f36900 + (rdi_3 << 3) - 8) = -1 << (rax_20.b - rax_24.b + 0x40)

int32_t rcx_7 = *(rbp_1 + 0x80)
int64_t (* var_78)(void** arg1, int32_t* arg2)
void* var_68

if (rcx_7 != 0)
    int32_t rdx_6 = *(rbp_1 + 0x24)
    int32_t r8_1 = *(rbp_1 + 0x20)
    int64_t r9_1 = *(rbp_1 + 0x18)
    int32_t var_50_1 = *(rbp_1 + 0x28)
    int64_t var_48_1 = data_143f36900
    void** var_70_1 = &var_68
    var_68 = arg1 + 0xe0
    uint64_t var_60_1 = r13_1
    int64_t var_58_1 = ((rdi_1 + 0xffff + rsi) & 0xffffffffffff0000) - 1
    var_78 = sub_141cfc970
    sub_141cf54c0(rcx_7, arg1 + 0xe0, r13_1, ((rdi_1 + 0xffff + rsi) & 0xffffffffffff0000) - 1, 0, 
        r9_1, r8_1, rdx_6, &var_78)

if (*(rax_6 + 0x2c) == 1)
    int32_t rcx_8 = *(rbp_1 + 0x7c)
    
    if (rcx_8 != 0)
        int32_t r8_3 = *(rbp_1 + 0x24)
        int32_t r10_1 = *(rbp_1 + 0x20)
        int64_t r11_1 = *(rbp_1 + 0x18)
        int32_t var_50_2 = *(rbp_1 + 0x28)
        int64_t var_48_2 = data_143f36900
        void** var_70_2 = &var_68
        var_68 = arg1 + 0xe0
        uint64_t var_60_2 = r13_1
        int64_t var_58_2 = ((rdi_1 + 0xffff + rsi) & 0xffffffffffff0000) - 1
        var_78 = sub_141cfc970
        sub_141cf54c0(rcx_8, arg1 + 0xe0, r13_1, ((rdi_1 + 0xffff + rsi) & 0xffffffffffff0000) - 1, 
            0, r11_1, r10_1, r8_3, &var_78)

if (rdi_3.d != 0)
    int64_t rax_31 = data_143f36900
    
    do
        int64_t i_1 = sx.q(i)
        
        if (*(rax_31 + (i_1 << 3)) != -1)
            uint64_t rcx_9 = *(rax_31 + (i_1 << 3))
            uint64_t rdx_10 = zx.q(i << 0x16) + r13_1
            
            while ((rcx_9.b & 1) != 0)
                rdx_10 += 0x10000
                rcx_9 u>>= 1
            
            return zx.q(rcx.d) << 0x30 | rdx_10
        
        i += 1
    while (i u< rdi_3.d)

return -1
