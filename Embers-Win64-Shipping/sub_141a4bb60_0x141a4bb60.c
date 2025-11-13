// 函数: sub_141a4bb60
// 地址: 0x141a4bb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi_2 = (sx.q(arg5) << 4) + *arg4
void* rdi = arg2
int16_t* rsi_3

if (rsi_2[1].d == 0)
    rsi_3 = &data_142d40450
else
    rsi_3 = *rsi_2

void* rbx = nullptr
void* var_88 = nullptr
int32_t rdx = 0
int64_t var_80 = 0
int32_t rcx = 0

if (rsi_3 != 0 && *rsi_3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (rsi_3[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_88, rdi_1.d + 1)
        rcx = var_80:4.d
        rdx = var_80.d
    
    int32_t rax_1 = rdi_1.d + 1 + rdx
    var_80.d = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, rsi_3, (rdi_1.d + 1) * 2)
    rdi = arg2

void* var_78
sub_141a4b950(&var_78, arg3, &var_88)
void* rcx_5 = var_88

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

void var_68
sub_140d3a3a0(&var_68, nullptr)
void* var_60 = nullptr
int32_t var_58 = 0xffffffff
int32_t var_54
__builtin_memset(&var_54, 0, 0x1c)
int32_t var_70
void* var_40_1

if (var_70 == 0xffffffff)
    void* rdi_4 = var_78
    
    if (rdi_4 == 0)
        sub_141a2ed30(arg1, &var_68)
        arg1[5] = var_40_1
    else
        uint128_t zmm0_1 = *(rdi_4 + 0x10)
        var_88.o = zmm0_1
        uint8_t rcx_16 = (zx.q(*(*(rdi_4 + 8) + 0x10)) u>> 0x14).b
        char rcx_17 = _mm_bsrli_si128(zmm0_1, 8).b
        
        if ((rcx_16 & 1) == 0)
            if (rcx_17 != 0)
            label_141a4be85:
                rbx = var_88
            else
                void* rax_15
                
                while (true)
                    rax_15 = var_88
                    
                    if (rax_15 == 0)
                        break
                    
                    zmm0_1 = *(rax_15 + 0x10)
                    var_88.o = zmm0_1
                    char rax_14 = _mm_bsrli_si128(zmm0_1, 8).b
                    rcx_17 = rax_14
                    
                    if (rax_14 != 0)
                        goto label_141a4be85
                
                if (rcx_17 != 0)
                    rbx = rax_15
            
            sub_140d3a3a0(&var_68, rbx)
            var_60 = rdi_4
            sub_140cbad20(&var_60, rdi_4)
            sub_141a2ed30(arg1, &var_68)
            arg1[5] = arg2
        else
            if (rcx_17 != 0)
            label_141a4be01:
                rbx = var_88
            else
                void* rax_11
                
                while (true)
                    rax_11 = var_88
                    
                    if (rax_11 == 0)
                        break
                    
                    zmm0_1 = *(rax_11 + 0x10)
                    var_88.o = zmm0_1
                    char rax_10 = _mm_bsrli_si128(zmm0_1, 8).b
                    rcx_17 = rax_10
                    
                    if (rax_10 != 0)
                        goto label_141a4be01
                
                if (rcx_17 != 0)
                    rbx = rax_11
            
            sub_140d3a3a0(&var_68, rbx)
            var_60 = rdi_4
            sub_140cbad20(&var_60, rdi_4)
            
            if (arg5 + 1 s< 0 || arg5 + 1 s>= *(arg4 + 8))
                sub_141a2ed30(arg1, &var_68)
                arg1[5] = arg2
            else
                sub_141a4bb60(arg1, sx.q(*(rdi_4 + 0x4c)) + arg2, *(rdi_4 + 0x78), arg4, arg5 + 1)
else
    sub_140cea1e0()
    void* r8_3 = var_78
    
    if ((data_143e1b878 & *(*(r8_3 + 8) + 0x10)) == 0)
        sub_141a2ed30(arg1, &var_68)
        arg1[5] = var_40_1
    else
        void* r13_1 = *(r8_3 + 0x78)
        void** rdi_3 = rdi + sx.q(*(r8_3 + 0x4c))
        char rsi_4 = (*(r8_3 + 0x80)).b
        int32_t r15_1 = *(r13_1 + 0x3c)
        
        if (var_70 s< 0)
            sub_141a2ed30(arg1, &var_68)
            arg1[5] = var_40_1
        else
            int32_t rdx_5 = rdi_3[1].d
            
            if (var_70 s>= rdx_5)
                sub_141a2ed30(arg1, &var_68)
                arg1[5] = var_40_1
            else
                void* rdx_7
                
                if (r13_1 == 0)
                label_141a4bd5d:
                    rdx_7 = nullptr
                label_141a4bd64:
                    sub_140d3a3a0(&var_68, rdx_7)
                    var_60 = r13_1
                    sub_140cbad20(&var_60, r13_1)
                    
                    if (rdi_3[1].d != 0)
                        void* rax_7 = *rdi_3
                        
                        if ((not.b(rsi_4) & 1) == 0 && (rax_7.b & 1) != 0)
                            rax_7 = (rax_7 s>> 1) + rdi_3
                        
                        rbx = sx.q(r15_1 * var_70) + rax_7
                    
                    sub_141a2ed30(arg1, &var_68)
                    arg1[5] = rbx
                else
                    if (((zx.q(*(*(r13_1 + 8) + 0x10)) u>> 0x14).b & 1) == 0 || arg5 + 1 s< 0
                            || arg5 + 1 s>= *(arg4 + 8))
                        if (r13_1 == 0)
                            goto label_141a4bd5d
                        
                        uint128_t zmm0_2 = *(r13_1 + 0x10)
                        var_88.o = zmm0_2
                        char rax_6 = _mm_bsrli_si128(zmm0_2, 8).b
                        
                        if (rax_6 != 0)
                        label_141a4bd53:
                            rdx_7 = var_88
                            goto label_141a4bd64
                        
                        while (true)
                            rdx_7 = var_88
                            
                            if (rdx_7 == 0)
                                break
                            
                            zmm0_2 = *(rdx_7 + 0x10)
                            var_88.o = zmm0_2
                            rax_6 = _mm_bsrli_si128(zmm0_2, 8).b
                            
                            if (rax_6 != 0)
                                goto label_141a4bd53
                        
                        if (rax_6 != 0)
                            goto label_141a4bd64
                        
                        goto label_141a4bd5d
                    
                    if (rdx_5 != 0)
                        void* rax_4 = *rdi_3
                        
                        if ((not.b(rsi_4) & 1) == 0 && (rax_4.b & 1) != 0)
                            rax_4 = (rax_4 s>> 1) + rdi_3
                        
                        rbx = sx.q(r15_1 * var_70) + rax_4
                    
                    int32_t var_98_1 = arg5 + 1
                    sub_141a4bb60(arg1, rbx, *(r13_1 + 0x78))
int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

return arg1
