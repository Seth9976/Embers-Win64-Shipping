// 函数: sub_141fab120
// 地址: 0x141fab120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
int32_t rdx = 0

if (result == 0)
    return result

char rcx = (*(result + 0x4c)).b

if ((rcx & 0x40) != 0 && *(result + 0x54) == 0x20 && *(result + 0x58) == 0xff0000
        && *(result + 0x5c) == 0xff00 && *(result + 0x60) == 0xff)
    rdx = 2

if ((rcx & 4) != 0)
    int32_t rcx_1 = *(result + 0x50)
    
    if (rcx_1 == 0x31545844)
        return 5
    
    if (rcx_1 == 0x33545844)
        return 6
    
    if (rcx_1 == 0x35545844)
        return 7
    
    if (rcx_1 == 0x32495441 || rcx_1 == 0x53354342)
        rdx = 0x17
    else
        if (((rcx_1 - 0x53344342) & 0xfdffffff) == 0)
            return 0x27
        
        if (rcx_1 == 0x71)
            return 0xa
        
        if (rcx_1 == 0x30315844)
            int32_t* rax_1 = arg1[1]
            
            if (rax_1 != 0)
                uint64_t rax_3 = zx.q(*rax_1 - 0xa)
                
                if (rax_3.d u<= 0x53)
                    switch (rax_3)
                        case 0
                            return 0xa
                        case 0x3d, 0x3e
                            return 5
                        case 0x40, 0x41
                            return 6
                        case 0x43, 0x44
                            return 7
                        case 0x46, 0x47
                            return 0x27
                        case 0x49, 0x4a
                            rdx = 0x17
                        case 0x4d, 0x4e, 0x51, 0x53
                            return 2

return zx.q(rdx)
