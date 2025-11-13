// 函数: sub_1418dab80
// 地址: 0x1418dab80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efb518)
TEB* gsbase

if (data_143efb624 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efb624)
    
    if (data_143efb624 == 0xffffffff)
        atexit(sub_142ced700)
        _Init_thread_footer(&data_143efb624)

int32_t rax_2 = sub_140b21160(arg1, 0x2c, 0)
bool cond:0 = data_1439c72a8 == data_1439c72d4
int64_t r9 = sx.q(rax_2)
int32_t arg_10 = r9.d
void* rdx_4

if (cond:0)
labelid_7:
    rdx_4 = nullptr
else
    void* rdx_2 = data_1439c72e0
    void* rcx_2 = &data_1439c72d8
    
    if (rdx_2 != 0)
        rcx_2 = rdx_2
    
    int32_t rax_3 = *(rcx_2 + (((sx.q(data_1439c72e8) - 1) & r9) << 2))
    
    if (rax_3 == 0xffffffff)
    label_1418dac43:
        rdx_4 = nullptr
    else
        int64_t r8_4 = data_1439c72a0
        int64_t rcx_4
        
        while (true)
            rcx_4 = sx.q(rax_3) * 2
            
            if (*(r8_4 + (rcx_4 << 3)) == r9.d)
                break
            
            rax_3 = *(r8_4 + (rcx_4 << 3) + 8)
            
            if (rax_3 == 0xffffffff)
                goto label_1418dac43_1
        
        rdx_4 = r8_4 + (rcx_4 << 3)
        
        if (rax_3 == 0xffffffff)
        label_1418dac43_1:
            rdx_4 = nullptr

int32_t* rax_4 = rdx_4 + 4

if (rdx_4 == 0)
    rax_4 = nullptr

if (rax_4 == 0)
    int32_t rax_5 = data_1439c72f0
    int32_t arg_8 = rax_5
    data_1439c72f0 = rax_5 + 1
    rax_4 = sub_140d42420(&data_1439c72a0, &arg_10, &arg_8)

*(arg1 + 0x44) = *rax_4
return LeaveCriticalSection(&data_143efb518) __tailcall
