// 函数: sub_14215e140
// 地址: 0x14215e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0
int512_t zmm1
zmm0, zmm1 = sub_140a1d9d0(arg1, arg2, arg3)
(*(*arg1 + 0x168))(arg1, &arg2[2])
int32_t i_3 = arg2[4].d
(*(*arg1 + 0x168))(arg1, &i_3)

if ((arg1[5].b & 1) != 0)
    int64_t r14_1 = sx.q(arg2[4].d)
    int32_t i_2 = i_3
    int32_t rax_3 = r14_1.d + i_2
    arg2[4].d = rax_3
    
    if (rax_3 s> *(arg2 + 0x24))
        zmm0 = sub_1405c4d20(&arg2[3])
    
    int64_t* rax_5 = arg2[3] + r14_1 * 0x14
    
    if (i_2 != 0)
        int32_t i
        
        do
            *rax_5 = 0
            rax_5[1] = 0
            rax_5[2].w = 0x100
            *(rax_5 + 0x12) = 0
            rax_5 += 0x14
            i = i_2
            i_2 -= 1
        while (i != 1)

int32_t i_1 = 0

if (arg2[4].d s> 0)
    int64_t r14_2 = 0
    
    do
        int64_t* rcx_4 = arg1[1]
        void* rdi_2 = arg2[3] + r14_2
        bool arg_8 = *(rdi_2 + 0x10) != 0
        bool* rdx_3 = *rcx_4
        
        if (&rdx_3[1] u> rcx_4[1])
            (*(*arg1 + 0x150))(arg1, &arg_8, 1)
        else
            arg_8 = *rdx_3
            *rcx_4 += 1
        
        bool rax_7
        
        if ((arg1[5].b & 1) == 0)
            rax_7 = *(rdi_2 + 0x10)
        else
            rax_7 = arg_8 == 1
            *(rdi_2 + 0x10) = rax_7
        
        if (rax_7 != 0)
            (*(*arg1 + 0x168))(arg1, rdi_2)
            int64_t* rcx_7 = arg1[1]
            int32_t* r8_1 = *rcx_7
            
            if (&r8_1[1] u<= rcx_7[1])
                *(rdi_2 + 4) = *r8_1
                int64_t* rax_12 = arg1[1]
                *rax_12 += 4
            else if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdi_2 + 4, zmm1)
            else
                (*(*arg1 + 0x150))(arg1, rdi_2 + 4, 4)
            
            if ((arg1[5].b & 1) == 0)
                zmm0, zmm1 = sub_140ca89d0(arg1, rdi_2 + 8, zmm0, zmm1)
            else
                int32_t rax_14 = *(arg1 + 0x54)
                
                if (rax_14 u< 9)
                    int64_t rax_15 = *arg1
                    int64_t arg_18 = 0
                    uint64_t var_38 = 0
                    int64_t var_30_1 = 0
                    (*(rax_15 + 0x140))(arg1, &arg_18)
                    zmm0, zmm1 = sub_140a1d9d0(arg1, &var_38, zmm1)
                    uint64_t rcx_11 = var_38
                    *(rdi_2 + 8) = arg_18
                    
                    if (rcx_11 != 0)
                        zmm0, zmm1 = sub_140a74f90(rcx_11)
                else if (rax_14 u>= 0xa)
                    zmm0, zmm1 = sub_140ca89d0(arg1, rdi_2 + 8, zmm0, zmm1)
                else
                    (*(*arg1 + 0x140))(arg1, rdi_2 + 8)
        
        i_1 += 1
        r14_2 += 0x14
    while (i_1 s< arg2[4].d)

return arg1
