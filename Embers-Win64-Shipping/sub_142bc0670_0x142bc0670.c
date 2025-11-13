// 函数: sub_142bc0670
// 地址: 0x142bc0670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg2[6]
__builtin_memset(&arg1[1], 0, 0x28)
*arg1 = arg2
arg1[1].d = sub_1408e52d0(arg2)
int32_t result_1
int32_t* rdx = &result_1
int32_t result
uint32_t rbx_1

if (arg4 == 0)
    rbx_1 = zx.d(sub_142b96f00(arg2, rdx))
    result = result_1
    
    if (result != 0)
        goto label_142bc07ef
    
    *(arg1 + 0xc) = 3
else
    rbx_1 = sub_142b96d30(arg2, rdx)
    result = result_1
    
    if (result != 0)
        goto label_142bc07ef
    
    *(arg1 + 0xc) = 5

if (rbx_1 != 0)
    char rax_3 = sub_142b96a20(arg2, &result_1, arg5)
    
    if (result_1 != 0)
        goto label_142bc07ef
    
    if (rax_3 - 1 u> 3)
    label_142bc07e0:
        result_1 = 8
    label_142bc07ef:
        sub_142b99980(r14, arg1[4])
        result = result_1
        arg1[4] = 0
    else
        int32_t rcx_4 = *(arg1 + 0xc)
        uint32_t r8 = zx.d(rax_3)
        int32_t rdx_3 = (rbx_1 + 1) * r8
        arg1[2].d = rbx_1
        *(arg1 + 0x14) = rax_3
        arg1[3].d = rcx_4 + rdx_3 + arg1[1].d
        int32_t result_2 = sub_142b970b0(arg2, rdx_3 - r8)
        result_1 = result_2
        
        if (result_2 != 0)
            goto label_142bc07ef
        
        int32_t rbx_2 = 0
        void arg_8
        int32_t result_3 = sub_142b96990(*arg1, &arg_8, zx.d(*(arg1 + 0x14)), arg5)
        
        if (result_3 == 0)
            uint32_t i_2 = zx.d(*(arg1 + 0x14))
            
            if (i_2 != 0)
                void* rcx_9 = &arg_8
                uint64_t i_1 = zx.q(i_2)
                uint64_t i
                
                do
                    uint32_t rax_4 = zx.d(*rcx_9)
                    rcx_9 += 1
                    rbx_2 = rbx_2 << 8 | rax_4
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        result_1 = result_3
        
        if (result_3 != 0)
            goto label_142bc07ef
        
        if (rbx_2 == 0)
            goto label_142bc07e0
        
        *(arg1 + 0x1c) = rbx_2 - 1
        
        if (arg3 == 0)
            result = sub_142b970b0(arg2, rbx_2 - 1)
            result_1 = result
            
            if (result != 0)
                goto label_142bc07ef
        else
            result = sub_142b96670(arg2, rbx_2 - 1, &arg1[5])
            result_1 = result
            
            if (result != 0)
                goto label_142bc07ef

return result
