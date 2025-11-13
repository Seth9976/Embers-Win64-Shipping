// 函数: sub_141402550
// 地址: 0x141402550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0x220)

if (rbx == 0)
    return 

void* rax_2 = (*(*arg1 + 0x240))()
int128_t zmm6 = *(arg2 + 0x20c)
int128_t zmm7 = *(arg2 + 0x208)
int32_t var_5c_1 = zmm6.d
int128_t zmm8 = *(rax_2 + 0x520)
int32_t var_60_1 = zmm8.d
int32_t zmm0

if (sub_140a80f40() == 0)
    uint32_t rax_4
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
        void var_50
        int64_t* rax_5 = sub_1413dc050(&var_50, nullptr, 0xff)
        void* rcx_1 = *rax_5
        *(rcx_1 + 0x10) = rbx.o
        *(rcx_1 + 0x20) = zmm7.d.q
        void* rcx_2 = *rax_5
        int32_t r8_1 = rax_5[2].d
        int64_t* rdx = rax_5[1]
        int64_t* rbx_1 = *(rcx_2 + 0x30)
        int64_t* arg_18 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_18
        
        sub_140778000(rcx_2, rdx, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax = *rdi_1
            *rdi_1 -= 1
            
            if (rax == 1)
                sub_140a2f6e0(arg_18)
    else if (zmm7.d f<= 0f)
        *(rbx + 0x4c) = 0x3f800000
        *(rbx + 0x54) = 0
    else
        zmm6.d = zmm6.d f+ zmm8.d
        zmm0 = 1f f/ zmm7.d
        zmm6.d = zmm6.d f* zmm0
        *(rbx + 0x4c) = zmm0
        *(rbx + 0x54) = (zmm6 ^ data_142d3f780).d
else if (zmm7.d f<= 0f)
    *(rbx + 0x4c) = 0x3f800000
    *(rbx + 0x54) = 0
else
    zmm0 = 1f f/ zmm7.d
    zmm6.d = zmm6.d f+ zmm8.d
    zmm6.d = zmm6.d f* zmm0
    zmm6 ^= data_142d3f780
    *(rbx + 0x4c) = zmm0
    *(rbx + 0x54) = zmm6.d
