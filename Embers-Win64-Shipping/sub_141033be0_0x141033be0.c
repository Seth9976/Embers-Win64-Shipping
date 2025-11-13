// 函数: sub_141033be0
// 地址: 0x141033be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x18))()

if (arg2 u> rax_1)
    return 0xffffffff

int32_t result = arg1[0xa].d
int32_t r10 = result + arg2

if (arg1[0xe].b != 0 && r10 u> rax_1)
    result = 0
    *(arg1 + 0x54) = arg2
    r10 = arg2
    
    if (arg1[0xc].d == 1)
        void* r9_1 = arg1[4]
        int32_t i = 0
        
        if (*(r9_1 + 0x208) s> 0)
            int64_t rdx = 0
            
            do
                rdx += 0x30
                i += 1
                *(rdx + *(r9_1 + 0x200) - 0x30) = 0
            while (i s< *(r9_1 + 0x208))

arg1[0xa].d = r10
return result
