// 函数: sub_142b6ae40
// 地址: 0x142b6ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
int64_t r9 = 0

while (true)
    char r8_1 = arg1[r9]
    r9 += 1
    
    if (r8_1 != *(r9 + 0x14367aac3))
        do
            char rcx = arg1[i]
            i += 1
            
            if (rcx != *(i + 0x14367aacf))
                abort()
                noreturn
        while (i != 8)
        
        data_144016ee8 = sub_142b6ab90(nullptr, "nfkc_cf", arg2)
        break
    
    if (r9 == 5)
        data_144016ed8 = sub_142b6ab90(nullptr, "nfkc", arg2)
        break

return sub_142a7db20(0xa, sub_142b6b1a0) __tailcall
