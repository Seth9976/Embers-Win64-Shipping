// 函数: sub_1418692e0
// 地址: 0x1418692e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x29)
int64_t arg_8

if ((r8 & 1) != 0)
    arg_8 = 0
    *arg2 = 0
    return arg1

int64_t* rcx = arg1[1]
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int64_t* rdx_1 = &arg_8
    
    if ((r8 & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    arg_8.d = *rdx
    *rcx += 4

if (arg1[0x15].d != *(arg1 + 0xd4))
    void* r8_1 = &arg1[0x1b]
    void* rcx_2 = *(r8_1 + 8)
    int64_t r10_1 = sx.q(arg_8.d)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t i_1 = *(r8_1 + (((sx.q(arg1[0x1d].d) - 1) & r10_1) << 2))
    int32_t i = i_1
    
    if (i_1 != 0xffffffff)
        int64_t r9_1 = arg1[0x14]
        
        do
            int64_t r8_2 = sx.q(i) * 5
            
            if (*(r9_1 + (r8_2 << 2)) == r10_1.d)
                if (i == 0xffffffff)
                    break
                
                void* const r8_3
                
                if (i_1 == 0xffffffff)
                    r8_3 = nullptr
                else
                    while (true)
                        int64_t rdx_6 = sx.q(i_1) * 5
                        r8_3 = r9_1 + (rdx_6 << 2)
                        
                        if (*(r9_1 + (rdx_6 << 2)) == r10_1.d)
                            break
                        
                        i_1 = *(r8_3 + 0xc)
                        
                        if (i_1 == 0xffffffff)
                            *arg2 = *4
                            return arg1
                    
                    if (i_1 == 0xffffffff)
                        r8_3 = nullptr
                
                *arg2 = *(r8_3 + 4)
                return arg1
            
            i = *(r9_1 + (r8_2 << 2) + 0xc)
        while (i != 0xffffffff)

arg_8 = 0
*arg2 = 0
*(arg1 + 0x29) |= 1
return arg1
