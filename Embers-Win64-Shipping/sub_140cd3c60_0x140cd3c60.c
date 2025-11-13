// 函数: sub_140cd3c60
// 地址: 0x140cd3c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 1
sub_1405a4f90(arg1)
**arg1 = *arg2
void* i_1
sub_140cbd1e0(arg2, &i_1)
char arg_8 = 0
char* var_50 = &arg_8
void*** (* var_58)() = j_sub_140cd6f60
void* rax_1 = sub_140a756e0(&var_58, &data_1439aa2e0)
void* i = i_1

if (i == 0)
    return arg1

int64_t r14 = sx.q(*(rax_1 + 0x38) - 1)
int64_t r15_1 = r14 << 4

do
    char var_60
    
    if (var_60 == 0)
        goto label_140cd3e3b
    
    void* rdi_1 = *(i + 0x10)
    void* rax_2 = sub_140bdf2e0()
    
    if (rax_2 != 0)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rdi_1 + 0x38) && *(*(rdi_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            break
    
    if (var_60 == 0)
        i = i_1
    label_140cd3e3b:
        
        if (i != 0 && ((zx.q(*(*(i + 8) + 0x10)) u>> 0xf).b & 1) != 0)
            int64_t rdi_4 = sx.q(arg1[1].d)
            char var_40_1 = 0
            int32_t rax_17 = (rdi_4 + 1).d
            arg1[1].d = rax_17
            
            if (rax_17 s> *(arg1 + 0xc))
                sub_1405a4f90(arg1)
            
            *(*arg1 + rdi_4 * 0x10) = i.o
    else
        void* i_2 = i_1
        
        if (i_2 != 0)
            void* rax_5 = sub_140bdfe30()
            void* rdx_3 = *(i_2 + 0x10)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                if (r14 == -1)
                    break
                
                void* rsi_1 = nullptr
                int64_t* rdi_3 = *(rax_1 + 0x30) + r15_1
                sub_140d12020()
                char rax_8 = sub_140cc1670(rdi_3, &data_143e1c4a0)
                void* rax_9
                
                if (rax_8 != 0)
                    rax_9 = *rdi_3
                
                if (rax_8 == 0 || rax_9 == 0)
                    if (sub_140cc16a0(rdi_3, sub_140d046e0()) != 0)
                        void* rax_12 = *rdi_3
                        
                        if (rax_12 != 0)
                            rsi_1 = *(rax_12 + 0x70)
                else
                    rsi_1 = *(rax_9 + 0x78)
                
                int64_t rax_13 = sx.q(*(i_2 + 0x38))
                
                if (rax_13.d s> *(rsi_1 + 0x38))
                    break
                
                if (*(*(rsi_1 + 0x30) + (rax_13 << 3)) != i_2 + 0x30)
                    break
                
                int64_t rsi_2 = sx.q(arg1[1].d)
                int32_t rax_15 = (rsi_2 + 1).d
                i_1.o = *rdi_3
                arg1[1].d = rax_15
                
                if (rax_15 s> *(arg1 + 0xc))
                    sub_1405a4f90(arg1)
                
                r14 -= 1
                r15_1 -= 0x10
                *(*arg1 + rsi_2 * 0x10) = *rdi_3
    
    void var_38
    int128_t zmm0_1 = *sub_140cbd1e0(&i_1, &var_38)
    i = zmm0_1.q
    i_1.o = zmm0_1
while (i != 0)

return arg1
