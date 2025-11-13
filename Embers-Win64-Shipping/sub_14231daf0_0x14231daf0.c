// 函数: sub_14231daf0
// 地址: 0x14231daf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0
zmm0.o = zx.o(0)
int64_t rsi
rsi.b = arg2.d f> 0f
int32_t i = 0
int64_t arg_8 = 0
char* result = (*(*arg1 + 0x3e8))(zmm0, 0)

if (rsi.b != result.b)
    result = (*(*arg1 + 0x588))(arg1, zx.q(rsi.b))

if (not(arg2.d f>= 1f))
    *(arg1 + 0x719) &= 0xbf
    result = sub_141f64a80(arg1)
    
    if (result != 0)
        if (arg1[0x101].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                void* rsi_1 = *(r14_1 + arg1[0x100])
                
                if (rsi_1 != 0)
                    void* rax_3 = sub_140d3c6e0(rsi_1 + 0x100)
                    
                    if (rax_3 != 0 && *(rax_3 + 0x88) == 0)
                        *(rsi_1 + 0xcc) = arg2.d
                
                i += 1
                r14_1 = &r14_1[1]
            while (i s< arg1[0x101].d)
        
        *(arg1 + 0x719) &= 0xbf
        sub_141f4dc50(arg1, zmm0)
        return sub_141f4d2c0(arg1)

return result
