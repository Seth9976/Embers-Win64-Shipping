// 函数: sub_140ca4a60
// 地址: 0x140ca4a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg4

if (arg4 == 0 || arg5 == 0)
    jump(*(*arg1 + 0x280))

int64_t* var_48 = arg1
int64_t* i_1

if (arg1 == 0)
    i_1 = nullptr
else
    i_1 = arg1[0xa]

int32_t var_38 = 0xffffffff
int16_t var_34 = 0x101
char var_32 = 0
int64_t result = sub_1406328d0(&var_48)
int64_t* i_2

for (int64_t* i = i_1; i != 0; i = i_2)
    int64_t* r14_1 = *(*arg2 + 8)
    
    if (sub_140cea0a0(i, r14_1) != 0)
        int32_t r10_1 = i[7].d
        int32_t rdi_1 = 0
        
        if (r10_1 s> 0)
            do
                int64_t r8 = sx.q(*(i + 0x4c))
                int32_t r9 = *(i + 0x3c)
                int64_t rdx_2 = sx.q(r9 * rdi_1) + r8
                int64_t rbp_1 = rbp + rdx_2
                
                if (r9 * r10_1 + r8.d s> *(arg5 + 0x58))
                    rbp_1 = 0
                
                int64_t r15_1 = rdx_2 + arg3
                
                if ((*(*i + 0x80))(i, r15_1, rbp_1, zx.q(r14_1[6].d)) == 0)
                    int64_t* var_58 = r14_1
                    sub_140bb37e0(&var_58)
                    (*(*i + 0x88))(i, arg2, r15_1, rbp_1, var_58, i)
                    sub_140bafac0(&var_58)
                
                r10_1 = i[7].d
                rdi_1 += 1
                rbp = arg4
            while (rdi_1 s< r10_1)
    
    i_2 = i[4]
    result = sub_1406328d0(&var_48)

return result
