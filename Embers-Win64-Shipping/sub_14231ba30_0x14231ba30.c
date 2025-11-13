// 函数: sub_14231ba30
// 地址: 0x14231ba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = sub_141f64a80(arg1)

if (result == 0)
    return result

int32_t i = 0

if (arg1[0x101].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rsi_1 = *(r14_1 + arg1[0x100])
        
        if (rsi_1 != 0)
            void* rax_1 = sub_140d3c6e0(rsi_1 + 0x100)
            
            if (rax_1 != 0 && (arg3 == 0 || *(rax_1 + 0x88) == 0))
                *(rsi_1 + 0xcc) = arg2.d
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[0x101].d)

*(arg1 + 0x719) &= 0xbf
sub_141f4dc50(arg1, arg4)
return sub_141f4d2c0(arg1)
