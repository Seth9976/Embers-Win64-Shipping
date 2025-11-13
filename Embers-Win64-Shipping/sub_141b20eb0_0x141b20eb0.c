// 函数: sub_141b20eb0
// 地址: 0x141b20eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2c684 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c684)
    
    if (data_143f2c684 == 0xffffffff)
        sub_141a387d0(&data_143f2c680)
        _Init_thread_footer(&data_143f2c684)

int32_t rax_2 = arg1[1].d
int128_t zmm0 = *arg1
int64_t* rbx_1 = *(arg2 + 0x10)
int32_t rdi = data_143f2c680
int32_t var_38 = rdi
int128_t var_34 = zmm0
void* const r9_10

if (rbx_1[1].d == *(rbx_1 + 0x34))
label_141b2104b:
    r9_10 = nullptr
else
    int32_t rax_4 = sub_1405be5b0(&var_34)
    void* rdx = rbx_1[8]
    void* r8_2 = &rbx_1[7]
    int32_t r10_3 = (rax_4 - rdi) ^ rdi u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - r10_3 - rdi) ^ r10_3 << 8
    int32_t rdi_3 = (rdi - r9_3 - r10_3) ^ r9_3 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_3 - rdi_3) ^ rdi_3 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_6 - rdi_3) ^ r10_6 << 0x10
    int32_t rdi_6 = (rdi_3 - r9_6 - r10_6) ^ r9_6 u>> 5
    int32_t r10_9 = (r10_6 - r9_6 - rdi_6) ^ rdi_6 u>> 3
    int32_t r9_9 = (r9_6 - r10_9 - rdi_6) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8_2 = rdx
    
    int32_t rax_21 = *(r8_2
        + (((sx.q(rdi_6 - r9_9 - r10_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(rbx_1[9].d) - 1)) << 2))
    
    if (rax_21 == 0xffffffff)
    label_141b2104b_1:
        r9_10 = nullptr
    else
        int64_t r11_1 = *rbx_1
        
        while (true)
            int64_t r8_3 = sx.q(rax_21) * 5
            r9_10 = r11_1 + (r8_3 << 3)
            
            if (*(r11_1 + (r8_3 << 3)) == var_38 && *(r9_10 + 0x14) == rax_2 && ((*(r9_10 + 8)
                    ^ var_34:4.d) | (*(r9_10 + 0xc) ^ var_34:8.d) | (*(r9_10 + 0x10) ^ var_34:0xc.d)
                    | (*(r9_10 + 4) ^ var_34.d)) == 0)
                break
            
            rax_21 = *(r9_10 + 0x20)
            
            if (rax_21 == 0xffffffff)
                goto label_141b2104b_2
        
        if (rax_21 == 0xffffffff)
        label_141b2104b_2:
            r9_10 = nullptr

void* rax_22 = r9_10 + 0x18

if (r9_10 == 0)
    rax_22 = nullptr

if (rax_22 != 0)
    return *rax_22

void*** result_2 = j_sub_140a82f30(0xb10)
void*** result = result_2

if (result_2 == 0)
    result = nullptr
else
    result[1].w = 0
    *result = &data_143053310
    result[0x156] = 0
    result[0x158].d = 0
    *(result + 0xac4) = 2
    *(result + 0xad0) = data_143dbb0c0
    *(result + 0xae0) = data_143dbb0d0
    *(result + 0xaf0) = data_143dbb0e0
    result[0x160].d = 0
    *(result + 0xb04) = 0xffffffff
    result[0x161].d = 0

int64_t* rcx_9 = *(arg2 + 0x10)
void*** result_1 = result
sub_1405a7400(rcx_9, &var_38, &result_1)
void*** result_3 = result_1

if (result_3 != 0)
    void** r8_10 = *result_3
    (*r8_10)(result_3, 1, r8_10)

return result
