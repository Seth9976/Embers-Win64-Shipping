// 函数: sub_14242b990
// 地址: 0x14242b990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = arg1[0xb]
*arg1 = &data_14334ab70
int64_t r8 = *(r9 + 8)
int32_t rax = *r9
*r9 = 0
*(r9 + 8) = 0
int32_t var_48 = rax

if (sub_140a80f40() == 0)
    uint32_t rax_4
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
        void var_28
        int64_t* rax_7 = sub_1424304a0(&var_28, nullptr, 0xff)
        *(*rax_7 + 0x10) = var_48.o
        void* rcx_6 = *rax_7
        int64_t* rsi_1 = *(rcx_6 + 0x28)
        
        if (rsi_1 != 0)
            rsi_1[9].d += 1
        
        sub_140a064d0(rcx_6, rax_7[1], rax_7[2].d, 1)
        
        if (rsi_1 != 0)
            rsi_1[9].d -= 1
            
            if (rsi_1[9].d == 1)
                sub_140a2f6e0(rsi_1)
    else
        int128_t var_38 = var_48.o
        int64_t rdi_2 = var_38:8.q
        
        if (rdi_2 != 0)
            int64_t* rax_5 = sub_142006940()
            int64_t r8_3 = *rax_5
            (*(r8_3 + 0x138))(rax_5, rdi_2, r8_3)
        
        int64_t* rax_6 = sub_142006940()
        int64_t r8_4 = *rax_6
        (*(r8_4 + 0x148))(rax_6, &var_38, r8_4)
else
    if (r8 != 0)
        int64_t* rax_2 = sub_142006940()
        int64_t r8_1 = *rax_2
        (*(r8_1 + 0x138))(rax_2, r8, r8_1)
    
    int64_t* rax_3 = sub_142006940()
    int64_t r8_2 = *rax_3
    (*(r8_2 + 0x148))(rax_3, &var_48, r8_2)

j_sub_140a74f90(arg1[0xb])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
