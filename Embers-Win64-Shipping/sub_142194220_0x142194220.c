// 函数: sub_142194220
// 地址: 0x142194220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t result = __security_cookie ^ &var_c8
uint64_t result_1 = result
bool rsi = false
int64_t rcx = sx.q(arg1[0x1d].d)
int32_t var_80

if (rcx.d s> 0)
    int64_t rax_1 = *arg2
    var_80 = 0
    result = (*(rax_1 + 0x158))(arg2, &var_80, rcx)

if ((*(arg2 + 0x29) & 1) != 0)
    goto label_14219428e

int64_t rdx_1 = arg2[0x15]
uint64_t performanceCount

if (rdx_1 s< arg2[0x14])
    char r8_2 = *(sx.q((rdx_1 s>> 3).d) + arg2[0x12])
    result = rdx_1 + 1
    arg2[0x15] = result
    
    if ((r8_2 & 1 << (rdx_1.b & 7)) == 0)
        goto label_14219428e
    
    uint128_t zmm6 = 0x3ff0000000000000
    void var_50
    void* var_98_1 = &var_50
    var_80.q = zmm6.q
    uint128_t var_68
    int128_t* var_a0_1 = &var_68
    char var_88 = 0
    int64_t* var_a8_1 = &var_80
    char var_87 = 0
    result = sub_142196bf0(arg1, arg2, &var_88, &var_87, arg3, var_a8_1, var_a0_1, var_98_1)
    
    if (result.b == 0)
        *(arg2 + 0x29) |= 1
    else
        result = arg1[1]
        char rcx_10 = *(result + 8)
        
        if (rcx_10 != 0)
            if (rcx_10 == 1)
                result = arg1[0xc]
                
                if (result != 0)
                    performanceCount = result
                    void* rax_11 = arg1[0xd]
                    void* var_70_1 = rax_11
                    
                    if (rax_11 != 0)
                        *(rax_11 + 8) += 1
                    
                    result = sub_14219ae80(arg1, &performanceCount, arg1 + 0xb5, arg3)
        else
            uint128_t zmm0
            
            if (arg1[2].b u< 2)
                if (var_88 == 0)
                    arg3.o = zx.o(var_80.q)
                    zmm0 = zx.o(0)
                    arg3.q f- 0.0
                    
                    if (not(arg3.q f<= 0.0))
                        void* rax_8 = arg1[5]
                        
                        if (rax_8 != 0)
                            zmm0 = zx.o(*(rax_8 + 0x218))
                        
                        char rdx_6 = var_87
                        arg1[0x10] = zmm0.q
                        result = sub_14219b0e0(arg1, rdx_6, arg3.q, &var_68, arg3)
                        sub_141ccf530(arg1, 1)
                    else if (not(arg3.q f>= 0.0))
                        if (*(arg1 + 0xb4) == 0)
                            void* rcx_19 = arg1[5]
                            
                            if (rcx_19 != 0)
                                int64_t* rcx_20 = *(rcx_19 + 0x88)
                                
                                if (rcx_20 != 0)
                                    (*(*rcx_20 + 0x308))(rcx_20, zx.q(var_68.d) & 0x3fff, 
                                        zx.q(sx.d(var_68:2.w)) & 0x3fff)
                            
                            *(arg1 + 0xb5) = var_68
                            int32_t var_58
                            *(arg1 + 0xc5) = var_58
                        
                        sub_141ccf530(arg1, 3)
                        result = sub_141ccebd0(arg1)
                        *(arg1 + 0xb4) = 0
            else if (var_88 != 0)
                result = 0
                
                if (*(arg1 + 0xb5) != 0 || *(arg1 + 0xbd) != 0 || *(arg1 + 0xc5) != 0)
                    int64_t* rdi
                    rdi.b = 0
                    result = QueryPerformanceCounter(&performanceCount)
                    char rdx_5 = *(arg1 + 0xb4)
                    arg3.o = zx.o(0)
                    arg3.q = float.d(performanceCount)
                    arg3.q = arg3.q f* data_143d796f8
                    arg3.q = arg3.q f+ 16777216.0
                    
                    if (rdx_5 == 0)
                        result = arg1[5]
                        void* rcx_12
                        
                        if (result != 0)
                            rcx_12 = *(result + 0x88)
                        
                        int64_t zmm2
                        
                        if (result == 0 || rcx_12 == 0)
                            zmm2 = (zx.o(0)).q
                        else
                            zmm2 = *(rcx_12 + 0x1d8)
                        
                        int64_t zmm4_1 = arg1[0x11]
                        zmm0.q = arg3.o.q f- arg1[0xf]
                        rsi = zmm0.q f> 10.0
                        
                        if (zmm4_1 f== 0.0)
                            rdi.b = 1
                        else
                            zmm0.q = arg3.o.q f- zmm4_1
                            
                            if (zmm0.q f> 1.1000000000000001)
                                rdi.b = 1
                            else
                                zmm0.q = arg3.o.q f- zmm2
                                
                                if (zmm0.q f> zmm6.q)
                                    rdi.b = 1
                                else
                                    rdi.b = 0
                    
                    arg1[0x11] = (arg3.o).q
                    
                    if (rdx_5 == 0 && rsi != 0 && rdi.b != 0)
                        *(arg1 + 0xb4) = 1
                        sub_141ccf530(arg1, 0)
                        result = (*(*arg1 + 0x68))(arg1)
                else
                    *(arg2 + 0x29) |= 1
else
    sub_140b55370(arg2)
label_14219428e:
    
    if (arg1[0xc] != 0)
        result = arg1[1]
        
        if (*(result + 8) == 1)
            result = &performanceCount
            
            if (&arg1[0xc] != &performanceCount)
                arg1[0xc] = 0
                int64_t* rbx_1 = arg1[0xd]
                
                if (rbx_1 != 0)
                    arg1[0xd] = 0
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        result = (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            result = (*(*rbx_1 + 8))(rbx_1, 1)
__security_check_cookie(result_1 ^ &var_c8)
return result
