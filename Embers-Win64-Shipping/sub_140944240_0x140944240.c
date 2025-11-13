// 函数: sub_140944240
// 地址: 0x140944240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t* result = __security_cookie ^ &var_4d8
int64_t* result_1 = result

if (arg1[5].d != 0)
    void* rsi
    void* arg_18 = rsi
    int32_t var_4b0
    int32_t var_4a4
    int128_t zmm0
    
    while (true)
        result = arg1[4]
        var_4a4 = 0
        int64_t* rcx = result[2]
        
        if (rcx == 0)
            break
        
        var_4b0 = 0
        char var_458
        result = (*(*rcx + 0x60))(rcx, &var_458, 0x400, &var_4a4, result[5], var_4b0)
        int32_t r15_1 = var_4a4
        
        if (r15_1 s<= 0)
            break
        
        int32_t rax_2 = arg1[5].d
        void var_438
        
        if (rax_2 != 1)
            if (rax_2 == 2)
                int64_t var_4a0 = 0
                int64_t var_498_1 = 0
                
                if (sub_140941e40(arg1, &var_458, r15_1, &var_4a0) != 0)
                    char var_4a8 = 0
                    int32_t rdx_5 = *(arg1 + 0x94)
                    int64_t r14_1
                    
                    if (rdx_5 == 0)
                        r14_1 = zx.q(arg1[0xd].d)
                        int32_t rax_17 = (r14_1 + 1).d
                        arg1[0xd].d = rax_17
                        
                        if (rax_17 s> *(arg1 + 0x6c))
                            sub_1405a4df0(&arg1[0xc])
                        
                        sub_1405b2ba0(&arg1[0xe], 0)
                    else
                        r14_1 = sx.q(arg1[0x12].d)
                        int64_t r9_4 = arg1[0xc]
                        int64_t r8_2 = sx.q(*(r9_4 + r14_1 * 0x18 + 4))
                        arg1[0x12].d = r8_2.d
                        *(arg1 + 0x94) = rdx_5 - 1
                        
                        if (rdx_5 != 1)
                            *(r9_4 + r8_2 * 0x18) = 0xffffffff
                    
                    void* rax_18 = arg1[0x10]
                    void* r9_5 = &arg1[0xe]
                    
                    if (rax_18 != 0)
                        r9_5 = rax_18
                    
                    int32_t rax_19 = r14_1.d
                    
                    if (r14_1.d s< 0)
                        rax_19 = (r14_1 + 0x1f).d
                    
                    zmm0 = var_4a0.o
                    int64_t r8_3 = sx.q(rax_19 s>> 5)
                    *(r9_5 + (r8_3 << 2)) |= 1 << (r14_1.b & 0x1f)
                    int64_t rdx_8 = arg1[0xc]
                    int64_t rcx_17 = sx.q(r14_1.d) * 3
                    *(rdx_8 + (rcx_17 << 3)) = zmm0
                    *(rdx_8 + (rcx_17 << 3) + 0x10) = 0xffffffff
                    int32_t* rbx_16 = rdx_8 + (rcx_17 << 3)
                    var_4b0.q = &var_4a8
                    int64_t var_4b8_1
                    var_4b8_1.d = r14_1.d
                    void var_478
                    sub_14093ebb0(&arg1[0xc], &var_478, sub_140a6b260(rbx_16, 0x10), rbx_16, 
                        var_4b8_1.d, var_4b0)
                    
                    if (var_4a8 == 0)
                        (*(*arg1 + 0x40))(arg1, &var_438, zx.q(r15_1 - 0x20))
        else if (r15_1 == 0x20)
            bool cond:3_1 = var_458 != 0xc
            char* var_490 = &var_458
            int32_t var_488_1 = r15_1
            char var_480_1 = 0
            int32_t var_484_1 = 1
            
            if (not(cond:3_1))
                int32_t var_484_2 = 2
                char var_457
                
                if ((arg1[2].b & var_457) != 0)
                    int32_t var_484_3 = 6
                    char var_456
                    char var_455
                    char var_454
                    char var_453
                    
                    if ((((zx.d(var_456) << 8 | zx.d(var_455)) << 8 | zx.d(var_454)) << 8
                            | zx.d(var_453)) == *(arg1 + 0xc))
                        char var_452
                        char var_451
                        
                        if (var_452 != 0x53 || var_451 != 0x51)
                            rsi.b = 0
                        else
                            rsi.b = 1
                        
                        int32_t var_484_4 = 0x10
                        uint32_t var_470[0x6]
                        sub_14093ce40(&var_490, &var_470)
                        
                        if (rsi.b != 0)
                            char var_450
                            char var_44f
                            char var_44e
                            char var_44d
                            char var_44c
                            char var_44b
                            char var_44a
                            char var_449
                            (*(*arg1 + 0x20))(arg1, &var_438, 0, 
                                ((((((zx.q(var_450) << 8 | zx.q(var_44f)) << 8 | zx.q(var_44e)) << 8
                                    | zx.q(var_44d)) << 8 | zx.q(var_44c)) << 8 | zx.q(var_44b)) << 8
                                    | zx.q(var_44a)) << 8 | zx.q(var_449))
    
    if (arg1[5].d == 2)
        result = arg1[4]
        zmm0.d = (*(arg1 + 0x3c)).d f- arg2.d
        *(arg1 + 0x3c) = zmm0.d
        
        if (result != 0 && not(zmm0.d f> 0f) && not(arg1[3].d.d f>= arg1[7].d))
            int64_t* rcx_21 = result[2]
            int64_t rax_24 = *result
            uint64_t r8_6 = zx.q(arg1[9].d)
            int64_t rdx_11 = arg1[8]
            var_4a4 = 0
            (*(*rcx_21 + 0x50))(rcx_21, rdx_11, r8_6, &var_4a4, rax_24, var_4b0)
            result = zx.q(arg1[3].d)
            *(arg1 + 0x3c) = result.d
        
        zmm0.d = arg1[7].d.d f- arg2.d
        arg1[7].d = zmm0.d
        
        if (not(zmm0.d f> 0f))
            result = (*(*arg1 + 0x60))(arg1)

__security_check_cookie(result_1 ^ &var_4d8)
return result
