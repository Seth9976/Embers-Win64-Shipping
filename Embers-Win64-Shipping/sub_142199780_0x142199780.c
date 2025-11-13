// 函数: sub_142199780
// 地址: 0x142199780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8

if (arg1[0xca] != 0)
    r8.b = 1
    r8, arg3 = sub_1421a5650(arg1, 1, r8.b, arg3)

void* rdi = arg1[0x15]

if (rdi == 0)
    void* rax_1
    rax_1, r8, arg3 = sub_141ee69e0(arg1)
    rdi = rax_1

if ((*(arg1 + 0x8a) & 1) != 0)
    r8, arg3 = sub_142187040(&data_143a2ed18, arg1, 0)

uint64_t rsi

if (rdi == 0)
    rsi.b = 1
else
    rsi = zx.q(sub_14243ade0(rdi))

int32_t i_2 = 0
int32_t i = 0

if (arg1[0xc1].d s> 0)
    r8 = nullptr
    
    do
        void* rcx_2 = *(r8 + arg1[0xc0])
        
        if (rcx_2 != 0 && data_143a2ed01 == 0 && rsi.b != 0 && arg2 == 0)
            *(rcx_2 + 0x10) = 0
            *(rcx_2 + 0x18) = 0
        
        i += 1
        r8 = &r8[1]
    while (i s< arg1[0xc1].d)

sub_141ef4e60(arg1, 0)

if (rsi.b == 0 || arg2 != 0)
    int32_t i_1 = 0
    
    if (arg1[0xc1].d s> 0)
        int64_t* rsi_2 = nullptr
        
        do
            int64_t* rcx_5 = *(rsi_2 + arg1[0xc0])
            
            if (rcx_5 != 0)
                (**rcx_5)(rcx_5, 1)
                *(arg1[0xc0] + rsi_2) = 0
            
            i_1 += 1
            rsi_2 = &rsi_2[1]
        while (i_1 s< arg1[0xc1].d)
    
    arg1[0xc1].d = 0
    
    if (*(arg1 + 0x60c) != 0)
        r8, arg3 = sub_1405c5570(&arg1[0xc0], 0)
    
    if (arg1[0xca] != 0)
        r8.b = 1
        sub_1421a5650(arg1, 1, r8.b, arg3)
    
    int64_t rcx_8 = arg1[0x7d]
    
    if (rcx_8 != 0)
        sub_142208350(rcx_8)
else if (arg1[0xc1].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx_4 = *(rsi_1 + arg1[0xc0])
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x58))(rcx_4)
        
        i_2 += 1
        rsi_1 = &rsi_1[1]
    while (i_2 s< arg1[0xc1].d)

return sub_141ee8490(arg1) __tailcall
