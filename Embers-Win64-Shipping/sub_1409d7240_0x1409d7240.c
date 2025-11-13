// 函数: sub_1409d7240
// 地址: 0x1409d7240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t* r15 = *(arg1 + 0x18)
int64_t* rsi = arg2
void* rbp_2 = &r15[sx.q(*(arg1 + 0x20)) * 2]
void* arg_8 = rbp_2

while (r15 != rbp_2)
    int64_t var_78 = 0
    int32_t var_6c_1 = 0
    int64_t r14_1 = 0
    int32_t rbx_1 = 0
    int32_t r13_1 = 0
    void* var_68
    sub_1407453e0(&var_68, rsi)
    int32_t i_1
    int32_t i = i_1
    void* var_58
    
    if (i s< *(var_58 + 0x18))
        do
            int64_t i_2 = sx.q(i)
            int64_t rbp_3 = sx.q(*(*rsi + (i_2 << 3)))
            
            if (rbp_3.d s>= rbx_1)
                int64_t rsi_1 = sx.q(rbx_1)
                rbx_1 = (rbp_3 + 1).d
                
                if (rbx_1 s> r13_1)
                    sub_140638a00(&var_78)
                    r13_1 = var_6c_1
                    r14_1 = var_78
                
                int64_t* rax_2 = r14_1 + rsi_1 * 0xc
                
                if (rsi_1.d s<= rbp_3.d)
                    uint64_t j_1 = zx.q(rbp_3.d - rsi_1.d + 1)
                    uint64_t j
                    
                    do
                        *rax_2 = *(arg1 + 0x28)
                        rax_2 += 0xc
                        *(rax_2 - 4) = *(arg1 + 0x30)
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                rsi = arg2
            
            int64_t rdx_4 = *r15
            int64_t r8_1 = i_2 * 3
            int64_t rcx_5 = rbp_3 * 3
            *(r14_1 + (rcx_5 << 2)) = *(rdx_4 + (r8_1 << 2))
            *(r14_1 + (rcx_5 << 2) + 8) = *(rdx_4 + (r8_1 << 2) + 8)
            int32_t var_5c
            int32_t var_50 = var_50 & not.d(var_5c)
            void var_60
            sub_14059bdd0(&var_60)
            i = i_1
        while (i s< *(var_58 + 0x18))
        
        rbp_2 = arg_8
    
    if (r15 != &var_78)
        int64_t rcx_7 = *r15
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        *r15 = r14_1
        r15[1].d = rbx_1
        *(r15 + 0xc) = r13_1
        var_78 = 0
        int32_t var_70
        var_70.q = 0
    else if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    result = r15[1].d
    r15 = &r15[2]
    *(arg1 + 0xc) = result

return result
