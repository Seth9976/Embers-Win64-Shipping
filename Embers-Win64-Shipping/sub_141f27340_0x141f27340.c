// 函数: sub_141f27340
// 地址: 0x141f27340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[0x85].b)
int128_t var_48
void var_38

if ((result.b & 1) != 0)
    if ((result.b & 2) != 0)
        result = sub_141f08e30(arg1)
    
    int32_t i_4 = arg1[0x84].d
    int32_t rdi = 0
    int64_t r10_1 = arg1[0x83]
    int32_t i = i_4
    int32_t r9_1 = arg2:4.d
    
    if (i_4 s> 0)
        do
            int32_t rcx_6 = i & 0x80000001
            
            if (rcx_6 s< 0)
                rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(i)
            int32_t i_3 = (temp3_1 - temp2_1) s>> 1
            i = i_3
            int32_t rax_10 = i_3 + rdi
            int64_t rcx_10 = sx.q(rax_10) * 6
            int32_t rax_12 = *(r10_1 + (rcx_10 << 3))
            result = zx.q(rax_12 - arg2.d)
            
            if (rax_12 == arg2.d)
                result = zx.q(*(r10_1 + (rcx_10 << 3) + 4) - r9_1)
            
            if (result.d s< 0)
                rdi = rax_10 + rcx_6
        while (i s> 0)
    
    if (rdi s< i_4)
        int64_t rdx_6 = sx.q(rdi)
        int32_t rax_14 = arg2.d
        int32_t* rcx_12 = rdx_6 * 0x30
        result = zx.q(rax_14 - *(rcx_12 + r10_1))
        
        if (rax_14 == *(rcx_12 + r10_1))
            result = zx.q(r9_1 - *(rcx_12 + r10_1 + 4))
        
        if (result.d s>= 0 && rdi != 0xffffffff)
            result = rdx_6 * 0x30
            void* rcx_14 = r10_1 + 8 + result
            
            if (r10_1 + 8 != neg.q(result))
                int32_t* i_1 = *(rcx_14 + 0x10)
                result = sx.q(*(rcx_14 + 0x18))
                
                for (void* r15_1 = &i_1[result]; i_1 != r15_1; i_1 = &i_1[1])
                    int32_t r14_2 = *i_1
                    result = (*(*arg1 + 0x548))(arg1, zx.q(r14_2))
                    uint64_t result_2 = result
                    
                    if (result != 0)
                        void* rax_18 = sub_142542e20()
                        void* rdx_8 = *(result_2 + 0x10)
                        int64_t rax_19 = sx.q(*(rax_18 + 0x38))
                        
                        if (rax_19.d s> *(rdx_8 + 0x38)
                                || *(*(rdx_8 + 0x30) + (rax_19 << 3)) != rax_18 + 0x30)
                            result_2 = (*(*arg1 + 0x560))(arg1, zx.q(r14_2), rax_18 + 0x30)
                        
                        var_48 = *sub_140acc990(&var_38, arg3)
                        result = sub_1421321b0(result_2, arg2, &var_48)
else
    int64_t var_58
    (*(*arg1 + 0x860))(arg4, &var_58)
    int32_t result_1
    result = zx.q(result_1)
    int32_t i_2 = 0
    int64_t rcx = var_58
    
    if (result.d s> 0)
        int64_t* r14_1 = nullptr
        
        do
            void* rbp_1 = *(r14_1 + rcx)
            
            if (rbp_1 != 0)
                void* rax_1 = sub_142542e20()
                void* rdx_1 = *(rbp_1 + 0x10)
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                    rbp_1 = (*(*arg1 + 0x560))(arg1, zx.q(i_2), rax_1 + 0x30)
                
                var_48 = *sub_140acc990(&var_38, arg3)
                sub_1421321b0(rbp_1, arg2, &var_48)
                result = zx.q(result_1)
                rcx = var_58
            
            i_2 += 1
            r14_1 = &r14_1[1]
        while (i_2 s< result.d)
    
    if (rcx != 0)
        return sub_140a74f90(rcx)
return result
