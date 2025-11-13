// 函数: sub_141fe36b0
// 地址: 0x141fe36b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x18)
int64_t arg_8
int64_t arg_10
int64_t zmm1

if (rdi != 0)
    void* rax_1 = *(arg1 + 0x10)
    arg_8 = *(rax_1 + 4)
    arg_10 = *(rax_1 + 4)
    
    if (rdi != 1)
        int32_t rbp_1 = rdi - 1
        
        if (*(arg1 + 0x20) == 0)
            rdi = rbp_1
        
        int32_t rcx = 0
        
        if (rdi s> 0)
            int32_t rbx_1
            
            do
                rbx_1 = rcx + 1
                int32_t rax_2 = 0
                
                if (rcx != rbp_1)
                    rax_2 = rbx_1
                
                sub_140ad2f60((sx.q(rcx) << 5) + *(arg1 + 0x10), 
                    (sx.q(rax_2) << 5) + *(arg1 + 0x10), &arg_8, &arg_10)
                rcx = rbx_1
            while (rbx_1 s< rdi)
else
    zmm1 = data_143dbb1f0.d
    int64_t zmm0 = data_143dbb1f0:4.d
    arg_8.d = zmm1.d
    arg_8:4.d = zmm0.d
    arg_10.d = zmm1.d
    arg_10:4.d = zmm0.d

zmm1 = arg_10.d
int64_t result = __minss_xmmss_memss(arg_8.d.d, arg_8:4.d)
int64_t temp0 = __maxss_xmmss_memss(zmm1.d, arg_10:4.d)
*arg2 = result.d
*arg3 = temp0.d
return result
