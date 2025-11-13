// 函数: sub_140caed80
// 地址: 0x140caed80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2[1].d - *(arg2 + 0x34)
int64_t* r9 = *(*arg1 + 8)
int64_t* rcx = r9[1]
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_10
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b54070(r9, rdx_1, arg3)
    else
        (*(*r9 + 0x150))(r9, rdx_1, 4)
else
    arg_10 = *rdx
    int64_t* rax_5 = r9[1]
    *rax_5 += 4

int64_t result
int32_t arg_8

if ((*(*(*arg1 + 8) + 0x28) & 1) == 0)
    void* var_68
    int512_t zmm1_1 = sub_1407453e0(&var_68, arg2)
    int64_t result_1
    result = result_1
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(result + 0x18); i = i_1)
        int32_t* r14_4 = (sx.q(i) << 5) + *var_68
        int64_t* r9_4 = *(*arg1 + 8)
        int64_t* rcx_22 = r9_4[1]
        int32_t* rdx_16 = *rcx_22
        
        if (&rdx_16[1] u<= rcx_22[1])
            *r14_4 = *rdx_16
            int64_t* rax_41 = r9_4[1]
            *rax_41 += 4
        else if ((*(r9_4 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_4, r14_4, zmm1_1)
        else
            (*(*r9_4 + 0x150))(r9_4, r14_4, 4)
        
        arg_8 = r14_4[4]
        int64_t* r9_5 = *(*arg1 + 8)
        int64_t* rcx_24 = r9_5[1]
        int32_t* rdx_18 = *rcx_24
        
        if (&rdx_18[1] u> rcx_24[1])
            int32_t* rdx_19 = &arg_8
            
            if ((*(r9_5 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_5, rdx_19, zmm1_1)
            else
                (*(*r9_5 + 0x150))(r9_5, rdx_19, 4)
        else
            arg_8 = *rdx_18
            int64_t* rax_47 = r9_5[1]
            *rax_47 += 4
        
        int64_t rsi_4
        
        if ((*(*(*arg1 + 8) + 0x28) & 1) == 0)
            rsi_4 = zx.q(arg_8)
        else
            uint64_t rdi_5 = sx.q(r14_4[4])
            rsi_4 = sx.q(arg_8)
            
            if (rsi_4.d s> rdi_5.d)
                int32_t rsi_5 = rsi_4.d - rdi_5.d
                int32_t rax_50 = rdi_5.d + rsi_5
                r14_4[4] = rax_50
                
                if (rax_50 s> r14_4[5])
                    sub_1405a4d70(&r14_4[2])
                
                memset(*(r14_4 + 8) + (rdi_5 << 3), 0, sx.q(rsi_5) << 3)
                rsi_4 = zx.q(arg_8)
            else if (rsi_4.d s< rdi_5.d)
                int32_t r15_1 = rdi_5.d
                int32_t r15_2 = r15_1 - rsi_4.d
                
                if (r15_1 != rsi_4.d)
                    int32_t rax_53 = rdi_5.d - r15_2
                    
                    if (rax_53 != rsi_4.d)
                        int64_t r9_6 = *(r14_4 + 8)
                        memmove(r9_6 + (rsi_4 << 3), r9_6 + (sx.q(r15_2 + rsi_4.d) << 3), 
                            (rax_53 - rsi_4.d) << 3)
                        rdi_5 = zx.q(r14_4[4])
                    
                    r14_4[4] = rdi_5.d - r15_2
                    sub_1405c53d0(&r14_4[2])
                    rsi_4 = zx.q(arg_8)
        
        int32_t rdi_7 = 0
        
        if (rsi_4.d s> 0)
            do
                int64_t* rcx_32 = *(*arg1 + 8)
                int64_t r8_13 = *rcx_32
                (*(r8_13 + 0x140))(rcx_32, *(r14_4 + 8) + (sx.q(rdi_7) << 3), r8_13)
                rdi_7 += 1
            while (rdi_7 s< arg_8)
        
        int32_t var_5c
        int32_t var_50 = var_50 & not.d(var_5c)
        void var_60
        sub_14059bdd0(&var_60)
        result = result_1
else
    int512_t zmm1
    result, zmm1 = sub_140cb92f0(arg2, arg_10)
    int32_t r13_1 = 0
    
    if (arg_10 s> 0)
        void* rsi_1 = &arg2[2]
        
        do
            int32_t rcx_4 = *(arg2 + 0x34)
            int64_t rdi_1
            
            if (rcx_4 == 0)
                rdi_1 = zx.q(arg2[1].d)
                int32_t rax_13 = (rdi_1 + 1).d
                arg2[1].d = rax_13
                
                if (rax_13 s> *(arg2 + 0xc))
                    sub_1405c4e40(arg2)
                
                sub_1405b2ba0(rsi_1, 0)
            else
                rdi_1 = sx.q(arg2[6].d)
                uint64_t r8_1 = *arg2
                int64_t rdx_3 = sx.q(*((rdi_1 << 5) + r8_1 + 4))
                arg2[6].d = rdx_3.d
                *(arg2 + 0x34) = rcx_4 - 1
                
                if (rcx_4 != 1)
                    *((rdx_3 << 5) + r8_1) = 0xffffffff
            
            void* rax_14 = *(rsi_1 + 0x10)
            void* rcx_7 = rsi_1
            
            if (rax_14 != 0)
                rcx_7 = rax_14
            
            int32_t rax_15 = rdi_1.d
            
            if (rdi_1.d s< 0)
                rax_15 = (rdi_1 + 0x1f).d
            
            void* r8_2 = rcx_7 + (sx.q(rax_15 s>> 5) << 2)
            *r8_2 |= 1 << (rdi_1.b & 0x1f)
            int64_t rdx_8 = (sx.q(rdi_1.d) << 5) + *arg2
            *rdx_8 = 0
            *(rdx_8 + 8) = 0
            *(rdx_8 + 0x10) = 0
            *(rdx_8 + 0x18) = 0xffffffff
            int64_t* r9_1 = *(*arg1 + 8)
            int64_t* rcx_10 = r9_1[1]
            int32_t* r8_3 = *rcx_10
            
            if (&r8_3[1] u<= rcx_10[1])
                *rdx_8 = *r8_3
                int64_t* rax_21 = r9_1[1]
                *rax_21 += 4
            else if ((*(r9_1 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_1, rdx_8, zmm1)
            else
                (*(*r9_1 + 0x150))(r9_1, rdx_8, 4)
            
            arg_8 = *(rdx_8 + 0x10)
            int64_t* r9_2 = *(*arg1 + 8)
            int64_t* rcx_12 = r9_2[1]
            int32_t* rdx_9 = *rcx_12
            
            if (&rdx_9[1] u> rcx_12[1])
                int32_t* rdx_10 = &arg_8
                
                if ((*(r9_2 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_2, rdx_10, zmm1)
                else
                    (*(*r9_2 + 0x150))(r9_2, rdx_10, 4)
            else
                arg_8 = *rdx_9
                int64_t* rax_27 = r9_2[1]
                *rax_27 += 4
            
            result = *arg1
            int64_t rsi_2
            
            if ((*(*(result + 8) + 0x28) & 1) == 0)
                rsi_2 = zx.q(arg_8)
            else
                uint64_t rdi_2 = sx.q(*(rdx_8 + 0x10))
                rsi_2 = sx.q(arg_8)
                
                if (rsi_2.d s> rdi_2.d)
                    int32_t rsi_3 = rsi_2.d - rdi_2.d
                    int32_t rax_29 = rdi_2.d + rsi_3
                    *(rdx_8 + 0x10) = rax_29
                    
                    if (rax_29 s> *(rdx_8 + 0x14))
                        sub_1405a4d70(rdx_8 + 8)
                    
                    result = memset(*(rdx_8 + 8) + (rdi_2 << 3), 0, sx.q(rsi_3) << 3)
                    rsi_2 = zx.q(arg_8)
                else if (rsi_2.d s< rdi_2.d)
                    int32_t r12_1 = rdi_2.d
                    int32_t r12_2 = r12_1 - rsi_2.d
                    
                    if (r12_1 != rsi_2.d)
                        int32_t rax_32 = rdi_2.d - r12_2
                        
                        if (rax_32 != rsi_2.d)
                            int64_t r9_3 = *(rdx_8 + 8)
                            memmove(r9_3 + (rsi_2 << 3), r9_3 + (sx.q(r12_2 + rsi_2.d) << 3), 
                                (rax_32 - rsi_2.d) << 3)
                            rdi_2 = zx.q(*(rdx_8 + 0x10))
                        
                        *(rdx_8 + 0x10) = rdi_2.d - r12_2
                        result = sub_1405c53d0(rdx_8 + 8)
                        rsi_2 = zx.q(arg_8)
            
            int32_t rdi_4 = 0
            
            if (rsi_2.d s> 0)
                do
                    int64_t* rcx_20 = *(*arg1 + 8)
                    int64_t r8_8 = *rcx_20
                    result = (*(r8_8 + 0x140))(rcx_20, *(rdx_8 + 8) + (sx.q(rdi_4) << 3), r8_8)
                    rdi_4 += 1
                while (rdi_4 s< arg_8)
            
            r13_1 += 1
            rsi_1 = &arg2[2]
        while (r13_1 s< arg_10)
return result
