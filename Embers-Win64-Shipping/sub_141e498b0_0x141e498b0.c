// 函数: sub_141e498b0
// 地址: 0x141e498b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi_1

if (arg1 == 0)
    rdi_1 = nullptr
else
    void* rdi = arg1[4]
    
    if (rdi != 0)
        void* rax_1 = sub_142591550()
        void* rdx = *(rdi + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)
    
    rdi_1 = arg1[0x48]
    
    if (rdi_1 == 0)
        void* rax_5 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_5
        rdi_1 = rax_5

*(rdi_1 + 0x825) = arg2
int64_t* result = sub_141df83c0(arg1)

if (result != 0)
    result[5].b = arg2
    return result

if (*(rdi_1 + 0x825) != 0)
    void* rdi_2 = arg1[0x4d]
    
    if (rdi_2 != 0)
        void* rax_6 = sub_1424641d0()
        void* rdx_1 = *(rdi_2 + 0x10)
        result = sx.q(*(rax_6 + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38))
            int64_t* result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (result[result_1] == rax_6 + 0x30)
                return (*(*arg1 + 0x328))(arg1, rdi_2, 0)

return result
