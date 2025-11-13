// 函数: sub_1423f71c0
// 地址: 0x1423f71c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rsi) << 2))
    
    if (i != 0xffffffff)
        int64_t r8 = *arg1
        
        do
            int64_t rdx = sx.q(i) * 5
            void* rcx_1 = r8 + (rdx << 3)
            
            if (*(r8 + (rdx << 3)) == *arg3)
                if (i != 0xffffffff && rcx_1 != 0)
                    return rcx_1 + 8
                
                break
            
            i = *(rcx_1 + 0x20)
        while (i != 0xffffffff)

int64_t* arg_20 = arg3
int32_t arg_8
sub_1423f6f10(arg1, &arg_8, rsi.d, &arg_20, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 8
