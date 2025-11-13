// 函数: sub_1405bd3f0
// 地址: 0x1405bd3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_2 = *(arg1 + 0xa0)
int64_t rbx = arg1
void* result_1 = *(arg1 + 0x150)
void* result

if (result_2 == 0)
    result = nullptr
    *(arg1 + 0x150) = 0
else
    if (result_1 != 0)
        result = result_1
    
    if (result_1 == 0 || *(result_1 + 0xd0) != result_2)
        void* rax_1 = sub_142542e20()
        void* rdx_1 = *(result_2 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            void* rax_4 = *(rbx + 0x150)
            void* rdx_2
            
            if (rax_4 == 0)
                rdx_2 = *(result_2 + 0x20)
            else
                rdx_2 = *(rax_4 + 0x20)
            
            result, arg1 = sub_142121cc0(result_2, rdx_2)
            *(rbx + 0x150) = result
        else
            *(rbx + 0x150) = result_2
            result = result_2

arg1.b = result_1 != result
*(rbx + 0x148) |= arg1.b
return result
