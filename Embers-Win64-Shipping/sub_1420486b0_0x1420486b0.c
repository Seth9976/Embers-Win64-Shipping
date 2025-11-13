// 函数: sub_1420486b0
// 地址: 0x1420486b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
*arg1 = 0
char* rbx = arg2
arg1[1] = 0
int64_t* result

if (arg3 u< 0xb)
    result = arg1
else
    uint64_t rdx = 0
    char var_128[0x100]
    void* r8 = &var_128 - rbx
    
    do
        char rcx = *rbx
        
        if (rcx u<= 0xd && test_bit(0x2401, zx.d(rcx)))
            rbx = &rbx[1]
            break
        
        *(r8 + rbx) = rcx
        rdx = zx.q(rdx.d + 1)
        rbx = &rbx[1]
    while (rdx.d u< 0xff)
    
    var_128[rdx] = 0
    
    if (strcmp(&var_128, "#?RADIANCE") != 0)
        result = arg1
    else
        char* rax_5
        char* rax_6
        
        while (true)
            char (* r8_1)[0x100] = &var_128
            uint64_t rdx_1 = 0
            
            do
                char rcx_2 = *rbx
                
                if (rcx_2 u<= 0xd && test_bit(0x2401, zx.d(rcx_2)))
                    rbx = &rbx[1]
                    break
                
                *r8_1 = rcx_2
                rbx = &rbx[1]
                r8_1 = &(*r8_1)[1]
                rdx_1 = zx.q(rdx_1.d + 1)
            while (rdx_1.d u< 0xff)
            
            var_128[rdx_1] = 0
            rax_5 = strstr(&var_128, "-Y ")
            rax_6 = strstr(&var_128, "+X ")
            
            if (rax_5 != 0)
                if (rax_6 != 0)
                    break
        
        rax_6[-1] = 0
        *(arg1 + 0xc) = atoi(&rax_5[3])
        arg1[1].d = atoi(&rax_6[3])
        result = arg1
        *arg1 = rbx

__security_check_cookie(rax_1 ^ &var_148)
return result
