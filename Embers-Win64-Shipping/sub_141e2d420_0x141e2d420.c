// 函数: sub_141e2d420
// 地址: 0x141e2d420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141df1e90(arg1)
void* result_2 = result

if (arg1[0xf] == 0)
label_141e2d481:
    
    if (result_2 != 0)
        result = sub_141df1e90(arg1)
        
        if (result != 0)
            result = sub_141e0ebf0(result)
        
        goto label_141e2d49f
else
    result = sub_14245f6d0()
    
    if (result == 0)
        goto label_141e2d481
    
    void* rdx = arg1[0xf]
    void* r8 = result + 0x30
    result = sx.q(*(result + 0x38))
    
    if (result.d s> *(rdx + 0x38))
        goto label_141e2d481
    
    void* result_1 = result
    result = *(rdx + 0x30)
    
    if (*(result + (result_1 << 3)) != r8 || rdx == 0)
        goto label_141e2d481
    
    result = sub_141e2fc10(arg1, arg3, nullptr)
label_141e2d49f:
    
    if (result_2 != 0)
        void* rdi_1 = *(result_2 + 0x20)
        
        if (rdi_1 != 0)
            void* rax = sub_142591550()
            void* rdx_2 = *(rdi_1 + 0x10)
            int64_t rax_1 = sx.q(*(rax + 0x38))
            
            if (rax_1.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_1 << 3)) == rax + 0x30)
                uint32_t rax_3
                void* r8_1
                
                if (data_143de5480 != 0)
                    rax_3, r8_1 = GetCurrentThreadId()
                    rax_3.b = rax_3 == data_143de5470
                
                if (data_143de5480 == 0 || rax_3.b != 0)
                    r8_1.b = 1
                    sub_141f3e990(*(result_2 + 0x20), 1, r8_1.b)
        
        int64_t* rcx_6 = *(result_2 + 0x240)
        
        if (rcx_6 == 0)
            int64_t* rax_5 = (*(*result_2 + 0x300))(result_2)
            *(result_2 + 0x240) = rax_5
            rcx_6 = rax_5
        
        return (*(*rcx_6 + 0x90))(rcx_6, result_2)

return result
