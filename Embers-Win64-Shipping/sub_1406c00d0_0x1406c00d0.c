// 函数: sub_1406c00d0
// 地址: 0x1406c00d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)

if (*(arg1 + 0xe0) == 0)
    uint64_t result
    result.b = 0
    return result

void* arg_20 = arg1 + 0x98
EnterCriticalSection(arg1 + 0x98)
void* rdi
int64_t* r14_1
int32_t* r15_1

if (arg2 == 0)
    r15_1 = 0x138
    r14_1 = 0x48
label_1406c016c:
    int64_t rax = sx.q(*(r15_1 + arg1))
    
    if (rsi.d == rax.d)
        rdi.b = 1
    else if (rsi.d == 0xffffffff || (rsi.d s>= 0 && rsi.d s< *(r14_1 + arg1 + 8)))
        if (rax.d != 0xffffffff)
            sub_1406c11b0(arg1 - 8, *(rax * 0xa8 + *(r14_1 + arg1) + 0xa4))
            *(r15_1 + arg1) = 0xffffffff
            *(arg1 + 0x148) = 1
            *(arg1 + 0x7ac) -= 1
        
        if (rsi.d == 0xffffffff)
            rdi.b = 1
        else
            int64_t r13_1 = rsi * 0xa8
            int32_t rax_3 = *(*(r14_1 + arg1) + r13_1 + 0xa4)
            
            if (arg2 != 0 || *(sub_1406b3a10() + 0x2b) == arg2.b)
                sub_1406c13e0(arg1 - 8, rax_3)
                *(arg1 + 0x7ac) += 1
            
            *(r15_1 + arg1) = rsi.d
            *(arg1 + 0x148) = 1
            int64_t var_90
            void** const var_80
            int32_t arg_8
            
            if (arg2 == 6)
                if (*(arg1 + 0x691) != 0 && *(arg1 + 0x208) != 0)
                    *(arg1 + 0x208) = 0
                
                *(arg1 + 0x691) = 1
                arg_8.q = &var_80
                var_80 = &data_142d8e1b0
                void* var_78_1 = arg1 - 8
                void** const* var_48_1 = &var_80
                int64_t* var_98_1 = &var_90
                var_90 = 0
                int32_t var_88_1 = 0
                sub_1405947f0(&var_90, 0xe)
                int32_t rax_5 = var_88_1 + 0xe
                var_88_1 = rax_5
                
                if (rax_5 s> 0)
                    sub_140594770(&var_90)
                
                sub_1405a7220(var_90, 0xe, "DisplayThread", 0xe, 0x3f)
                *(arg1 + 0x208) = sub_1406bfe90(&var_90, &var_80)
            else if (arg2 == 0)
                int64_t rax_7 = *(r14_1 + arg1)
                *(arg1 + 0x708) = *(rax_7 + r13_1 + 0x30)
                *(arg1 + 0x718) = *(rax_7 + r13_1 + 0x40)
                *(arg1 + 0x728) = *(rax_7 + r13_1 + 0x50)
                *(arg1 + 0x730) = *(arg1 + 0x708)
                *(arg1 + 0x740) = *(arg1 + 0x718)
                *(arg1 + 0x750) = *(arg1 + 0x728)
                *(arg1 + 0x788) = 0x3fe96b230bcdc434
                *(arg1 + 0x798) = 0
                int128_t zmm1
                zmm1.q = float.d(zx.q(*(arg1 + 0x750)))
                uint128_t zmm0_1
                zmm0_1.q = float.d(zx.q(*(arg1 + 0x74c)))
                zmm1.q = zmm1.q f/ zmm0_1.q
                *(arg1 + 0x790) = zmm1.q
                
                if (*(arg1 + 0x691) != 0 && *(arg1 + 0x208) != 0)
                    *(arg1 + 0x208) = 0
                
                *(arg1 + 0x691) = 0x100
                arg_8.q = &var_80
                var_80 = &data_142d8e1e0
                void* var_78_2 = arg1 - 8
                void** const* var_48_2 = &var_80
                int64_t* var_98_2 = &var_90
                var_90 = 0
                int32_t var_88_2 = 0
                sub_1405947f0(&var_90, 0x12)
                int32_t rax_10 = var_88_2 + 0x12
                var_88_2 = rax_10
                
                if (rax_10 s> 0)
                    sub_140594770(&var_90)
                
                sub_1405a7220(var_90, 0x12, "AudioRenderThread", 0x12, 0x3f)
                *(arg1 + 0x210) = sub_1406bfe90(&var_90, &var_80)
            rdi.b = 1
    else
        rdi.b = 0
else
    if (arg2 == 1)
        r15_1 = 0x13c
        r14_1 = 0x88
        goto label_1406c016c
    
    if (arg2 == 2)
        r15_1 = 0x140
        r14_1 = 0x128
        goto label_1406c016c
    
    if (arg2 == 6)
        r15_1 = 0x144
        r14_1 = 0x188
        goto label_1406c016c
    
    rdi.b = 0

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi.b)
