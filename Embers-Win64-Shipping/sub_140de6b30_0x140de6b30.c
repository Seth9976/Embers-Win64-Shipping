// 函数: sub_140de6b30
// 地址: 0x140de6b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
*arg1 = &arg2[9]
void* rax_1

if (*arg2 != 0)
    rax_1 = arg2[1]

void* const rax_2

if (*arg2 == 0 || rax_1 == 0 || *(rax_1 + 8) s<= 0)
    rax_2 = nullptr
else
    rax_2 = arg2[2]

int32_t* rcx = rax_2 + 0x7a8

if (not(0f f!= *rcx))
    rcx = rax_2 + 0x7a0

int64_t arg_10 = *rcx
arg1[2] = sub_1405d9250(&arg2[0x15])
sub_140de6d80(arg1, &arg2[0x1e], &arg_10, arg3)
void* r12 = &arg2[0xea]
void* rax_4 = *(r12 + 0x20)

if (rax_4 != 0)
    r12 = rax_4

int64_t result = sx.q(arg2[0xef].d)

if (result.d != 0)
    result = r12 + (result << 3)
    int64_t result_1 = result
    
    if (r12 != result)
        do
            int32_t rax_5 = data_143e20d28
            void* rbx_1 = *r12
            sub_140b34200("AddCachedElements", rax_5)
            float zmm1[0x4] =
                sub_140b43e30("Paint/CacheListsWithNewData", data_143e20d28, *(rbx_1 + 0x1e0), 0)
            void* r13_1 = rbx_1 + 0x48
            int32_t r14_1 = 0
            void* rax_6 = *(r13_1 + 0x190)
            void* rbx_2 = r13_1
            int32_t rbp_1 = 0
            
            if (rax_6 != 0)
                rbx_2 = rax_6
            
            int64_t r15_1 = sx.q(*(r13_1 + 0x198)) << 3
            uint64_t r15_2 = r15_1 u>> 3
            
            if (rbx_2 u> rbx_2 + r15_1)
                r15_2 = 0
            
            if (r15_2 != 0)
                do
                    int64_t* rdx_3 = *rbx_2
                    int32_t rax_9 = rdx_3[1].d
                    
                    if (rax_9 s<= 0)
                        rbp_1 += 1
                    else
                        r14_1 += rax_9
                        arg1[1] = rdx_3
                        zmm1 = sub_140de6d80(arg1, rdx_3, &arg_10, zmm1)
                        arg1[1] = 0
                    
                    rbx_2 += 8
                    rsi += 1
                while (rsi != r15_2)
            
            rsi = 0
            *(r13_1 + 0x198) = 0
            
            if (*(r13_1 + 0x19c) != 0)
                sub_140dbd250(r13_1, 0)
            
            sub_140de65b0(*arg1, rbx_1)
            sub_140d9b460(rbx_1)
            sub_140b43e30("Paint/RecachedElements", data_143e20d28, r14_1, 3)
            sub_140b43e30("Paint/RecachedEmptyDrawLists", data_143e20d28, rbp_1, 3)
            result = sub_140b38680("AddCachedElements", rax_5)
            r12 += 8
        while (r12 != result_1)

*arg1 = 0
arg1[2] = 0
return result
