// 函数: sub_141f1e980
// 地址: 0x141f1e980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rbx = sx.q(*(arg1 + 0xd8))
void* result = nullptr
void* result_1 = nullptr
int32_t var_20 = 0
int32_t rdx = 0
int32_t var_1c = 8

if (rbx.d != 0)
    void var_68
    
    if (rbx.d s> 8)
        sub_140775b80(&var_68, rbx.d)
        rdx = var_20
        result = result_1
    
    void* result_2 = &var_68
    
    if (result != 0)
        result_2 = result
    
    memcpy(result_2 + (sx.q(rdx) << 3), *(arg1 + 0xd0), (rbx << 3).d)
    int32_t i = var_20 + rbx.d
    int32_t i_1 = i
    
    while (i s> 0)
        void* result_4 = &var_68
        
        if (result_1 != 0)
            result_4 = result_1
        
        int64_t* rbx_1 = *(result_4 + (sx.q(i - 1) << 3))
        
        if (0 != 0)
            memmove(result_4 + (sx.q(i - 1) << 3), result_4 + (sx.q(i) << 3), 0 << 3)
            i = i_1
        
        i -= 1
        i_1 = i
        
        if (rbx_1 != 0)
            void* rax_10 = sub_142577430()
            void* rdx_4 = rbx_1[2]
            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
            
            if (rax_11.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
                sub_141ee8490(rbx_1)
            
            int64_t rdi_1 = sx.q(rbx_1[0x1b].d)
            
            if (rdi_1.d == 0)
                i = i_1
            else
                int32_t i_2 = i_1
                int32_t rdx_5 = i_2 + rdi_1.d
                
                if (rdx_5 s> var_1c)
                    sub_140775b80(&var_68, rdx_5)
                    i_2 = i_1
                
                void* result_3 = &var_68
                
                if (result_1 != 0)
                    result_3 = result_1
                
                memcpy(result_3 + (sx.q(i_2) << 3), rbx_1[0x1a], (rdi_1 << 3).d)
                i = i_1 + rdi_1.d
                i_1 = i
    
    result = result_1
    
    if (result != 0)
        result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_88)
return result
