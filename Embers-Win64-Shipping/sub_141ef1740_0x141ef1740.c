// 函数: sub_141ef1740
// 地址: 0x141ef1740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = *arg2
int64_t* rsi = nullptr
int32_t r13 = 0
int32_t arg_10 = 0
arg_10.q = r12
void* result = &r12[sx.q(arg2[1].d)]
void* result_1 = result

if (r12 != result)
    do
        void* rbx_1 = *r12
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x20)
        int64_t var_88
        int128_t var_50_1 = var_88.o
        int64_t rbx_2
        void* r15_1
        
        if (rbx_1 == 0)
            int64_t var_58
            rbx_2 = var_58
            r15_1 = var_98.o.q
        else
            int64_t var_78_1 = 0
            int64_t var_70_1 = 0
            void* rax_1 = sub_140cbd010(rbx_1)
            r15_1 = rax_1
            int64_t var_a8
            char rax_2
            
            if (rax_1 == 0)
                r13 |= 1
                sub_140b63b70(rbx_1 + 0x28, &var_a8)
                rax_2 = sub_140a237d0(&var_a8, u"__DelegateSignature", 1)
            
            char rdi_1
            
            if (rax_1 != 0 || rax_2 == 0)
                rdi_1 = 0
            else
                rdi_1 = 1
            
            if ((r13.b & 1) != 0)
                int64_t rcx_3 = var_a8
                r13 &= 0xfffffffe
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
            
            if (rdi_1 != 0)
                r15_1 = sub_140cbcfb0(rbx_1)
            
            rbx_2 = *(rbx_1 + 0x28)
            var_50_1 = var_78_1.o
        
        result = zx.q(*(arg1 + 0x98))
        int32_t i = 0
        
        if (result.d s> 0)
            do
                int64_t r9_1 = *(arg1 + 0x90)
                
                if (*(rsi + r9_1) == r15_1 && *(rsi + r9_1 + 8) == rbx_2)
                    int32_t rdx_5 = (*(rsi + r9_1 + 0x1c) ^ var_50_1:0xc.d)
                        | (*(rsi + r9_1 + 0x18) ^ var_50_1:8.d)
                        | (*(rsi + r9_1 + 0x14) ^ var_50_1:4.d)
                        | (*(rsi + r9_1 + 0x10) ^ var_50_1.d)
                    
                    if (rdx_5 == 0)
                        int32_t rcx_13 = result.d - i - 1
                        
                        if (rcx_13 s>= 1)
                            rcx_13 = 1
                        
                        if (rcx_13 != 0)
                            memcpy((sx.q(i) << 5) + r9_1, (sx.q(result.d - rcx_13) << 5) + r9_1, 
                                rcx_13 << 5)
                            result = zx.q(*(arg1 + 0x98))
                        
                        *(arg1 + 0x98) = result.d - 1
                        sub_1405dad20(arg1 + 0x90)
                        result = zx.q(*(arg1 + 0x98))
                        i -= 1
                        rsi -= 0x20
                
                i += 1
                rsi = &rsi[4]
            while (i s< result.d)
            
            r12 = arg_10.q
            rsi = nullptr
        
        r12 = &r12[1]
        arg_10.q = r12
    while (r12 != result_1)

return result
