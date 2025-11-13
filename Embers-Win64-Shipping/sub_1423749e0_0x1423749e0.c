// 函数: sub_1423749e0
// 地址: 0x1423749e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_142374590(arg1, arg2, arg3, arg5)
int64_t* r10 = arg2[1]
char* rcx = *r10

if (&rcx[1] u> r10[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x5e, 1)
else
    *(arg1 + 0x5e) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 1

char rcx_2 = *(arg1 + 0x5e)
*(arg1 + 0x5f) = arg1[1].b - rcx_2
*(arg3 + 0x3c) = rcx_2

if ((arg2[5].b & 1) != 0)
    int32_t i_7 = arg1[3].d
    int32_t r15_1 = arg1[1].d
    void* rbx_1 = arg1[2]
    
    if (i_7 != 0)
        int32_t i
        
        do
            int64_t* rcx_3 = *(rbx_1 + 0x420)
            
            if (rcx_3 != 0)
                (**rcx_3)(rcx_3, 1)
            
            int64_t* rcx_4 = *(rbx_1 + 0x428)
            
            if (rcx_4 != 0)
                (**rcx_4)(rcx_4, 1)
            
            sub_1405d1550(rbx_1 + 0x410)
            sub_14081d2f0(rbx_1 + 0x210)
            sub_1405d1550(rbx_1 + 0x200)
            zmm1 = sub_14081d2f0(rbx_1)
            rbx_1 += 0x430
            i = i_7
            i_7 -= 1
        while (i != 1)
    
    arg1[3].d = 0
    
    if (*(arg1 + 0x1c) != r15_1)
        sub_142374270(&arg1[2], r15_1)
    
    int32_t i_1 = 0
    
    if (arg1[1].d s> 0)
        do
            int64_t rbx_2 = sx.q(arg1[3].d)
            int32_t rax_7 = (rbx_2 + 1).d
            arg1[3].d = rax_7
            
            if (rax_7 s> *(arg1 + 0x1c))
                sub_1423740a0(&arg1[2])
            
            int64_t rbp_1 = rbx_2 * 0x430
            void*** rbp_2 = rbp_1 + arg1[2]
            
            if (rbp_1 != neg.q(arg1[2]))
                char rbx_3 = (data_1439c7a08).b
                sub_1423299d0(rbp_2, rbx_3)
                sub_1423299d0(&rbp_2[0x42], rbx_3)
                rbp_2[0x84] = 0
                rbp_2[0x85] = 0
            
            i_1 += 1
        while (i_1 s< arg1[1].d)

char arg_20

if (arg4 != 0)
    sub_141ff4780(&arg_20, arg2, 0, 0xd6)
    
    if ((arg_20 & 2) == 0 && (arg6 & 1) == 0)
        if ((arg2[5].b & 2) != 0)
            zmm1 = sub_141fdc570(data_143f3d6c0, arg3)
        
        int32_t i_2 = 0
        
        if (arg1[1].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                int64_t* rdx_7 = arg2[1]
                int64_t rcx_15 = *rdx_7
                void* rbx_4 = *(r14_1 + *arg1)
                bool cond:7_1
                
                if (rcx_15 + 4 u> rdx_7[1])
                    int32_t rax_11
                    rax_11.b = *(rbx_4 + 0x38) != 0
                    int32_t arg_8 = rax_11
                    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
                    cond:7_1 = arg_8 != 0
                else
                    cond:7_1 = *rcx_15 != 0
                    *rdx_7 = rcx_15 + 4
                
                if (cond:7_1 != 0)
                    void*** rdx_9 = *(rbx_4 + 0x38)
                    
                    if (rdx_9 == 0)
                        void*** rax_13 = j_sub_140a82f30(0x80)
                        rdx_9 = rax_13
                        
                        if (rax_13 == 0)
                            rdx_9 = nullptr
                        else
                            *rax_13 = &data_1433341f0
                            __builtin_memset(&rax_13[1], 0, 0x1c)
                            rax_13[6] = data_143dbb1f8.q
                            int32_t rax_14 = data_143dbb200
                            rdx_9[7].d = rax_14
                            *(rdx_9 + 0x24) = rdx_9[6]
                            *(rdx_9 + 0x2c) = rax_14
                            *(rdx_9 + 0x3c) = 0
                            rdx_9[8] = 0
                            rdx_9[9].w = 1
                            *(rdx_9 + 0x4a) = 0
                            rdx_9[0xa] = rdx_9
                            rdx_9[0xb] = -1
                            rdx_9[0xc].d = 0xffffffff
                            *(rdx_9 + 0x64) = data_143dbb188.q
                            rdx_9[0xe].b &= 0xfc
                            *(rdx_9 + 0x6c) = data_143dbb190
                            rdx_9[0xf] = 0
                        
                        *(rbx_4 + 0x38) = rdx_9
                    
                    sub_142352c60(arg2, rdx_9, zmm1)
                
                i_2 += 1
                r14_1 = &r14_1[1]
            while (i_2 s< arg1[1].d)

int64_t* rax_17 = sub_1408d9160(sub_1408d9160(arg2, &arg1[8], zmm1), arg1 + 0x4c, zmm1)
int64_t* rdx_12 = rax_17[1]
int32_t* rax_18 = *rdx_12

if (&rax_18[1] u<= rdx_12[1])
    arg1[0xb].d = *rax_18
    int64_t* rax_19 = rax_17[1]
    *rax_19 += 4
else if ((*(rax_17 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_17, &arg1[0xb], zmm1)
else
    (*(*rax_17 + 0x150))(rax_17, &arg1[0xb], 4)

int64_t* rcx_23 = arg2[1]
int32_t* rdx_14 = *rcx_23
int64_t* result

if (&rdx_14[1] u> rcx_23[1])
    int32_t rax_22
    rax_22.b = *(arg1 + 0x5c) != 0
    arg_20.d = rax_22
    (*(*arg2 + 0x150))(arg2, &arg_20, 4)
    result.b = arg_20.d != 0
    *(arg1 + 0x5c) = result.b
else
    void* rax_21
    rax_21.b = *rdx_14 != 0
    *(arg1 + 0x5c) = rax_21.b
    result = arg2[1]
    *result += 4

int64_t i_8 = 8

if ((arg2[5].b & 1) != 0)
    result, zmm1 = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (result.d s< 0xa)
        int64_t i_6 = 8
        int64_t i_3
        
        do
            int64_t* rcx_26 = arg2[1]
            int32_t* rdx_16 = *rcx_26
            
            if (&rdx_16[1] u> rcx_26[1])
                int32_t* rdx_17 = &arg_20
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_17, zmm1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_17, 4)
            else
                arg_20.d = *rdx_16
                *rcx_26 += 4
            
            i_3 = i_6
            i_6 -= 1
        while (i_3 != 1)
        int64_t* rcx_28 = arg2[1]
        int32_t* rdx_18 = *rcx_28
        
        if (&rdx_18[1] u> rcx_28[1])
            int32_t* rdx_19 = &arg_20
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                result = sub_140b54070(arg2, rdx_19, zmm1)
            else
                result = (*(*arg2 + 0x150))(arg2, rdx_19, 4)
        else
            result = zx.q(*rdx_18)
            arg_20.d = result.d
            *rcx_28 += 4

if (arg4 != 0)
    void* rbx_6 = &arg1[4]
    int64_t i_4
    
    do
        result = sub_1422099d0(arg2, rbx_6, zmm1)
        rbx_6 += 4
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)

if ((arg2[5].b & 1) != 0)
    int64_t rbx_7 = data_143f59658
    int64_t rcx_31
    
    if (data_143de5480 == 0)
        rcx_31 = 0
    else
        result = GetCurrentThreadId()
        rcx_31.b = result.d != data_143de5470
    
    if (*(rbx_7 + (rcx_31 << 2)) == 1)
        int32_t i_5 = 0
        
        if (arg1[1].d s> 0)
            int64_t* rdi_1 = nullptr
            
            do
                result = *arg1
                void* rbp_3 = *(rdi_1 + result)
                int64_t* rcx_32 = *(rbp_3 + 0x38)
                
                if (rcx_32 != 0)
                    result = (**rcx_32)(rcx_32, 1)
                    *(rbp_3 + 0x38) = 0
                
                i_5 += 1
                rdi_1 = &rdi_1[1]
            while (i_5 s< arg1[1].d)

return result
