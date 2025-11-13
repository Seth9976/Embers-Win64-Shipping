// 函数: sub_140e147d0
// 地址: 0x140e147d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int64_t* rax
int512_t zmm0
int128_t zmm6_1
rax, zmm0, zmm6_1 = sub_140e1ad30(&var_28, arg2, arg3)
int64_t rbx = *rax
void* const rcx_4

if (*(arg1 + 0x88) == *(arg1 + 0xb4))
labelid_7:
    rcx_4 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = arg1 + 0xb8
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0xc8)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140e14870:
        rcx_4 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x80)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_5) * 5
            rcx_4 = r8_1 + (rdx_3 << 2)
            
            if (*(r8_1 + (rdx_3 << 2)) == rbx)
                break
            
            rax_5 = *(rcx_4 + 0xc)
            
            if (rax_5 == 0xffffffff)
                goto label_140e14870_1
        
        if (rax_5 == 0xffffffff)
        label_140e14870_1:
            rcx_4 = nullptr

void* result = rcx_4 + 8

if (rcx_4 == 0)
    result = nullptr

if (result == 0)
    zmm0.o = zmm6_1
else
    zmm0.o = *result

return result
