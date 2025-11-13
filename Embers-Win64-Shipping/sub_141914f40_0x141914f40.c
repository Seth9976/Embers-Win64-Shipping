// 函数: sub_141914f40
// 地址: 0x141914f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_48 = (*(arg2 + 0xb8) u>> 0xf).b
int64_t var_50 = *(arg2 + 0x40)
int64_t var_58 = *(arg2 + 0x38)
int64_t var_60 = *(arg2 + 0x30)
int64_t var_68 = *(arg2 + 0x28)
int64_t* arg_10
void* rsi = *sub_141912100(arg1 - 0x18, &arg_10, *(arg2 + 0x18), *(arg2 + 0x20), arg3, arg4)
sub_14081d930(arg1 + 0x558, rsi)

if (data_143f0f224 != 0)
    EnterCriticalSection(arg1 + 0x14148)

sub_14081d930(arg1 + ((zx.q(*(arg1 + 0x14140)) + 0x118) << 3), rsi)
*(arg1 + 0x14140) = (*(arg1 + 0x14140) + 1) u% 0x2710

if (data_143f0f224 != 0)
    LeaveCriticalSection(arg1 + 0x14148)

int64_t* rdi = arg_10

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        char rax_10
        
        if (rdi[2].b == 0 && data_143f0f1d0 == 0)
            rax_10 = sub_1405949a0()
        
        if (rdi[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
            (**rdi)(rdi, 1)
        else
            bool z_1
            
            if (0 == *(rdi + 0xc))
                *(rdi + 0xc) = 1
                z_1 = true
            else
                *(rdi + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rdi)

void* rax_13 = *(arg2 + 0x58)
void* rcx_6 = arg1 + 0x198
int32_t i_5 = 0
int64_t i_6 = 2
*(arg1 + 0x160) = *(rax_13 + 0x18)
*(arg1 + 0x170) = *(rax_13 + 0x28)
*(arg1 + 0x180) = *(rax_13 + 0x38)
*(arg1 + 0x190) = *(rax_13 + 0x48)
*(arg1 + 0x194) = 0
*(arg1 + 0x150) = *(*(arg2 + 0x50) + 0x18)
int128_t* rax_17 = *(arg2 + 0x48) + 0x18
int64_t i

do
    rcx_6 += 0x80
    int128_t zmm0 = *rax_17
    rax_17 = &rax_17[8]
    *(rcx_6 - 0x80) = zmm0
    *(rcx_6 - 0x70) = rax_17[-7]
    *(rcx_6 - 0x60) = rax_17[-6]
    *(rcx_6 - 0x50) = rax_17[-5]
    *(rcx_6 - 0x40) = rax_17[-4]
    *(rcx_6 - 0x30) = rax_17[-3]
    *(rcx_6 - 0x20) = rax_17[-2]
    *(rcx_6 - 0x10) = rax_17[-1]
    i = i_6
    i_6 -= 1
while (i != 1)
*rcx_6 = *rax_17
*(rcx_6 + 0x10) = rax_17[1]

if (data_143f0f1c3 != 0 && data_143f00388 != 0)
    if (*(arg2 + 0xb4) == 0)
        data_143eff9e8(0x8890)
    else
        data_143effa08(0x8890)

void* rbp = *(arg2 + 0x20)

if (rbp != 0)
    void* r12_1 = rbp
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
        r12_1 = *(arg2 + 0x20)
    
    void* rbp_1 = *(rbp + 0x38)
    
    if (rbp_1 != 0)
        int32_t i_1 = 0
        
        if (*(rbp_1 + 0xd0) s> 0)
            char* r14_1 = nullptr
            
            do
                char rdx_6 = r14_1[*(rbp_1 + 0xc8)]
                
                if (rdx_6 u< 0xff)
                    void* r15_1 = *(*(arg1 + 0x15b40) + (zx.q(rdx_6) << 3))
                    *(*(rbp_1 + 0x90) + (r14_1 << 2))
                    
                    if (r15_1 != 0)
                        sub_141916110(arg1, r12_1, i_1, r15_1)
                
                i_1 += 1
                r14_1 = &r14_1[1]
            while (i_1 s< *(rbp_1 + 0xd0))

void* rbp_2 = *(arg2 + 0x28)

if (rbp_2 != 0)
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void* rbp_3 = *(rbp_2 + 0x38)
    void* r12_2 = *(arg2 + 0x28)
    
    if (rbp_3 != 0)
        int32_t i_2 = 0
        
        if (*(rbp_3 + 0xd0) s> 0)
            char* r14_2 = nullptr
            
            do
                char rdx_8 = r14_2[*(rbp_3 + 0xc8)]
                
                if (rdx_8 u< 0xff)
                    void* r15_2 = *(*(arg1 + 0x15b40) + (zx.q(rdx_8) << 3))
                    *(*(rbp_3 + 0x90) + (r14_2 << 2))
                    
                    if (r15_2 != 0)
                        sub_141916110(arg1, r12_2, i_2, r15_2)
                
                i_2 += 1
                r14_2 = &r14_2[1]
            while (i_2 s< *(rbp_3 + 0xd0))

void* rbp_4 = *(arg2 + 0x30)

if (rbp_4 != 0)
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void* rbp_5 = *(rbp_4 + 0x38)
    void* r12_3 = *(arg2 + 0x30)
    
    if (rbp_5 != 0)
        int32_t i_3 = 0
        
        if (*(rbp_5 + 0xd0) s> 0)
            char* r14_3 = nullptr
            
            do
                char rdx_10 = r14_3[*(rbp_5 + 0xc8)]
                
                if (rdx_10 u< 0xff)
                    void* r15_3 = *(*(arg1 + 0x15b40) + (zx.q(rdx_10) << 3))
                    *(*(rbp_5 + 0x90) + (r14_3 << 2))
                    
                    if (r15_3 != 0)
                        sub_141916110(arg1, r12_3, i_3, r15_3)
                
                i_3 += 1
                r14_3 = &r14_3[1]
            while (i_3 s< *(rbp_5 + 0xd0))

void* rbp_6 = *(arg2 + 0x40)

if (rbp_6 != 0)
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void* rbp_7 = *(rbp_6 + 0x38)
    void* r12_4 = *(arg2 + 0x40)
    
    if (rbp_7 != 0)
        int32_t i_4 = 0
        
        if (*(rbp_7 + 0xd0) s> 0)
            char* r14_4 = nullptr
            
            do
                char rdx_12 = r14_4[*(rbp_7 + 0xc8)]
                
                if (rdx_12 u< 0xff)
                    void* r15_4 = *(*(arg1 + 0x15b40) + (zx.q(rdx_12) << 3))
                    *(*(rbp_7 + 0x90) + (r14_4 << 2))
                    
                    if (r15_4 != 0)
                        sub_141916110(arg1, r12_4, i_4, r15_4)
                
                i_4 += 1
                r14_4 = &r14_4[1]
            while (i_4 s< *(rbp_7 + 0xd0))

void* rbp_8 = *(arg2 + 0x38)

if (rbp_8 != 0)
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void* rbp_9 = *(rbp_8 + 0x38)
    void* r15_5 = *(arg2 + 0x38)
    
    if (rbp_9 != 0 && *(rbp_9 + 0xd0) s> 0)
        char* rsi_1 = nullptr
        
        do
            char rdx_14 = rsi_1[*(rbp_9 + 0xc8)]
            
            if (rdx_14 u< 0xff)
                void* r14_5 = *(*(arg1 + 0x15b40) + (zx.q(rdx_14) << 3))
                *(*(rbp_9 + 0x90) + (rsi_1 << 2))
                
                if (r14_5 != 0)
                    sub_141916110(arg1, r15_5, i_5, r14_5)
            
            i_5 += 1
            rsi_1 = &rsi_1[1]
        while (i_5 s< *(rbp_9 + 0xd0))

int32_t result = *(arg2 + 0x70)
*(arg1 + 0x8ac) = result
return result
