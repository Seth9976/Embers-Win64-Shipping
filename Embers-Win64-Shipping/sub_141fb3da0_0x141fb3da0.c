// 函数: sub_141fb3da0
// 地址: 0x141fb3da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r10 = *arg1
int32_t r9 = 1
int32_t rax = *(r10 + 0x18)

if (rax != 0)
    r9 = rax

int32_t r8 = 0

if (r10 != 0)
    char rax_1 = (*(r10 + 0x4c)).b
    
    if ((rax_1 & 0x40) != 0 && *(r10 + 0x54) == 0x20 && *(r10 + 0x58) == 0xff0000
            && *(r10 + 0x5c) == 0xff00 && *(r10 + 0x60) == 0xff)
        r8 = 2
    
    if ((rax_1 & 4) != 0)
        int32_t rcx = *(r10 + 0x50)
        
        if (rcx == 0x31545844)
            r8 = 5
        else if (rcx == 0x33545844)
            r8 = 6
        else if (rcx == 0x35545844)
            r8 = 7
        else if (rcx == 0x32495441 || rcx == 0x53354342)
            r8 = 0x17
        else if (((rcx - 0x53344342) & 0xfdffffff) == 0)
            r8 = 0x27
        else if (rcx == 0x71)
            r8 = 0xa
        else if (rcx == 0x30315844)
            int32_t* rax_3 = arg1[1]
            
            if (rax_3 != 0)
                uint64_t rax_5 = zx.q(*rax_3 - 0xa)
                
                if (rax_5.d u<= 0x53)
                    switch (rax_5)
                        case 0
                            r8 = 0xa
                        case 0x3d, 0x3e
                            r8 = 5
                        case 0x40, 0x41
                            r8 = 6
                        case 0x43, 0x44
                            r8 = 7
                        case 0x46, 0x47
                            r8 = 0x27
                        case 0x49, 0x4a
                            r8 = 0x17
                        case 0x4d, 0x4e, 0x51, 0x53
                            r8 = 2
else
    r10 = nullptr

int32_t rax_7 = sub_141998570(*(r10 + 0xc), *(r10 + 8), r8, r9)
int64_t rdx_1 = 0x90

if (arg1[1] == 0)
    rdx_1 = 0x7c

return zx.q(rax_7 * arg2) + rdx_1 + *arg1
