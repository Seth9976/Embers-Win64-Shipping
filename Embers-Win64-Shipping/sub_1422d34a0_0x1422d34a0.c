// 函数: sub_1422d34a0
// 地址: 0x1422d34a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_214 = 1
int32_t* r11 = arg3 + 0x10
int32_t var_218 = 0
int64_t* r12 = arg4
int32_t var_210 = r11.d
int32_t r9 = r11[6]
int32_t var_208 = 0xffffffff
void* r13 = arg2
int64_t var_204 = 0
int64_t r15 = arg1
int32_t r10 = 0
int32_t r8 = 0

if (r9 != 0)
    int32_t* rax_1 = *(r11 + 0x10)
    
    if (rax_1 != 0)
        r11 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rcx = *r11
    
    if (rcx != 0)
    label_1422d355d:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_214_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_204.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r9)
            var_204.d = r9
    else
        while (true)
            int64_t rcx_1 = sx.q(r10)
            r8 += 0x20
            r10 += 1
            var_204:4.d = r8
            var_218 = r10
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = r11[rcx_1 + 1]
            var_208 = 0xffffffff
            
            if (rcx != 0)
                goto label_1422d355d
        
        var_204.d = r9

double zmm4[0x2] = var_208.o
void* var_140 = arg3
double var_1d0[0x2] = var_218.o
int16_t var_170 = 0
double result = var_1d0[0]
double var_1a8[0x2] = arg3.o
double rcx_3 = zmm4[0]
double var_148[0x2]
var_148[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q

if ((rcx_3 u>> 0x20).d s< *(result i+ 0x18))
    int64_t rdi_1 = arg6
    int32_t i = var_1d0[1]:4.d
    int64_t rsi_1 = arg7
    
    do
        void* rcx_5 = sx.q(i) * 0xd8
        void* rdx_2 = *var_1a8[0]
        int64_t r14_1 = sx.q(*(rcx_5 + rdx_2))
        int32_t var_1f8_1 = r14_1.d
        
        if (r14_1.d s< arg8)
            int64_t* r9_3 = (sx.q(*(rcx_5 + rdx_2 + 0xc)) << 5) + *(r15 + 0x38)
            int64_t* rax_16 = sx.q(*(rcx_5 + rdx_2 + 8)) * 0x30 + *(r15 + 0x28)
            int64_t r15_1 = *(rcx_5 + rdx_2 + 0xc8)
            int32_t rax_19 = r9_3[2].d - *(r9_3 + 0xc) + r14_1.d
            int64_t* var_258
            int64_t var_250
            int64_t var_248
            int32_t var_240
            char* var_238
            char* var_230
            char* var_228
            
            if (r15_1 == 0)
                void* var_1d8
                var_1d8.d = 0
                void* r13_2 = rdx_2 + 0x18 + rcx_5
                var_1d8:4.d = 1
                int32_t r11_2 = *(r13_2 + 0x28)
                void* r9_7 = r13_2 + 0x10
                r12.b = 0
                var_1d0[0] = r9_7
                var_1d0[1].d = 0xffffffff
                int32_t rcx_13 = 0
                var_1d0[1] = 0
                int32_t r8_3 = 0
                
                if (r11_2 != 0)
                    void* rax_23 = *(r9_7 + 0x10)
                    
                    if (rax_23 != 0)
                        r9_7 = rax_23
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r11_2 - 1)
                    int32_t rdx_15 = *r9_7
                    
                    if (rdx_15 != 0)
                    label_1422d37f8:
                        int32_t rax_30 = neg.d(rdx_15) & rdx_15
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
                        var_1d8:4.d = rax_30
                        int32_t rax_31
                        
                        if (rax_30 == 0)
                            rax_31 = 0x20
                        else
                            rax_31 = 0x1f - temp0_4
                        
                        var_1d0[1]:4.d = r8_3 - rax_31 + 0x1f
                        
                        if (r8_3 - rax_31 + 0x1f s> r11_2)
                            var_1d0[1]:4.d = r11_2
                    else
                        while (true)
                            int64_t rdx_16 = sx.q(rcx_13)
                            r8_3 += 0x20
                            rcx_13 += 1
                            zmm4[0].d = r8_3
                            var_1d8.d = rcx_13
                            
                            if (rdx_16.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_15 = *(r9_7 + (rdx_16 << 2) + 4)
                            var_1d0[1].d = 0xffffffff
                            
                            if (rdx_15 != 0)
                                goto label_1422d37f8
                        
                        var_1d0[1]:4.d = r11_2
                
                void* var_140_1 = r13_2
                double var_118_1[0x2] = var_1d0
                double var_128_1[0x2] = var_1d8.o
                double var_168[0x2] = r13_2.o
                uint32_t rax_34 = (var_1d0[0] u>> 0x20).d
                var_148[0] = (_mm_unpackhi_pd(var_1d0, var_1d0[0])).q
                
                if (rax_34 s< r11_2)
                    int32_t r15_2 = var_128_1[1]:4.d
                    
                    while (true)
                        int32_t* r14_4 = *var_168[0] + sx.q(r15_2) * 0xc
                        
                        if ((*(*arg5 + 0x2d0))(arg5, r14_4, 0) == 0)
                            if ((*(*arg5 + 0x2c0))(arg5, r14_4, 0) != 0)
                                int32_t rax_41 = *r14_4
                                int32_t var_138
                                
                                if (rax_41 != 0 && (rax_41.b & 1) == 0)
                                    sub_141f77ab0(rdx_2 + 0x68 + rcx_5, &var_138, r14_4, nullptr)
                                sub_141f967d0(r13_2, r15_2)
                                r12.b = 1
                        else
                            sub_141f967d0(r13_2, r15_2)
                        
                        var_128_1[1].d &= not.d(var_168[1]:4.d)
                        sub_14059bdd0(&var_168[1])
                        r15_2 = var_128_1[1]:4.d
                        
                        if (r15_2 s>= *(var_128_1[0] i+ 0x18))
                            break
                        
                        r13_2 = var_140_1
                    
                    rdi_1 = arg6
                    rsi_1 = arg7
                    r14_1 = zx.q(var_1f8_1)
                
                if (r12.b != 0)
                    if (*arg9 == 0)
                        (*(*arg4 + 0x1d8))(arg4)
                        *arg9 = 1
                    
                    *arg10 = 1
                    int64_t* r12_1
                    int64_t r14_5
                    int64_t r15_4
                    
                    if (rdi_1 == 0 || rax_16[5].d == 0xffffffff)
                        r15_4 = sx.q(rax_19)
                        r13_2.b = 0
                        r12_1 = r9_3
                        r14_5 = sx.q(r14_1.d)
                    else
                        r15_4 = sx.q(rax_19)
                        r13_2.b = 1
                        r12_1 = r9_3
                        r14_5 = sx.q(r14_1.d)
                        int64_t r10_2 = r15_4 + rdi_1
                        int64_t* rcx_23 = *r12_1
                        int64_t rdx_22 = r14_5 + rsi_1
                        
                        if (r10_2 != rdx_22)
                            if (not(test_bit(zx.q(rcx_23[8].d), 0x1e)))
                                (*(*rcx_23 + 0xb0))(rcx_23, r10_2, rdx_22, 1, var_258, var_250, 
                                    var_248, var_240, var_238, var_230, var_228)
                            else
                                memcpy(r10_2, rdx_22, *(rcx_23 + 0x3c))
                    
                    void** var_108
                    sub_140bd5b20(&var_108, arg5, *(rcx_5 + rdx_2 + 0xb8), 
                        sx.q(*(rcx_5 + rdx_2 + 0x10)))
                    int64_t* rcx_27 = *r12_1
                    int16_t** r12_2 = r14_5 + rsi_1
                    var_258 = nullptr
                    (*(*rcx_27 + 0x90))(rcx_27, &var_108, arg5, r12_2, 0, var_250, var_248, 
                        var_240, var_238, var_230, var_228)
                    
                    if (r13_2.b != 0)
                        if (*(rax_16 + 0x24) == 1)
                            sub_1405a7050(arg2 + 0x70, rax_16)
                        else
                            int32_t* r10_3 = r15_4 + rdi_1
                            int32_t rax_53 = zx.d(*(r9_3 + 0x1c)) - 2
                            int16_t* rax_55
                            
                            if (rax_53 u> 0x15)
                                void* rcx_39 = *r9_3
                                
                                if (rcx_39 == 0)
                                    var_218.q = 0
                                    var_210 = 0
                                    sub_1405947f0(&var_218, 5)
                                    int32_t rax_61 = var_210 + 5
                                    var_210 = rax_61
                                    
                                    if (rax_61 s> 0)
                                        sub_140594770(&var_218)
                                    
                                    UnDecorator::getReferenceType(var_218.q, u"None", 0xa)
                                else
                                    sub_140b63b70(rcx_39 + 0x28, &var_218)
                                
                                int64_t* rax_62 = &data_142d40450
                                
                                if (var_210 != 0)
                                    rax_62 = var_218.q
                                
                                var_258 = rax_62
                                sub_140af98a0("Unknown", 0x290, 
                                    PropertiesAreIdentical: Unsupported type! %i (%s)", 
                                    zx.q(*(r9_3 + 0x1c)))
                                int64_t rcx_44 = var_218.q
                                
                                if (rcx_44 != 0)
                                    sub_140a74f90(rcx_44)
                                
                                sub_140afbb40()
                                sub_1405a7050(arg2 + 0x70, rax_16)
                            else
                                switch (rax_53)
                                    case 0, 1, 0x14
                                        int64_t* rcx_38 = *r9_3
                                        rax_55 = (*(*rcx_38 + 0x80))(rcx_38, r10_3, r12_2, 0)
                                        goto label_1422d3b84
                                    case 2
                                        if (*r12_2 f!= *r10_3)
                                            sub_1405a7050(arg2 + 0x70, rax_16)
                                    case 3, 7
                                        rax_55.b = *r10_3 == *r12_2
                                        goto label_1422d3b84
                                    case 4, 0x13
                                        rax_55.b = *r10_3 == *r12_2
                                    label_1422d3b84:
                                        
                                        if (rax_55.b == 0)
                                            sub_1405a7050(arg2 + 0x70, rax_16)
                                    case 5, 0x12
                                        rax_55.b = *r10_3 == *r12_2
                                        goto label_1422d3b84
                                    case 6
                                        int64_t* r15_5 = *r9_3
                                        int64_t rax_57 = (*(*r15_5 + 0x140))(r15_5, r10_3)
                                        int64_t r8_11 = *r15_5
                                        rax_55.b = rax_57 == (*(r8_11 + 0x140))(r15_5, r12_2, r8_11)
                                        goto label_1422d3b84
                                    case 8, 9, 0xb, 0xe, 0xf, 0x10
                                        if (*r12_2 f!= *r10_3 || *(r12_2 + 4) f!= r10_3[1]
                                                || r12_2[1].d f!= r10_3[2])
                                            sub_1405a7050(arg2 + 0x70, rax_16)
                                    case 0xa
                                        rax_55 = sub_1422b1900(r10_3, r12_2)
                                        goto label_1422d3b84
                                    case 0xc
                                        rax_55 = sub_14094dfb0(r10_3, r12_2)
                                        goto label_1422d3b84
                                    case 0xd
                                        rax_55 = sub_1422b1930(r10_3, r12_2)
                                        goto label_1422d3b84
                                    case 0x11
                                        rax_55 = sub_1420bca70(r10_3, r12_2)
                                        goto label_1422d3b84
                                    case 0x15
                                        int64_t rax_58 = *r10_3
                                        int16_t* rcx_32 = *r12_2
                                        
                                        if (rax_58.d != rcx_32.d
                                                || (rax_58 u>> 0x20).d != (rcx_32 u>> 0x20).d)
                                            sub_1405a7050(arg2 + 0x70, rax_16)
                    
                    int64_t var_78
                    
                    if (var_78 != 0)
                        sub_140a74f90(var_78)
                    
                    sub_140b4cb40(&var_108)
                
                int32_t rax_64 = *(rcx_5 + rdx_2 + 0x20) - *(rcx_5 + rdx_2 + 0x4c)
                
                if (rax_64 s> 0)
                    *arg11 = 1
                else if (rax_64 == 0 && *(rcx_5 + rdx_2 + 0x70) == *(rcx_5 + rdx_2 + 0x9c))
                    sub_1422ceb50(var_148[1], var_1d0[1]:4.d)
                    var_170.b = 1
                
                r15 = arg1
                r13 = arg2
                r12 = arg4
            else
                r15 = arg1
                
                if (rdi_1 == 0)
                    var_228 = arg11
                    var_230 = arg10
                    var_238 = arg9
                    var_240 = *(r14_1 + rsi_1 + 8) * zx.d(*(r9_3 + 0xa))
                    var_248 = *(r14_1 + rsi_1)
                    var_250 = 0
                else
                    uint32_t r11_1 = zx.d(*(r9_3 + 0xa))
                    int64_t rdx_4 = sx.q(rax_19)
                    int32_t r14_2 = *(r14_1 + rsi_1 + 8)
                    int32_t r10_1 = *(rdx_4 + rdi_1 + 8)
                    var_228 = arg11
                    
                    if (r11_1 * r10_1 s<= r11_1 * r14_2)
                        r14_2 = r10_1
                    
                    var_230 = arg10
                    var_238 = arg9
                    var_240 = r14_2 * r11_1
                    var_248 = *(r14_1 + rsi_1)
                    var_250 = *(rdx_4 + rdi_1)
                
                var_258 = arg5
                sub_1422d34a0(r15, r13, r15_1, r12, var_258, var_250, var_248, var_240, var_238, 
                    var_230, var_228)
        else
            sub_1422ceb50(var_148[1], i)
            var_170.b = 1
        
        var_1d0[1].d &= not.d(var_1a8[1]:4.d)
        sub_14059bdd0(&var_1a8[1])
        result = var_1d0[0]
        i = var_1d0[1]:4.d
    while (i s< *(result i+ 0x18))
    
    if (var_170.b != 0 && var_170:1.b != 0)
        i.b = 1
        return sub_1422bea90(arg3, *(arg3 + 8) - *(arg3 + 0x34), i.b)

return result
