// 函数: sub_141e02450
// 地址: 0x141e02450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[4]
int512_t result

if (rbx != 0)
    void* rax_1
    rax_1, result = sub_142591550()
    void* rdx = *(rbx + 0x10)
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

void* rbx_1 = arg1[0x48]

if (rbx_1 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rbx_1 = rax_6

int64_t* rcx_3 = *(rbx_1 + 0xa8)

if (rcx_3 != 0)
    int64_t* rax_8 = (*(*rcx_3 + 0x20))(rcx_3)
    
    if (arg2 s>= 0)
        int32_t rcx_4 = rax_8[1].d
        
        if (arg2 s< rcx_4)
            int64_t rdx_1 = sx.q(*(*(*rax_8 + (sx.q(rcx_4 - arg2) << 3) - 8) + 0x4c))
            
            if (rdx_1 != neg.q(*(rbx_1 + 0xa0)))
                result.o = *(*(rbx_1 + sx.q(1 - *(rbx_1 + 0x208)) * 0x10 + 0x178)
                    + (sx.q(*(rdx_1 + *(rbx_1 + 0xa0) + 0x10)) << 2))
                return result

result.o = zx.o(0)
return result
