// 函数: sub_1408d9e10
// 地址: 0x1408d9e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* r13)[0x4] = nullptr
int64_t* r14 = arg3
int64_t var_100 = 0
void*** result = arg1
sub_1422883b0(arg1, arg2, 0)
*result = &data_142e11988
sub_141f15fd0(arg2, &result[0x2a], result[0x21][1].d)
void* rdi = &result[0x2d]
*rdi = 0
*(rdi + 8) = 0
result[0x30] = *r14
result[0x32] = 0
void* var_e8 = rdi

if (result[0x30] != 0)
    void* rax_2 = r14[2]
    void* rcx_1 = &r14[4]
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    (**rcx_1)(rcx_1)

float zmm1[0x4] = *(arg2 + 0x43c)
float zmm0[0x4] = 0xc6610000

if (not(zmm1[0] < -14400f))
    zmm0 = __minss_xmmss_memss(zmm1[0], 0x46610000)

zmm0[0] = zmm0[0] f+ arg2[0x89].d
result[0x2b].d = zmm0[0]
zmm0 = zx.o(0)
char rax_4 = *(arg2 + 0x439)
*(result + 0x3b) |= 4
*(result + 0x15c) = rax_4

if (arg2[0x87].b != 0)
    zmm1 = arg2[0x88].d
    
    if (not(zmm1[0] < 0f))
        zmm0 = __minss_xmmss_memss(zmm1[0], 0x44000000)

result[0x2c].d = zmm0[0]
*(result + 0x164) = 0
int64_t rbx = sx.q(arg2[0x8e].d)

if (rbx.d s> *(rdi + 0xc))
    sub_1405c5570(rdi, rbx.d)

if (rbx.d s> 0)
    int64_t rdx_3 = 0
    float (* var_108_1)[0x4] = nullptr
    int64_t var_f8_1 = 0
    
    do
        int64_t r14_1 = arg2[0x8d]
        int64_t* rbx_1 = *(*(arg2[0x86] + 0x40) + (rdx_3 << 3))
        void* rax_7 = (*(*rbx_1 + 0x2a0))(rbx_1, result[0x2b].d, zx.q(*(result + 0x15c)))
        
        if (*(rax_7 + 0x20) s> 0)
            void* rax_8 = result[0x32]
            void* rcx_5 = &result[0x34]
            
            if (rax_8 != 0)
                rcx_5 = rax_8
            
            int64_t* rax_11 = result[0x30]((*(*rcx_5 + 8))(rcx_5))
            rax_11[0x6c] = rbx_1
            void* rbx_2 = &rax_11[0x17]
            *(rax_11 + 0x320) = *(var_108_1 + r14_1)
            *(rax_11 + 0x330) = *(var_108_1 + r14_1 + 0x10)
            *(rax_11 + 0x340) = *(var_108_1 + r14_1 + 0x20)
            zmm1 = *(var_108_1 + r14_1 + 0x30)
            rax_11[4] = -1
            rax_11[0x6d].d = 0xffffffff
            rax_11[5].d = 0
            rax_11[3] = 0
            *(rax_11 + 0x350) = zmm1
            rax_11[0x16].d = *(rax_7 + 0x20) << 2
            rax_11[0x1a].d = *(rax_7 + 0x20) << 2
            rax_11[0x1e].d = *(rax_7 + 0x20) << 3
            rax_11[0x22].d = *(rax_7 + 0x20) << 2
            rax_11[0xb].d = *(rax_7 + 0x20) * 0xc
            rax_11[0xf].d = *(rax_7 + 0x20) * 0xc
            *(rax_11 + 0x8c) = -0x40800000
            rax_11[0x10] = -1
            rax_11[0x11].d = 0xbf800000
            rax_11[0x26].d = *(rax_7 + 0x24)
            void* var_130
            void* var_128
            
            if (sub_140a80f40() == 0)
                void* var_b8_1 = &rax_11[8]
                void* var_a8_1 = &rax_11[0x13]
                void* var_98_1 = &rax_11[0x1b]
                char rax_29 = sub_140a80f40()
                
                if (rax_29 != 0)
                    goto label_1408da0e5
                
                if (data_143f138f4 == rax_29)
                    if (data_143de5480 == rax_29)
                        goto label_1408da0e5
                    
                    uint32_t rax_30
                    rax_30.b = GetCurrentThreadId() == data_143de5470
                    
                    if (rax_30.b != 0)
                        goto label_1408da0e5
                
                void var_88
                void** rax_31 = sub_1408dfd60(&var_88, nullptr, 0xff)
                void* rax_32 = *rax_31
                *(rax_32 + 0x10) = (&rax_11[0x27]).o
                *(rax_32 + 0x20) = (&rax_11[0xc]).o
                *(rax_32 + 0x30) = rbx_2.o
                *(rax_32 + 0x40) = &rax_11[0x1f]
                void* rcx_14 = *rax_31
                int64_t* rdi_1 = *(rcx_14 + 0x50)
                
                if (rdi_1 != 0)
                    rdi_1[9].d += 1
                
                sub_14080ccb0(rcx_14, rax_31[1], rax_31[2].d, 1)
                
                if (rdi_1 != 0)
                    rdi_1[9].d -= 1
                    
                    if (rdi_1[9].d == 1)
                        sub_140a2f6e0(rdi_1)
                
                rdi = &result[0x2d]
                rbx_2 = &rax_11[0x17]
            else
            label_1408da0e5:
                var_128 = &rax_11[0x1f]
                var_130 = &rax_11[0x1b]
                sub_1408e5bb0(&rax_11[0x27], &rax_11[8], &rax_11[0xc], &rax_11[0x13], rbx_2, 
                    var_130, var_128)
            
            sub_141997e80(&rax_11[8])
            sub_141997e80(&rax_11[0xc])
            sub_141997e80(&rax_11[0x13])
            sub_141997e80(rbx_2)
            sub_141997e80(&rax_11[0x1b])
            sub_141997e80(&rax_11[0x1f])
            sub_141997e80(&rax_11[0x23])
            sub_141997e80(&rax_11[0x27])
            int32_t var_110 = 0xffffffff
            int64_t rax_34 = j_sub_140a82f30(0xa8)
            int64_t rcx_24 = rax_34
            
            if (rax_34 == 0)
                rcx_24 = 0
            else
                __builtin_memset(rax_34, 0, 0x70)
                __builtin_memset(rax_34 + 0x90, 0, 0x18)
            
            int64_t rax_35 = *rax_11
            rax_11[2] = rcx_24
            (*(rax_35 + 8))(rax_11, result[0x2b].d, zx.q(*(result + 0x15c)), &var_110, rcx_24, 
                var_130, var_128)
            int64_t rax_36 = j_sub_140a82f30(0xa8)
            
            if (rax_36 == 0)
                rax_36 = 0
            else
                __builtin_memset(rax_36, 0, 0x70)
                __builtin_memset(rax_36 + 0x90, 0, 0x18)
            
            rax_11[3] = rax_36
            void* rax_37 = rax_11[2]
            void* rsi_3 = *(rax_37 + 0x60)
            void* rax_39 = rsi_3 + sx.q(*(rax_37 + 0x68)) * 0xc
            
            if (rsi_3 != rax_39)
                do
                    int64_t* rax_41 = (*(*arg2 + 0x548))(arg2, zx.q(*(rsi_3 + 8)))
                    int64_t* rbx_3 = rax_41
                    char rax_43
                    
                    if (rax_41 != 0)
                        rax_43 = (*(*rax_41 + 0x2d8))(rbx_3, 0xd)
                    
                    if (rax_41 == 0 || rax_43 == 0)
                        rbx_3 = sub_14210f630(0)
                    
                    int64_t r14_3 = sx.q(rax_11[7].d)
                    int32_t rax_45 = (r14_3 + 1).d
                    rax_11[7].d = rax_45
                    
                    if (rax_45 s> *(rax_11 + 0x3c))
                        sub_1405a4d70(&rax_11[6])
                    
                    rsi_3 += 0xc
                    *(rax_11[6] + (r14_3 << 3)) = rbx_3
                while (rsi_3 != rax_39)
                
                result = arg1
                rdi = var_e8
            
            int64_t rbx_4 = sx.q(*(rdi + 8))
            int32_t rax_47 = (rbx_4 + 1).d
            *(rdi + 8) = rax_47
            
            if (rax_47 s> *(rdi + 0xc))
                sub_1405a4d70(rdi)
            
            *(*rdi + (rbx_4 << 3)) = rax_11
            r13 = var_108_1
        
        r13 = &r13[7]
        rdx_3 = var_f8_1 + 1
        var_108_1 = r13
        var_f8_1 = rdx_3
    while (rdx_3 s< rbx)
    
    r14 = arg3

if (data_143f0f21f != 0)
    uint64_t rdx_10 = zx.q(data_143f0f1a0)
    
    if (((*(&data_143f025fc + sx.q(rdx_10.d) * 0x14) u>> 0x13).b & 1) != 0
            && test_bit(data_143f13cd8, rdx_10))
        char rax_53 = sub_140a80f40()
        
        if (rax_53 != 0)
            sub_1408e29c0(result)
        else if (data_143f138f4 != rax_53)
        label_1408da4d6:
            void var_70
            int64_t* rax_55 = sub_1408dfc10(&var_70, nullptr, 0xff)
            *(*rax_55 + 0x10) = result
            void* rcx_34 = *rax_55
            int64_t* rdi_2 = *(rcx_34 + 0x20)
            
            if (rdi_2 != 0)
                rdi_2[9].d += 1
            
            sub_1405a5630(rcx_34, rax_55[1], rax_55[2].d, 1)
            
            if (rdi_2 != 0)
                rdi_2[9].d -= 1
                
                if (rdi_2[9].d == 1)
                    sub_140a2f6e0(rdi_2)
        else if (data_143de5480 == rax_53)
            sub_1408e29c0(result)
        else
            uint32_t rax_54
            rax_54.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_54.b == 0)
                goto label_1408da4d6
            
            sub_1408e29c0(result)
        
        void*** result_1 = result
        
        if (sub_140a80f40() == 0)
            uint32_t rax_59
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_59.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_59.b == 0))
                void var_58
                int64_t* rax_60 = sub_1408df970(&var_58, nullptr, 0xff)
                *(*rax_60 + 0x10) = result
                void* rcx_41 = *rax_60
                int64_t* rdi_3 = *(rcx_41 + 0x20)
                
                if (rdi_3 != 0)
                    rdi_3[9].d += 1
                
                sub_1405a5630(rcx_41, rax_60[1], rax_60[2].d, 1)
                
                if (rdi_3 != 0)
                    rdi_3[9].d -= 1
                    
                    if (rdi_3[9].d == 1)
                        sub_140a2f6e0(rdi_3)
            else
                void*** result_2 = result
                sub_1408dd430(&result_2)
        else
            sub_1408dd430(&result_1)

if (*r14 != 0)
    void* rdx_15 = r14[2]
    void* rcx_43 = &r14[4]
    
    if (rdx_15 != 0)
        rcx_43 = rdx_15
    
    int64_t rdx_16 = *rcx_43
    (*(rdx_16 + 0x10))(rcx_43, rdx_16)

return result
