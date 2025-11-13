// 函数: sub_14102c1f0
// 地址: 0x14102c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x11c) != 0)
    if (arg1[0x76f].b != 0)
        void* r8_1 = arg1[0x76e]
        
        if (r8_1 != 0 && data_1439c7a34 u> 1)
            while (*(r8_1 + 0x18) != arg1[0x27])
                r8_1 = *(r8_1 + 0x20)
                
                if (r8_1 == 0)
                    break
        
        sub_14101efc0(arg1[0x27] + 0x520, arg1, r8_1)
        arg1[0x76f].b = 0
    
    sub_14101f080(arg1[0x27] + 0x520, arg1)

int64_t i = 0
void* rdi = &arg1[2]

do
    int64_t rdx_3 = *(rdi - 8)
    
    if (rdx_3 == 0)
        break
    
    int64_t r8_2 = *rdi
    
    if (r8_2 != 0)
        (*(*arg1 + 0x118))(arg1, rdx_3, r8_2, &arg1[0x1c])
    
    i += 1
    rdi += 0x18
while (i s< 8)

int64_t rdx_4 = arg1[0x19]

if (rdx_4 == 0)
    return 

int64_t r8_3 = arg1[0x1a]

if (r8_3 != 0)
    (*(*arg1 + 0x118))(arg1, rdx_4, r8_3, &arg1[0x1c])
