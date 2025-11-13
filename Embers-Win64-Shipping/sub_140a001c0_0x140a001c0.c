// 函数: sub_140a001c0
// 地址: 0x140a001c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_218
int64_t var_48_1 = __security_cookie ^ &var_218
void* r12_1 = arg1[0x88]
int64_t* r15_1 = arg1

if (r12_1 != 0 && arg3 != 0)
    int32_t rax_2 = sub_142366140(r12_1, arg2)
    int32_t i_2 = 0
    int32_t rdi_1 = 0
    int64_t var_1b0
    int32_t var_1a8
    int64_t i_3
    int64_t var_120
    
    if (rax_2 s> 0)
        do
            var_1b0 = 0
            int64_t* var_1e0_1 = &i_3
            var_1a8 = 0
            int64_t var_180
            int64_t* var_1e8_1 = &var_180
            int64_t var_170
            int64_t* var_1f0_1 = &var_170
            uint64_t var_160
            uint64_t* var_1f8_1 = &var_160
            __builtin_memset(&var_180, 0, 0x70)
            i_3 = 0
            int64_t var_198_1 = 0
            sub_140a041b0(r12_1, arg2, rdi_1, &var_1b0, var_1f8_1, var_1f0_1, var_1e8_1, var_1e0_1)
            int64_t var_150
            int64_t var_140
            int64_t var_130
            sub_140a01450(arg3, rdi_1, &var_1b0, &var_160, &var_170, &var_180, &var_120, &var_130, 
                &var_140, &var_150, &i_3, arg4)
            int64_t i_6 = i_3
            
            if (i_6 != 0)
                sub_140a74f90(i_6)
            
            int64_t rcx_3 = var_180
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = var_170
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            uint64_t rcx_5 = var_160
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = var_1b0
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rdi_1 += 1
        while (rdi_1 s< rax_2)
        
        r15_1 = arg1
    
    int32_t i_4 = arg3[0x8c].d
    void*** rdi_2 = arg3[0x8b]
    
    if (i_4 != 0)
        int32_t i
        
        do
            sub_14222ae60(rdi_2)
            rdi_2 = &rdi_2[0x16]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    arg3[0x8c].d = 0
    
    if (*(arg3 + 0x464) != 0)
        sub_140a05f70(&arg3[0x8b], 0)
    
    sub_140a09030(arg3)
    void* rax_3 = *(r12_1 + 0x88)
    
    if (rax_3 != 0)
        int64_t i_5 = sx.q(*(rax_3 + 0x60))
        i_3 = i_5
        
        if (i_5 s> 0)
            int64_t r12_2 = 0
            int64_t i_1
            
            do
                void* rax_4 = *(r12_1 + 0x88)
                int64_t rsi_2 = 0
                var_1b0 = 0
                int64_t rcx_10 = *(rax_4 + 0x58)
                int64_t rdi_3 = sx.q(*(rcx_10 + r12_2 + 0x38))
                int64_t rax_5 = *(rcx_10 + r12_2 + 0x30)
                var_1a8 = rdi_3.d
                
                if (rdi_3.d != 0)
                    sub_1407c3650(&var_1b0, rdi_3.d, 0)
                    rsi_2 = var_1b0
                    memcpy(rsi_2, rax_5, (rdi_3 * 0xc).d)
                    rdi_3 = zx.q(var_1a8)
                else
                    var_1a8 = 0
                
                if (rdi_3.d s>= 4)
                    void** var_f8
                    sub_14222a2e0(&var_f8)
                    int32_t var_c0_1 = rdi_3.d
                    int64_t var_c8
                    int32_t var_bc
                    
                    if (rdi_3.d != 0 || var_bc != 0)
                        sub_1407c3650(&var_c8, rdi_3.d, var_bc)
                        memcpy(var_c8, rsi_2, rdi_3.d * 0xc)
                    else
                        var_bc = 0
                    
                    float (* rax_7)[0x4] = sub_140acc600(&var_120, &var_c8)
                    int64_t rdi_4 = sx.q(arg3[0x8c].d)
                    float var_a8_1[0x4] = *rax_7
                    int64_t var_98_1 = rax_7[1][0].q
                    float var_90_1 = (*rax_7)[6]
                    int32_t rax_9 = (rdi_4 + 1).d
                    arg3[0x8c].d = rax_9
                    
                    if (rax_9 s> *(arg3 + 0x464))
                        sub_140a05e50(&arg3[0x8b])
                    
                    sub_14222a240(rdi_4 * 0xb0 + arg3[0x8b], &var_f8)
                    sub_140a09030(arg3)
                    sub_14222ae60(&var_f8)
                
                if (rsi_2 != 0)
                    sub_140a74f90(rsi_2)
                
                r12_2 += 0xb0
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            r15_1 = arg1
    
    if ((*(*r15_1 + 0x6a0))(r15_1).d s> 0)
        int64_t rax
        
        do
            (*(*arg3 + 0x550))(arg3, zx.q(i_2), (*(*r15_1 + 0x548))(r15_1, zx.q(i_2)))
            i_2 += 1
            rax = (*(*r15_1 + 0x6a0))(r15_1)
        while (i_2 s< rax.d)

__security_check_cookie(var_48_1 ^ &var_218)
