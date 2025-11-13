// 函数: sub_140970eb0
// 地址: 0x140970eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[0xd].d s> 0)
    int64_t rdx_1 = 0
    
    do
        rdx_1 += 0x18
        i += 1
        *(rdx_1 + arg1[0xc] - 3) = 0
    while (i s< arg1[0xd].d)

int32_t i_1 = 0

if (arg1[0x1c].d s> 0)
    int64_t r12_1 = 0
    
    do
        uint64_t rax = arg1[0x1b]
        int64_t* r14_1 = *(r12_1 + rax + 8)
        int64_t* r15_1 = *(r12_1 + rax)
        
        if (r14_1 != 0)
            r14_1[1].d += 1
        
        if (r15_1 != 0)
            if (arg1[7] != 0)
                uint32_t arg_8 = zx.d((*(*r15_1 + 0x10))(r15_1))
                int64_t arg_10 = (*(*r15_1 + 0x30))(r15_1)
                void** const var_68 = &data_142e25968
                int64_t var_60_1 = r15_1[1]
                int64_t* rax_7 = r15_1[2]
                
                if (rax_7 != 0)
                    rax_7[1].d += 1
                
                int64_t* rcx_2 = arg1[7]
                (*(*rcx_2 + 0x88))(rcx_2, &var_68, r15_1[3], &arg_8, &arg_10)
                
                if (rax_7 != 0)
                    rax_7[1].d -= 1
                    
                    if (rax_7[1].d == 1)
                        (**rax_7)(rax_7)
                        int32_t temp6_1 = *(rax_7 + 0xc)
                        *(rax_7 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rax_7 + 8))(rax_7, 1)
                
                int32_t rax_11 = sx.d(r15_1[7].w)
                int64_t* rcx_5 = arg1[7]
                var_68 = &data_142e25968
                int64_t rax_12 = r15_1[1]
                uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rax_11))
                int64_t var_60_2 = rax_12
                int64_t* rax_13 = r15_1[2]
                zmm2.d = zmm2.d f* 3.05185094e-05f
                
                if (rax_13 != 0)
                    rax_13[1].d += 1
                
                (*(*rcx_5 + 0x98))(rcx_5, &var_68, zmm2)
                
                if (rax_13 != 0)
                    rax_13[1].d -= 1
                    
                    if (rax_13[1].d == 1)
                        (**rax_13)(rax_13)
                        int32_t temp8_1 = *(rax_13 + 0xc)
                        *(rax_13 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rax_13 + 8))(rax_13, 1)
            
            int32_t j = 0
            
            if (arg1[0xd].d s> 0)
                int64_t* rdi_3 = nullptr
                
                do
                    int64_t rbp_1 = arg1[0xc]
                    int64_t* rcx_8 = *(rdi_3 + rbp_1)
                    
                    if ((**rcx_8)(rcx_8, r15_1[1]).b != 0)
                        *(rdi_3 + rbp_1 + 0x15) = (*(*arg1 + 0x128))(arg1, *(rdi_3 + rbp_1)) == 0
                        *(rdi_3 + rbp_1 + 0x10) = arg1[0x12].d
                    
                    j += 1
                    rdi_3 = &rdi_3[3]
                while (j s< arg1[0xd].d)
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**r14_1)(r14_1)
                int32_t temp4_1 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*r14_1 + 8))(r14_1, 1)
        
        i_1 += 1
        r12_1 += 0x10
    while (i_1 s< arg1[0x1c].d)

if (*(arg1 + 0xe4) s< 0)
    sub_14095cd40(&arg1[0x1b], 0)
    return 

int32_t i_3 = arg1[0x1c].d

if (i_3 != 0)
    int64_t* rdi_5 = arg1[0x1b] + 8
    int32_t i_2
    
    do
        int64_t* rbx_1 = *rdi_5
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_5 = &rdi_5[2]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

arg1[0x1c].d = 0
