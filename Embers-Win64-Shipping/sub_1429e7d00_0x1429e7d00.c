// 函数: sub_1429e7d00
// 地址: 0x1429e7d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* rax_2 = arg2 + arg1
int32_t* rbx = arg3
char rbp

if (arg5 == 0)
    rbp = *(rax_2 - 1)
else
    char var_88
    arg5(arg6, rax_2 - 1, &var_88, 1)
    rbp = var_88

*arg4 = 0
int64_t result

if ((rbp & 0xe0) != 0xc0)
    result = 0
else
    uint32_t rdi_1 = zx.d(rbp)
    int32_t rcx_2 = ((rdi_1 u>> 3 & 3) + 1) * ((rdi_1 & 7) + 1)
    uint64_t rdx_1 = zx.q(rcx_2 + 2)
    char rax_5
    char* r14_2
    
    if (arg2 u>= rdx_1)
        r14_2 = arg2 - rdx_1 + arg1
        
        if (arg5 == 0)
            rax_5 = *r14_2
        else
            char var_87
            arg5(arg6, r14_2, &var_87, 1)
            rax_5 = var_87
    
    if (arg2 u< rdx_1 || rbp != rax_5)
        result = 7
    else
        void* rdx_3 = &r14_2[1]
        
        if (arg5 != 0)
            void var_78
            arg5(arg6, rdx_3, &var_78, zx.q(rcx_2))
            rdx_3 = &var_78
        
        if ((rdi_1 & 7) != 0xffffffff)
            uint64_t i_1 = zx.q((rdi_1 & 7) + 1)
            uint64_t i
            
            do
                int32_t r8_3 = 0
                
                if ((rdi_1 u>> 3 & 3) != 0xffffffff)
                    int32_t rcx_5 = 0
                    uint64_t j_1 = zx.q((rdi_1 u>> 3 & 3) + 1)
                    uint64_t j
                    
                    do
                        uint32_t rax_6 = zx.d(*rdx_3)
                        rdx_3 += 1
                        uint32_t rax_7 = rax_6 << rcx_5.b
                        rcx_5 += 8
                        r8_3 |= rax_7
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                *rbx = r8_3
                rbx = &rbx[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        *arg4 = (rdi_1 & 7) + 1
        result = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
