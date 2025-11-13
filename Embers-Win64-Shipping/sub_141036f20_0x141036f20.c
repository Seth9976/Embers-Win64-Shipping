// 函数: sub_141036f20
// 地址: 0x141036f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3
sub_14105c1a0(arg2, arg1)
uint64_t rbp

if (arg4[2].b != 0 || *arg4 != 0 || arg4[3].b != 0
        || zx.d(*(arg4 + 7)) * zx.d(*(arg4 + 5)) * zx.d(arg4[1])
        != zx.d(arg4[6].b) * zx.d(arg4[5]) * zx.d(arg4[4].b))
    rbp.b = 0
else
    rbp.b = 1

char arg_20 = rbp.b
void* rax_5 = sub_141023fa0(arg1, arg2)
char rax_6

if (rbp.b != 0)
    rax_6 = sub_14105e7c0(rax_5)

uint32_t result

if (rbp.b == 0 || rax_6 == 0)
    char i = arg4[3].b
label_141037055:
    int16_t result_2 = *arg4
    result = zx.d(result_2)
    int16_t result_3 = result_2
    char i_1 = i
    
    while (result.w != *arg4 || i != *(arg4 + 7))
        uint32_t i_2 = zx.d(i)
        uint32_t result_4 = zx.d(result_2)
        int32_t rcx_14 = (zx.d(arg4[5]) * i_2 + result_4) * zx.d(arg4[4].b)
        int32_t j = zx.d(arg4[2].b) + rcx_14
        
        if (j u< zx.d(*(arg4 + 5)) + rcx_14)
            do
                int32_t rax_11 = sub_1410626f0(rax_5, j)
                int32_t rdx_8 = rax_11
                
                if (rax_11 == 0xffffffff)
                    void* rdi_1 = *(arg1 + 8)
                    int32_t var_40_1 = rbx
                    int32_t j_1 = j
                    int64_t rbp_1 = sx.q(*(rdi_1 + 0xc0))
                    int32_t rax_12 = (rbp_1 + 1).d
                    *(rdi_1 + 0xc0) = rax_12
                    
                    if (rax_12 s> *(rdi_1 + 0xc4))
                        sub_1405a4f90(rdi_1 + 0xb8)
                    
                    *(*(rdi_1 + 0xb8) + rbp_1 * 0x10) = arg2.o
                    sub_141069360(rax_5, j, rbx)
                    rbp = zx.q(arg_20)
                else if (rdx_8 != 0x10 || rbx != 0x20)
                    bool cond:1_1
                    
                    if (rbx != 0)
                        int32_t rcx_21 = rdx_8 | rbx
                        
                        if ((rcx_21 & 0xac3) != rcx_21)
                            rcx_21 = rbx
                        
                        rbx = rcx_21
                        cond:1_1 = rdx_8 != rcx_21
                    else
                        cond:1_1 = rdx_8 != 0
                    
                    rax_11.b = cond:1_1
                    
                    if (rax_11.b != 0)
                        sub_1410129f0(arg1, arg2, rdx_8, rbx, j)
                        sub_141069360(rax_5, j, rbx)
                    else if (rdx_8 != rbx)
                        rbp.b = 0
                        arg_20 = 0
                else
                    rbp.b = 0
                    arg_20 = 0
                
                j += 1
            while (j u< (zx.d(arg4[5]) * i_2 + result_4) * zx.d(arg4[4].b) + zx.d(*(arg4 + 5)))
            
            result_2 = result_3
            i = i_1
        
        result_2 += 1
        result = zx.d(result_2)
        result_3 = result_2
        
        if (result_2 u>= arg4[1])
            i += 1
            goto label_141037055
    
    if (rbp.b != 0)
        sub_141069350(rax_5, rbx)
else
    result = sub_1410626f0(rax_5, 0xffffffff)
    uint32_t result_1 = result
    
    if (result == 0xffffffff)
        result = sub_1410124f0(arg1, arg2)
        sub_141069350(rax_5, rbx)
    else if (result_1 != 0x10 || rbx != 0x20)
        bool cond:0_1
        
        if (rbx != 0)
            int32_t rcx_9 = result_1 | rbx
            
            if ((rcx_9 & 0xac3) == rcx_9)
                rbx = rcx_9
            
            cond:0_1 = result_1 != rbx
        else
            cond:0_1 = result_1 != 0
        
        result.b = cond:0_1
        
        if (result.b != 0)
            result = sub_1410129f0(arg1, arg2, result_1, rbx, 0xffffffff)
            sub_141069350(rax_5, rbx)

return result
