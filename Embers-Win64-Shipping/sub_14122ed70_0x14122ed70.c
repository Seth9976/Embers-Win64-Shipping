// 函数: sub_14122ed70
// 地址: 0x14122ed70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t i_3 = arg3
int64_t r12 = sx.q(arg2)
int32_t i_2 = arg3

if (arg3 != 0)
    int64_t r15_1 = r12 * 0x290
    int32_t i
    
    do
        void* r14_2 = *arg1 + r15_1
        int64_t* rcx = *(r14_2 + 0x270)
        
        if (rcx != 0)
            result = (*(*rcx + 0x38))(rcx)
        
        void* rcx_2 = *(r14_2 + 0x260)
        void* rbx_1 = r14_2 + 0x240
        int32_t j_1 = *(r14_2 + 0x268)
        
        if (rcx_2 != 0)
            rbx_1 = rcx_2
        
        if (j_1 != 0)
            int32_t j
            
            do
                int64_t* rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    result = (*(*rcx_1 + 0x38))(rcx_1)
                
                rbx_1 += 8
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_2 = *(r14_2 + 0x260)
        
        if (rcx_2 != 0)
            result = sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(r14_2 + 0x1e0)
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(r14_2 + 0x140)
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        r15_1 += 0x290
        i = i_3
        i_3 -= 1
    while (i != 1)
    i_2 = arg3

if (i_2 != 0)
    int32_t rdx = rol.d(1, r12.b)
    int64_t r8 = r12 * 0x290
    int32_t i_1
    
    do
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x290 + *arg1) = r12.d
        
        int32_t* rcx_7 = *arg1
        *(rcx_7 + r8) = 0xffffffff
        int32_t rax_4
        
        if (*(arg1 + 0x34) s<= 0)
            rax_4 = -1
        else
            rax_4 = arg1[6].d
        
        *(rcx_7 + r8 + 4) = rax_4
        void* rcx_8 = &arg1[2]
        *(arg1 + 0x34) += 1
        arg1[6].d = r12.d
        void* rax_5 = arg1[4]
        
        if (rax_5 != 0)
            rcx_8 = rax_5
        
        int32_t rax_6 = r12.d
        
        if (r12.d s< 0)
            rax_6 = (r12 + 0x1f).d
        
        r12 = zx.q(r12.d + 1)
        r8 += 0x290
        void* rcx_9 = rcx_8 + (sx.q(rax_6 s>> 5) << 2)
        result = not.d(rdx)
        rdx = rol.d(rdx, 1)
        *rcx_9 &= result
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
