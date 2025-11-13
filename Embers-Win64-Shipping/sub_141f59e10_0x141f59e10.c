// 函数: sub_141f59e10
// 地址: 0x141f59e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t r15 = 0
int64_t* result = arg2
int32_t r14 = 0
int64_t* var_c8 = arg1
int32_t i = 0
int32_t var_d8 = 0

if (arg2[1].d s> 0)
    int64_t rdi_1 = 0
    int64_t var_d0_1 = 0
    
    do
        int32_t rbx_1 = -1
        void* rsi_2 = *result + rdi_1
        int32_t rdx = 0
        int64_t r8 = 0
        int32_t r9_1 = 0
        int32_t r10_1 = 0
        int32_t r13_1 = *(rsi_2 + 0x38)
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x2c)
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        int64_t var_90_1
        int64_t var_88
        int64_t* var_78
        
        if (*(rsi_2 + 0x30) s> 0)
            int32_t rdi_2 = 0
            
            while (true)
                uint32_t r14_1 = zx.d(*(*(rsi_2 + 0x28) + (sx.q(rdi_2) << 1)))
                
                if (rdx == 0)
                    rbx_1 = r9_1
                    var_90_1.d = r9_1 + 1
                    
                    if (r9_1 + 1 s> r10_1)
                        sub_140610660(&var_98)
                    
                    sub_1405b2ba0(&var_88, 0)
                else
                    int64_t rcx_1 = sx.q(*(r8 + sx.q(rbx_1) * 0x10 + 4))
                    var_68_1 = rcx_1.d
                    var_64_1 = rdx - 1
                    
                    if (rdx != 1)
                        *(r8 + rcx_1 * 0x10) = 0xffffffff
                
                int64_t* rcx_4 = &var_88
                
                if (var_78 != 0)
                    rcx_4 = var_78
                
                int32_t rax_9 = rbx_1
                
                if (rbx_1 s< 0)
                    rax_9 = rbx_1 + 0x1f
                
                void* r8_1 = rcx_4 + (sx.q(rax_9 s>> 5) << 2)
                char* var_e0_1 = nullptr
                *r8_1 |= 1 << (rbx_1.b & 0x1f)
                uint32_t* rax_14 = (sx.q(rbx_1) << 4) + var_98
                int64_t* var_e8
                var_e8.d = rbx_1
                *rax_14 = r14_1
                rax_14[1] = r15
                rax_14[2] = 0xffffffff
                void var_b0
                sub_140908a30(&var_98, &var_b0, r14_1, rax_14, var_e8.d, var_e0_1)
                r15 = rdi_2 + 1
                rdi_2 = r15
                
                if (r15 s>= *(rsi_2 + 0x30))
                    break
                
                rdx = var_64_1
                rbx_1 = var_68_1
                r10_1 = var_90_1:4.d
                r9_1 = var_90_1.d
                r8 = var_98
            
            rdi_1 = var_d0_1
            r14 = var_d8
            arg1 = var_c8
        
        r15 = 0
        int32_t* var_c0
        int32_t** var_e0_2 = &var_c0
        var_c0 = nullptr
        int32_t var_b8_1 = 0
        sub_141f59b70(arg1, r14, r13_1, &var_98, arg3, var_e0_2)
        int64_t rax_16 = sx.q(var_b8_1)
        int32_t* r9_4 = var_c0
        
        if (rax_16.d s> 0)
            void* rcx_8 = &r9_4[rax_16]
            int32_t* r8_4 = r9_4
            int64_t rax_17 = 0
            uint64_t rdx_9 = (rcx_8 - r9_4 + 3) u>> 2
            
            if (r9_4 u> rcx_8)
                rdx_9 = 0
            
            if (rdx_9 != 0)
                do
                    rax_17 += 1
                    r8_4 = &r8_4[1]
                while (rax_17 != rdx_9)
        
        r14 += r13_1
        var_d8 = r14
        
        if (r9_4 != 0)
            sub_140a74f90(r9_4)
        
        int32_t var_50_2 = 0
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        var_90_1.d = 0
        
        if (var_90_1:4.d != 0)
            sub_1405a5410(&var_98, 0)
        
        int32_t var_68_2 = 0xffffffff
        int32_t var_64_2 = 0
        sub_14059a8e0(&var_88, 0)
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int64_t rcx_14 = var_98
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        result = arg2
        rdi_1 += 0xe8
        arg1 = var_c8
        i += 1
        var_d0_1 = rdi_1
    while (i s< result[1].d)

__security_check_cookie(rax_1 ^ &var_108)
return result
