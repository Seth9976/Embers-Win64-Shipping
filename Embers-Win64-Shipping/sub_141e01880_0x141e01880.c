// 函数: sub_141e01880
// 地址: 0x141e01880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[4]
int512_t result

if (rdi != 0)
    void* rax_1
    rax_1, result = sub_142591550()
    void* rdx = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        void* r8_1
        
        if (data_143de5480 != 0)
            rax_4, r8_1 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)

void* rdi_1 = arg1[0x48]

if (rdi_1 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rdi_1 = rax_6

if (*(rdi_1 + 0x300) != *(rdi_1 + 0x32c))
    int32_t rax_9 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_2 = rdi_1 + 0x330
    void* rcx_4 = *(r8_2 + 8)
    
    if (rcx_4 != 0)
        r8_2 = rcx_4
    
    int32_t i = *(r8_2 + (((sx.q(*(rdi_1 + 0x340)) - 1) & sx.q(rax_9)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_3 = *(rdi_1 + 0x2f8)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rdx_4 = i_1 * 5
            
            if (*(r8_3 + (rdx_4 << 2)) == arg2)
                if (i != 0xffffffff)
                    void* rax_12 = r8_3 + i_1 * 0x14
                    
                    if (rax_12 != 0 && rax_12 != -8)
                        result.o = *(rax_12 + 8)
                        return result
                
                break
            
            i = *(r8_3 + (rdx_4 << 2) + 0xc)
        while (i != 0xffffffff)

result.o = zx.o(0)
return result
