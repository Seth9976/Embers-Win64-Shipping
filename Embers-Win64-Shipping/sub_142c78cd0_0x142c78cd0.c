// 函数: sub_142c78cd0
// 地址: 0x142c78cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int64_t r8 = 0
uint64_t rbx
rbx.b = 0
int64_t var_18
__builtin_strcpy(&var_18, "(){ %*]")
char* rdi = arg1
int64_t r9 = 0
char* result

if (arg1 != 0)
    char i = *arg1
    char* rdx = rdi
    
    if (i == 0)
        result = data_143ccb8b0(rdi, rdx)
    else
        do
            if (i == 0x5c)
                r8 += 1
            else if (i == 0x22)
                r9 += 1
            else if (arg2 == 0)
                int64_t* rax_2 = &var_18
                
                while (rbx.b == 0)
                    rbx = zx.q(rbx.b)
                    
                    if (i == *rax_2)
                        rbx = 1
                    
                    rax_2 += 1
                    
                    if (*rax_2 == 0)
                        break
            
            i = rdx[1]
            rdx = &rdx[1]
        while (i != 0)
        
        if (r8 != 0 || r9 != 0 || rbx.b != 0)
            int64_t arg_10 = arg3
            int64_t rcx = -1
            bool cond:1_1
            
            do
                cond:1_1 = rdi[rcx + 1] != 0
                rcx += 1
            while (cond:1_1)
            int64_t rsi_3 = (zx.q((sbb.q(arg3, arg3, rbx.b != 0)).d) & 2) + r9 + rcx + r8
            result = data_143ccb898(rsi_3 + 1)
            void* result_1 = result
            
            if (result != 0)
                void* result_2 = result_1
                
                if (rbx.b != 0)
                    *result = 0x22
                    result_2 = &result[1]
                    result[rsi_3 - 1] = 0x22
                
                while (*rdi != 0)
                    char rax_5 = *rdi
                    
                    if (rax_5 == 0x5c || rax_5 == 0x22)
                        *result_2 = 0x5c
                        result_2 += 1
                    
                    char rax_6 = *rdi
                    rdi = &rdi[1]
                    *result_2 = rax_6
                    result_2 += 1
                
                *(result_1 + rsi_3) = 0
                result = result_1
        else
            result = data_143ccb8b0(rdi, rdx)
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_38)
return result
