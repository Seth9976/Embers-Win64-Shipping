// 函数: sub_1409b5eb0
// 地址: 0x1409b5eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
int32_t rax = arg2[1].d
int64_t r13 = 0
int64_t* var_58 = nullptr
int64_t var_50 = 0
void*** rbp = arg1
int64_t* rsi = nullptr
int32_t i_5 = 0
int32_t r14 = 0

if (rax s> 0)
    sub_1405a5130(&var_58, rax)
    rax = arg2[1].d
    r14 = var_50:4.d
    i_5 = var_50.d
    rsi = var_58

int64_t r12 = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t temp1_1
    
    do
        int64_t i_6 = sx.q(i_5)
        int32_t rbx_1 = *(*arg2 + (r12 << 2))
        i_5 = (i_6 + 1).d
        var_50.d = i_5
        
        if (i_5 s> r14)
            sub_1405a4df0(&var_58)
            r14 = var_50:4.d
            i_5 = var_50.d
            rsi = var_58
        
        int32_t var_40_1 = rbx_1
        int64_t rcx_3 = i_6 * 3
        rbp = arg_8
        rsi[rcx_3] = 0
        rsi[rcx_3 + 1] = 0
        rsi[rcx_3 + 2].d = data_143a1c6b4
        void* rcx_5 = &rsi[sx.q(i_5 - 1) * 3]
        *(rcx_5 + 0x10) = rbx_1
        int128_t var_38 = rcx_5.o
        sub_140999b70(&rbp[5][0x2a], &var_38)
        temp1_1 = r12
        r12 -= 1
    while (temp1_1 - 1 s>= 0)

void*** rax_6 = j_sub_140a82f30(0x18)

if (rax_6 == 0)
    rax_6 = nullptr
else
    *rax_6 = &data_142e3f678
    rax_6[1] = rsi
    rsi = nullptr
    rax_6[2].d = i_5
    i_5 = 0
    *(rax_6 + 0x14) = r14

arg_8 = rax_6
sub_1409afc10(rbp, &arg_8)
int64_t* rbx_2 = rsi

if (i_5 != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *rbx_2
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_2 = &rbx_2[3]
        i = i_5
        i_5 -= 1
    while (i != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

int64_t rdi = 0
int64_t* rbx_3 = rbp[0x77]
uint64_t rsi_2 = sx.q(rbp[0x78].d) << 3 u>> 3

if (rbx_3 u> &rbx_3[rbp[0x78]])
    rsi_2 = 0

if (rsi_2 != 0)
    do
        int64_t* rcx_11 = *rbx_3
        (*(*rcx_11 + 0x2d8))(rcx_11, rbp, arg2)
        rdi += 1
        rbx_3 = &rbx_3[1]
    while (rdi != rsi_2)

int32_t* r14_1 = *arg2
int64_t* result = &r14_1[arg2[1]]
uint64_t r15_2 = sx.q(arg2[1].d) << 2 u>> 2

if (r14_1 u> result)
    r15_2 = 0

if (r15_2 != 0)
    do
        int64_t rbx_4 = sx.q(*r14_1)
        
        if (rbp[0x9a].d != *(rbp + 0x4fc))
            void* rax_12 = rbp[0xa1]
            void* r9_1 = &rbp[0xa0]
            int64_t r10_2 = sx.q(rbp[0xa2].d) - 1
            
            if (rax_12 != 0)
                r9_1 = rax_12
            
            int32_t i_1 = *(r9_1 + ((rbx_4 & r10_2) << 2))
            
            if (i_1 != 0xffffffff)
                int64_t r8_2 = rbp[0x99]
                
                do
                    int64_t i_3 = sx.q(i_1)
                    int64_t rax_15 = i_3 * 3
                    
                    if (*(r8_2 + (rax_15 << 2)) == rbx_4.d)
                        int64_t rax_16 = i_3 * 3
                        int64_t rax_18 = sx.q(*(r8_2 + (rax_16 << 2) + 8)) & r10_2
                        void* rcx_12 = r9_1 + (rax_18 << 2)
                        int32_t j = *(r9_1 + (rax_18 << 2))
                        
                        while (j != 0xffffffff)
                            if (j == i_1)
                                *rcx_12 = *(r8_2 + (rax_16 << 2) + 4)
                                break
                            
                            int64_t j_2 = sx.q(j)
                            j = *(r8_2 + ((j_2 * 3 + 1) << 2))
                            rcx_12 = r8_2 + ((j_2 * 3 + 1) << 2)
                        
                        sub_14090a460(&rbp[0x99], i_1, 1)
                        break
                    
                    i_1 = *(r8_2 + (rax_15 << 2) + 4)
                while (i_1 != 0xffffffff)
        
        int64_t** rdi_1 = rbp[5]
        sub_1409d8530(rdi_1, rbx_4.d, 1)
        sub_1409d8140(&rdi_1[0x2a], rbx_4.d)
        result = zx.q(rbp[0x9a].d)
        
        if (result.d != *(rbp + 0x4fc))
            void* rax_20 = rbp[0xa1]
            void* r9_2 = &rbp[0xa0]
            int64_t r10_4 = sx.q(rbp[0xa2].d) - 1
            
            if (rax_20 != 0)
                r9_2 = rax_20
            
            result = rbx_4 & r10_4
            int32_t i_2 = *(r9_2 + (result << 2))
            
            if (i_2 != 0xffffffff)
                int64_t r8_3 = rbp[0x99]
                
                do
                    int64_t i_4 = sx.q(i_2)
                    result = i_4 * 3
                    
                    if (*(r8_3 + (result << 2)) == rbx_4.d)
                        int64_t rax_22 = i_4 * 3
                        int64_t rax_24 = sx.q(*(r8_3 + (rax_22 << 2) + 8)) & r10_4
                        void* rcx_18 = r9_2 + (rax_24 << 2)
                        int32_t j_1 = *(r9_2 + (rax_24 << 2))
                        
                        while (j_1 != 0xffffffff)
                            if (j_1 == i_2)
                                *rcx_18 = *(r8_3 + (rax_22 << 2) + 4)
                                break
                            
                            int64_t j_3 = sx.q(j_1)
                            j_1 = *(r8_3 + ((j_3 * 3 + 1) << 2))
                            rcx_18 = r8_3 + ((j_3 * 3 + 1) << 2)
                        
                        result = sub_14090a460(&rbp[0x99], i_2, 1)
                        break
                    
                    i_2 = *(r8_3 + (result << 2) + 4)
                while (i_2 != 0xffffffff)
        
        r14_1 = &r14_1[1]
        r13 += 1
    while (r13 != r15_2)

return result
