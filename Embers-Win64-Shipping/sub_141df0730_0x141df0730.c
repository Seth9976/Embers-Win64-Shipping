// 函数: sub_141df0730
// 地址: 0x141df0730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    int64_t result
    result.b = 0
    return result

int64_t rsi
int64_t var_18 = rsi
int32_t i = 0
int64_t r15
int64_t var_38 = r15
int32_t i_2 = 0

if (arg1[2].d s> 0)
    rsi = 0
    int64_t arg_10 = 0
    
    do
        int32_t* rcx = arg1[0xc]
        int64_t* r13_2 = arg1[1] + rsi
        void* rdx_1 = &rcx[sx.q(arg1[0xd].d)]
        
        if (rcx != rdx_1)
            int32_t r8_1 = r13_2[3].d
            
            do
                if (*rcx == r8_1)
                    int64_t rcx_1 = sx.q(arg1[9].d)
                    
                    if (rcx_1.d != 0)
                        int32_t r12_1 = 0
                        int32_t rdi = 0
                        int64_t rbx_1 = 0
                        r15.b = *arg1[8] != r8_1
                        
                        do
                            int64_t r9_1 = sx.q(rdi)
                            rbx_1 += 1
                            rdi += 1
                            
                            if (rbx_1 s< rcx_1)
                                int32_t* rcx_2 = arg1[8] + (rbx_1 << 2)
                                
                                do
                                    int32_t rax_3
                                    rax_3.b = *rcx_2 != r13_2[3].d
                                    
                                    if (zx.d(r15.b) != rax_3)
                                        break
                                    
                                    rdi += 1
                                    rbx_1 += 1
                                    rcx_2 = &rcx_2[1]
                                while (rbx_1 s< rcx_1)
                            
                            int32_t rsi_2 = rdi - r9_1.d
                            
                            if (r15.b != 0)
                                if (r12_1 != r9_1.d)
                                    int64_t rcx_3 = arg1[8]
                                    memmove(rcx_3 + (sx.q(r12_1) << 2), rcx_3 + (r9_1 << 2), 
                                        rsi_2 << 2)
                                
                                r12_1 += rsi_2
                            
                            r15.b ^= 1
                        while (rbx_1 s< rcx_1)
                        
                        i = i_2
                        rsi = arg_10
                        arg1[9].d = r12_1
                    
                    sub_141de8d90(arg1, r13_2)
                    EnterCriticalSection(&arg1[3])
                    int32_t rdx_5 = arg1[2].d
                    int32_t rcx_9 = rdx_5 - i - 1
                    
                    if (rcx_9 s>= 1)
                        rcx_9 = 1
                    
                    if (rcx_9 != 0)
                        memcpy((sx.q(i) << 5) + arg1[1], (sx.q(rdx_5 - rcx_9) << 5) + arg1[1], 
                            rcx_9 << 5)
                        rdx_5 = arg1[2].d
                    
                    arg1[2].d = rdx_5 - 1
                    
                    if (arg1 != -0x18)
                        LeaveCriticalSection(&arg1[3])
                    
                    break
                
                rcx = &rcx[1]
            while (rcx != rdx_1)
        
        i += 1
        rsi += 0x20
        i_2 = i
        arg_10 = rsi
    while (i s< arg1[2].d)

arg1[0xd].d = 0

if (*(arg1 + 0x6c) s<= 0xffffffff)
    sub_1405dadb0(&arg1[0xc], 0)

int64_t var_58
__builtin_memset(&var_58, 0, 0x20)
rsi.b = 0
uint64_t var_48

if (sub_141deccb0(arg1, &var_48, &var_58) != 0)
    void* i_1 = arg1[1]
    
    for (void* rdi_3 = (sx.q(arg1[2].d) << 5) + i_1; i_1 != rdi_3; i_1 += 0x20)
        int64_t* rcx_16 = *(i_1 + 8)
        
        if (rcx_16 != 0)
            char rax_8 = (*(*rcx_16 + 8))(rcx_16)
            rsi.b |= rax_8 == 0
            
            if (rax_8 != 0)
                int64_t* rcx_18 = *(i_1 + 8)
                
                if (rcx_18 != 0)
                    int512_t zmm1
                    zmm1.o = zx.o(0)
                    (*(*rcx_18 + 0x10))(rcx_18, zmm1)
                    int64_t* rcx_19 = *(i_1 + 8)
                    
                    if (rcx_19 != 0)
                        (**rcx_19)(rcx_19, 1)
                    
                    *(i_1 + 8) = 0
    
    if (&arg1[8] != &arg1[0xa])
        int64_t rdi_4 = sx.q(arg1[0xb].d)
        int64_t rbp_2 = arg1[0xa]
        int32_t r8_8 = *(arg1 + 0x4c)
        arg1[9].d = rdi_4.d
        
        if (rdi_4.d != 0 || r8_8 != 0)
            sub_1405c4a90(&arg1[8], rdi_4.d, r8_8)
            memcpy(arg1[8], rbp_2, (rdi_4 << 2).d)
        else
            *(arg1 + 0x4c) = 0
    
    sub_141de1f40(arg1, &var_48, &var_58)

int32_t rax_12 = *(arg1 + 0x5c)
arg1[0xb].d = 0

if (rax_12 s< 0 && rax_12 != 0)
    sub_1405dadb0(&arg1[0xa], 0)

int64_t rbx_4 = sx.q(arg1[0xb].d)
int32_t rax_13 = (rbx_4 + 1).d
arg1[0xb].d = rax_13

if (rax_13 s> *(arg1 + 0x5c))
    sub_1405a4cf0(&arg1[0xa])

int64_t rcx_25 = var_58
*(arg1[0xa] + (rbx_4 << 2)) = 0

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

uint64_t rcx_26 = var_48

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

return zx.q(rsi.b)
