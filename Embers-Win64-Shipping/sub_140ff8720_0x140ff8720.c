// 函数: sub_140ff8720
// 地址: 0x140ff8720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f0f180
int64_t* arg_10
(*(*rcx + 0xd0))(rcx, &arg_10, *(arg2 + 0x18), *(arg2 + 0x20), *(arg2 + 0x28), *(arg2 + 0x30), 
    *(arg2 + 0x38), *(arg2 + 0x40))
(*(*arg1 + 0x2f8))(arg1, arg_10)
int64_t* rdi = arg_10

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        char rax_6
        
        if (rdi[2].b == 0 && data_143f0f1d0 == 0)
            rax_6 = sub_1405949a0()
        
        if (rdi[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
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

(*(*arg1 + 0x300))(arg1, *(arg2 + 0x58), 0)
(*(*arg1 + 0x308))(arg1, *(arg2 + 0x50))
int64_t rax_11 = *arg1
int64_t rdx_5 = *(arg2 + 0x48)
int128_t var_38 = data_142d3f670
(*(rax_11 + 0x310))(arg1, rdx_5, &var_38)

if (data_143f0f1c3 != 0)
    (*(*arg1 + 0x318))(arg1, zx.q(*(arg2 + 0xb4)))

void* rsi = *(arg2 + 0x20)
int32_t i_4 = 0

if (rsi != 0)
    int32_t i = 0
    
    if (*(rsi + 0xa0) s> 0)
        char* r14_1 = nullptr
        
        do
            char rdx_7 = r14_1[*(rsi + 0x98)]
            
            if (rdx_7 u< 0xff)
                void* r15_1 = *(arg1[0x875] + (zx.q(rdx_7) << 3))
                *(*(rsi + 0x68) + (r14_1 << 2))
                
                if (r15_1 != 0)
                    sub_140ff9b80(arg1, rsi, i, r15_1)
            
            i += 1
            r14_1 = &r14_1[1]
        while (i s< *(rsi + 0xa0))

void* rsi_1 = *(arg2 + 0x28)

if (rsi_1 != 0)
    int32_t i_1 = 0
    
    if (*(rsi_1 + 0xa0) s> 0)
        char* r14_2 = nullptr
        
        do
            char rdx_9 = r14_2[*(rsi_1 + 0x98)]
            
            if (rdx_9 u< 0xff)
                void* r15_2 = *(arg1[0x875] + (zx.q(rdx_9) << 3))
                *(*(rsi_1 + 0x68) + (r14_2 << 2))
                
                if (r15_2 != 0)
                    sub_140ff9b80(arg1, rsi_1, i_1, r15_2)
            
            i_1 += 1
            r14_2 = &r14_2[1]
        while (i_1 s< *(rsi_1 + 0xa0))

void* rsi_2 = *(arg2 + 0x30)

if (rsi_2 != 0)
    int32_t i_2 = 0
    
    if (*(rsi_2 + 0xa0) s> 0)
        char* r14_3 = nullptr
        
        do
            char rdx_11 = r14_3[*(rsi_2 + 0x98)]
            
            if (rdx_11 u< 0xff)
                void* r15_3 = *(arg1[0x875] + (zx.q(rdx_11) << 3))
                *(*(rsi_2 + 0x68) + (r14_3 << 2))
                
                if (r15_3 != 0)
                    sub_140ff9b80(arg1, rsi_2, i_2, r15_3)
            
            i_2 += 1
            r14_3 = &r14_3[1]
        while (i_2 s< *(rsi_2 + 0xa0))

void* rsi_3 = *(arg2 + 0x40)

if (rsi_3 != 0)
    int32_t i_3 = 0
    
    if (*(rsi_3 + 0xa0) s> 0)
        char* r14_4 = nullptr
        
        do
            char rdx_13 = r14_4[*(rsi_3 + 0x98)]
            
            if (rdx_13 u< 0xff)
                void* r15_4 = *(arg1[0x875] + (zx.q(rdx_13) << 3))
                *(*(rsi_3 + 0x68) + (r14_4 << 2))
                
                if (r15_4 != 0)
                    sub_140ff9b80(arg1, rsi_3, i_3, r15_4)
            
            i_3 += 1
            r14_4 = &r14_4[1]
        while (i_3 s< *(rsi_3 + 0xa0))

void* rsi_4 = *(arg2 + 0x38)

if (rsi_4 != 0 && *(rsi_4 + 0xa0) s> 0)
    char* r14_5 = nullptr
    
    do
        char rdx_15 = r14_5[*(rsi_4 + 0x98)]
        
        if (rdx_15 u< 0xff)
            void* rbp_1 = *(arg1[0x875] + (zx.q(rdx_15) << 3))
            *(*(rsi_4 + 0x68) + (r14_5 << 2))
            
            if (rbp_1 != 0)
                sub_140ff9b80(arg1, rsi_4, i_4, rbp_1)
        
        i_4 += 1
        r14_5 = &r14_5[1]
    while (i_4 s< *(rsi_4 + 0xa0))

int32_t result = *(arg2 + 0x70)
arg1[0x4d9].d = result
return result
