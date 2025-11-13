// 函数: sub_141a50300
// 地址: 0x141a50300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xd0)
int128_t* result = arg2
int128_t zmm6
int128_t var_48 = zmm6

if (rcx == 0)
    result[1].b = 0
else
    void* rax_1 = *(rcx + 0x28)
    void* r12_1 = rcx + 0x10
    
    if (rax_1 != 0)
        r12_1 = rax_1
    
    int32_t arg_1c = 0
    int64_t rbx_1 = 0.q
    int32_t arg_c = 0
    int64_t rdi_1 = 0.q
    void* rax_3 = r12_1 + sx.q(*(rcx + 0x30)) * 0x18
    int64_t var_78 = rdi_1
    int64_t var_70 = rbx_1
    zmm6 = var_78.o
    
    if (r12_1 != rax_3)
        do
            int64_t rsi_1 = 0
            int64_t* r14_1 = *(r12_1 + 8)
            uint64_t r15_2 = sx.q(*(r12_1 + 0x10)) << 3 u>> 3
            
            if (r14_1 u> &r14_1[sx.q(*(r12_1 + 0x10))])
                r15_2 = 0
            
            if (r15_2 != 0)
                do
                    int64_t* rcx_2 = *r14_1
                    void var_58
                    int128_t* rax_7 = (*(*rcx_2 + 0x40))(rcx_2, &var_58)
                    int32_t r8_1 = var_70:4.d
                    int32_t r10_1 = var_78:4.d
                    int128_t var_68
                    
                    if (rdi_1.b == 2 || rbx_1.b == 2 ||
                            (r10_1 s<= r8_1 && (r10_1 != r8_1 || (rdi_1.b != 0 && rbx_1.b != 0))))
                        char r11_1 = *rax_7
                        
                        if (r11_1 == 2)
                        label_141a5042b:
                            void* rdx_1 = rax_7 + 8
                            
                            if (rbx_1.b == 2)
                                rdx_1 = &var_70
                            else if (*rdx_1 != 2)
                                int32_t temp1_1 = *(rdx_1 + 4)
                                
                                if (r8_1 s> temp1_1)
                                    rdx_1 = &var_70
                                else if (r8_1 s>= temp1_1)
                                    void* rcx_4 = &var_70
                                    
                                    if (rbx_1.b != 1)
                                        rcx_4 = rdx_1
                                    
                                    rdx_1 = rcx_4
                            
                            if (rdi_1.b == 2)
                                rax_7 = &var_78
                            else if (r11_1 != 2)
                                int32_t temp2_1 = *(rax_7 + 4)
                                
                                if (r10_1 s< temp2_1)
                                    rax_7 = &var_78
                                else if (r10_1 s<= temp2_1)
                                    int128_t* rcx_5 = &var_78
                                    
                                    if (rdi_1.b != 1)
                                        rcx_5 = rax_7
                                    
                                    rax_7 = rcx_5
                            
                            var_68:8.q = *rdx_1
                            var_68.q = *rax_7
                            zmm6 = var_68
                        else
                            char r9_1 = *(rax_7 + 8)
                            
                            if (r9_1 == 2)
                                goto label_141a5042b
                            
                            int32_t rcx_3 = *(rax_7 + 4)
                            int32_t temp0_1 = *(rax_7 + 0xc)
                            
                            if (rcx_3 s<= temp0_1
                                    && (rcx_3 != temp0_1 || (r11_1 != 0 && r9_1 != 0)))
                                goto label_141a5042b
                            
                            var_68 = zmm6
                    else
                        zmm6 = *rax_7
                        var_68 = zmm6
                    var_78.o = zmm6
                    r14_1 = &r14_1[1]
                    rbx_1 = var_70
                    rsi_1 += 1
                    rdi_1 = var_78
                while (rsi_1 != r15_2)
            
            r12_1 += 0x18
        while (r12_1 != rax_3)
        
        result = arg2
    
    uint32_t rax_10
    uint32_t rcx_8
    
    if (rdi_1.b != 2 && rbx_1.b != 2)
        rax_10 = (rdi_1 u>> 0x20).d
        rcx_8 = (rbx_1 u>> 0x20).d
    
    if (rdi_1.b != 2 && rbx_1.b != 2
            && (rax_10 s> rcx_8 || (rax_10 == rcx_8 && (rdi_1.b == 0 || rbx_1.b == 0))))
        result[1].b = 0
    else
        *result = zmm6
        result[1].b = 1

return result
