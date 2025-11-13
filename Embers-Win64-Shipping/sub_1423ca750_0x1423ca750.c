// 函数: sub_1423ca750
// 地址: 0x1423ca750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("QueueTicks")
void* rcx = *(arg1 + 8)
int32_t i_1 = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x20) = arg3.d
*(arg1 + 0x24) = arg4
*(arg1 + 0x2c) = 2
*(arg1 + 0x30) = arg2
*(arg1 + 0x38) = 1
sub_1423ca8e0(rcx)
sub_1423c0190(arg1, arg5)
int32_t r11 = 0
int32_t i = 0
int64_t* r9

if (*(arg1 + 0x18) s> 0)
    r9 = nullptr
    
    do
        int32_t r8_1 = 0
        int32_t zmm3 = (zx.o(0)).d
        void* rdx_1 = *(r9 + *(arg1 + 0x10))
        *(rdx_1 + 0x118) = 0
        *(rdx_1 + 0x110) = *(arg1 + 0x20)
        *(rdx_1 + 0x114) = *(arg1 + 0x24)
        *(rdx_1 + 0x11c) = 2
        *(rdx_1 + 0x120) = *(arg1 + 0x30)
        void* j = *(rdx_1 + 0x58)
        *(rdx_1 + 0x128) = 1
        
        while (j != 0)
            void* rcx_2 = *(j + 0x20)
            float zmm1_1 = *(rdx_1 + 0x110)
            arg3 = *(rcx_2 + 0x20)
            float zmm0_1 = arg3.d f+ zmm3
            
            if (zmm0_1 >= zmm1_1)
                arg3.d = arg3.d f- (zmm1_1 f- zmm3)
                *(rcx_2 + 0x20) = arg3.d
                break
            
            *(j + 0xb) = 1
            r8_1 += 1
            j = *(rcx_2 + 0x18)
            zmm3 = zmm0_1
        
        i += 1
        r9 = &r9[1]
        r11 += *(rdx_1 + 0x10) - *(rdx_1 + 0x3c) + r8_1
    while (i s< *(arg1 + 0x18))

r9.b = 3
sub_140b43e30("TicksQueued", data_143de7000, r11, r9.b)

if (*(arg1 + 0x18) s> 0)
    int64_t rbx_1 = 0
    
    do
        sub_1423c5f50(*(*(arg1 + 0x10) + rbx_1))
        i_1 += 1
        rbx_1 += 8
    while (i_1 s< *(arg1 + 0x18))

return sub_140b37f60("QueueTicks") __tailcall
