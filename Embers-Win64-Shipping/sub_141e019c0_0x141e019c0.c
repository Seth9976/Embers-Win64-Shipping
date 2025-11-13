// 函数: sub_141e019c0
// 地址: 0x141e019c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[4]

if (rdi != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        void* r8
        
        if (data_143de5480 != 0)
            rax_4, r8 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8.b = 1
            sub_141f3e990(arg1[4], 1, r8.b)

void* rdi_1 = arg1[0x48]

if (rdi_1 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rdi_1 = rax_6

*(rdi_1 + 0x32c)
uint64_t result

if (*(rdi_1 + 0x300) == *(rdi_1 + 0x32c))
labelid_1:
    result.b = 0
else
    int32_t rax_9 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = rdi_1 + 0x330
    void* rcx_4 = *(r8_1 + 8)
    
    if (rcx_4 != 0)
        r8_1 = rcx_4
    
    result = zx.q(*(r8_1 + (((sx.q(*(rdi_1 + 0x340)) - 1) & sx.q(rax_9)) << 2)))
    
    if (result.d == 0xffffffff)
    labelid_1:
        result.b = 0
    else
        int64_t r8_2 = *(rdi_1 + 0x2f8)
        int64_t rcx_5
        
        while (true)
            rcx_5 = sx.q(result.d)
            int64_t rdx_4 = rcx_5 * 5
            
            if (*(r8_2 + (rdx_4 << 2)) == arg2)
                break
            
            result = zx.q(*(r8_2 + (rdx_4 << 2) + 0xc))
            
            if (result.d == 0xffffffff)
                goto label_141e01ac7_2
        
        if (result.d == 0xffffffff)
        label_141e01ac7:
            result.b = 0
        else
            result = r8_2 + rcx_5 * 0x14
            
            if (result == 0)
            label_141e01ac7_1:
                result.b = 0
            else if (result == -8)
            label_141e01ac7_2:
                result.b = 0
            else
                *arg3 = *(result + 8)
                result.b = 1

return result
