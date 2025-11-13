// 函数: sub_141f8f9a0
// 地址: 0x141f8f9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg1[0x4a]

if (arg2 != 0)
    if (rbp != arg2 && rbp != 0)
        (*(*arg1 + 0x6d0))()
        sub_142498d40(arg1, rbp)
    
    int64_t* r14_1 = arg2[0x4b]
    
    if (r14_1 != 0)
        int64_t rbx_1 = r14_1[0x4a]
        (*(*r14_1 + 0x6d0))(r14_1)
        sub_142498d40(r14_1, rbx_1)
    
    (*(*arg2 + 0x6a8))(arg2, arg1)
    (*(*arg1 + 0x690))(arg1, arg2)
    void* rbx_2 = *(arg1[0x4a] + 0x130)
    int32_t rax_9
    float zmm0[0x4]
    
    if (rbx_2 == 0)
        zmm0 = zx.o(data_143dbb208)
        rax_9 = data_143dbb210
    else
        float zmm1[0x4] = *(rbx_2 + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_2 + 0x180), zmm1, 4))
        float var_18[0x4] = zmm1
        
        if (temp0_2 != 0)
            *(rbx_2 + 0x180) = zmm1
            void var_30
            int32_t* rax_7 = sub_140adf5d0(&var_18, &var_30)
            *(rbx_2 + 0x190) = *rax_7
            *(rbx_2 + 0x198) = rax_7[2]
        
        zmm0 = zx.o(*(rbx_2 + 0x190))
        rax_9 = *(rbx_2 + 0x198)
    
    int32_t var_34_1 = rax_9
    int64_t rax_11 = *arg1
    int64_t var_3c = zmm0.q
    (*(rax_11 + 0x668))(arg1, &var_3c)
    int64_t* rcx_7 = arg1[0x4a]
    (*(*rcx_7 + 0x648))(rcx_7)

if (rbp == arg2)
    return 

int64_t r14_2 = arg1[0x4a]
rbp.b = 0
*(arg1 + 0x284) += 1
int32_t rax_13 = arg1[0x4f].d
int32_t rcx_8 = *(arg1 + 0x284)
int64_t rdi_1 = sx.q(rax_13 - 1)

if (rax_13 - 1 s>= 0)
    int64_t rbx_4 = rdi_1 << 4
    int64_t temp1_1
    
    do
        int64_t rax_15 = arg1[0x4e]
        
        if (*(rbx_4 + rax_15 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_9 = *(rbx_4 + rax_15)
            
            if (rcx_9 == 0)
                rbp.b = 1
            else if ((*(*rcx_9 + 0x50))(rcx_9, r14_2) == 0)
                rbp.b = 1
        
        rbx_4 -= 0x10
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_8 = *(arg1 + 0x284)

*(arg1 + 0x284) = rcx_8 - 1

if (rbp.b != 0)
    sub_140599630(&arg1[0x4e], 0)
