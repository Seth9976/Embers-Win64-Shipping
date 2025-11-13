// 函数: sub_140a12c60
// 地址: 0x140a12c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t rdi = 0
int64_t rbx = sx.q(arg4)
*arg2 = 0
arg2[1] = 0
int32_t var_168 = 0
sub_1405947f0(arg2, 5)
int32_t rax_2 = arg2[1].d + 5
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"None", 0xa)

if (rbx.d != 0xffffffff)
    int64_t var_188
    int64_t var_178
    void var_158
    bool cond:0_1
    
    if (arg3 != 0)
        if (arg3 == 6 && rbx.d s< *(arg1 + 0x50))
            int64_t r15_2 = rbx << 3
            int64_t* rdx_10
            int32_t rbx_6
            
            if (sub_1408f3520(*(r15_2 + *(arg1 + 0x48))) == 0)
                sub_140a2e390(&var_178, u"Track %d", zx.q(rbx.d))
                rdx_10 = &var_178
                rbx_6 = 0x20
            else
                void* rax_9 = sub_14060c4d0(&var_158, sub_1408f3520(*(r15_2 + *(arg1 + 0x48))))
                int32_t rcx_21 = 0
                var_188 = 0
                int32_t var_180_3 = 0
                int32_t var_17c_2 = 0
                int16_t* rsi_2 = *(rax_9 + 0x108)
                
                if (rsi_2 != 0 && *rsi_2 != 0)
                    int64_t rbx_4 = -1
                    
                    do
                        rbx_4 += 1
                    while (rsi_2[rbx_4] != 0)
                    
                    if (rbx_4.d + 1 s> 0)
                        sub_1405947f0(&var_188, rbx_4.d + 1)
                        rcx_21 = var_17c_2
                        rdi = var_180_3
                    
                    int32_t rax_10 = rbx_4.d + 1 + rdi
                    int32_t var_180_4 = rax_10
                    
                    if (rax_10 s> rcx_21)
                        sub_140594770(&var_188)
                    
                    UnDecorator::getReferenceType(var_188, rsi_2, (rbx_4.d + 1) * 2)
                
                rdx_10 = &var_188
                rbx_6 = 0x18
            
            sub_140597da0(arg2, rdx_10)
            
            if ((rbx_6.b & 0x20) != 0)
                int64_t rcx_27 = var_178
                rbx_6 &= 0xffffffdf
                
                if (rcx_27 != 0)
                    sub_140a74f90(rcx_27)
            
            if ((rbx_6.b & 0x10) != 0)
                int64_t rcx_28 = var_188
                rbx_6 &= 0xffffffef
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
            
            cond:0_1 = (rbx_6.b & 8) == 0
        label_140a12f30:
            int64_t var_58
            
            if (not(cond:0_1) && var_58 != 0)
                sub_140a74f90(var_58)
    else if (rbx.d s< *(arg1 + 0x60))
        int64_t r15_1 = rbx << 3
        int64_t* rdx_5
        int32_t rbx_3
        
        if (sub_1408f3520(*(r15_1 + *(arg1 + 0x58))) == 0)
            sub_140a2e390(&var_178, u"Track %d", zx.q(rbx.d))
            rdx_5 = &var_178
            rbx_3 = 4
        else
            void* rax_5 = sub_14060c4d0(&var_158, sub_1408f3520(*(r15_1 + *(arg1 + 0x58))))
            int32_t rcx_8 = 0
            var_188 = 0
            int32_t var_180_1 = 0
            int32_t var_17c_1 = 0
            int16_t* rsi_1 = *(rax_5 + 0x108)
            
            if (rsi_1 != 0 && *rsi_1 != 0)
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while (rsi_1[rbx_1] != 0)
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_188, rbx_1.d + 1)
                    rcx_8 = var_17c_1
                    rdi = var_180_1
                
                int32_t rax_6 = rbx_1.d + 1 + rdi
                int32_t var_180_2 = rax_6
                
                if (rax_6 s> rcx_8)
                    sub_140594770(&var_188)
                
                UnDecorator::getReferenceType(var_188, rsi_1, (rbx_1.d + 1) * 2)
            
            rdx_5 = &var_188
            rbx_3 = 3
        
        sub_140597da0(arg2, rdx_5)
        
        if ((rbx_3.b & 4) != 0)
            int64_t rcx_14 = var_178
            rbx_3 &= 0xfffffffb
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
        
        if ((rbx_3.b & 2) != 0)
            int64_t rcx_15 = var_188
            rbx_3 &= 0xfffffffd
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
        
        cond:0_1 = (rbx_3.b & 1) == 0
        goto label_140a12f30

__security_check_cookie(rax_1 ^ &var_1a8)
return arg2
