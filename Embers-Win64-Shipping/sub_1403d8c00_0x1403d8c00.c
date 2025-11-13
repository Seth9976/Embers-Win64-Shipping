// 函数: sub_1403d8c00
// 地址: 0x1403d8c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = arg3
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
*(arg1 + 0x160) = arg2
*(arg1 + 0x168) = 0
int32_t rax_2 = 0
int64_t result = 0

if (i == 0)
    goto label_1403d8cae

int32_t rax_7

do
    if (rax_2 == 0)
        if (i u>> 0x20 != 0)
            *(arg1 + 0x168) = 0xffffffff
            i += -0xffffffff
        else
            *(arg1 + 0x168) = i.d
            i = 0
    
label_1403d8cae:
    *(arg1 + 0x170) = *(arg1 + 0x1b8)
    *(arg1 + 0x178) = *(arg1 + 0x1c0)
    rax_7 = sub_140371df0(arg1 + 0x160, 0)
    
    if (rax_7 u<= 1)
        int32_t rax_9 = *(arg1 + 0x1c0) - *(arg1 + 0x178)
        
        if (rax_9 s> 0)
            int64_t r13_1 = sx.q(rax_9)
            
            if (arg4 != 0 && result u< arg5)
                int64_t r8_1 = arg5 - result
                
                if (r8_1 u> r13_1)
                    r8_1 = r13_1
                
                memcpy(arg4 + result, *(arg1 + 0x1b8), r8_1.d)
            
            result += r13_1
    
    if (rax_7 != 0)
        break
    
    rax_2 = *(arg1 + 0x168)
while (i != 0)

*(arg1 + 0x168) = 0
sub_140371990(arg1 + 0x160)

if (rax_7 != 1)
    char* rdi = *(arg1 + 0x180)
    
    if (rdi == 0)
        char var_88[0x40]
        rdi = &var_88
        char* rcx_3 = "Incomplete compressed datastream in %s chunk"
        
        if (rax_7 == 0xfffffffd)
            rcx_3 = "Data error in compressed datastream in %s chunk"
        
        char* r8_2 = "Buffer error in compressed datastream in %s chunk"
        
        if (rax_7 != 0xfffffffb)
            r8_2 = rcx_3
        
        _snscanf(&var_88, 0x34, r8_2, arg1 + 0x254)
    
    png_warning(arg1, rdi)
    result = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
