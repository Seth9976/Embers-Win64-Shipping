// 函数: sub_140634830
// 地址: 0x140634830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int32_t rbx = arg1[1].d
int64_t rsi = *arg1
void* result_2 = nullptr
uint64_t var_58 = 0
int16_t* rax

if (rbx != 0)
    sub_1405a4c70(&var_58, rbx, 0)
    memcpy(var_58, rsi, rbx * 2)
    rax = var_58
else
    rax = nullptr

int16_t* const rdx_3 = &data_142d40450
char* var_68 = nullptr

if (rbx != 0)
    rdx_3 = rax

int32_t var_60 = 0

if (sub_140b1ef70(&var_68, rdx_3, 0) == 0)
    result = result_2
else
    void* var_78
    sub_141fa4960(&var_78, var_68, var_60)
    
    if (sub_141fba7f0(&var_78) == 0)
        result = result_2
    else
        int32_t rbx_1 = sub_141fab100(&var_78)
        int64_t r14_1 = sx.q(sub_141fab120(&var_78))
        int32_t arg_8 = 0
        int32_t rax_5 = 0x10
        
        if (rbx_1 == 0)
            rbx_1 = 1
        
        if (r14_1.d == 5)
            rax_5 = 8
        
        void* rax_6 = var_78
        void* result_1 = sub_1423bea40(*(rax_6 + 0xc), *(rax_6 + 8), r14_1.d, 0)
        
        if (result_1 != 0)
            *(result_1 + 0x3d) |= 2
            int64_t rax_7 = sub_141fb3da0(&var_78, 0)
            void* rcx_9 = var_78
            int64_t r15_1 = rax_7
            int64_t arg_18 = rax_7
            uint32_t rsi_1 = *(rcx_9 + 0xc)
            uint32_t rbp_1 = *(rcx_9 + 8)
            int32_t rcx_10 = 0
            arg_8 = 0
            
            if (rbx_1 s> 0)
                int64_t rax_9 = r14_1
                int64_t var_80_1 = rax_9
                int64_t i = 0
                
                do
                    if (rsi_1 u< 1)
                        rsi_1 = 1
                    
                    if (rbp_1 u< 1)
                        rbp_1 = 1
                    
                    int32_t rbx_4 = (rbp_1 * rsi_1) << 2
                    
                    if (rax_9 - 5 u<= 2)
                        rbx_4 = ((rbp_1 + 3) u>> 2) * ((rsi_1 + 3) u>> 2) * rax_5
                    
                    void* rax_13 = *(result_1 + 0xd0)
                    int64_t rax_15
                    int64_t rbx_8
                    int64_t* r14_4
                    
                    if (rcx_10 s>= *(rax_13 + 0x20))
                        int64_t rax_16 = sub_140a82f30(0x30, 0)
                        int64_t r15_2 = sx.q(*(rax_13 + 0x20))
                        int32_t rcx_12 = (r15_2 + 1).d
                        *(rax_13 + 0x20) = rcx_12
                        
                        if (rcx_12 s> *(rax_13 + 0x24))
                            sub_140638870(rax_13 + 0x18)
                        
                        *(*(rax_13 + 0x18) + (r15_2 << 3)) = rax_16
                        uint32_t* rdx_8 = *(*(rax_13 + 0x18) + (r15_2 << 3))
                        
                        if (rdx_8 == 0)
                            rdx_8 = nullptr
                        else
                            rdx_8[2] = 0
                            *(rdx_8 + 0x20) = 0
                            rdx_8[0xa] = 0
                            rdx_8[0xb].b = 0
                            *(rdx_8 + 0x10) = 0
                            rdx_8[6] = 0xffffffff
                        
                        r14_4 = &rdx_8[4]
                        *rdx_8 = rsi_1
                        rdx_8[1] = rbp_1
                        sub_140bcb6b0(r14_4, 2)
                        rbx_8 = sx.q(rbx_4)
                        sub_140bce470(r14_4, rbx_8)
                        sub_140bd1d40(r14_4)
                        rax_15 = sub_140bcb6b0(r14_4, 2)
                        r15_1 = arg_18
                    else
                        r14_4 = *(*(rax_13 + 0x18) + (i << 3)) + 0x10
                        rax_15 = sub_140bcb6b0(r14_4, 2)
                        rbx_8 = sx.q(rbx_4)
                    
                    memcpy(rax_15, r15_1, rbx_8.d)
                    sub_140bd1d40(r14_4)
                    r15_1 += rbx_8
                    rax_9 = var_80_1
                    rcx_10 = arg_8 + 1
                    rsi_1 u>>= 1
                    i += 1
                    rbp_1 u>>= 1
                    arg_18 = r15_1
                    arg_8 = rcx_10
                while (i s< sx.q(rbx_1))
            
            (*(*result_1 + 0x2f8))(result_1)
            result = result_1

char* rcx_22 = var_68

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

uint64_t rax_20 = var_58

if (rax_20 != 0)
    sub_140a74f90(rax_20)

return result
