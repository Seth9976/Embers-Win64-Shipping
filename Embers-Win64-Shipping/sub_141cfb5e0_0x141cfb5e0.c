// 函数: sub_141cfb5e0
// 地址: 0x141cfb5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi_1 = *arg2 & 0xffffffffffff
void* rbp_1 = zx.q(*(arg2 + 6)) * 0x98 + *(arg1 + 0xa8)
int16_t rbx = 0
TEB* gsbase

if (data_143f36928 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f36928)
    
    if (data_143f36928 == 0xffffffff)
        data_143f36918 = 0
        data_143f36920 = 0
        atexit(sub_142cf7b40)
        _Init_thread_footer(&data_143f36928)

uint64_t rcx_2 = rdi_1 & 0xffffffffffff0000
int32_t rsi = 0
int64_t rax_7 = ((arg2[1] + 0xffff + rdi_1) & 0xffffffffffff0000) - 1
int32_t rcx_3 = data_143f36920:4.d
int64_t rax_10
int16_t rdx
rdx:rax_10 = sx.o(rax_7 - rcx_2 + 0x10000)
int32_t rax_12 = ((rax_10 + zx.q(rdx)) s>> 0x10).d
uint64_t rdi_3 = zx.q((rax_12 + 0x3f) u>> 6)

if (rcx_3 s< 0)
    data_143f36920.d = 0
    
    if (rcx_3 != 0)
        sub_1405c5570(&data_143f36918, 0)
        rcx_3 = data_143f36920:4.d
        rsi = data_143f36920.d

int32_t rax_13 = rsi + rdi_3.d
data_143f36920.d = rax_13

if (rax_13 s> rcx_3)
    sub_1405a4d70(&data_143f36918)

memset(data_143f36918 + (sx.q(rsi) << 3), 0, rdi_3 << 3)
int32_t rax_16 = rdi_3.d << 6

if (rax_12 != rax_16)
    *(data_143f36918 + (rdi_3 << 3) - 8) = -1 << (rax_12.b - rax_16.b + 0x40)

int64_t (* var_68)(int64_t* arg1, int32_t* arg2)
void* var_58

if (*(rbp_1 + 0x80) != 0)
    *(arg2 + 0x2c) = 0
    int32_t rcx_7 = *(rbp_1 + 0x80)
    void** var_60_1 = &var_58
    var_58 = arg1
    var_68 = sub_141cfc8b0
    void* var_50_1 = rbp_1
    uint64_t var_48_1 = rcx_2
    int64_t var_40_1 = rax_7
    sub_141cf54c0(rcx_7, arg1 + 0xe0, rcx_2, rax_7, 0, *(rbp_1 + 0x18), *(rbp_1 + 0x20), 
        *(rbp_1 + 0x24), &var_68)
    int32_t i = 0
    
    if (rdi_3.d != 0)
        do
            if (*(data_143f36918 + (sx.q(i) << 3)) != -1)
                *(arg2 + 0x2c) = 1
                break
            
            i += 1
        while (i u< rdi_3.d)

if (*(arg2 + 0x2c) == 1 && *(rbp_1 + 0x7c) != 0)
    *(arg2 + 0x2c) = 2
    int32_t rcx_8 = *(rbp_1 + 0x7c)
    void** var_60_2 = &var_58
    var_58 = arg1
    var_68 = sub_141cfc8b0
    void* var_50_2 = rbp_1
    uint64_t var_48_2 = rcx_2
    int64_t var_40_2 = rax_7
    sub_141cf54c0(rcx_8, arg1 + 0xe0, rcx_2, rax_7, 0, *(rbp_1 + 0x18), *(rbp_1 + 0x20), 
        *(rbp_1 + 0x24), &var_68)
    int32_t i_1 = 0
    
    if (rdi_3.d != 0)
        do
            if (*(data_143f36918 + (sx.q(i_1) << 3)) != -1)
                *(arg2 + 0x2c) = 1
                break
            
            i_1 += 1
        while (i_1 u< rdi_3.d)

int64_t rsi_2 = sx.q(arg3)
sub_141cf0e10(((zx.q(arg2[5].b) * 3 + sx.q(*(arg2 + 0x2c))) << 2) + 0x34 + rbp_1, arg1 + 0xb8, 
    rsi_2.d, *(rbp_1 + 0x20), *(rbp_1 + 0x24))
uint64_t result = zx.q(*(arg2 + 0x2c))

if (result.d != 0)
    if (result.d == 1)
        int32_t i_2 = data_143a21040
        result = 0
        
        if (i_2 s> 0)
            void* rcx_16 = arg1 + 0x168
            
            do
                if (*rcx_16 == 0)
                    if (result.d s>= 0)
                        int32_t j = *(arg1 + 0xb0)
                        
                        if (j s> 0)
                            do
                                int64_t rcx_17 = 5
                                int32_t* rax_35 = zx.q(rbx) * 0x98 + 0x74 + *(arg1 + 0xa8)
                                
                                while (true)
                                    if (*rax_35 != 0)
                                        sub_141cfabc0(arg1)
                                        goto label_141cfb99d
                                    
                                    if (rcx_17 == 0)
                                        break
                                    
                                    rcx_17 -= 1
                                    rax_35 -= 0xc
                                
                                rbx += 1
                            while (zx.d(rbx) s< j)
                    
                    break
                
                result = zx.q(result.d + 1)
                rcx_16 += 0x20
            while (result.d s< i_2)
    
label_141cfb99d:
    result.b = 0
else
    int64_t* rdx_11 = (sx.q(not.d(*(arg1 + 0xdc))) & rsi_2) * 0x30 + *(arg1 + 0xb8)
    
    if (*(rdx_11 + 0x2c) == 0)
        int64_t* rcx_15 = rdx_11[2]
        
        if (rdx_11[3] == rcx_15[2] && rsi_2.d == rcx_15[3].d && *rdx_11 == rcx_15[1])
            (*(*rcx_15 + 8))()
    
    result.b = 1

return result
