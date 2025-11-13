// 函数: sub_1419d42e0
// 地址: 0x1419d42e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
void* rdi = arg1
int32_t result = *(arg1 + 0x158)
uint128_t zmm6 = -0x4010000000000000
int64_t arg_10 = 0

if (result s> 0)
    int32_t r15_1 = 0
    
    if (result == 0)
    label_1419d4506:
        int32_t rdx_8 = *(rdi + 0x158)
        
        if (*(rdi + 0x15c) != rdx_8)
            result = sub_141983590(rdi + 0x150, rdx_8)
    else
        do
            int32_t rsi_1 = 0
            int64_t r12_1 = sx.q(r15_1) * 0x1c8
            void* r14_1 = *(*(rdi + 0x150) + r12_1 + 0x1c0)
            int32_t rax_14
            
            if (*(r14_1 + 0x98) != 0)
                do
                    int64_t rbx_1 = *(r14_1 + 0x90)
                    uint64_t arg_18 = zmm6.q
                    int64_t rbp_2 = sx.q(rsi_1) << 6
                    int64_t* rax_3 = *(rbx_1 + rbp_2 + 0x10)
                    int64_t* rcx_1 = rbp_2 + 0x20 + rbx_1
                    
                    if (rax_3 != 0)
                        rcx_1 = rax_3
                    
                    if ((*(rbx_1 + rbp_2))((*(*rcx_1 + 8))(rcx_1), &arg_18) == 0)
                        rsi_1 += 1
                    else
                        int64_t* rcx_3 = *(r14_1 + 0x90)
                        
                        if (rcx_3[sx.q(rsi_1) * 8] != 0)
                            void* rax_7 = rcx_3[sx.q(rsi_1) * 8 + 2]
                            void* rcx_5 = &rcx_3[4 + sx.q(rsi_1) * 8]
                            
                            if (rax_7 != 0)
                                rcx_5 = rax_7
                            
                            (*(*rcx_5 + 0x10))(rcx_5)
                        
                        int32_t rcx_8 = *(r14_1 + 0x98)
                        int32_t rax_10 = rcx_8 - rsi_1
                        
                        if (rax_10 != 1)
                            int64_t rcx_6 = *(r14_1 + 0x90)
                            memmove(rcx_6 + rbp_2, (sx.q(rsi_1 + 1) << 6) + rcx_6, 
                                (rax_10 - 1) << 6)
                            rcx_8 = *(r14_1 + 0x98)
                        
                        *(r14_1 + 0x98) = rcx_8 - 1
                        sub_1407c3fe0(r14_1 + 0x90)
                    
                    rax_14 = *(r14_1 + 0x98)
                while (rsi_1 u< rax_14)
                
                rdi = arg1
                rbp = arg_10
            
            if (*(r14_1 + 0x98) != 0 && rax_14 != 0)
                r15_1 += 1
            else
                int64_t rax_15 = *(rdi + 0x150)
                void*** rbx_2 = *(rax_15 + r12_1 + 0x1c0)
                
                if (rbx_2 != 0)
                    *rbx_2 = &data_14300fba8
                    sub_1405d5770(&rbx_2[0x12])
                    sub_140b4cb40(rbx_2)
                    j_sub_140a74f90(rbx_2)
                    rax_15 = *(rdi + 0x150)
                
                *(rax_15 + r12_1 + 0x1c0) = 0
                *(rdi + 0x150)
                int32_t rcx_15 = *(rdi + 0x158)
                int32_t rax_17 = rcx_15 - r15_1
                
                if (rax_17 != 1)
                    int64_t r9_1 = *(rdi + 0x150)
                    memmove(r9_1 + r12_1, sx.q(r15_1 + 1) * 0x1c8 + r9_1, (rax_17 - 1) * 0x1c8)
                    rcx_15 = *(rdi + 0x158)
                
                rbp += 1
                *(rdi + 0x158) = rcx_15 - 1
                arg_10 = rbp
            
            result = *(rdi + 0x158)
        while (r15_1 u< result)
        
        if (result == 0)
            goto label_1419d4506

if (*(rdi + 0x178) s> 0)
    int64_t* i = *(rdi + 0x168)
    
    while (i != 0)
        int64_t* r14_2 = *i
        void* rsi_2 = &i[1]
        int64_t* i_1 = i
        i = *rsi_2
        void* r15_2 = r14_2[2]
        
        if (*(r14_2 + 0x1c) != 0)
            goto label_1419d4635
        
        int32_t rdi_2 = 0
        
        if (*(r15_2 + 0x98) != 0)
            do
                int64_t rbx_3 = *(r15_2 + 0x90)
                uint64_t arg_20 = zmm6.q
                int64_t rbp_4 = sx.q(rdi_2) << 6
                int64_t* rax_23 = *(rbx_3 + rbp_4 + 0x10)
                int64_t* rcx_20 = rbp_4 + 0x20 + rbx_3
                
                if (rax_23 != 0)
                    rcx_20 = rax_23
                
                if ((*(rbx_3 + rbp_4))((*(*rcx_20 + 8))(rcx_20), &arg_20) == 0)
                    rdi_2 += 1
                else
                    int64_t* rcx_22 = *(r15_2 + 0x90)
                    
                    if (rcx_22[sx.q(rdi_2) * 8] != 0)
                        void* rax_27 = rcx_22[sx.q(rdi_2) * 8 + 2]
                        void* rcx_24 = &rcx_22[4 + sx.q(rdi_2) * 8]
                        
                        if (rax_27 != 0)
                            rcx_24 = rax_27
                        
                        (*(*rcx_24 + 0x10))(rcx_24)
                    
                    int32_t rcx_27 = *(r15_2 + 0x98)
                    int32_t rax_30 = rcx_27 - rdi_2
                    
                    if (rax_30 != 1)
                        int64_t rcx_25 = *(r15_2 + 0x90)
                        memmove(rcx_25 + rbp_4, (sx.q(rdi_2 + 1) << 6) + rcx_25, (rax_30 - 1) << 6)
                        rcx_27 = *(r15_2 + 0x98)
                    
                    *(r15_2 + 0x98) = rcx_27 - 1
                    sub_1407c3fe0(r15_2 + 0x90)
                
                result = *(r15_2 + 0x98)
            while (rdi_2 u< result)
        
        if (*(r15_2 + 0x98) != 0 && result != 0)
            rbp = arg_10
        else
            rdi = arg1
        label_1419d4635:
            int64_t* rcx_29 = r14_2[2]
            
            if (rcx_29 != 0)
                (**rcx_29)(rcx_29, 1)
                r14_2[2] = 0
            
            int64_t* rbx_4 = r14_2[7]
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t rax_37 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rax_37 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            int64_t* rbx_5 = r14_2[5]
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t rax_41 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (rax_41 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
            
            int64_t rcx_34 = *r14_2
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            result = j_sub_140a74f90(r14_2)
            
            if (i_1 != 0)
                void* rax_43 = *(rdi + 0x168)
                uint64_t rdx_15
                
                if (*(rdi + 0x178) != 1)
                    if (i_1 != rax_43)
                        void* rax_45 = *(rdi + 0x170)
                        
                        if (i_1 != rax_45)
                            *(*rsi_2 + 0x10) = i_1[2]
                            *(i_1[2] + 8) = *rsi_2
                        else
                            void* rax_46 = *(rax_45 + 0x10)
                            *(rdi + 0x170) = rax_46
                            *(rax_46 + 8) = 0
                    else
                        void* rax_44 = *(rax_43 + 8)
                        *(rdi + 0x168) = rax_44
                        *(rax_44 + 0x10) = 0
                    
                    j_sub_140a74f90(i_1)
                    rdx_15 = zx.q(*(rdi + 0x178) - 1)
                else
                    if (rax_43 != 0)
                        int64_t j
                        
                        do
                            void* rcx_36 = *(rdi + 0x168)
                            j = *(rcx_36 + 8)
                            j_sub_140a74f90(rcx_36)
                            *(rdi + 0x168) = j
                        while (j != 0)
                    
                    *(rdi + 0x170) = 0
                    rdx_15 = 0
                    *(rdi + 0x168) = 0
                
                result = (*(*(rdi + 0x160) + 8))(rdi + 0x160, rdx_15)
            
            rbp = arg_10 + 1
            arg_10 = rbp
        
        rdi = arg1

if (rbp s> 0)
    *(rdi + 0xe8)
    *(rdi + 0xe8) += neg.q(rbp)

return result
