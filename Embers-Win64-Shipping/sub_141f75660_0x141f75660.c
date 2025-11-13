// 函数: sub_141f75660
// 地址: 0x141f75660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_1 = arg2
void* r14 = arg1[0xb6]
int64_t* r14_1

if (r14 == 0)
    void* rax_1 = arg1[0x86]
    
    if (rax_1 != 0)
        r14_1 = *(rax_1 + 0x58)
        goto label_141f7569d
else
    r14_1 = *(r14 + 0x40)
label_141f7569d:
    
    if (r14_1 != 0)
        int32_t rax_2 = arg1[0xaf].d
        
        if (rax_2 != 0)
            int32_t i = 0
            int64_t r15
            r15.b = 0
            
            if (rax_2 s> 0)
                int64_t rbp_1 = 0
                int64_t rdi_1 = 0
                
                do
                    sub_141e46e60(*(*r14_1 + rbp_1) + 0x300, &result_1)
                    
                    if (arg1[0xb7] == result_1)
                        r15.b = 1
                        *(arg1[0xae] + rdi_1 + 0x20) = 0
                    
                    i += 1
                    rbp_1 += 8
                    rdi_1 += 0x28
                while (i s< arg1[0xaf].d)
                
                if (r15.b != 0)
                    *(arg1 + 0x5a9) |= 2
                    sub_141ee8470(arg1)
                    int64_t* rcx_3 = arg1[0xb6]
                    
                    if (rcx_3 != 0)
                        (*(*rcx_3 + 0x58))(rcx_3, arg1)
int64_t result = result_1

if (arg1[0xb7] == result)
    *(arg1 + 0x5a6) &= 0xfd
    result = 0
    arg1[0xb7] = 0
    result_1 = 0

return result
