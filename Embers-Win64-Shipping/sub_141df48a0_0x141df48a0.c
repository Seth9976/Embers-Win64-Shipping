// 函数: sub_141df48a0
// 地址: 0x141df48a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x28)
int64_t r9 = *(arg2 + 0x38)
int32_t r12 = 0
int32_t rdi = arg3[0x12].d
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg2 + 0x18))
int32_t arg_18 = rdi
int64_t var_48 = r9
uint64_t result = zx.q((temp1 + (temp0 & 3)) s>> 2)
int64_t i_1 = sx.q(result.d)

if (result.d s> 0)
    int64_t r13_1 = 0
    int64_t i
    
    do
        void* rax_4 = *(arg2 + 0x10)
        int64_t rdx_2 = sx.q(*(rax_4 + r13_1))
        int32_t r8 = *(rax_4 + r13_1 + 4)
        int64_t r14_1 = sx.q(*(rax_4 + r13_1 + 8))
        int32_t r15_1 = *(rax_4 + r13_1 + 0xc)
        arg3[0x12] = sx.q(rdx_2.d + rdi)
        int64_t* rcx_2 = *(arg2 + 0x48)
        int64_t var_68 = r9 + rdx_2
        
        if (rcx_2 == 0)
            sub_140af98a0("Unknown", 0x124, %i: unknown or unsupported animation format", 
                zx.q(*(arg2 + 0x60)))
            sub_140afbb40()
        else
            (*(*rcx_2 + 0x60))(rcx_2, arg2, arg3, &var_68, r8)
        
        int64_t rcx_4 = var_68
        char arg_10 = 0x55
        int32_t j_6 = ((rcx_4 + 3).d & 0xfffffffc) - rcx_4.d
        
        if (j_6 s> 0)
            uint64_t j_3 = zx.q(j_6)
            uint64_t j
            
            do
                (*(*arg3 + 0x150))(arg3, &arg_10, 1)
                j = j_3
                j_3 -= 1
            while (j != 1)
            rcx_4 = var_68
            rdi = arg_18
        
        var_68 = rcx_4 + sx.q(j_6)
        arg3[0x12] = sx.q(r14_1.d + rdi)
        int64_t* rcx_7 = *(arg2 + 0x50)
        int64_t var_60 = r14_1 + var_48
        (*(*rcx_7 + 0x58))(rcx_7, arg2, arg3, &var_60, r15_1)
        int64_t rcx_8 = var_60
        arg_10 = 0x55
        int32_t result_1 = ((rcx_8 + 3).d & 0xfffffffc) - rcx_8.d
        
        if (result_1 s> 0)
            uint64_t j_4 = zx.q(result_1)
            uint64_t j_1
            
            do
                (*(*arg3 + 0x150))(arg3, &arg_10, 1)
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
            rcx_8 = var_60
            rdi = arg_18
        
        result = sx.q(result_1)
        var_60 = rcx_8 + result
        
        if (rax s> 0)
            int64_t rcx_11 = sx.q(*(arg2 + 0x30) * r12)
            int64_t rax_17 = *(arg2 + 0x20)
            int64_t rdx_7 = sx.q(*(rax_17 + (rcx_11 << 2)))
            int32_t r8_3 = *(rax_17 + (rcx_11 << 2) + 4)
            arg3[0x12] = sx.q(rdx_7.d + rdi)
            int64_t* rcx_13 = *(arg2 + 0x58)
            int64_t var_58 = var_48 + rdx_7
            
            if (rcx_13 == 0)
                sub_140af98a0("Unknown", 0x145, %i: unknown or unsupported animation format", 
                    zx.q(*(arg2 + 0x60)))
                sub_140afbb40()
            else
                (*(*rcx_13 + 0x68))(rcx_13, arg2, arg3, &var_58, r8_3)
            
            int64_t rcx_15 = var_58
            arg_10 = 0x55
            int32_t result_2 = ((rcx_15 + 3).d & 0xfffffffc) - rcx_15.d
            
            if (result_2 s> 0)
                uint64_t j_5 = zx.q(result_2)
                uint64_t j_2
                
                do
                    (*(*arg3 + 0x150))(arg3, &arg_10, 1)
                    j_2 = j_5
                    j_5 -= 1
                while (j_2 != 1)
                rcx_15 = var_58
                rdi = arg_18
            
            result = sx.q(result_2)
            var_58 = rcx_15 + result
        
        r12 += 1
        r13_1 += 0x10
        i = i_1
        i_1 -= 1
        r9 = var_48
    while (i != 1)

return result
