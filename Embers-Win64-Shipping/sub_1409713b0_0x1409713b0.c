// 函数: sub_1409713b0
// 地址: 0x1409713b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = 0
void* r13 = arg1
uint64_t arg_20 = 0
int32_t i = 0
int64_t var_78
uint128_t var_68
uint128_t zmm0

if (*(arg1 + 0x58) s> 0)
    char* rbx_1 = nullptr
    
    do
        int64_t rsi_1 = *(r13 + 0x50)
        
        if (rbx_1[rsi_1] != 0)
            if (rbx_1[rsi_1 + 8] != 0)
                zmm0.d = (*(rbx_1 + rsi_1 + 4)).d f- arg2.d
                *(rbx_1 + rsi_1 + 4) = zmm0.d
                
                if (not(zmm0.d f> 0f))
                    rbx_1[rsi_1 + 9] = 0
                    *(rbx_1 + rsi_1 + 4) = *(r13 + 0x90)
                label_14097143b:
                    
                    for (int64_t* j = *(r13 + 8); j != &j[sx.q(*(r13 + 0x10)) * 2]; j = &j[2])
                        if (j[1].d != 0 && *j != 0)
                            int64_t* rcx_3 = *(r13 + 0x30)
                            (*(*rcx_3 + 0xf0))(rcx_3, &var_78, zx.q(i))
                            zmm0 = var_78.o
                            var_68 = zmm0
                            void* rax_3 = _mm_bsrli_si128(zmm0, 8).q
                            
                            if (rax_3 != 0)
                                *(rax_3 + 8) += 1
                            
                            sub_140954cd0(r13 + 8, &var_68, rbx_1[rsi_1 + 9])
                            int64_t* var_70
                            
                            if (var_70 != 0)
                                var_70[1].d -= 1
                                
                                if (var_70[1].d == 1)
                                    (**var_70)(var_70)
                                    int32_t temp2_1 = *(var_70 + 0xc)
                                    *(var_70 + 0xc) -= 1
                                    
                                    if (temp2_1 == 1)
                                        (*(*var_70 + 8))(var_70, 1)
                            
                            break
                    
                    rbx_1[rsi_1 + 8] = rbx_1[rsi_1 + 9]
            else if (rbx_1[rsi_1 + 9] != 0)
                goto label_14097143b
        
        i += 1
        rbx_1 = &rbx_1[0xc]
    while (i s< *(r13 + 0x58))
    
    rdx = 0

if (*(r13 + 0x68) s<= 0)
    return 

int64_t r12
int64_t arg_10 = r12
int64_t* r14_1 = nullptr

do
    int64_t rbp_1 = *(r13 + 0x60)
    var_78 = rbp_1
    uint32_t rax = zx.d(*(r14_1 + rbp_1 + 0x15))
    
    if (*(r14_1 + rbp_1 + 0x14) != 0)
        if (rax.b == 0)
            zmm0.d = (*(r14_1 + rbp_1 + 0x10)).d f- arg2.d
            *(r14_1 + rbp_1 + 0x10) = zmm0.d
            
            if (not(zmm0.d f> 0f))
                goto label_140971564
    else if (rax.b != 0)
    label_140971564:
        int64_t* i_1 = *(r13 + 8)
        void* r15_1 = r13 + 8
        
        for (; i_1 != &i_1[sx.q(*(r15_1 + 8)) * 2]; i_1 = &i_1[2])
            if (i_1[1].d != 0 && *i_1 != 0)
                int64_t* rbx_2 = *(r14_1 + rbp_1 + 8)
                int64_t rax_6 = *(r14_1 + rbp_1)
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                char rax_7 = *(r14_1 + rbp_1 + 0x15)
                r12.b = 0
                *(r15_1 + 0x14) += 1
                int32_t rcx_10 = *(r15_1 + 0x14)
                int32_t rax_8 = *(r15_1 + 8)
                int64_t rsi_2 = sx.q(rax_8 - 1)
                
                if (rax_8 - 1 s>= 0)
                    int64_t rdi_3 = rsi_2 << 4
                    int64_t temp5_1
                    
                    do
                        int64_t rax_10 = *r15_1
                        
                        if (*(rdi_3 + rax_10 + 8) == 0)
                            r12.b = 1
                        else
                            int64_t* rcx_11 = *(rdi_3 + rax_10)
                            
                            if (rcx_11 == 0)
                                r12.b = 1
                            else
                                var_68.q = rax_6
                                var_68:8.q = rbx_2
                                
                                if (rbx_2 != 0)
                                    rbx_2[1].d += 1
                                
                                if ((*(*rcx_11 + 0x50))(rcx_11, &var_68, zx.q(rax_7)) == 0)
                                    r12.b = 1
                        
                        rdi_3 -= 0x10
                        temp5_1 = rsi_2
                        rsi_2 -= 1
                    while (temp5_1 - 1 s>= 0)
                    rcx_10 = *(r15_1 + 0x14)
                    rbp_1 = var_78
                    r13 = arg1
                
                *(r15_1 + 0x14) = rcx_10 - 1
                
                if (r12.b != 0)
                    sub_140599630(r15_1, 0)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp4_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdx = arg_20
                break
        
        *(r14_1 + rbp_1 + 0x14) = *(r14_1 + rbp_1 + 0x15)
        *(r14_1 + rbp_1 + 0x10) = *(r13 + 0x90)
    
    rdx = zx.q(rdx.d + 1)
    r14_1 = &r14_1[3]
    arg_20 = rdx
while (rdx.d s< *(r13 + 0x68))
