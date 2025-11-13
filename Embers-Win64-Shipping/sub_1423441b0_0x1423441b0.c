// 函数: sub_1423441b0
// 地址: 0x1423441b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x108) s> 0)
    int64_t r15_1 = 0
    int64_t* r12_1 = nullptr
    
    do
        int64_t rbx_1 = *(arg1 + 0x100)
        int64_t* rax_1 = *(r12_1 + rbx_1)
        
        if (rax_1 != 0 && r15_1 s>= 0 && i s< rax_1[1].d && *(*(*rax_1 + (r15_1 << 3)) + 0xec) u> 0)
            int32_t j = 0
            
            if (*(r12_1 + rbx_1 + 0x68) s> 0)
                int64_t rdi_1 = 0
                
                do
                    sub_141997f50(*(*(r12_1 + rbx_1 + 0x60) + rdi_1))
                    j += 1
                    rdi_1 += 8
                while (j s< *(r12_1 + rbx_1 + 0x68))
            
            int32_t j_1 = 0
            
            if (*(r12_1 + rbx_1 + 0x78) s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    sub_141997f50(*(rsi_1 + *(r12_1 + rbx_1 + 0x70)))
                    j_1 += 1
                    rsi_1 = &rsi_1[1]
                while (j_1 s< *(r12_1 + rbx_1 + 0x78))
            
            int32_t j_2 = 0
            
            if (*(r12_1 + rbx_1 + 0x98) s> 0)
                int64_t* rsi_2 = nullptr
                
                do
                    int64_t* rcx_5 = *(rsi_2 + *(r12_1 + rbx_1 + 0x90))
                    
                    if (rcx_5 != 0)
                        sub_141997f50((*(*rcx_5 + 0x10))(rcx_5))
                    
                    j_2 += 1
                    rsi_2 = &rsi_2[1]
                while (j_2 s< *(r12_1 + rbx_1 + 0x98))
        
        i += 1
        r15_1 += 1
        r12_1 = &r12_1[0x16]
    while (i s< *(arg1 + 0x108))

sub_142343fa0(arg1)
void* var_98 = arg1
void* var_90 = arg1 + 0x58

if (sub_140a80f40() == 0)
    uint32_t rax_8
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_8.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_8.b == 0))
        void var_68
        int64_t* rax_9 = sub_1423337e0(&var_68, nullptr, 0xff)
        *(*rax_9 + 0x10) = var_98.o
        void* rcx_14 = *rax_9
        int32_t r8_1 = rax_9[2].d
        int64_t* rdx_2 = rax_9[1]
        int64_t* rbx_2 = *(rcx_14 + 0x28)
        int64_t* arg_10 = rbx_2
        int32_t* rsi_4 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rsi_4 += 1
            rbx_2 = arg_10
        
        sub_1405e48c0(rcx_14, rdx_2, r8_1, 1)
        
        if (rbx_2 != 0)
            int32_t rax_10 = *rsi_4
            *rsi_4 -= 1
            
            if (rax_10 == 1)
                sub_140a2f6e0(arg_10)
    else
        var_98.o = var_98.o
        sub_14232de80(&var_98)
else
    sub_142064d90(arg1 + 0x58)
    
    if (*(arg1 + 0x118) == 0)
        *(arg1 + 0x58) = 0
    else
        sub_14198b920(arg1 + 0x118)
        int64_t* rcx_10 = *(arg1 + 0x118)
        *(arg1 + 0x118) = 0
        
        if (rcx_10 == 0)
            *(arg1 + 0x58) = 0
        else
            rcx_10[9].d -= 1
            
            if (rcx_10[9].d != 1)
                *(arg1 + 0x58) = 0
            else
                sub_140a2f6e0(rcx_10)
                *(arg1 + 0x58) = 0

sub_141997f50(arg1 + 0x70)
int64_t rbx_3 = *(arg1 + 0xe0)
__builtin_memset(arg1 + 0xe0, 0, 0x1c)
int64_t rsi_5 = *(arg1 + 0xe8)
int64_t r14 = *(arg1 + 0xf0)
int32_t r15_2 = *(arg1 + 0xf8)
int32_t var_a0 = r15_2
int64_t var_b8 = rbx_3
int64_t var_b0 = rsi_5
int64_t var_a8 = r14

if (sub_140a80f40() == 0)
    uint32_t rax_12
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_12.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_12.b == 0))
        void var_50
        int64_t* rax_13 = sub_142332eb0(&var_50, nullptr, 0xff)
        __builtin_memset(&var_b8, 0, 0x1c)
        void* rcx_24 = *rax_13
        *(rcx_24 + 0x10) = rbx_3
        *(rcx_24 + 0x18) = rsi_5
        *(rcx_24 + 0x20) = r14
        *(rcx_24 + 0x28) = r15_2
        void* rcx_25 = *rax_13
        int32_t r8_2 = rax_13[2].d
        int64_t* rdx_3 = rax_13[1]
        int64_t* rbx_4 = *(rcx_25 + 0x38)
        int64_t* arg_18 = rbx_4
        int32_t* rsi_6 = &rbx_4[9]
        
        if (rbx_4 != 0)
            *rsi_6 += 1
            rbx_4 = arg_18
        
        sub_1407c96b0(rcx_25, rdx_3, r8_2, 1)
        
        if (rbx_4 != 0)
            int32_t rdi_2 = *rsi_6
            *rsi_6 -= 1
            
            if (rdi_2 == 1)
                sub_140a2f6e0(arg_18)
    else
        int64_t var_88 = rbx_3
        __builtin_memset(&var_b8, 0, 0x1c)
        int64_t var_80 = rsi_5
        int64_t var_78 = r14
        int32_t var_70_1 = r15_2
        sub_1408081b0(&var_88)
        sub_1408081b0(&var_88)
        sub_1405ec8a0(&var_78)
        sub_1405d1550(&var_80)
        sub_1405d1550(&var_88)
else
    sub_1408081b0(&var_b8)

sub_1408081b0(&var_b8)
sub_1405ec8a0(&var_a8)
sub_1405d1550(&var_b0)
return sub_1405d1550(&var_b8)
