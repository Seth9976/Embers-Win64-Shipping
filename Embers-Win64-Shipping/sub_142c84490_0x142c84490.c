// 函数: sub_142c84490
// 地址: 0x142c84490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t i_1 = arg3
int32_t result_1 = 0
int64_t r9 = 0
int64_t r8 = 0

if (i_1 s> 0)
    do
        char rcx = arg2[r8]
        int64_t rax_2 = r9 + 1
        r8 += 1
        
        if (rcx != 0xff)
            rax_2 = r9
        
        r9 = rax_2
    while (r8 s< i_1)

int64_t rsi = i_1 + r9
uint64_t result
char* rdi

if (rsi != i_1)
    char* rax_3 = data_143ccb898(rsi + 1)
    rdi = rax_3
    
    if (rax_3 != 0)
        char* rax_4 = nullptr
        
        if (i_1 s> 0)
            char* rdx = arg2
            int64_t i
            
            do
                *(rax_4 + rdi) = *rdx
                rax_4 = &rax_4[1]
                
                if (*rdx == 0xff)
                    *(rax_4 + rdi) = 0xff
                    rax_4 = &rax_4[1]
                
                rdx = &rdx[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        *(rax_4 + rdi) = 0
        goto label_142c84557
    
    result = zx.q((&rdi[0x1b]).d)
else
    rdi = arg2
label_142c84557:
    void* rbx = nullptr
    
    while (rbx s< rsi)
        int64_t var_50 = *(arg1 + 0x238)
        int16_t var_48_1 = 0x10
        int32_t rax_6
        int512_t zmm0_1
        rax_6, zmm0_1 = sub_142c63c60(&var_50, 1, 0xffffffff)
        
        if (rax_6 + 1 u<= 1)
            result_1 = 0x37
            break
        
        int64_t rdx_1 = *(arg1 + 0x238)
        int64_t var_58 = 0
        int64_t* var_68_1 = &var_58
        int32_t result_2 = sub_142c64d60(arg1, rdx_1, zmm0_1, rbx + rdi)
        rbx += var_58
        result_1 = result_2
        
        if (result_2 != 0)
            break
    
    if (rdi != arg2)
        data_143ccb8a0(rdi)
    
    result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_88)
return result
