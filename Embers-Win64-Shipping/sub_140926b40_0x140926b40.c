// 函数: sub_140926b40
// 地址: 0x140926b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140926f00(arg1 + 0x38, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x38) + rax * 0x48

int64_t* result = rcx_1 + 0x30

if (rcx_1 == 0)
    result = nullptr

if (result != 0)
    void* i = *result
    result = sx.q(result[1].d)
    
    for (void* r14_3 = result * 0x30 + i; i != r14_3; i += 0x30)
        void* j = *(i + 0x20)
        
        for (void* rdi_3 = (sx.q(*(i + 0x28)) << 6) + j; j != rdi_3; j += 0x40)
            int16_t* rdx_2
            
            if (arg3[1].d == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *arg3
            
            int16_t* const rcx_2
            
            if (*(j + 0x20) == 0)
                rcx_2 = &data_142d40450
            else
                rcx_2 = *(j + 0x18)
            
            result = sub_140a54510(rcx_2, rdx_2)
            
            if (result.d == 0)
                return result

return result
