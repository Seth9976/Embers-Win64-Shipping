// 函数: sub_142ba3fe0
// 地址: 0x142ba3fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int32_t rsi = 0
int64_t r8 = sx.q(arg2)
int64_t* rax_1 = arg1[0x22e]
int32_t arg_8 = 0
char arg_10 = 0
void* rbp_1 = r8 * 0x898 + arg1
int64_t rax_3 = sx.q(*(rbp_1 + 0x38))
void* i_1 = *(rbp_1 + 0x40)
void* r10 = (&data_1436800f0)[sx.q(*(*rax_1 + 8))]
*(rbp_1 + 0x48) = 0
void* i = i_1 + rax_3 * 0x48
int32_t arg_18
int32_t rdi
uint64_t r12

if (arg2 != 0)
    rdi = arg1[2].d
    arg_18 = rdi
    
    if (arg2 == 1)
        arg_10 = *(r10 + 0x18)
    
    r12 = 0
else
    rdi = arg1[1].d
    arg_18 = rdi
    r12 = zx.q(sub_142b91790(0x40, arg1[2].d))

uint32_t rax_6 = sub_142b91790(0x20, rdi)
int32_t rax_7 = sub_142b93e80(*(r8 * 0x2430 + rax_1 + 0x108), rdi)

if (rax_7 s> 0x10)
    rax_7 = 0x10

uint32_t rax_8 = sub_142b91790(rax_7, rdi)

if (i_1 u< i)
    char* rsi_1 = i_1 + 1
    
    do
        int32_t rcx_3 = sx.d(*(rsi_1 + 9))
        
        if (rcx_3 s>= r12.d && sx.d(*(rsi_1 + 3)) s<= rax_6)
            char r10_1 = *rsi_1
            
            if (r10_1 != 4 && (*(rsi_1 + 0x27) == 0 || rcx_3 * 2 s>= (r12 * 3).d))
                int32_t r11_1 = *(rbp_1 + 0x48)
                int32_t r9_1 = 0
                
                if (r11_1 s<= 0)
                label_142ba4183:
                    uint128_t* var_50
                    int32_t rax_17 = sub_142b9fce0(rbp_1 + 0x38, sx.d(*(rsi_1 + 1)), sx.d(r10_1), 
                        arg_10, rax, &var_50)
                    arg_8 = rax_17
                    
                    if (rax_17 != 0)
                        return rax_17
                    
                    uint128_t* rdi_1 = var_50
                    __builtin_memset(rdi_1, 0, 0x38)
                    *(rdi_1 + 0x38) = &rsi_1[-1]
                    rdi_1[4].q = &rsi_1[-1]
                    *(rdi_1 + 0xd) = *rsi_1
                    *rdi_1 = *(rsi_1 + 1)
                    int32_t rax_20 = sub_142b93e80(sx.d(*(rsi_1 + 1)), arg_18)
                    *(rdi_1 + 4) = rax_20
                    *(rdi_1 + 8) = rax_20
                    *(rsi_1 + 0x17) = &rsi_1[-1]
                else
                    void* r8_2 = *(rbp_1 + 0x50)
                    
                    while (true)
                        int32_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(sx.d(*(rsi_1 + 1)) - sx.d(*r8_2))
                        
                        if ((temp1_1 ^ temp0_1) - temp0_1 s< rax_8 && *(r8_2 + 0xd) == r10_1)
                            *(rsi_1 + 0x17) = *(r8_2 + 0x38)
                            *(*(r8_2 + 0x40) + 0x18) = &rsi_1[-1]
                            *(r8_2 + 0x40) = &rsi_1[-1]
                            break
                        
                        r9_1 += 1
                        r8_2 += 0x48
                        
                        if (r9_1 s>= r11_1)
                            goto label_142ba4183
        
        rsi_1 = &rsi_1[0x48]
    while (&rsi_1[-1] u< i)
    
    rsi = arg_8
    
    for (; i_1 u< i; i_1 += 0x48)
        if (*(i_1 + 1) == 4)
            int32_t r10_2 = *(rbp_1 + 0x48)
            int32_t r9_3 = 0
            
            if (r10_2 s> 0)
                void* r8_4 = *(rbp_1 + 0x50)
                
                do
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(sx.d(*(i_1 + 2)) - sx.d(*r8_4))
                    
                    if ((temp3_1 ^ temp2_1) - temp2_1 s< rax_8)
                        *(i_1 + 0x18) = *(r8_4 + 0x38)
                        *(*(r8_4 + 0x40) + 0x18) = i_1
                        *(r8_4 + 0x40) = i_1
                        break
                    
                    r9_3 += 1
                    r8_4 += 0x48
                while (r9_3 s< r10_2)

void* r9_4 = *(rbp_1 + 0x50)
void* i_3 = r9_4 + sx.q(*(rbp_1 + 0x48)) * 0x48
void* rcx_12 = r9_4

if (r9_4 u< i_3)
    do
        void* i_2 = *(rcx_12 + 0x38)
        
        if (i_2 != 0)
            do
                *(i_2 + 0x10) = rcx_12
                i_2 = *(i_2 + 0x18)
            while (i_2 != *(rcx_12 + 0x38))
        
        rcx_12 += 0x48
    while (rcx_12 u< i_3)
    
    if (r9_4 u< i_3)
        void* r9_5 = r9_4 + 0xc
        
        do
            char* j = *(r9_5 + 0x2c)
            int32_t rdi_2 = 0
            int32_t rsi_2 = 0
            
            do
                if ((*j & 1) == 0)
                    rsi_2 += 1
                else
                    rdi_2 += 1
                
                void* rdx_8 = *(j + 0x28)
                int64_t rcx_13
                
                if (rdx_8 != 0)
                    rcx_13 = *(rdx_8 + 0x10)
                
                void* rbx_1
                
                if (rdx_8 == 0 || rcx_13 == 0 || rcx_13 == r9_5 - 0xc)
                    rbx_1.b = 0
                else
                    rbx_1 = 1
                
                void* r11_3 = *(j + 0x20)
                
                if ((r11_3 != 0 && *(r11_3 + 0x10) != 0) || rbx_1.b != 0)
                    int16_t* rcx_14 = *(r9_5 + 0x14)
                    
                    if (rbx_1.b != 0)
                        rcx_14 = *(r9_5 + 0x1c)
                        r11_3 = rdx_8
                    
                    int32_t rdx_13
                    int32_t temp4_1
                    int32_t temp5_1
                    
                    if (rcx_14 != 0)
                        int32_t r8_6 = sx.d(*(j + 2)) - sx.d(*(r11_3 + 2))
                        temp4_1:temp5_1 = sx.q(sx.d(*(r9_5 - 0xc)) - sx.d(*rcx_14))
                        rdx_13 = neg.d(r8_6)
                        
                        if (r8_6 s>= 0)
                            rdx_13 = r8_6
                    
                    if (rcx_14 == 0 || rdx_13 s< (temp5_1 ^ temp4_1) - temp4_1)
                        rcx_14 = *(r11_3 + 0x10)
                    
                    if (rbx_1.b == 0)
                        *(r9_5 + 0x14) = rcx_14
                    else
                        *(r9_5 + 0x1c) = rcx_14
                        rcx_14[6].b |= 2
                
                j = *(j + 0x18)
            while (j != *(r9_5 + 0x2c))
            
            *r9_5 = 0
            
            if (rdi_2 s> 0)
                char rax_38 = 0
                
                if (rdi_2 s>= rsi_2)
                    rax_38 = 1
                
                *r9_5 = rax_38
            
            if (*(r9_5 + 0x1c) != 0 && *(r9_5 + 0x14) != 0)
                *(r9_5 + 0x1c) = 0
            
            r9_5 += 0x48
        while (r9_5 - 0xc u< i_3)
        
        return arg_8

return rsi
