// 函数: sub_140fcc7f0
// 地址: 0x140fcc7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg2 + 0x20))(arg2)
bool r10 = rax_1 != 0
bool arg_10 = r10
uint32_t r8
int32_t r9

if (rax_1 != 0)
    r9 = arg4[0xb]
    r8 = r9 u/ 6 * 3

uint32_t result
char rcx_1

if (rax_1 == 0 || r9 != r8 * 2)
    result = arg4[0xb]
    rcx_1 = 0
else
    rcx_1 = 1
    result = r9 u/ 6

uint32_t result_1 = result
int32_t rbp = 1

if (rcx_1 != 0)
    rbp = 6

int32_t r14 = 0
int32_t var_98 = 0

if (result s> 0)
    do
        int32_t r12_2 = arg4[9] + r14
        int32_t r13_2 = arg4[0xa] + r14
        int32_t rdi_1 = 0
        
        do
            int32_t r8_2 = *arg4
            int32_t rax_4 = 0
            int32_t var_48_1 = r12_2
            int32_t var_44_1 = r13_2
            
            if (r10 != 0)
                rax_4 = rdi_1
            
            bool cond:2_1 = r8_2 != data_143dbb188
            int32_t var_70 = rax_4
            int32_t var_4c_1 = arg4[0xc]
            int128_t var_6c_1
            __builtin_memset(&var_6c_1, 0, 0x20)
            int32_t var_90
            int32_t var_88
            int32_t var_80
            int32_t var_78
            
            if (cond:2_1 || arg4[1] != data_143dbb18c || arg4[2] != data_143dbb190)
                int32_t rcx_3 = arg4[4]
                int32_t rax_8 = arg4[3]
                int32_t rdx_3 = arg4[1]
                var_90 = rax_8
                var_88 = rax_8 + r8_2
                int32_t var_8c_1 = rcx_3
                int32_t rcx_4 = arg4[7]
                int32_t var_84_1 = rdx_3 + rcx_3
                int32_t rax_11 = arg4[6]
                var_80 = rax_11
                var_78 = rax_11 + r8_2
                int32_t var_74_1 = rcx_4 + rdx_3
                int128_t var_6c_2 = var_90.o
                int32_t var_7c_1 = rcx_4
                int128_t var_5c_1 = var_80.o
            
            result = (*(*arg1 + 0x118))(arg1, arg2, arg3, &var_70, var_98, var_90, var_88, var_80, 
                var_78)
            r10 = arg_10
            rdi_1 += 1
        while (rdi_1 s< rbp)
        
        r14 = var_98 + 1
        var_98 = r14
    while (r14 s< result_1)

return result
