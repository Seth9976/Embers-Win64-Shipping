// 函数: sub_1426b4860
// 地址: 0x1426b4860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg5
int32_t i = 0
int64_t* r15 = arg3

if (arg3[0xe].d s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t* rcx = *(rbx_1 + r15[0xd])
        sub_1426b5250(rcx, arg2, zx.q(*(rcx + 0x52)) + *(arg1 + 0x30), arg4, r14)
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< r15[0xe].d)

int64_t rbx_3 = zx.q(*(r15 + 0x52)) + *(arg1 + 0x30)
sub_1426b5250(r15, arg2, rbx_3, arg4, r14)
uint64_t result = zx.q((*(*r15 + 0x298))(r15))

if (result.d != 0)
    result = (result + 3) & 0xfffffffffffffffc
    
    if (rbx_3 != result)
        result = sx.q(*(rbx_3 - result))
        char rcx_3
        
        if (result.d s< 0 || result.d s>= *(arg2 + 0x138))
            rcx_3 = 0
        else
            rcx_3 = 1
        
        if (rcx_3 != 0)
            void* rbx_5 = *(*(arg2 + 0x130) + (result << 3))
            
            if (rbx_5 != 0)
                void* rax_5 = sub_14272e980()
                void* rdx_2 = *(rbx_5 + 0x10)
                result = sx.q(*(rax_5 + 0x38))
                
                if (result.d s<= *(rdx_2 + 0x38))
                    uint64_t result_1 = result
                    result = *(rdx_2 + 0x30)
                    
                    if (*(result + (result_1 << 3)) == rax_5 + 0x30)
                        result = zx.q(*(r15 + 0x8c))
                        *(rbx_5 + 0x8c) = result.w

int32_t i_2 = 0

if (r15[0xc].d s> 0)
    int64_t rdx_3 = 0
    int64_t var_48_1 = 0
    int32_t i_1
    
    do
        int32_t j = 0
        int64_t* rbp_2 = r15[0xb] + rdx_3
        
        if (rbp_2[3].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                int64_t* r15_1 = *(r14_1 + rbp_2[2])
                int64_t rbx_7 = zx.q(*(r15_1 + 0x52)) + *(arg1 + 0x30)
                sub_1426b5250(r15_1, arg2, rbx_7, arg4, arg5)
                result = zx.q((*(*r15_1 + 0x298))(r15_1))
                
                if (result.d != 0)
                    result = (result + 3) & 0xfffffffffffffffc
                    
                    if (rbx_7 != result)
                        result = sx.q(*(rbx_7 - result))
                        char rcx_7
                        
                        if (result.d s< 0 || result.d s>= *(arg2 + 0x138))
                            rcx_7 = 0
                        else
                            rcx_7 = 1
                        
                        if (rcx_7 != 0)
                            void* rbx_9 = *(*(arg2 + 0x130) + (result << 3))
                            
                            if (rbx_9 != 0)
                                void* rax_11 = sub_14272f060()
                                void* rdx_5 = *(rbx_9 + 0x10)
                                result = sx.q(*(rax_11 + 0x38))
                                
                                if (result.d s<= *(rdx_5 + 0x38))
                                    uint64_t result_2 = result
                                    result = *(rdx_5 + 0x30)
                                    
                                    if (*(result + (result_2 << 3)) == rax_11 + 0x30)
                                        result = zx.q(*(r15_1 + 0x59))
                                        *(rbx_9 + 0x59) = result.b
                
                j += 1
                r14_1 = &r14_1[1]
            while (j s< rbp_2[3].d)
            
            r14 = arg5
            r15 = arg3
            rdx_3 = var_48_1
        
        int64_t r8_6 = *rbp_2
        
        if (r8_6 == 0)
            int64_t* rcx_10 = rbp_2[1]
            
            if (rcx_10 != 0)
                int32_t j_1 = 0
                
                if (rcx_10[0xc].d s> 0)
                    int64_t** r14_2 = nullptr
                    
                    do
                        int64_t* r15_2 = *(r14_2 + rcx_10[0xb])
                        int64_t rbx_11 = zx.q(*(r15_2 + 0x52)) + *(arg1 + 0x30)
                        sub_1426b5250(r15_2, arg2, rbx_11, arg4, arg5)
                        uint64_t rax_16 = zx.q((*(*r15_2 + 0x298))(r15_2))
                        
                        if (rax_16.d != 0)
                            int64_t rax_18 = (rax_16 + 3) & 0xfffffffffffffffc
                            
                            if (rbx_11 != rax_18)
                                int64_t rax_19 = sx.q(*(rbx_11 - rax_18))
                                char rcx_13
                                
                                if (rax_19.d s< 0 || rax_19.d s>= *(arg2 + 0x138))
                                    rcx_13 = 0
                                else
                                    rcx_13 = 1
                                
                                if (rcx_13 != 0)
                                    void* rbx_13 = *(*(arg2 + 0x130) + (rax_19 << 3))
                                    
                                    if (rbx_13 != 0)
                                        void* rax_20 = sub_1427329a0()
                                        void* rdx_8 = *(rbx_13 + 0x10)
                                        int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                                        
                                        if (rax_21.d s<= *(rdx_8 + 0x38)
                                                && *(*(rdx_8 + 0x30) + (rax_21 << 3))
                                                == rax_20 + 0x30)
                                            *(rbx_13 + 0x59) = *(r15_2 + 0x59)
                        
                        rcx_10 = rbp_2[1]
                        j_1 += 1
                        r14_2 = &r14_2[1]
                    while (j_1 s< rcx_10[0xc].d)
                    
                    r14 = arg5
                
                result =
                    sub_1426b5250(rcx_10, arg2, zx.q(*(rcx_10 + 0x52)) + *(arg1 + 0x30), arg4, r14)
                r15 = arg3
                rdx_3 = var_48_1
        else
            result = sub_1426b4860(arg1, arg2, r8_6, arg4, r14)
            rdx_3 = var_48_1
        
        rdx_3 += 0x30
        i_1 = i_2 + 1
        var_48_1 = rdx_3
        i_2 = i_1
    while (i_1 s< r15[0xc].d)

return result
