// 函数: sub_141e8bb20
// 地址: 0x141e8bb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = arg3.d
int64_t* r14 = nullptr
int64_t* var_68 = nullptr
int32_t rsi = 0
int32_t r15 = 0
int32_t var_5c = 0

if (arg3.d s< arg2[1].d)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7 = zx.o(0)
    int64_t rbp_1 = sx.q(arg3.d) << 3
    int64_t arg_8 = rbp_1
    int32_t i
    
    do
        int64_t* rbp_2 = *(*arg2 + rbp_1)
        
        if (rbp_2 != 0)
            void* rdi_1 = rbp_2[1]
            
            if (rdi_1 != 0)
                sub_141e632a0(rbp_2)
                int32_t zmm0_2
                zmm0_2, arg3, zmm6 = sub_141e5f830(rbp_2)
                int64_t* j = *(rdi_1 + 0x90)
                void* r12_3 = &j[sx.q(*(rdi_1 + 0x98)) * 2]
                zmm6.d = zmm6.d f* zmm0_2
                
                for (; j != r12_3; j = &j[2])
                    if (not(zmm6.d f< j[1].d) && not(zmm6.d f> *(j + 0xc)))
                        if (not(zmm7.d f!= *(rbp_2[0x18] + 0x190)))
                            void* rdx = *j
                            
                            if (rdx != 0)
                                arg3, zmm6, zmm7 = sub_141e82d00(arg1, rdx, 1, 1)
                        
                        int64_t* rcx_3 = r14
                        void* rdx_1 = &r14[sx.q(rsi)]
                        
                        if (r14 != rdx_1)
                            while (*rcx_3 != *j)
                                rcx_3 = &rcx_3[1]
                                
                                if (rcx_3 == rdx_1)
                                    goto label_141e8bc5c
                        
                        if (r14 == rdx_1 || ((rcx_3 - r14) s>> 3).d == 0xffffffff)
                        label_141e8bc5c:
                            int64_t rdi_2 = sx.q(rsi)
                            rsi = (rdi_2 + 1).d
                            
                            if (rsi s> r15)
                                sub_1405a4d70(&var_68)
                                r15 = var_5c
                                r14 = var_68
                            
                            r14[rdi_2] = *j
        
        i = i_3 + 1
        rbp_1 = arg_8 + 8
        i_3 = i
        arg_8 = rbp_1
    while (i s< arg2[1].d)

int64_t rdi_3 = 0
int64_t* r15_1 = r14
void* rbx_1 = &r14[sx.q(rsi)]
uint64_t rbp_7 = (rbx_1 - r14 + 7) u>> 3

if (r14 u> rbx_1)
    rbp_7 = 0

if (rbp_7 != 0)
    do
        arg3 = arg1[0xb7]
        int64_t* rcx_8 = arg3
        void* i_1 = *r15_1
        void* rdx_3 = &arg3[sx.q(arg1[0xb8].d)]
        
        if (arg3 != rdx_3)
            while (*rcx_8 != i_1)
                rcx_8 = &rcx_8[1]
                
                if (rcx_8 == rdx_3)
                    goto label_141e8bd4f
        
        if (arg3 == rdx_3 || ((rcx_8 - arg3) s>> 3).d == 0xffffffff)
        label_141e8bd4f:
            arg3.b = 1
            sub_141e82d00(arg1, i_1, arg3.b, 0)
        
        r15_1 = &r15_1[1]
        rdi_3 += 1
    while (rdi_3 != rbp_7)

int32_t rax_11 = arg1[0xb8].d
int64_t rdi_4 = sx.q(rax_11 - 1)

if (rax_11 - 1 s>= 0)
    int64_t temp1_1
    
    do
        void* i_2 = *(arg1[0xb7] + (rdi_4 << 3))
        int64_t* rax_14 = r14
        
        if (r14 != rbx_1)
            while (*rax_14 != i_2)
                rax_14 = &rax_14[1]
                
                if (rax_14 == rbx_1)
                    goto label_141e8bdb1
        
        if (r14 == rbx_1 || ((rax_14 - r14) s>> 3).d == 0xffffffff)
        label_141e8bdb1:
            arg3.b = 1
            sub_141e820c0(arg1, i_2, arg3.b)
        
        temp1_1 = rdi_4
        rdi_4 -= 1
    while (temp1_1 - 1 s>= 0)

int64_t** result = &var_68

if (&arg1[0xb7] != &var_68)
    int32_t r8 = *(arg1 + 0x5c4)
    arg1[0xb8].d = rsi
    
    if (rsi != 0 || r8 != 0)
        sub_1405c4a00(&arg1[0xb7], rsi, r8)
        result = memcpy(arg1[0xb7], r14, rsi << 3)
    else
        *(arg1 + 0x5c4) = rsi

if (r14 == 0)
    return result

return sub_140a74f90(r14)
