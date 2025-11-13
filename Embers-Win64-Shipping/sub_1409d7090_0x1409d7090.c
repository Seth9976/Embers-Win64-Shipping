// 函数: sub_1409d7090
// 地址: 0x1409d7090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t* r15 = *(arg1 + 0x18)
int64_t* rdi = arg2
void* rsi_2 = &r15[sx.q(*(arg1 + 0x20)) * 2]
void* arg_8 = rsi_2

while (r15 != rsi_2)
    int64_t var_78 = 0
    int32_t var_6c_1 = 0
    int64_t r14_1 = 0
    int32_t rbx_1 = 0
    int32_t r13_1 = 0
    void* var_68
    sub_1407453e0(&var_68, rdi)
    int32_t i_1
    int32_t i = i_1
    void* var_58
    
    if (i s< *(var_58 + 0x18))
        do
            int64_t i_2 = sx.q(i)
            int64_t rsi_3 = sx.q(*(*rdi + (i_2 << 3)))
            
            if (rsi_3.d s>= rbx_1)
                int64_t rdi_1 = sx.q(rbx_1)
                rbx_1 = (rsi_3 + 1).d
                
                if (rbx_1 s> r13_1)
                    sub_1405a4f90(&var_78)
                    r13_1 = var_6c_1
                    r14_1 = var_78
                
                int128_t* rax_4 = (rdi_1 << 4) + r14_1
                
                if (rdi_1.d s<= rsi_3.d)
                    uint64_t j_1 = zx.q(rsi_3.d - rdi_1.d + 1)
                    uint64_t j
                    
                    do
                        *rax_4 = *(arg1 + 0x30)
                        rax_4 = &rax_4[1]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                rdi = arg2
            
            *(r14_1 + rsi_3 * 0x10) = *(*r15 + i_2 * 0x10)
            int32_t var_5c
            int32_t var_50 = var_50 & not.d(var_5c)
            void var_60
            sub_14059bdd0(&var_60)
            i = i_1
        while (i s< *(var_58 + 0x18))
        
        rsi_2 = arg_8
    
    if (r15 != &var_78)
        int64_t rcx_5 = *r15
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
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
