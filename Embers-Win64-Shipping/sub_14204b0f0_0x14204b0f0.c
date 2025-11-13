// 函数: sub_14204b0f0
// 地址: 0x14204b0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1]
int32_t rdx = *arg1

if (rdx == 1)
    if (sub_142066820(arg2, 0x200, rbp) == 0)
        return sub_142067990(arg2, 0x200, rbp) __tailcall
else if (rdx == 2)
    if (sub_142066820(arg2, 0x100000, rbp) == 0)
        return sub_142067990(arg2, 0x100000, rbp) __tailcall
else if (rdx == 3)
    int32_t i = 0x10
    int32_t rdi_4 = 0x10
    
    while (true)
        if (sub_142066820(arg2, rdi_4, rbp) == 0)
            sub_142067990(arg2, rdi_4, rbp)
            break
        
        rdi_4 *= 2
        
        if (rdi_4 s> 0x100000)
            do
                if (sub_142066820(arg2, i - 1, rbp) == 0)
                    sub_142067990(arg2, i - 1, rbp)
                    break
                
                i *= 2
            while (i s<= 0x100000)
            
            break
else if (rdx == 4)
    for (int32_t i_1 = 0; i_1 s< 0x3e8; i_1 += 1)
        float zmm0_1
        float zmm6_1
        zmm0_1, zmm6_1 = sub_140a50670()
        int32_t rdi_3 = (int.d(zmm0_1 * zmm6_1) + 0x1f) & 0xfffffff0
        
        if (sub_142066820(arg2, rdi_3, rbp) == 0)
            sub_142067990(arg2, rdi_3, rbp)
            break
