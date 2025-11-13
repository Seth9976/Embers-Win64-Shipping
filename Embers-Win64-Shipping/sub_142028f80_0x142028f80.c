// 函数: sub_142028f80
// 地址: 0x142028f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_5 = arg1
void* result_3 = arg1
TEB* gsbase

if (data_143f407bc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f407bc)
    
    if (data_143f407bc == 0xffffffff)
        atexit(sub_142d00470)
        _Init_thread_footer(&data_143f407bc)
    
    result_3 = result_5

void* rdi = nullptr
void* result
void* rcx_5

if (data_143a2e168 == data_143a2e194)
label_14202904a:
    rcx_5 = nullptr
else
    result = result_3
    int32_t rax_4 = sub_140b5ead0(result_3.d) + result:4.d
    void* rcx_3 = data_143a2e1a0
    void* rax_6 = &data_143a2e198
    
    if (rcx_3 != 0)
        rax_6 = rcx_3
    
    int32_t rax_7 = *(rax_6 + (((sx.q(data_143a2e1a8) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_14202904a_1:
        rcx_5 = nullptr
    else
        int64_t r8_1 = data_143a2e160
        int64_t rdx_5
        
        while (true)
            rdx_5 = sx.q(rax_7) * 0x18
            
            if (*(rdx_5 + r8_1) == result_3)
                break
            
            rax_7 = *(rdx_5 + r8_1 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_14202904a_2
        
        rcx_5 = rdx_5 + r8_1
        
        if (rax_7 == 0xffffffff)
        label_14202904a_2:
            rcx_5 = nullptr

int64_t* rax_8 = rcx_5 + 8

if (rcx_5 == 0)
    rax_8 = nullptr

if (rax_8 != 0)
    return *rax_8

int64_t var_18
int64_t* rax_9 = sub_140b63b70(&result_5, &var_18)
int16_t* rsi

if (rax_9[1].d == 0)
    rsi = &data_142d40450
else
    rsi = *rax_9

void* rax_10 = sub_140cde0b0()
void* result_1 = sub_140d2ee50(sub_142489010(), rax_10, rsi, 0)
int64_t rcx_8 = var_18
result = result_1

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

if (result_1 == 0)
    void* result_4 = result_5
    result = result_4
    void* rax_12 = sub_140cde0b0()
    char rax_13 = sub_140b5b8a0(result_4.d, 0)
    int32_t rcx_9
    rcx_9.b = result:4.d == 0
    
    if ((rcx_9.b & rax_13) != 0)
        sub_140d19010(rax_12, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* result_2 = sub_140d2dfc0(sub_142489010(), rax_12, result_4, 0, 0, 0, 0, 0, 0)
    result = result_2
    int32_t rax_15 = *(result_2 + 0xc)
    
    if (rax_15 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_15)
        uint32_t rdx_10 = zx.d(temp0_1)
        int32_t rax_17 = temp1_1 + rdx_10
        rdi =
            *(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3)) + sx.q(zx.d(rax_17.w) - rdx_10) * 0x18
    
    *(rdi + 8) |= 0x40000000

sub_1405a7750(&data_143a2e160, &result_5, &result)
return result
