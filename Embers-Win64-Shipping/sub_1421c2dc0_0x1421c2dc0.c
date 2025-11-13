// 函数: sub_1421c2dc0
// 地址: 0x1421c2dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* result = sub_140d2dfc0(sub_14249ed50(), arg1, 0, 0, 0, 0, 0, 0, 0)
*(arg1 + 0x58) = result
void* result_2 = result

if (result != 0)
    void* rax_1 = sub_14249ed50()
    void* rdx_1 = *(result_2 + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        void* result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_1 + 0x30)
            *(result_2 + 0x30) |= 2
            *(result_2 + 0x38) = 0
            *(result_2 + 0x3c) = 0x3f800000

return result
