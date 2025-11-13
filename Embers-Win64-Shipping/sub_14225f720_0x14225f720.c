// 函数: sub_14225f720
// 地址: 0x14225f720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rbp = arg1 + 0x26c8
int32_t i_4 = rbp[1].d
float zmm8[0x4] = arg2

if (i_4 != 0)
    int64_t* rbx_1 = *rbp + 0x530
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            result = sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[0xa8]
        i = i_4
        i_4 -= 1
    while (i != 1)

rbp[1].d = 0

if (*(rbp + 0xc) != 0)
    result = sub_141eabac0(rbp, 0)

void* r13 = arg1 + 0x26d8
bool cond:1 = *(r13 + 0xc) == 0
*(r13 + 8) = 0

if (not(cond:1))
    result = sub_1405dadb0(r13, 0)

int32_t i_1 = 0

if (*(arg1 + 0x2628) s> 0)
    int64_t* rbx_2 = nullptr
    
    do
        result = *(arg1 + 0x2620)
        int64_t* rcx_3 = *(rbx_2 + result)
        
        if (rcx_3 != 0)
            result = (*(*rcx_3 + 0x280))(rcx_3)
            
            if (result.b == 0)
                int64_t* rcx_4 = *(rbx_2 + *(arg1 + 0x2620))
                result = (*(*rcx_4 + 0x278))(rcx_4, zmm8, arg3)
                
                if (result.b != 0)
                    break
        
        i_1 += 1
        rbx_2 = &rbx_2[1]
    while (i_1 s< *(arg1 + 0x2628))

int32_t i_2 = 0
int32_t i_3 = 0

if (*(arg1 + 0x26f0) s> 0)
    int64_t* r12_1 = nullptr
    int64_t* arg_20 = nullptr
    int128_t zmm6
    int128_t var_48_1 = zmm6
    
    do
        result = *(arg1 + 0x26e8)
        int64_t* rbx_3 = *(arg1 + 0x2708)
        void* r14_1 = *(r12_1 + result)
        
        if (rbx_3 != 0 && (*(r14_1 + 0x3c) & 1) == 0)
            (*(*rbx_3 + 0x4f0))(rbx_3, &data_143dbb1f8, &data_143dbb208, 0, 0)
            int64_t* rax_4 = sub_142486290()
            void* rax_5 = rax_4[0x23]
            
            if (rax_5 != 0)
            label_14225f8e8:
                *(rbx_3[0x45] + 0x200) = *(*(rax_5 + 0x228) + 0x200)
                *(rbx_3[0x45] + 0x1f0) = *(*(r14_1 + 0x28) + 0x54)
                sub_1405af800(rbx_3[0x45] + 0x270, *(r14_1 + 0x28) + 0x60)
                *(rbx_3[0x45] + 0x240) = *(*(r14_1 + 0x28) + 0x5a0)
            else
                int64_t rdx_1 = *rax_4
                (*(rdx_1 + 0x390))(rax_4, rdx_1)
                rax_5 = rax_4[0x23]
                
                if (rax_5 != 0)
                    goto label_14225f8e8
            
            int32_t zmm7_1
            result, zmm7_1 = sub_141e94090(r14_1, zmm8, 0)
            
            if (not(zmm7_1 f>= *(r14_1 + 0x5c)))
                void* rbx_4 = *(arg1 + 0x2708)
                int32_t zmm7_2
                float zmm15[0x4]
                result, zmm7_2, zmm8, zmm15 = sub_141e94460(r14_1, arg3, zmm15)
                void* rdi_1 = *(rbx_4 + 0x228)
                zmm6 = *(rdi_1 + 0x240)
                
                if (not(zmm6.d f<= zmm7_2))
                    int64_t rbx_5 = sx.q(rbp[1].d)
                    zmm6.d = zmm6.d f* *(r14_1 + 0x5c)
                    int32_t rax_12 = (rbx_5 + 1).d
                    rbp[1].d = rax_12
                    
                    if (rax_12 s> *(rbp + 0xc))
                        sub_141eab910(rbp)
                    
                    sub_1422d6d20(rbx_5 * 0x540 + *rbp, rdi_1 + 0x270)
                    int64_t rbx_6 = sx.q(*(r13 + 8))
                    int32_t rax_13 = (rbx_6 + 1).d
                    *(r13 + 8) = rax_13
                    
                    if (rax_13 s> *(r13 + 0xc))
                        sub_1406105e0(r13)
                    
                    result = *r13
                    *(result + (rbx_6 << 2)) = zmm6.d
        
        bool cond:2_1 = (*(r14_1 + 0x3c) & 1) == 0
        *(r14_1 + 0x58) = 0x3f800000
        
        if (not(cond:2_1))
            int64_t rcx_18 = sx.q(*(arg1 + 0x26f0))
            
            if (rcx_18.d != 0)
                int32_t r13_1 = 0
                int32_t rdi_2 = 0
                int64_t rbx_7 = 0
                r12_1.b = **(arg1 + 0x26e8) != r14_1
                
                do
                    int64_t r9_1 = sx.q(rdi_2)
                    rbx_7 += 1
                    rdi_2 += 1
                    
                    if (rbx_7 s< rcx_18)
                        int64_t* rcx_19 = *(arg1 + 0x26e8) + (rbx_7 << 3)
                        
                        do
                            int32_t rax_16
                            rax_16.b = *rcx_19 != r14_1
                            
                            if (zx.d(r12_1.b) != rax_16)
                                break
                            
                            rdi_2 += 1
                            rbx_7 += 1
                            rcx_19 = &rcx_19[1]
                        while (rbx_7 s< rcx_18)
                    
                    int32_t rsi_2 = rdi_2 - r9_1.d
                    
                    if (r12_1.b != 0)
                        if (r13_1 != r9_1.d)
                            int64_t rcx_20 = *(arg1 + 0x26e8)
                            memmove(rcx_20 + (sx.q(r13_1) << 3), rcx_20 + (r9_1 << 3), rsi_2 << 3)
                        
                        r13_1 += rsi_2
                    
                    r12_1.b ^= 1
                while (rbx_7 s< rcx_18)
                
                i_2 = i_3
                rbp = arg1 + 0x26c8
                r12_1 = arg_20
                *(arg1 + 0x26f0) = r13_1
                r13 = arg1 + 0x26d8
            
            int64_t rdi_3 = sx.q(*(arg1 + 0x2700))
            int32_t rax_18 = (rdi_3 + 1).d
            *(arg1 + 0x2700) = rax_18
            
            if (rax_18 s> *(arg1 + 0x2704))
                sub_1405a4d70(arg1 + 0x26f8)
            
            result = *(arg1 + 0x26f8)
            i_2 -= 1
            r12_1 -= 8
            result[rdi_3] = r14_1
        
        i_2 += 1
        r12_1 = &r12_1[1]
        i_3 = i_2
        arg_20 = r12_1
    while (i_2 s< *(arg1 + 0x26f0))

int64_t* rcx_23 = *(arg1 + 0x2708)

if (rcx_23 == 0)
    return result

return (*(*rcx_23 + 0x4f0))(rcx_23, &data_143dbb1f8, &data_143dbb208, 0, 0)
