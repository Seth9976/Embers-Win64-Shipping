// 函数: sub_142ba0970
// 地址: 0x142ba0970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int32_t r12 = 0
int64_t r8 = sx.q(arg2)
void* r13_1 = r8 * 0x898 + arg1
int32_t arg_8 = 0
int64_t rax_1 = sx.q(*(r13_1 + 0x38))
void* rdi_1 = r8 * 0x1c58 + arg1[0x22e]
uint64_t rbx = *(r13_1 + 0x40)
*(r13_1 + 0x48) = 0
int64_t i = rbx + rax_1 * 0x48
int32_t r15

if (arg2 != 0)
    r15 = arg1[2].d
else
    r15 = arg1[1].d

int32_t arg_10 = r15
uint32_t rsi

if (sub_142b93e80(*(rdi_1 + 0x108), r15) s<= 0x10)
    rsi = *(rdi_1 + 0x108)
else
    rsi = sub_142b91790(0x10, r15)

if (rbx u< i)
    int16_t* r14_1 = rbx + 2
    
    do
        int32_t j_3 = *(r13_1 + 0x48)
        int16_t* rdi_2 = nullptr
        int32_t rbp = 0xffff
        
        if (j_3 s<= 0)
        label_142ba0b12:
            uint128_t* arg_20
            int32_t rax_13 =
                sub_142b9fce0(r13_1 + 0x38, sx.d(*r14_1), sx.d(*(r14_1 - 1)), 0, rax, &arg_20)
            arg_8 = rax_13
            r12 = rax_13
            
            if (rax_13 != 0)
                return rax_13
            
            uint128_t* rdi_3 = arg_20
            __builtin_memset(rdi_3, 0, 0x38)
            *(rdi_3 + 0x38) = &r14_1[-1]
            rdi_3[4].q = &r14_1[-1]
            *(rdi_3 + 0xd) = *(r14_1 - 1)
            *rdi_3 = *r14_1
            int32_t rax_16 = sub_142b93e80(sx.d(*r14_1), r15)
            *(rdi_3 + 4) = rax_16
            *(rdi_3 + 8) = rax_16
            *(r14_1 + 0x16) = &r14_1[-1]
        else
            uint64_t j_2 = zx.q(j_3)
            int16_t* r9_1 = *(r13_1 + 0x50)
            uint64_t j
            
            do
                if (*(r9_1 + 0xd) == *(r14_1 - 1))
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(sx.d(*r14_1) - sx.d(*r9_1))
                    rbx = zx.q((temp2_1 ^ temp1_1) - temp1_1)
                    
                    if (rbx.d s< rsi && rbx.d s< rbp)
                        void* r11_1 = *(r14_1 + 0x1e)
                        int32_t rcx_2
                        
                        if (r11_1 != 0)
                            void* r10_1 = *(r9_1 + 0x38)
                            rcx_2 = 0
                            void* r8_2 = r10_1
                            
                            do
                                void* rax_7 = *(r8_2 + 0x20)
                                
                                if (rax_7 != 0)
                                    int16_t rdx_3 = *(rax_7 + 2)
                                    int16_t rax_8 = *(r11_1 + 2)
                                    int32_t rax_9
                                    int32_t rcx_3
                                    
                                    if (rax_8 s<= rdx_3)
                                        rax_9 = sx.d(rax_8)
                                        rcx_3 = sx.d(rdx_3)
                                    else
                                        rcx_3 = sx.d(rax_8)
                                        rax_9 = sx.d(rdx_3)
                                    
                                    rcx_2 = rcx_3 - rax_9
                                    
                                    if (rcx_2 s>= rsi)
                                        goto label_142ba0aac
                                
                                r8_2 = *(r8_2 + 0x18)
                            while (r8_2 != r10_1)
                        
                        if (r11_1 == 0 || rcx_2 s< rsi)
                            rbp = rbx.d
                            rdi_2 = r9_1
                
            label_142ba0aac:
                r9_1 = &r9_1[0x24]
                j = j_2
                j_2 -= 1
            while (j != 1)
            r15 = arg_10
            
            if (rdi_2 == 0)
                goto label_142ba0b12
            
            r12 = arg_8
            *(r14_1 + 0x16) = *(rdi_2 + 0x38)
            *(*(rdi_2 + 0x40) + 0x18) = &r14_1[-1]
            *(rdi_2 + 0x40) = &r14_1[-1]
        
        r14_1 = &r14_1[0x24]
    while (&r14_1[-1] u< i)

void* r8_4 = *(r13_1 + 0x50)
void* i_2 = r8_4 + sx.q(*(r13_1 + 0x48)) * 0x48
void* rcx_8 = r8_4

if (r8_4 u< i_2)
    do
        void* i_1 = *(rcx_8 + 0x38)
        
        if (i_1 != 0)
            do
                *(i_1 + 0x10) = rcx_8
                i_1 = *(i_1 + 0x18)
            while (i_1 != *(rcx_8 + 0x38))
        
        rcx_8 += 0x48
    while (rcx_8 u< i_2)
    
    if (r8_4 u< i_2)
        void* r8_5 = r8_4 + 0xc
        
        do
            char* j_1 = *(r8_5 + 0x2c)
            int32_t rsi_1 = 0
            int32_t rbp_1 = 0
            
            do
                if ((*j_1 & 1) == 0)
                    rbp_1 += 1
                else
                    rsi_1 += 1
                
                void* rdx_6 = *(j_1 + 0x28)
                
                if (rdx_6 == 0 || *(rdx_6 + 0x10) == r8_5 - 0xc)
                    rbx.b = 0
                else
                    rbx = 1
                
                void* r11_2 = *(j_1 + 0x20)
                
                if (r11_2 != 0 || rbx.b != 0)
                    int16_t* rcx_9 = *(r8_5 + 0x14)
                    
                    if (rbx.b != 0)
                        rcx_9 = *(r8_5 + 0x1c)
                        r11_2 = rdx_6
                    
                    int32_t r10_3
                    int32_t temp3_1
                    int32_t temp4_1
                    
                    if (rcx_9 != 0)
                        temp3_1:temp4_1 = sx.q(sx.d(*(r8_5 - 0xc)) - sx.d(*rcx_9))
                        int16_t rax_23 = *(j_1 + 2)
                        int16_t rdx_9 = *(r11_2 + 2)
                        
                        if (rax_23 s<= rdx_9)
                            r10_3 = sx.d(rdx_9) - sx.d(rax_23)
                        else
                            r10_3 = sx.d(rax_23) - sx.d(rdx_9)
                    
                    if (rcx_9 == 0 || r10_3 s< (temp4_1 ^ temp3_1) - temp3_1)
                        rcx_9 = *(r11_2 + 0x10)
                    
                    if (rbx.b == 0)
                        *(r8_5 + 0x14) = rcx_9
                    else
                        *(r8_5 + 0x1c) = rcx_9
                        rcx_9[6].b |= 2
                
                j_1 = *(j_1 + 0x18)
            while (j_1 != *(r8_5 + 0x2c))
            
            *r8_5 = 0
            
            if (rsi_1 s> 0)
                char rax_25 = 0
                
                if (rsi_1 s>= rbp_1)
                    rax_25 = 1
                
                *r8_5 = rax_25
            
            if (*(r8_5 + 0x1c) != 0 && *(r8_5 + 0x14) != 0)
                *(r8_5 + 0x1c) = 0
            
            r8_5 += 0x48
        while (r8_5 - 0xc u< i_2)

return r12
