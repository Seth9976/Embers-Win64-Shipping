// 函数: sub_142a89310
// 地址: 0x142a89310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
uint64_t result = __security_cookie ^ &var_78
uint64_t result_2 = result
int32_t i = 0
int32_t result_1 = 0

if (*arg4 s<= 0)
    int32_t* r9 = &result_1
    char var_50[0x10]
    int32_t r12_1 = sub_142a4d500(arg1, &var_50, 0xc, r9)
    result = zx.q(result_1)
    
    if (result.d s> 0 || result.d == 0xffffff84)
        if (arg3 == 0)
            result = (*(*arg2 + 8))(arg2, &data_143641734, 3)
        else
            *arg4 = 1
    else if (r12_1 == 0)
        result = (*(*arg2 + 8))(arg2, &data_143641734, 3)
    else
        uint64_t rcx = zx.q(r12_1)
        int64_t rdi_1 = -1
        
        if (r12_1 s< 0)
            rcx = -1
            
            do
                rcx += 1
            while (var_50[rcx] != 0)
        
        result = zx.q((rcx - 2).d)
        
        if (result.d u> 6)
        label_142a894d1:
            
            if (arg3 == 0)
                result = (*(*arg2 + 8))(arg2, &data_143641734, 3, r9)
            else
                *arg4 = 1
        else
            int64_t rbx_1 = 0
            
            if (rcx.d s> 0)
                while (true)
                    result = sub_142a86230(var_50[rbx_1])
                    
                    if (result.b == 0)
                        break
                    
                    rbx_1 += 1
                    
                    if (rbx_1 s>= sx.q(rcx.d))
                        goto label_142a893e1
                
                goto label_142a894d1
            
        label_142a893e1:
            r9 = -ffffffffffffffff
            
            do
                r9 += 1
            while (*(&var_50 + r9) != 0)
            
            do
                int64_t rax_3 = -1
                
                do
                    rax_3 += 1
                while (*(&data_143641770 + (sx.q(i) << 2) + rax_3) != 0)
                
                if (r9 u< rax_3)
                    break
                
                void* rax_4 = &var_50
                uint32_t j
                uint32_t rdx_1
                
                do
                    rdx_1 = zx.d(*rax_4)
                    j = zx.d(*(rax_4 + &data_143641770 + (sx.q(i) << 2) - &var_50))
                    
                    if (rdx_1 != j)
                        break
                    
                    rax_4 += 1
                while (j != 0)
                
                if (rdx_1 - j == 0)
                    void* rdx_3 = &data_143641770 + (sx.q(i + 1) << 2)
                    char* rcx_3 = &var_50 - rdx_3
                    char j_1
                    
                    do
                        j_1 = *rdx_3
                        *(rcx_3 + rdx_3) = j_1
                        rdx_3 += 1
                    while (j_1 != 0)
                    
                    do
                        rdi_1 += 1
                    while (var_50[rdi_1] != 0)
                    
                    r12_1 = rdi_1.d
                    break
                
                i += 2
            while (i s< 0x9c)
            
            result = (*(*arg2 + 8))(arg2, &var_50, zx.q(r12_1), r9)

__security_check_cookie(result_2 ^ &var_78)
return result
