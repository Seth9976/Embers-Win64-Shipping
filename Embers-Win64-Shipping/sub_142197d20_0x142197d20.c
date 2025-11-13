// 函数: sub_142197d20
// 地址: 0x142197d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = sub_140ce3290(arg1)
*(arg1 + 0x10a) &= 0xf9
int32_t i_1 = 0
int32_t rax = arg1[9].d
arg1[0x16].b &= 0xf7
*(arg1 + 0xb6) &= 0xfe
char rcx = *(arg1 + 0x10a)
int64_t rbp = sx.q(rax - 1)
uint64_t result
result.b = 3
int64_t arg_10 = rbp
arg1[0x21].w = 0x300
uint128_t i_2

if (rax - 1 s>= 0)
    int128_t var_48_1 = zmm6
    int64_t temp1_1
    
    do
        int64_t* rbx_1 = *(arg1[8] + (rbp << 3))
        
        if (rbx_1 != 0)
            sub_140cd85e0(rbx_1)
            void* rax_2 = sub_142559820()
            void* rdx_1 = rbx_1[2]
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if ((rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30
                    || (*(rbx_1 + 0x37) & 0x40) == 0) && rbx_1[9].d != 0)
                int64_t* r14_1 = *rbx_1[8]
                i_2 = sub_140cd85e0(r14_1, rdx_1)
                int64_t* r12_1 = rbx_1[8]
                void* rsi_1 = &r12_1[sx.q(rbx_1[9].d)]
                void* arg_8 = rsi_1
                
                if (r12_1 != rsi_1)
                    do
                        void* r15_1 = *r12_1
                        
                        if (r15_1 != 0)
                            int32_t i = 0
                            
                            if (r14_1[8].d s> 0)
                                int64_t rsi_2 = 0
                                
                                do
                                    void* rbx_2 = *(*(r15_1 + 0x38) + rsi_2)
                                    
                                    if (rbx_2 != 0)
                                        void* rax_8
                                        rax_8, i_2 = sub_142551590()
                                        void* rdx_2 = *(rbx_2 + 0x10)
                                        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                                        
                                        if (rax_9.d s<= *(rdx_2 + 0x38)
                                                && *(*(rdx_2 + 0x30) + (rax_9 << 3))
                                                == rax_8 + 0x30 && (*(rbx_2 + 0x110) & 1) != 0)
                                            arg1[0x16].b |= 8
                                            break
                                    
                                    i += 1
                                    rsi_2 += 8
                                while (i s< r14_1[8].d)
                                
                                rsi_1 = arg_8
                            
                            if ((*(r14_1 + 0x2c) & 1) != 0)
                                void* rax_11 = r14_1[6]
                                
                                if (rax_11 != 0 && *(rax_11 + 0xe4) == 0)
                                    *(arg1 + 0xb6) |= 1
                                    int64_t* rcx_5 = r14_1[0xa]
                                    
                                    if (not(0f f!= *(rax_11 + 0x5c)))
                                        *(arg1 + 0x10a) |= 2
                                        (*(*rcx_5 + 0x358))(rcx_5)
                                        
                                        if (not(i_2.d f!= 0f) && (*(arg1 + 0xb1) & 4) == 0)
                                            *(arg1 + 0x10a) |= 4
                        
                        r12_1 = &r12_1[1]
                    while (r12_1 != rsi_1)
                    
                    rbp = arg_10
                
                uint32_t rcx_6 = zx.d(*(arg1 + 0xb7))
                char rdx_3 = *(rbx_1 + 0x35)
                char r8_3 = rdx_3
                
                if (rcx_6.b u<= rdx_3)
                    r8_3 = rcx_6.b
                
                if (r8_3 u> arg1[0x21].b)
                    arg1[0x21].b = r8_3
                
                if (r8_3 u< *(arg1 + 0x109))
                    *(arg1 + 0x109) = r8_3
        
        temp1_1 = rbp
        rbp -= 1
        arg_10 = rbp
    while (temp1_1 - 1 s>= 0)
    result = zx.q(*(arg1 + 0x109))
    rcx = *(arg1 + 0x10a)

result.b = result.b != 3
result.b |= rcx & 0xfe
*(arg1 + 0x10a) = result.b

if (arg1[0x10].d == 0)
    int64_t* rcx_7
    bool cond:2_1
    
    if (arg1[9].d s<= 0)
        rcx_7 = &arg1[0xf]
        result = zx.q(rcx_7[1].d + 1)
        cond:2_1 = result.d s<= *(rcx_7 + 0xc)
        rcx_7[1].d = result.d
    label_142197fc3:
        
        if (not(cond:2_1))
            result = sub_1405daba0(rcx_7)
    else
        result = arg1[8]
        void* r8_4 = *result
        
        if (r8_4 != 0)
            rcx_7 = &arg1[0xf]
            int32_t r8_6 = *(r8_4 + 0x48) + rcx_7[1].d
            cond:2_1 = r8_6 s<= *(rcx_7 + 0xc)
            rcx_7[1].d = r8_6
            goto label_142197fc3

if (arg1[0xe].d == 0 && arg1[9].d s> 0)
    result = arg1[8]
    void* rcx_8 = *result
    
    if (rcx_8 != 0)
        int32_t rcx_10 = *(rcx_8 + 0x48) + arg1[0xe].d
        arg1[0xe].d = rcx_10
        
        if (rcx_10 s> *(arg1 + 0x74))
            result = sub_1406105e0(&arg1[0xd])
        
        if (arg1[0xe].d s> 0)
            int64_t rcx_12 = 0
            
            do
                result = arg1[0xd]
                rcx_12 += 4
                i_2 = zx.o(i_1)
                i_1 += 1
                i_2.d = _mm_cvtepi32_ps(i_2).d f* 2500f
                *(rcx_12 + result - 4) = i_2.d
            while (i_1 s< arg1[0xe].d)

arg1[0x14].b = 1
return result
