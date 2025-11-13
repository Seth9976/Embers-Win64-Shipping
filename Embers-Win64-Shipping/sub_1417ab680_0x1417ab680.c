// 函数: sub_1417ab680
// 地址: 0x1417ab680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14177c490(arg1 + 0x110, arg2)
char r8 = *(arg2 + 0xc)
int32_t rdi = 0
int64_t* rax = nullptr

if (r8 u>= 2)
    rax = arg2

int64_t* result

if (rax == 0 || *(sx.q(rax[1].d) + *(*rax + 0x368)) == 0)
label_1417ab735:
    int32_t rbx_1 = *(*(*arg2 + 0x50) + (sx.q(arg2[1].d) << 2))
    int128_t* rax_5 = sub_1417ae350(arg1 + 0x290, rbx_1)
    int64_t r8_2 = sx.q(arg2[1].d)
    void* rax_6 = *arg2
    int32_t r9_1 = 0
    int64_t* var_30_1 = arg2
    int32_t r10_1 = 0
    int64_t var_1c_1 = 0
    int32_t r11_1 = 0
    int64_t var_24_1 = 0
    int64_t rax_7 = *(rax_6 + 0xf8)
    int64_t rcx_8 = r8_2 * 3
    void* rdx_8 = rax_7 + (rcx_8 << 3)
    void* rax_8 = *(rax_7 + (rcx_8 << 3) + 8)
    void* rcx_9 = rdx_8
    
    if (rax_8 != 0)
        rcx_9 = rax_8
    
    void* rdx_9 = rcx_9 + (sx.q(*(rdx_8 + 0x10)) << 3)
    
    if (rcx_9 != rdx_9)
        do
            int64_t rax_10 = *rcx_9
            rcx_9 += 8
            rdi |= *(rax_10 + 0xc)
            r11_1 |= *rax_10
            r10_1 |= *(rax_10 + 4)
            r9_1 |= *(rax_10 + 8)
            var_1c_1:4.d = rdi
        while (rcx_9 != rdx_9)
        
        var_1c_1.d = r9_1
        var_24_1:4.d = r10_1
        var_24_1.d = r11_1
    
    char var_14_1 = 1
    int128_t zmm1_1 = (*(*(rax_6 + 0x50) + (r8_2 << 2))).o
    *rax_5 = (*(*(rax_6 + 0xe0) + (r8_2 << 3))).o
    rax_5[1] = zmm1_1
    rax_5[2].q = var_1c_1
    *(rax_5 + 0x28) = *(*(*arg2 + 0x170) + (sx.q(arg2[1].d) << 1))
    int128_t* rax_13 = sub_1417ae350(arg1 + 0x2b0, rbx_1)
    *rax_13 = *rax_5
    rax_13[1] = rax_5[1]
    rax_13[2] = rax_5[2]
    result = sub_1417ae350(arg1 + 0x2d0, rbx_1)
    *result = *rax_5
    *(result + 0x10) = rax_5[1]
    *(result + 0x20) = rax_5[2]
else
    result = nullptr
    
    if (r8 u>= 3)
        result = arg2
    
    if (result != 0)
        int64_t** r8_1 = *(*(*result + 0x428) + sx.q(result[1].d) * 0x10)
        
        if (r8_1 == 0)
            goto label_1417ab735
        
        int64_t** rax_3 = nullptr
        
        if (*(r8_1 + 0xc) u>= 3)
            rax_3 = r8_1
        
        if (rax_3 == 0)
            goto label_1417ab735
        
        result = *rax_3
        
        if (*(sx.q(rax_3[1].d) + result[0x8e]) != 0)
            goto label_1417ab735

return result
