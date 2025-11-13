// 函数: sub_141b1d960
// 地址: 0x141b1d960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2c73c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c73c)
    
    if (data_143f2c73c == 0xffffffff)
        sub_141a387d0(&data_143f2c738)
        _Init_thread_footer(&data_143f2c73c)

int64_t* rdi_1 = *(arg2 + 0x10)
void* rbx = nullptr
int32_t rsi = data_143f2c738
int32_t var_20 = 0
int64_t var_40 = 0
int128_t var_30 = 0.o
void* const rdx_2

if (rdi_1[1].d == *(rdi_1 + 0x34))
label_141b1db0d:
    rdx_2 = nullptr
else
    int32_t rax_3
    rax_3, arg4 = sub_1405be5b0(&var_30)
    void* rdx = rdi_1[8]
    void* r8 = &rdi_1[7]
    int32_t r10_3 = (rax_3 - rsi) ^ rsi u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - r10_3 - rsi) ^ r10_3 << 8
    int32_t rsi_3 = (rsi - r9_3 - r10_3) ^ r9_3 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_3 - rsi_3) ^ rsi_3 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_6 - rsi_3) ^ r10_6 << 0x10
    int32_t rsi_6 = (rsi_3 - r9_6 - r10_6) ^ r9_6 u>> 5
    int32_t r10_9 = (r10_6 - r9_6 - rsi_6) ^ rsi_6 u>> 3
    int32_t r9_9 = (r9_6 - r10_9 - rsi_6) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_20 =
        *(r8 + (((sx.q(rsi_6 - r9_9 - r10_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(rdi_1[9].d) - 1)) << 2))
    
    if (rax_20 == 0xffffffff)
    label_141b1db0d_1:
        rdx_2 = nullptr
    else
        int64_t r11_1 = *rdi_1
        
        while (true)
            int64_t r8_1 = sx.q(rax_20) * 5
            rdx_2 = r11_1 + (r8_1 << 3)
            
            if (*(r11_1 + (r8_1 << 3)) == rsi && *(rdx_2 + 0x14) == var_20 && ((*(rdx_2 + 8)
                    ^ var_30:4.d) | (*(rdx_2 + 0xc) ^ var_30:8.d) | (*(rdx_2 + 0x10) ^ var_30:0xc.d)
                    | (*(rdx_2 + 4) ^ var_30.d)) == 0)
                break
            
            rax_20 = *(rdx_2 + 0x20)
            
            if (rax_20 == 0xffffffff)
                goto label_141b1db0d_2
        
        if (rax_20 == 0xffffffff)
        label_141b1db0d_2:
            rdx_2 = nullptr

void* result = rdx_2 + 0x18

if (rdx_2 == 0)
    result = nullptr

if (result != 0)
    rbx = *result

if (rbx == 0)
    return result

return sub_141b05910(rbx, arg3, arg4)
