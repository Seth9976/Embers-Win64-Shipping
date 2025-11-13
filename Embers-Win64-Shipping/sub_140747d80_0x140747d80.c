// 函数: sub_140747d80
// 地址: 0x140747d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0xc))).d f* *(*arg1 + 0x1d0)
zmm1.d = zmm1.d f* 0.00200000009f
zmm1.d = zmm1.d f- 0.5f
void*** rax_3 = j_sub_140a82f30(0x40)
void*** rsi = rax_3

if (rax_3 == 0)
    rsi = nullptr
else
    void* rcx = *arg1
    int64_t rbx_1 = *(rcx + 0x1c0)
    *rsi = &data_142d9efb0
    rsi[1].d = 0
    *(rsi + 0xc) = 0
    sub_141c33270(rcx + 0x118, &rsi[2], int.d(zmm1.d) s>> 1 << 3, 0x3f800000)
    rsi[5].d = rdi.d
    rsi[6] = rbx_1
    rsi[7].b = 0

void* rbx_2 = *arg1
int32_t var_28
sub_140598750(rbx_2 + 0xc8, &var_28)
int32_t rax_4 = var_28
int32_t* var_20
*var_20 = rdi.d
*(var_20 + 8) = rsi
var_20[4] = 0xffffffff
void arg_8
sub_140753180(rbx_2 + 0xc8, &arg_8, *var_20, var_20, rax_4, nullptr)
void* r9_1 = *arg1
void* const rcx_6

if (*(r9_1 + 0xd0) == *(r9_1 + 0xfc))
label_140747ee0:
    rcx_6 = nullptr
else
    void* r8_2 = r9_1 + 0x100
    void* rcx_4 = *(r8_2 + 8)
    
    if (rcx_4 != 0)
        r8_2 = rcx_4
    
    int32_t rax_6 = *(r8_2 + (((sx.q(*(r9_1 + 0x110)) - 1) & rdi) << 2))
    
    if (rax_6 == 0xffffffff)
    label_140747ee0_1:
        rcx_6 = nullptr
    else
        int64_t r8_3 = *(r9_1 + 0xc8)
        
        while (true)
            int64_t rdx_7 = sx.q(rax_6) * 3
            rcx_6 = r8_3 + (rdx_7 << 3)
            
            if (*(r8_3 + (rdx_7 << 3)) == rdi.d)
                break
            
            rax_6 = *(rcx_6 + 0x10)
            
            if (rax_6 == 0xffffffff)
                goto label_140747ee0_2
        
        if (rax_6 == 0xffffffff)
        label_140747ee0_2:
            rcx_6 = nullptr

return sub_140771e80(*(rcx_6 + 8)) __tailcall
