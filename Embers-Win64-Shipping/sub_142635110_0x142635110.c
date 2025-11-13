// 函数: sub_142635110
// 地址: 0x142635110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x348)
int32_t i = 0
int32_t rbp = arg2
uint64_t result

do
    int32_t result_1 = rcx & 0x80000007
    
    if (result_1 s< 0)
        result_1 = ((result_1 - 1) | 0xfffffff8) + 1
    
    result = sx.q(result_1)
    int32_t* rdi_1 = result * 0x68
    
    if (*(rdi_1 + arg1) != 0)
        if ((*(rdi_1 + arg1 + 0x44) & 0xc0000000) != 0)
            *(rdi_1 + arg1 + 0x48) += 1
            
            if (*(rdi_1 + arg1 + 0x48) s> 2)
                *(rdi_1 + arg1) = 0
                *(rdi_1 + arg1 + 0x44) = 0
        else
            sub_142617930(*(arg1 + 0x350), *(rdi_1 + arg1 + 0x58))
            int32_t rcx_2 = *(rdi_1 + arg1 + 0x44)
            
            if (rcx_2 == 0)
                int32_t rax_5 = sub_142611f70(*(arg1 + 0x350), *(rdi_1 + arg1 + 0x20), 
                    *(rdi_1 + arg1 + 0x28), arg1 + 4 + rdi_1, arg1 + 0x10 + rdi_1, 
                    *(rdi_1 + arg1 + 0x30), *(rdi_1 + arg1 + 0x50))
                *(rdi_1 + arg1 + 0x44) = rax_5
                rcx_2 = rax_5
            
            result = zx.q(rcx_2 u>> 0x1d)
            
            if ((result.b & 1) != 0)
                int64_t* rcx_6 = *(arg1 + 0x350)
                int32_t arg_10 = 0
                result = sub_142618420(rcx_6, rbp, &arg_10)
                rbp -= arg_10
                rcx_2 = result.d
                *(rdi_1 + arg1 + 0x44) = result.d
            
            if (((rcx_2 u>> 0x1e).b & 1) != 0)
                result = sub_142609a40(*(arg1 + 0x350), *(rdi_1 + arg1 + 0x38), 
                    arg1 + 0x40 + rdi_1, *(arg1 + 0x344))
                *(rdi_1 + arg1 + 0x44) = result.d
            
            if (rbp s<= 0)
                break
        
        *(arg1 + 0x348) += 1
        rcx = *(arg1 + 0x348)
    else
        rcx += 1
        *(arg1 + 0x348) = rcx
    
    i += 1
while (i s< 8)

return result
