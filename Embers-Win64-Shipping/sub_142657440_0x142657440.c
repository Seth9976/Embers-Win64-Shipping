// 函数: sub_142657440
// 地址: 0x142657440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* r14 = arg1
void* r12 = arg2
int64_t* rcx = *(arg1 + 0x150)

if (rcx == 0 || (*(*rcx + 0x150))(rcx) == 0)
    return 

int64_t* rcx_1 = *(r14 + 0x150)
void* rax_3 = (*(*rcx_1 + 0x150))(rcx_1)
int32_t i_1 = 0
void* const rbp_1

if (rax_3 == 0)
    rbp_1 = nullptr
else
    rbp_1 = *(rax_3 + 0x120)
    
    if (rbp_1 == 0)
        rbp_1 = nullptr
    else
        void* rax_4 = sub_14269bba0()
        void* rdx = *(rbp_1 + 0x10)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            rbp_1 = nullptr

int64_t r15_1 = 0
int64_t var_78 = 0
int32_t r13_1 = 0
int64_t var_70_1 = 0
int32_t i_2

if (rbp_1 != 0)
    int32_t rax_7 = *(rbp_1 + 0x98)
    
    if (rax_7 s> 0)
        sub_1405dadb0(&var_78, rax_7)
        rax_7 = *(rbp_1 + 0x98)
        r15_1 = var_78
    
    i_2 = 0
    int32_t i = 0
    
    if (rax_7 s> 0)
        int32_t rsi_1 = 1
        int64_t* r12_1 = nullptr
        
        do
            void* rbx_1 = *(r12_1 + *(rbp_1 + 0x90))
            
            if (rbx_1 != 0)
                void* rax_9 = sub_1426a09e0()
                void* rdx_2 = *(rbx_1 + 0x10)
                int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                
                if (rax_10.d s<= *(rdx_2 + 0x38)
                        && *(*(rdx_2 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                    char rax_12 = *(rbx_1 + 0x2a8) & 1
                    
                    if (rax_12 != 0)
                        r13_1 |= rsi_1
                    
                    int32_t zmm0_1 = *(rbx_1 + 0x42c)
                    
                    if (not(zmm0_1 f<= 0f) && rax_12 != 0)
                        int64_t r14_1 = sx.q(var_70_1.d)
                        int32_t rax_13 = (r14_1 + 1).d
                        var_70_1.d = rax_13
                        
                        if (rax_13 s> var_70_1:4.d)
                            sub_1406105e0(&var_78)
                            zmm0_1 = *(rbx_1 + 0x42c)
                            r15_1 = var_78
                        
                        *(r15_1 + (r14_1 << 2)) = zmm0_1
                        i = i_2
            
            i += 1
            rsi_1 = rol.d(rsi_1, 1)
            r12_1 = &r12_1[1]
            i_2 = i
        while (i s< *(rbp_1 + 0x98))
        
        r12 = arg2
    
    r14 = arg_8

arg_8.b = 0
void** var_60_1 = &arg_8
void*** (* var_68)() = j_sub_140597fc0
int64_t* rax = sub_14081d830(0x1b0, sub_140a756e0(&var_68, &data_143958018) + 0x10, 1, 0)
void*** rsi_2 = rax

if (rax == 0)
    rsi_2 = nullptr
else
    int128_t var_58
    sub_140acc920(&var_58, &data_143b51590)
    int32_t var_7c_1 = 0
    int32_t rcx_9 = *sub_140b5e500(&i_2, 0x3e)
    int64_t* rcx_11 = *(data_143f5b298 + 0x388)
    int64_t rax_17 = (*(*rcx_11 + 0x280))(rcx_11)
    sub_142118c70(rsi_2)
    rsi_2[0x32] = rax_17
    *rsi_2 = &data_142e0eff8
    int128_t zmm0_2 = var_58
    rsi_2[0x35] = rcx_9.q
    *(rsi_2 + 0x198) = zmm0_2

if (*(r12 + 8) s> 0)
    do
        if (test_bit(arg4, i_1))
            sub_142657c50(r14 + 0x160, r14 + 0x170, &var_78, rsi_2, i_1, arg5, r13_1)
        
        i_1 += 1
    while (i_1 s< *(r12 + 8))
    
    r15_1 = var_78

if (r15_1 != 0)
    sub_140a74f90(r15_1)
