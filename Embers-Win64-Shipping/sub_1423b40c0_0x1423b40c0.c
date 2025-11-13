// 函数: sub_1423b40c0
// 地址: 0x1423b40c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t r15 = 0
int32_t var_4c = 0xc
int32_t var_50 = 0
void* rbx = nullptr
int32_t i = -1
void* var_58 = nullptr
int32_t i_1 = 0xffffffff
int32_t j_2
sub_140865c40(arg1 + 0x168, &j_2, arg2)
int64_t j_4 = sx.q(j_2)
uint64_t result = 0xffffffff

if (j_4.d != 0xffffffff)
    i = *(*(arg1 + 0x168) + j_4 * 0x18 + 8)
    i_1 = i
    sub_1405c2fb0(arg1 + 0x168, j_4.d)
    rbx = var_58
    result = zx.q(i)

int32_t r12 = 0
void var_88

if (result.d != 0xffffffff)
    do
        int32_t var_a0_1 = r12
        int64_t j_3
        int64_t* var_a8_1 = &j_3
        j_2 = 0xffffffff
        j_3 = 0
        result = sub_1423b43d0(arg1, i, &i_1, &j_2, var_a8_1)
        int32_t j = j_2
        r12 += 1
        rbx = var_58
        
        if (j != 0xffffffff)
            void* r8_3 = &var_88
            
            if (rbx != 0)
                r8_3 = rbx
            
            void* rax_3 = r8_3
            void* rdx_2 = r8_3 + (sx.q(var_50) << 2)
            
            if (r8_3 != rdx_2)
                while (*rax_3 != j)
                    rax_3 += 4
                    
                    if (rax_3 == rdx_2)
                        goto label_1423b41d0
                
                result = (rax_3 - r8_3) s>> 2
            
            if (r8_3 == rdx_2 || result.d == 0xffffffff)
            label_1423b41d0:
                int64_t rsi_1 = sx.q(var_50)
                result = zx.q((rsi_1 + 1).d)
                var_50 = result.d
                
                if (result.d s> var_4c)
                    result = sub_140809140(&var_88, rsi_1.d)
                    rbx = var_58
                
                void* rcx_5 = &var_88
                
                if (rbx != 0)
                    rcx_5 = rbx
                
                *(rcx_5 + (rsi_1 << 2)) = j
                rbx = var_58
        
        int64_t j_1 = j_3
        
        if (j_1 != 0 && arg3 != 0)
            uint64_t rax_5 = *(arg3 + 0x60)
            uint64_t rdx_4 = arg3
            int64_t r8_4 = sx.q(*(arg3 + 0x68))
            
            if (rax_5 != 0)
                rdx_4 = rax_5
            
            uint64_t rcx_6 = rdx_4
            int64_t rsi_2 = r8_4 << 3
            result = rsi_2 + rdx_4
            
            if (rdx_4 != result)
                while (*rcx_6 != j_1)
                    rcx_6 += 8
                    
                    if (rcx_6 == result)
                        goto label_1423b4250
            
            if (rdx_4 == result || ((rcx_6 - rdx_4) s>> 3).d == 0xffffffff)
            label_1423b4250:
                int32_t rax_6 = (r8_4 + 1).d
                *(arg3 + 0x68) = rax_6
                
                if (rax_6 s> *(arg3 + 0x6c))
                    sub_142396930(arg3, r8_4.d)
                
                result = *(arg3 + 0x60)
                uint64_t result_1 = arg3
                
                if (result != 0)
                    result_1 = result
                
                *(result_1 + rsi_2) = j_1
                rbx = var_58
        
        i = i_1
    while (i != 0xffffffff)

if (var_50 s> 0)
    int64_t rdi = 0
    
    do
        void* rax_7 = &var_88
        
        if (rbx != 0)
            rax_7 = rbx
        
        result = sub_1423b3f00(arg1, *(rax_7 + rdi))
        rbx = var_58
        rdi += 4
        r15 += 1
    while (r15 s< var_50)

if (rbx != 0)
    result = sub_140a74f90(rbx)

__security_check_cookie(rax_1 ^ &var_c8)
return result
