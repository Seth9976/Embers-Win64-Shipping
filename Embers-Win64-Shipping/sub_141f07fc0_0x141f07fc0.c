// 函数: sub_141f07fc0
// 地址: 0x141f07fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
uint64_t var_28 = __security_cookie ^ &var_118
uint64_t result

if (arg1[0x1b].d s<= 0)
    *(arg1 + 0x20e) |= 0x20
    result.b = 1
else
    uint64_t r15_1 = arg1[0x15]
    
    if (r15_1 == 0)
        r15_1 = sub_141ee69e0(arg1)
    
    if (arg2 == 0 || (*(arg1 + 0x20e) & 0x20) != 0 || not(*(r15_1 + 0x520) f- arg1[0x4c].d < 1f))
        void* rdx = nullptr
        int32_t var_2c_1 = 0x18
        int32_t r8_1 = 0
        void* var_38_1 = nullptr
        int32_t var_30_1 = 0
        void* r9_1
        
        if (arg1[0x2f].d s> 0)
            r9_1 = *(arg1[0x2e] + (sx.q(arg1[0x2f].d) << 3) - 8)
        
        uint64_t r14
        
        if (arg1[0x2f].d s<= 0 || r9_1 == 0)
            r14.b = 1
        else
            r14.b = *(r9_1 + 0x350) u>> 2
            r14.b &= 1
        
        int64_t rbx_1 = sx.q(arg1[0x1b].d)
        
        if (rbx_1.d != 0)
            void var_f8
            
            if (rbx_1.d s> 0x18)
                sub_141dd5f20(&var_f8, rbx_1.d)
                r8_1 = var_30_1
                rdx = var_38_1
            
            void* rcx_2 = &var_f8
            
            if (rdx != 0)
                rcx_2 = rdx
            
            memcpy(rcx_2 + (sx.q(r8_1) << 3), arg1[0x1a], (rbx_1 << 3).d)
            void* r9_2 = var_38_1
            int32_t i = var_30_1 + rbx_1.d
            int32_t i_1 = i
            
            while (i s> 0)
                void* r10_1 = &var_f8
                
                if (r9_2 != 0)
                    r10_1 = r9_2
                
                int64_t* rdi_1 = *(r10_1 + (sx.q(i - 1) << 3))
                
                if (0 != 0)
                    memmove(r10_1 + (sx.q(i - 1) << 3), r10_1 + (sx.q(i) << 3), 0 << 3)
                    i = i_1
                    r9_2 = var_38_1
                
                i -= 1
                i_1 = i
                
                if (rdi_1 != 0)
                    if ((*(rdi_1 + 0x14c) & 0xc) != 0)
                        void* rax_7 = sub_142577430()
                        void* rdx_5 = rdi_1[2]
                        result = sx.q(*(rax_7 + 0x38))
                        
                        if (result.d s<= *(rdx_5 + 0x38)
                                && *(*(rdx_5 + 0x30) + (result << 3)) == rax_7 + 0x30
                                && ((*(rdi_1 + 0x209) & 1) != 0 || r14.b == 0))
                            result.b = (((*(*rdi_1 + 0x4c8))(rdi_1) - 1) & 0xfffffffd) == 0
                            
                            if (result.b != 0
                                    && (*(*rdi_1 + 0x4d0))(rdi_1, zx.q((*(*arg1 + 0x4d8))(arg1))).d
                                    != 0)
                                *(arg1 + 0x20e) &= 0xdf
                                arg1[0x4c].d = *(r15_1 + 0x520)
                                
                                if (var_38_1 != 0)
                                    sub_140a74f90(var_38_1)
                                
                                goto label_141f08282
                        
                        i = i_1
                        r9_2 = var_38_1
                    
                    int64_t rbx_3 = sx.q(rdi_1[0x1b].d)
                    
                    if (rbx_3.d != 0)
                        int32_t rax_12 = i + rbx_3.d
                        
                        if (rax_12 s> var_2c_1)
                            sub_141dd5f20(&var_f8, rax_12)
                            i = i_1
                            r9_2 = var_38_1
                        
                        void* rcx_11 = &var_f8
                        
                        if (r9_2 != 0)
                            rcx_11 = r9_2
                        
                        memcpy(rcx_11 + (sx.q(i) << 3), rdi_1[0x1a], (rbx_3 << 3).d)
                        r9_2 = var_38_1
                        i = i_1 + rbx_3.d
                        i_1 = i
            
            if (r9_2 != 0)
                sub_140a74f90(r9_2)
        
        *(arg1 + 0x20e) |= 0x20
        result.b = 1
    else
    label_141f08282:
        result.b = 0

__security_check_cookie(var_28 ^ &var_118)
return result
