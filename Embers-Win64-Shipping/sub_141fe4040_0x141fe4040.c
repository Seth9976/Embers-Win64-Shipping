// 函数: sub_141fe4040
// 地址: 0x141fe4040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x40)
int64_t var_38
int32_t result_3
int64_t var_28
int32_t result
int32_t result_2
int32_t result_1

if (rdi != 0)
    void* rcx = *(arg1 + 0x38)
    var_38 = *(rcx + 4)
    result_3 = *(rcx + 0xc)
    var_28 = *(rcx + 4)
    result = *(rcx + 0xc)
    
    if (rdi != 1)
        int32_t r12_1 = rdi - 1
        
        if (*(arg1 + 0x48) == 0)
            rdi = r12_1
        
        int32_t rcx_1 = 0
        
        if (rdi s> 0)
            int32_t rbx_1
            
            do
                int32_t rax_3 = 0
                rbx_1 = rcx_1 + 1
                
                if (rcx_1 != r12_1)
                    rax_3 = rbx_1
                
                sub_140ad3060(sx.q(rcx_1) * 0x2c + *(arg1 + 0x38), 
                    sx.q(rax_3) * 0x2c + *(arg1 + 0x38), &var_38, &var_28)
                rcx_1 = rbx_1
            while (rbx_1 s< rdi)
    
    result_2 = var_38.d
    result_1 = var_28.d
else
    result_2 = data_143dbb1f8
    int32_t zmm1 = data_143dbb1fc
    result_1 = result_2
    int64_t zmm0 = data_143dbb200
    var_38.d = result_2
    var_38:4.d = zmm1
    result_3 = zmm0.d
    var_28.d = result_2
    var_28:4.d = zmm1
    result = zmm0.d

uint32_t rcx_4 = zx.d(*(arg1 + 0x54))

if (rcx_4 == 1)
    var_28:4.d = result_1
    var_38:4.d = result_2
else if (rcx_4 == 2)
    result_3 = result_2
    result = result_1
else if (rcx_4 == 3)
    result_3 = var_38:4.d.d
    result = var_28:4.d
else if (rcx_4 == 4)
    result_3 = result_2
    result = result_1
    var_28:4.d = result_1
    var_38:4.d = result_2

*arg2 = var_38
arg2[1].d = result_3
*arg3 = var_28
arg3[1].d = result
return result
