// 函数: sub_141458820
// 地址: 0x141458820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ac8
int64_t rax_1 = __security_cookie ^ &var_ac8
sub_140b33630("InitViews_Scene")
int32_t i = 0

if (*(arg1 + 0xa8) s> 0)
    int64_t rdx = 0
    
    do
        rdx += 0x5240
        i += 1
        *(*(arg1 + 0xa0) + rdx - 0xe5) = *(arg1 + 0x3dd)
    while (i s< *(arg1 + 0xa8))

int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_14145c580(arg1, arg2)

if (*(arg2 + 0x14) u> 0)
    j_sub_14196ef60(&data_143f02b88, arg2, zmm2, zmm3)

int64_t* rcx_2 = *(*(arg1 + 8) + 0x18)

if (rcx_2 != 0 && (*(*rcx_2 + 0x60))(rcx_2) != 0 && *(arg1 + 0xa8) s> 0)
    sub_141420f20(*(arg1 + 0xa0))
    void* r8_1 = *(arg1 + 0xa0)
    int64_t r9
    
    if (*(r8_1 + 0xd75) != 0 || *(r8_1 + 0xd72) != 0 || *(r8_1 + 0xd74) != 0)
        r9.b = 0
    else
        r9.b = 1
    
    int64_t* rcx_4 = *(*(arg1 + 8) + 0x18)
    (*(*rcx_4 + 0x48))(rcx_4, arg2, *(r8_1 + 0x10), r9)

int64_t var_60 = 0
int32_t var_58 = 0
int32_t var_54 = 4
void var_a80
sub_141296630(&var_a80, *(arg1 + 0xa8), 1)
int128_t zmm2_1
int128_t zmm3_1
zmm2_1, zmm3_1 =
    sub_141448b90(arg1, arg2, arg3, &var_a80, &data_143e52098, &data_143e520b8, &data_143e51f18)

if (*(arg2 + 0x14) u> 0)
    j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3_1)

int128_t zmm2_2
int128_t zmm3_2
zmm2_2, zmm3_2 = sub_141093660(arg1)

if (*(arg2 + 0x14) u> 0)
    j_sub_14196ef60(&data_143f02b88, arg2, zmm2_2, zmm3_2)

if (sub_1414e0700(*(arg1 + 8), arg1 + 0x38) != 0)
    sub_1414cd8b0(arg1, arg2)

int128_t zmm2_3
int128_t zmm3_3
zmm2_3, zmm3_3 = sub_14145ac90(arg1, arg4)

if (*(arg2 + 0x14) u> 0)
    j_sub_14196ef60(&data_143f02b88, arg2, zmm2_3, zmm3_3)

int32_t rax_9 = data_143ed57a8
uint64_t r12
r12.b = rax_9 != 0
char var_a88 = r12.b

if (rax_9 == 0)
    if ((*(arg1 + 0x3c) & 1) != 0 && sub_1419a4830(*(arg1 + 0x3b4)) == 0)
        int128_t zmm2_4
        int128_t zmm3_4
        zmm2_4, zmm3_4 =
            sub_14148dfd0(arg1, arg2, &data_143e520a8, &data_143e520c8, &data_143e51df8)
        
        if (*(arg2 + 0x14) u> 0)
            j_sub_14196ef60(&data_143f02b88, arg2, zmm2_4, zmm3_4)
    
    if (*(*(arg1 + 8) + 0x1148) s> 0)
        char rax_12
        
        if (data_1439b6db8 != 0)
            rax_12 = sub_140a54810()
        
        if (data_1439b6db8 == 0 || rax_12 == 0)
            int64_t rdx_14 = *(arg1 + 8)
            sub_1412475f0(rdx_14 + 0x1150, rdx_14, arg1, 1)
    
    if (*arg4 != 0)
        int64_t rdx_15 = *(arg1 + 8)
        sub_141225a40(rdx_15 + 0x1150, rdx_15, arg1, arg4)
    
    sub_141431590(arg1)
    sub_1414e7e20(arg1, arg2)
    sub_141461560(arg1)

int32_t i_1 = 0

if (*(arg1 + 0xa8) s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t* rsi_2 = *(arg1 + 0xa0) + r15_1
        void* rax_13 = rsi_2[0x2b5]
        void* rcx_24
        
        if (rax_13 == 0)
            void* rax_15 = j_sub_140a82f30(0x2f0)
            void* const rdi_2 = rax_15
            
            if (rax_15 == 0)
                rdi_2 = nullptr
            else
                memset(rax_15, 0, 0x2f0)
                sub_141218830(rdi_2)
                *(rdi_2 + 0x280) = 0
                __builtin_memset(rdi_2 + 0x290, 0, 0x14)
                *(rdi_2 + 0x288) = &data_142f40b50
                __builtin_memset(rdi_2 + 0x2a8, 0, 0x24)
                __builtin_memset(rdi_2 + 0x2d0, 0, 0x1c)
            
            rcx_24 = rsi_2[0xa0e]
            
            if (rcx_24 != rdi_2)
                rsi_2[0xa0e] = rdi_2
                sub_1413ca320(&rsi_2[0xa0e], rcx_24)
                rcx_24 = rsi_2[0xa0e]
        else
            if (*(rax_13 + 0xce0) == 0)
                void* rax_14 = j_sub_140a82f30(0x2f0)
                void* const rdi_1 = rax_14
                
                if (rax_14 == 0)
                    rdi_1 = nullptr
                else
                    memset(rax_14, 0, 0x2f0)
                    sub_141218830(rdi_1)
                    *(rdi_1 + 0x280) = 0
                    __builtin_memset(rdi_1 + 0x290, 0, 0x14)
                    *(rdi_1 + 0x288) = &data_142f40b50
                    __builtin_memset(rdi_1 + 0x2a8, 0, 0x24)
                    __builtin_memset(rdi_1 + 0x2d0, 0, 0x1c)
                
                rax_13 = rsi_2[0x2b5]
                void* rdx_18 = *(rax_13 + 0xce0)
                
                if (rdx_18 != rdi_1)
                    *(rax_13 + 0xce0) = rdi_1
                    sub_1413ca320(rax_13 + 0xce0, rdx_18)
                    rax_13 = rsi_2[0x2b5]
            
            rcx_24 = *(rax_13 + 0xce0)
        
        rsi_2[0x2a8] = rcx_24
        void* rcx_25 = rsi_2[0x2b5]
        void* rax_16 = rcx_25 + 0xc70
        
        if (rcx_25 == 0)
            rax_16 = nullptr
        
        rsi_2[0x2aa] = rax_16
        
        if (rcx_25 != 0)
            sub_141325d40(rcx_25, rsi_2)
        
        sub_141420f20(rsi_2)
        i_1 += 1
        r15_1 += 0x5240
    while (i_1 s< *(arg1 + 0xa8))
    
    r12 = zx.q(var_a88)

sub_1414dfdb0(arg1)
sub_141422330(arg1)

if (var_60 != 0)
    sub_140a74f90(var_60)

sub_140b37f60("InitViews_Scene")
__security_check_cookie(rax_1 ^ &var_ac8)
return zx.q(r12.b)
