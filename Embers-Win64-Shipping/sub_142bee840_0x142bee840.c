// 函数: sub_142bee840
// 地址: 0x142bee840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t result_1 = 0
char* rbx = arg3
char* i_1 = arg2
*(arg1 + 0xc) = 0

if (arg1[1].d != 0)
    **arg1 = &data_1436994ac
    *(*arg1 + 8) = &data_1436994ac
    *(*arg1 + 0x10) = &data_1436994ac
    *(*arg1 + 0x18) = &data_1436994ac
    *(*arg1 + 0x20) = &data_1436994ac

int32_t result

if (arg4 == 0 || *rbx == 0)
    result = 0
else if (arg2 == 0 || *arg2 == 0)
    result = 6
else
    int32_t r10_1 = 0
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x20)
    char* i
    
    do
        char r9 = *i_1
        
        if (r9 == 0)
            break
        
        if (r9 != 0x2b || i_1[1] != 0)
            void* rdx = &var_68 + (zx.q(r9) u>> 3)
            *rdx |= (1 << ((sx.d(r9) & 7) u% 0x20)).b
        else
            r10_1 = 1
        
        i = i_1
        i_1 = &i_1[1]
    while (i != -1)
    int32_t rsi_1 = 0
    void* r15_1 = &rbx[zx.q(arg4)]
    char* rbp_1 = rbx
    
    if (rbx u< r15_1)
        while (*rbp_1 != 0)
            while (*rbx != 0)
                uint64_t rdx_1 = zx.q(*rbx)
                
                if (test_bit(sx.d(*(&var_68 + (rdx_1 u>> 3))), sx.d(rdx_1.b) & 7))
                    break
                
                rbx = &rbx[1]
            
            int32_t rdx_3 = *(arg1 + 0xc)
            
            if (rdx_3 == arg1[1].d)
                result = sub_142bee6f0(arg1, rdx_3 + 1)
                result_1 = result
                
                if (result != 0)
                    goto label_142beea79
            
            char* r8 = &data_1436994ac
            
            if (rbx u> rbp_1)
                r8 = rbp_1
            
            *(*arg1 + (zx.q(*(arg1 + 0xc)) << 3)) = r8
            char* r8_1 = rbx
            *(arg1 + 0xc) += 1
            
            if (sx.q(r10_1) != 0)
                if (*rbx != 0)
                    do
                        uint64_t rdx_6 = zx.q(*rbx)
                        
                        if (not(test_bit(sx.d(*(&var_68 + (rdx_6 u>> 3))), sx.d(rdx_6.b) & 7)))
                            break
                        
                        *rbx = 0
                        rbx = &rbx[1]
                    while (*rbx != 0)
                    
                    goto label_142bee9ff
                
                rsi_1 = 0
            else if (*rbx == 0)
                rsi_1 = 0
            else
                *rbx = 0
                rbx = &rbx[1]
            label_142bee9ff:
                
                if (rbx u<= r8_1 || *rbx != 0)
                    rsi_1 = 0
                else
                    rsi_1 = 1
            
            rbp_1 = rbx
            
            if (rbx u>= r15_1)
                break
    
    int32_t rdx_9 = *(arg1 + 0xc) + rsi_1
    
    if (rdx_9 u>= arg1[1].d)
        result = sub_142bee6f0(arg1, rdx_9 + 1)
        result_1 = result
    
    if (rdx_9 u< arg1[1].d || result == 0)
        if (rsi_1 != 0)
            *(*arg1 + (zx.q(*(arg1 + 0xc)) << 3)) = &data_1436994ac
            *(arg1 + 0xc) += 1
        
        *(*arg1 + (zx.q(*(arg1 + 0xc)) << 3)) = 0
        result = result_1

label_142beea79:
__security_check_cookie(rax_1 ^ &var_88)
return result
