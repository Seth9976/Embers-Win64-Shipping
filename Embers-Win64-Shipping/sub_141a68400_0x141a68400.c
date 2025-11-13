// 函数: sub_141a68400
// 地址: 0x141a68400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2a900 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2a900)
    
    if (data_143f2a900 == 0xffffffff)
        int32_t rax_25 = data_143f2a8f8 + 1
        data_143f2a8f8 = rax_25
        data_143f2a8fc = rax_25
        _Init_thread_footer(&data_143f2a900)

int32_t rdi = data_143f2a8fc
int64_t* rbx = *(arg1 + 0x10)
int64_t var_50 = 0
int32_t var_40 = rdi
int32_t var_2c = 0
int128_t var_3c = 0.o

if (arg2 == 0)
    return sub_141a614d0(rbx, &var_40)

int32_t rax_2 = rbx[1].d
void* const rdx_2

if (rax_2 == *(rbx + 0x34))
label_141a685ad:
    rdx_2 = nullptr
else
    int32_t rax_3 = sub_1405be5b0(&var_3c)
    void* rdx = rbx[8]
    void* r8_2 = &rbx[7]
    int32_t r10_3 = (rax_3 - rdi) ^ rdi u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - r10_3 - rdi) ^ r10_3 << 8
    int32_t rdi_3 = (rdi - r9_3 - r10_3) ^ r9_3 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_3 - rdi_3) ^ rdi_3 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_6 - rdi_3) ^ r10_6 << 0x10
    int32_t rdi_6 = (rdi_3 - r9_6 - r10_6) ^ r9_6 u>> 5
    int32_t r10_9 = (r10_6 - r9_6 - rdi_6) ^ rdi_6 u>> 3
    int32_t r9_9 = (r9_6 - r10_9 - rdi_6) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8_2 = rdx
    
    rax_2 =
        *(r8_2 + (((sx.q(rdi_6 - r9_9 - r10_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(rbx[9].d) - 1)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_141a685ad_1:
        rdx_2 = nullptr
    else
        int64_t r11_1 = *rbx
        
        while (true)
            int64_t r8_3 = sx.q(rax_2) * 5
            rdx_2 = r11_1 + (r8_3 << 3)
            
            if (*(r11_1 + (r8_3 << 3)) == var_40 && *(rdx_2 + 0x14) == var_2c && ((*(rdx_2 + 8)
                    ^ var_3c:4.d) | (*(rdx_2 + 0xc) ^ var_3c:8.d) | (*(rdx_2 + 0x10) ^ var_3c:0xc.d)
                    | (*(rdx_2 + 4) ^ var_3c.d)) == 0)
                break
            
            rax_2 = *(rdx_2 + 0x20)
            
            if (rax_2 == 0xffffffff)
                goto label_141a685ad_2
        
        if (rax_2 == 0xffffffff)
        label_141a685ad_2:
            rdx_2 = nullptr

void* rbx_2 = rdx_2 + 0x18

if (rdx_2 == 0)
    rbx_2 = nullptr

if (rbx_2 != 0)
    *(*rbx_2 + 8) = arg2
    return rax_2

void*** rax_20 = j_sub_140a82f30(0x10)
void*** rbx_4 = rax_20

if (rax_20 == 0)
    rbx_4 = nullptr
else
    rbx_4[1].b = 0
    *rbx_4 = &data_142d40488

int64_t* rcx_9 = *(arg1 + 0x10)
void*** arg_18 = rbx_4
int64_t rax_21 = sub_1405a7400(rcx_9, &var_40, &arg_18)
void*** rcx_10 = arg_18

if (rcx_10 != 0)
    rax_21 = (**rcx_10)(rcx_10, 1)

rbx_4[1].b = arg2
return rax_21
