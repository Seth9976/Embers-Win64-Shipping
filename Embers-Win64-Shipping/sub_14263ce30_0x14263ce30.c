// 函数: sub_14263ce30
// 地址: 0x14263ce30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* arg_8 = arg1
int64_t* r14
int64_t* var_30 = r14
int32_t rdx = *(arg1 + 0xd8)
uint64_t rbx
rbx.b = 0
void* r13 = arg1
char arg_10 = 0
int16_t rsi = 0

if (rdx s> 0)
    void** result_1 = nullptr
    int64_t var_40_1 = 0
    sub_1405c5570(&result_1, rdx)
    int16_t rdi_1 = 0
    int32_t i = 0
    uint64_t i_2
    
    if (*(r13 + 0xd8) s<= 0)
        i_2 = zx.q(var_40_1.d)
    else
        r14 = nullptr
        i_2 = zx.q(var_40_1.d)
        
        do
            int64_t r13_1 = *(r13 + 0xd0)
            int64_t* rcx_1 = *(r14 + r13_1)
            
            if (rcx_1 == 0)
                rbx.b = 1
                arg_10 = 1
            else
                rbx = zx.q(*(rcx_1 + 0x42))
                
                if ((rcx_1[8].w & rdi_1) != 0)
                    if (*(rcx_1 + 0x39) == 3)
                        (*(*rcx_1 + 0x2a8))()
                    
                    rdi_1 |= rbx.w
                else
                    int64_t r15_1 = sx.q(i_2.d)
                    i_2 = zx.q((r15_1 + 1).d)
                    var_40_1.d = i_2.d
                    
                    if (i_2.d s> var_40_1:4.d)
                        sub_1405a4d70(&result_1)
                        i_2 = zx.q(var_40_1.d)
                    
                    rsi |= rbx.w
                    rdi_1 |= rbx.w
                    result_1[r15_1] = *(r14 + r13_1)
            
            r13 = arg_8
            i += 1
            r14 = &r14[1]
        while (i s< *(r13 + 0xd8))
    
    if (i_2.d s> 0)
        int64_t* result_2 = result_1
        uint64_t i_1
        
        do
            int64_t* rbx_1 = *result_2
            
            if (rbx_1 != 0)
                char r8_1 = *(rbx_1 + 0x39)
                
                if (r8_1 != 4)
                    int32_t rax_2 = *(rbx_1 + 0xc)
                    void* const rax_6
                    
                    if (rax_2 s>= data_143e1d9b4)
                        rax_6 = nullptr
                    else
                        uint32_t rdx_3 = zx.d(rax_2.w)
                        
                        if (rax_2 s< 0)
                            rax_2 += 0xffff
                            rdx_3 -= 0x10000
                        
                        rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
                    
                    if (((*(rax_6 + 8) u>> 0x1d).b & 1) == 0)
                        uint32_t rcx_6 = zx.d(r8_1)
                        
                        if (rcx_6 == 1)
                        label_14263cfab:
                            
                            if (r8_1 != 3)
                                int64_t rax_9 = *rbx_1
                                *(rbx_1 + 0x39) = 3
                                (*(rax_9 + 0x260))(rbx_1)
                                
                                if (*(rbx_1 + 0x39) != 4)
                                    int64_t* rcx_12 = sub_140d3c6e0(&rbx_1[0xb]) + 0xb0
                                    (*(*rcx_12 + 0x38))(rcx_12, rbx_1)
                        else if (rcx_6 == 2)
                            (*(*rbx_1 + 0x2b0))(rbx_1)
                        else if (rcx_6 == 4)
                            goto label_14263cfab
            
            result_2 = &result_2[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    result = result_1
    
    if (result != 0)
        result = sub_140a74f90(result)
    
    rbx = zx.q(arg_10)

int16_t rcx_14 = *(r13 + 0xbe)

if (rcx_14 != rsi)
    *(r13 + 0xbe) = rsi
    arg_8.w = not.w(rcx_14) & rsi
    arg_8:2.w = not.w(rsi) & rcx_14
    result = sub_1405a9f90(r13 + 0x110, &arg_8)

if (rbx.b != 0)
    int64_t rcx_16 = sx.q(*(r13 + 0xd8))
    
    if (rcx_16.d != 0)
        result = *(r13 + 0xd0)
        int32_t r15_2 = 0
        int32_t rdi_2 = 0
        int64_t rbx_2 = 0
        r14.b = *result != 0
        
        do
            int64_t r9_1 = sx.q(rdi_2)
            rbx_2 += 1
            rdi_2 += 1
            
            if (rbx_2 s< rcx_16)
                int64_t rcx_17 = *(r13 + 0xd0) + (rbx_2 << 3)
                
                do
                    result.b = *rcx_17 != 0
                    
                    if (zx.d(r14.b) != result.d)
                        break
                    
                    rdi_2 += 1
                    rbx_2 += 1
                    rcx_17 += 8
                while (rbx_2 s< rcx_16)
            
            int32_t rbp_2 = rdi_2 - r9_1.d
            
            if (r14.b != 0)
                if (r15_2 != r9_1.d)
                    int64_t rcx_18 = *(r13 + 0xd0)
                    result = memmove(rcx_18 + (sx.q(r15_2) << 3), rcx_18 + (r9_1 << 3), rbp_2 << 3)
                
                r15_2 += rbp_2
            
            r14.b ^= 1
        while (rbx_2 s< rcx_16)
        
        *(r13 + 0xd8) = r15_2

return result
