// 函数: sub_141f479b0
// 地址: 0x141f479b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
char rcx = *(arg1 + 0x14d)
int64_t rbx
rbx.b = arg3 == 2
uint32_t result
result.b = rcx u>> 2
result.b &= 1

if (arg2 != result.b)
    rbx.b = arg3 - 1 u<= 1
    int64_t rax_4 = *arg1
    *(arg1 + 0x14d) = (rcx & 0xfb) | arg2 << 2
    result = (*(rax_4 + 0x458))(arg1)

if (rbx.b != 0)
    int64_t rbx_1 = sx.q(arg1[0x1b].d)
    
    if (rbx_1.d s> 0)
        void* rax_5 = nullptr
        int32_t var_2c_1 = 0x18
        void* var_38_1 = nullptr
        int32_t rdx = 0
        int32_t var_30_1 = 0
        void var_f8
        
        if (rbx_1.d s> 0x18)
            sub_141dd5f20(&var_f8, rbx_1.d)
            rdx = var_30_1
            rax_5 = var_38_1
        
        void* rcx_3 = &var_f8
        
        if (rax_5 != 0)
            rcx_3 = rax_5
        
        result = memcpy(rcx_3 + (sx.q(rdx) << 3), arg1[0x1a], (rbx_1 << 3).d)
        void* r9_1 = var_38_1
        int32_t i = var_30_1 + rbx_1.d
        int32_t i_1 = i
        
        while (i s> 0)
            void* r10_1 = &var_f8
            
            if (r9_1 != 0)
                r10_1 = r9_1
            
            int64_t* rbx_2 = *(r10_1 + (sx.q(i - 1) << 3))
            result = 0
            
            if (0 != 0)
                result = memmove(r10_1 + (sx.q(i - 1) << 3), r10_1 + (sx.q(i) << 3), result << 3)
                i = i_1
                r9_1 = var_38_1
            
            i -= 1
            i_1 = i
            
            if (rbx_2 != 0)
                int64_t rdi_1 = sx.q(rbx_2[0x1b].d)
                
                if (rdi_1.d != 0)
                    int32_t rax_12 = i + rdi_1.d
                    
                    if (rax_12 s> var_2c_1)
                        sub_141dd5f20(&var_f8, rax_12)
                        i = i_1
                        r9_1 = var_38_1
                    
                    void* rcx_8 = &var_f8
                    
                    if (r9_1 != 0)
                        rcx_8 = r9_1
                    
                    memcpy(rcx_8 + (sx.q(i) << 3), rbx_2[0x1a], (rdi_1 << 3).d)
                    i_1 += rdi_1.d
                
                if (arg3 == 2)
                    sub_141f479b0(rbx_2, zx.q(arg2), 0)
                
                result = sub_141ee8490(rbx_2)
                i = i_1
                r9_1 = var_38_1
        
        if (r9_1 != 0)
            result = sub_140a74f90(r9_1)

__security_check_cookie(rax_1 ^ &var_118)
return result
