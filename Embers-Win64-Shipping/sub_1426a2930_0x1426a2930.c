// 函数: sub_1426a2930
// 地址: 0x1426a2930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
void* rdx = *(arg1 + 0xc0)
void* const rsi

if (rdx == 0 || arg3 == 0xff)
    rsi = nullptr
else
    char rax_1 = *(rdx + 0x4c)
    
    if (arg3 u< rax_1)
        void* rcx_3 = *(rdx + 0x30)
        
        if (rcx_3 == 0)
            rsi = nullptr
        else
            rsi = sub_1426b21a0(rcx_3, arg3)
    else
        rsi = *(rdx + 0x38) + (zx.q(arg3) - zx.q(rax_1)) * 0x18

int32_t rax_11
int64_t zmm0

if (rsi == 0)
    zmm0 = data_143f720e0
    rax_11 = data_143f720e8
else
    void* rbx_1 = *(rsi + 8)
    
    if (rbx_1 == 0)
        zmm0 = data_143f720e0
        rax_11 = data_143f720e8
    else if (*(rbx_1 + 0x10) != sub_14272e8c0())
        zmm0 = data_143f720e0
        rax_11 = data_143f720e8
    else
        if (*(arg1 + 0xd0) != 0 && zx.d(arg3) s< *(arg1 + 0xe0))
            r14 = zx.q(*(*(arg1 + 0xd8) + (zx.q(arg3) << 1))) + *(arg1 + 0xc8)
        
        int64_t* rcx_5 = r14 + ((zx.q(*(*(rsi + 8) + 0x2b) u>> 1) & 1) << 2)
        int32_t rax_10
        
        if (rcx_5 == 0)
            zmm0 = data_143f720e0
            rax_10 = data_143f720e8
        else
            zmm0 = *rcx_5
            rax_10 = rcx_5[1].d
        
        rax_11 = rax_10

*arg2 = zmm0
arg2[1].d = rax_11
return arg2
