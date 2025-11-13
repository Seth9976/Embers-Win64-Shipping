// 函数: sub_141897f50
// 地址: 0x141897f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint64_t result = 0
void* rdi = arg1
bool z

if (0 == *(arg1 + 0x84))
    *(arg1 + 0x84) = 0
    z = true
else
    result = zx.q(*(arg1 + 0x84))
    z = false

if (z)
    uint64_t r15
    uint64_t var_28_1 = r15
    int128_t zmm6 = 0x3dcccccd
    bool z_4
    
    do
        char var_f8_1 = 0
        bool z_1
        
        if (0 == *(rdi + 0x88))
            *(rdi + 0x88) = 0
            z_1 = true
        else
            *(rdi + 0x88)
            z_1 = false
        
        int512_t zmm1
        
        if (not(z_1))
            int64_t var_f0 = 0
            int64_t var_e8_1 = 0
            void* rdx_1
            
            while (true)
                rdx_1 = **(rdi + 0x2d8)
                
                if (rdx_1 == 0)
                    break
                
                int128_t zmm0 = *(rdx_1 + 8)
                int64_t rcx = *(rdi + 0x2d8)
                *(rdi + 0x2d8) = rdx_1
                var_f0.o = zmm0
                int64_t var_d8_1 = 0
                *(rdx_1 + 8) = 0.o
                j_sub_140a74f90(rcx)
                
                if (*(rdi + 0x228) != *(rdi + 0x254))
                    int32_t rax_5
                    rax_5, zmm1 = sub_140a6b260(&var_f0, 0x10)
                    void* rcx_2 = *(rdi + 0x260)
                    void* r12_1 = rdi + 0x258
                    int64_t r13_2 = sx.q(*(rdi + 0x268)) - 1
                    
                    if (rcx_2 != 0)
                        r12_1 = rcx_2
                    
                    int32_t i = *(r12_1 + ((sx.q(rax_5) & r13_2) << 2))
                    
                    if (i != 0xffffffff)
                        int64_t rdx_3 = *(rdi + 0x220)
                        
                        do
                            int64_t i_4 = sx.q(i)
                            int64_t r8_1 = i_4 * 3
                            int32_t rcx_6 = (*(rdx_3 + (r8_1 << 3) + 0xc) ^ var_e8_1:4.d)
                                | (*(rdx_3 + (r8_1 << 3) + 8) ^ var_e8_1.d)
                                | (*(rdx_3 + (r8_1 << 3) + 4) ^ var_f0:4.d)
                            
                            if ((rcx_6 | (*(rdx_3 + (r8_1 << 3)) ^ var_f0.d)) == 0)
                                if (*(rdi + 0x228) != *(rdi + 0x254))
                                    int64_t r8_2 = i_4 * 3
                                    int64_t rax_16 = sx.q(*(rdx_3 + (r8_2 << 3) + 0x14)) & r13_2
                                    void* rcx_8 = r12_1 + (rax_16 << 2)
                                    int32_t j = *(r12_1 + (rax_16 << 2))
                                    
                                    while (j != 0xffffffff)
                                        if (j == i)
                                            *rcx_8 = *(rdx_3 + (r8_2 << 3) + 0x10)
                                            break
                                        
                                        int64_t j_1 = sx.q(j)
                                        int64_t rcx_10 = j_1 + ((j_1 + 1) << 1)
                                        j = *(rdx_3 + (rcx_10 << 3))
                                        rcx_8 = rdx_3 + (rcx_10 << 3)
                                
                                sub_1405c3640(rdi + 0x220, i, 1)
                                break
                            
                            i = *(rdx_3 + (r8_1 << 3) + 0x10)
                        while (i != 0xffffffff)
            
            int32_t rbx_2 = *(rdi + 0x20)
            void** const var_68 = &data_142da2668
            int64_t* rcx_12 = *(rdi + 0x40)
            void*** var_78_1 = nullptr
            void* var_60_1 = rdi
            int32_t* (* var_88)(int64_t* arg1, int64_t* arg2) = sub_14187af60
            int32_t rax_19 = (*(*rcx_12 + 0x20))(rcx_12, rdx_1, sub_14187af60)
            int64_t* rcx_13 = *(rdi + 0x48)
            
            if (rax_19 s>= rbx_2)
                rbx_2 = rax_19
            
            int64_t var_108
            (*(*rcx_13 + 0x28))(rcx_13, &var_108, zx.q(rbx_2), &var_88)
            void*** var_b8_1 = nullptr
            int32_t* (* var_c8_1)(int64_t* arg1, int64_t* arg2) = sub_14187afc0
            int32_t var_100
            int32_t r14_2 = var_100
            void** const var_a8 = &data_142da2668
            int32_t rsi_2 = r14_2
            void* var_a0_1 = rdi
            
            if (r14_2 != 0)
                r14_2 = 0
                int32_t i_1 = 0
                r15.b = var_c8_1(sub_14059bf50(&var_a8), var_108) == 0
                
                do
                    int64_t i_5 = sx.q(i_1)
                    
                    for (i_1 += 1; i_1 s< rsi_2; i_1 += 1)
                        void*** rcx_16 = &var_a8
                        
                        if (var_b8_1 != 0)
                            rcx_16 = var_b8_1
                        
                        int32_t rcx_18
                        rcx_18.b = var_c8_1((*rcx_16)[1](rcx_16), (sx.q(i_1) << 4) + var_108) == 0
                        
                        if (zx.d(r15.b) != rcx_18)
                            break
                    
                    int32_t rbx_6 = i_1 - i_5.d
                    
                    if (r15.b != 0)
                        if (r14_2 != i_5.d)
                            memmove((sx.q(r14_2) << 4) + var_108, (i_5 << 4) + var_108, rbx_6 << 4)
                        
                        r14_2 += rbx_6
                    
                    r15.b ^= 1
                while (i_1 s< rsi_2)
                
                rdi = arg1
                rsi_2 = r14_2
                var_100 = r14_2
            
            int32_t rax_26 = *(rdi + 0x24)
            
            if (rsi_2 s<= rax_26)
                rax_26 = rsi_2
            
            if (rax_26 s> rsi_2)
                var_100 = rax_26
                int32_t i_3 = rax_26 - rsi_2
                int32_t var_fc
                
                if (rax_26 s> var_fc)
                    sub_1405a4f90(&var_108)
                
                int64_t* rax_29 = (sx.q(rsi_2) << 4) + var_108
                
                if (i_3 != 0)
                    int32_t i_2
                    
                    do
                        *rax_29 = 0
                        rax_29[1] = 0
                        rax_29 = &rax_29[2]
                        i_2 = i_3
                        i_3 -= 1
                    while (i_2 != 1)
            else if (rax_26 s< rsi_2 && rsi_2 != rax_26)
                var_100 = r14_2 - (rsi_2 - rax_26)
            
            int64_t* rcx_23 = *(rdi + 0x68)
            (*(*rcx_23 + 8))(rcx_23, &var_108)
            int32_t rbx_8 = 0
            
            if (var_100 s<= 0)
                r15 = zx.q(var_f8_1.d)
            else
                int32_t rax_32
                
                do
                    bool z_2
                    
                    if (0 == *(rdi + 0x84))
                        *(rdi + 0x84) = 0
                        z_2 = true
                    else
                        *(rdi + 0x84)
                        z_2 = false
                    
                    if (not(z_2))
                        rax_32 = var_100
                        break
                    
                    zmm1, zmm6 = sub_14188ade0(rdi, (sx.q(rbx_8) << 4) + var_108)
                    rax_32 = var_100
                    rbx_8 += 1
                while (rbx_8 s< rax_32)
                
                r15 = zx.q(var_f8_1.d)
                
                if (rax_32 s> 0)
                    bool z_3
                    
                    if (0 == *(rdi + 0x84))
                        *(rdi + 0x84) = 0
                        z_3 = true
                    else
                        *(rdi + 0x84)
                        z_3 = false
                    
                    r15 = zx.q(r15.b)
                    
                    if (z_3)
                        r15 = 1
            
            if (var_c8_1 != 0)
                void** const* rcx_25 = &var_a8
                
                if (var_b8_1 != 0)
                    rcx_25 = var_b8_1
                
                (*rcx_25)[2](rcx_25)
            
            int64_t rcx_26 = var_108
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            if (var_88 != 0)
                void** const* rcx_27 = &var_68
                
                if (var_78_1 != 0)
                    rcx_27 = var_78_1
                
                (*rcx_27)[2](rcx_27)
        
        if (z_1 || r15.b == 0)
            int64_t* rcx_28 = *(rdi + 0x30)
            zmm1.o = zmm6
            (*(*rcx_28 + 0x10))(rcx_28, zmm1)
        
        result = 0
        
        if (0 == *(rdi + 0x84))
            *(rdi + 0x84) = 0
            z_4 = true
        else
            result = zx.q(*(rdi + 0x84))
            z_4 = false
    while (z_4)

__security_check_cookie(rax_1 ^ &var_128)
return result
