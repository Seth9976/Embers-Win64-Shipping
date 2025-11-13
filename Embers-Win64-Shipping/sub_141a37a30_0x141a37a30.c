// 函数: sub_141a37a30
// 地址: 0x141a37a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*arg1 + 0x2d8))()
int32_t var_c = arg3 + arg4
int32_t var_14 = arg3
uint8_t rdx_2 = (result[1].d u>> 9).b
result[0x22] = arg2

if ((rdx_2 & 1) != 0 || ((result[0x16].d u>> 1).b & 1) == 0)
    *(result + 0x90) = 1.o

int32_t rdi_1 = arg5
int64_t rbx_1 = 0

if (rdi_1 == 0xffffffff)
    result[0x15].d = 0
    rdi_1 = 0
    
    if ((*(*result + 0x2a8))(result, &arg1[0xb], 0, 0, 1, 0) != 0)
        int64_t i
        
        do
            rdi_1 += 1
            result[0x15].d = rdi_1
            i = (*(*result + 0x2a8))(result, &arg1[0xb], 0, 0)
        while (i != 0)

result[0x15].d = rdi_1

if ((*(*result + 0x2a8))(result, &arg1[0xb], 0, 0, 1, 0) != 0)
    int64_t* rdx_6 = arg1[0xb]
    uint64_t r8_1 = sx.q(arg1[0xc].d) << 3 u>> 3
    
    if (rdx_6 u> &rdx_6[arg1[0xc]])
        r8_1 = 0
    
    if (r8_1 != 0)
        do
            void* rcx_5 = *rdx_6
            
            if (rcx_5 != result)
                int32_t rax_8 = *(rcx_5 + 0xa8)
                
                if (rax_8 s>= rdi_1)
                    *(rcx_5 + 0xa8) = rax_8 + 1
            
            rdx_6 = &rdx_6[1]
            rbx_1 += 1
        while (rbx_1 != r8_1)

int64_t rbx_2 = sx.q(arg1[0xc].d)
int32_t rax_10 = (rbx_2 + 1).d
arg1[0xc].d = rax_10

if (rax_10 s> *(arg1 + 0x64))
    sub_1405a4d70(&arg1[0xb])

*(arg1[0xb] + (rbx_2 << 3)) = result
return result
