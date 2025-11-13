// 函数: sub_141f29240
// 地址: 0x141f29240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rbp = arg1
arg1.b = 0
int32_t i_2 = 0
int32_t i = 0
float zmm0

if (rbp[0x82].d s> 0)
    int64_t rsi_1 = 0
    
    do
        result = rbp[0x81]
        zmm0 = *(rsi_1 + result + 0x2c)
        
        if (not(zmm0 <= 0f))
            zmm0 = zmm0 f- arg2.d
            *(rsi_1 + result + 0x2c) = zmm0
            
            if (not(zmm0 > 0f))
                int32_t rdx_1 = rbp[0x82].d
                int32_t rcx_2 = rdx_1 - i - 1
                
                if (rcx_2 s>= 1)
                    rcx_2 = 1
                
                if (rcx_2 != 0)
                    memcpy(sx.q(i) * 0x34 + rbp[0x81], sx.q(rdx_1 - rcx_2) * 0x34 + rbp[0x81], 
                        rcx_2 * 0x34)
                    rdx_1 = rbp[0x82].d
                
                rbp[0x82].d = rdx_1 - 1
                result = sub_1417503b0(&rbp[0x81])
                i -= 1
                arg1 = 1
                rsi_1 -= 0x34
        
        i += 1
        rsi_1 += 0x34
    while (i s< rbp[0x82].d)

int32_t i_1 = 0

if (rbp[0x84].d s> 0)
    int64_t rsi_2 = 0
    
    do
        result = rbp[0x83]
        zmm0 = *(rsi_2 + result + 0x20)
        
        if (not(zmm0 <= 0f))
            zmm0 = zmm0 f- arg2.d
            *(rsi_2 + result + 0x20) = zmm0
            
            if (not(zmm0 > 0f))
                int32_t rdx_5 = rbp[0x84].d
                int32_t rcx_8 = rdx_5 - i_1 - 1
                
                if (rcx_8 s>= 1)
                    rcx_8 = 1
                
                if (rcx_8 != 0)
                    int64_t r9_1 = rbp[0x83]
                    memcpy(r9_1 + sx.q(i_1) * 0x28, r9_1 + sx.q(rdx_5 - rcx_8) * 0x28, rcx_8 * 0x28)
                    rdx_5 = rbp[0x84].d
                
                rbp[0x84].d = rdx_5 - 1
                result = sub_1409da680(&rbp[0x83])
                i_1 -= 1
                arg1 = 1
                rsi_2 -= 0x28
        
        i_1 += 1
        rsi_2 += 0x28
    while (i_1 s< rbp[0x84].d)

if (rbp[0x87].d s> 0)
    int64_t rbx = 0
    
    do
        result = rbp[0x86]
        zmm0 = *(rbx + result + 0x28)
        
        if (not(zmm0 <= 0f))
            zmm0 = zmm0 f- arg2.d
            *(rbx + result + 0x28) = zmm0
            
            if (not(zmm0 > 0f))
                result = sub_141f22370(&rbp[0x86], i_2, 1, 1)
                i_2 -= 1
                arg1 = 1
                rbx -= 0x30
        
        i_2 += 1
        rbx += 0x30
    while (i_2 s< rbp[0x87].d)

if (arg1.b == 0)
    return result

return sub_141ee8490(rbp) __tailcall
