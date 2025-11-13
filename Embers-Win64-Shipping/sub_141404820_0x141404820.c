// 函数: sub_141404820
// 地址: 0x141404820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg2 + 0x290)
float zmm6[0x4] = zx.o(0)
int128_t zmm7 = *(arg2 + 0x288)
int128_t zmm8 = *(arg2 + 0x28c)

if (not(zmm0[0] < 0f))
    zmm6 = __minss_xmmss_memss(zmm0[0], 0x3f800000)

int32_t var_60 = zmm7.d
int32_t var_5c = zmm8.d
float var_58 = zmm6[0]
char rax = sub_140a80f40()
int32_t result

if (rax != 0)
label_1414048ac:
    result = sub_1419a2d00()
    *(arg1 + 0x6318) = zmm7.d
    *(arg1 + 0x631c) = zmm8.d
    *(arg1 + 0x6320) = zmm6[0]
else
    if (data_143f138f4 == rax)
        if (data_143de5480 == rax)
            goto label_1414048ac
        
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b != 0)
            goto label_1414048ac
    
    void var_50
    int64_t* rax_2 = sub_1413de270(&var_50, nullptr, 0xff)
    void* rcx_1 = *rax_2
    *(rcx_1 + 0x10) = arg1.o
    *(rcx_1 + 0x20) = var_58.q
    void* rcx_2 = *rax_2
    int32_t r8_1 = rax_2[2].d
    int64_t* rdx = rax_2[1]
    int64_t* rbx_1 = *(rcx_2 + 0x30)
    int64_t* arg_10 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_140778000(rcx_2, rdx, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)

return result
