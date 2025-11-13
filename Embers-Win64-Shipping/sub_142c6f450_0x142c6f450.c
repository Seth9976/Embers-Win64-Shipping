// 函数: sub_142c6f450
// 地址: 0x142c6f450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* r13 = *arg1
int64_t var_f8_1
__builtin_memset(&var_f8_1, 0, 0x18)
int64_t r15 = 0
int32_t rsi = *(r13 + 0xa40)
int64_t rdi = 0
int64_t r14
r14.b = 0
int128_t var_d8
int128_t zmm6 = *sub_142c59600(&var_d8)
int128_t var_c8 = *(r13 + 0x940)
var_d8 = zmm6
int64_t rax_7 = sub_142c59590(&var_d8, &var_c8)
int64_t r8 = *(r13 + 0x8d0)
int64_t r9 = *(r13 + 0x8d8)
*(r13 + 0x8f8) = rax_7
int64_t rcx_3 = 1
int64_t r12_2 = rax_7 s/ 0xf4240

if (r12_2 s> 0)
    rcx_3 = r12_2

*(r13 + 0x900) = divs.dp.q(sx.o(r8), rcx_3)
*(r13 + 0x908) = divs.dp.q(sx.o(r9), rcx_3)
int64_t rax_17 = zmm6.q
int128_t zmm0

if (*(r13 + 0x8b8) != rax_17)
    *(r13 + 0x8b8) = rax_17
    int64_t rsi_2 = sx.q(rsi s% 6)
    r14.b = 1
    *(r13 + (rsi_2 << 3) + 0x9b0) = r9 + r8
    *(r13 + (rsi_2 + 0x9e) * 0x10) = zmm6
    int32_t rcx_5 = *(r13 + 0xa40) + 1
    *(r13 + 0xa40) = rcx_5
    int32_t rax_21 = rcx_5
    
    if (rcx_5 s>= 6)
        rax_21 = 6
    
    int64_t rax_31
    
    if (rax_21 == 1)
        rax_31 = *(r13 + 0x908) + *(r13 + 0x900)
    else
        int32_t rcx_6
        
        if (rcx_5 s< 6)
            rcx_6 = 0
        else
            rcx_6 = rcx_5 s% 6
        
        int64_t rbx_1 = sx.q(rcx_6)
        var_c8 = zmm6
        var_d8 = *(r13 + (rbx_1 + 0x9e) * 0x10)
        int64_t rax_28 = sub_142c595d0(&var_c8, &var_d8)
        int64_t rcx_8 = rax_28
        
        if (rax_28 == 0)
            rcx_8 = 1
        
        int64_t rax_30 = *(r13 + (rsi_2 << 3) + 0x9b0) - *(r13 + (rbx_1 << 3) + 0x9b0)
        
        if (rax_30 s<= 0x418937)
            rax_31 = divs.dp.q(sx.o(rax_30 * 0x3e8), rcx_8)
        else
            zmm0.q = float.d(rcx_8)
            zmm0.q = zmm0.q f/ 1000.0
            rax_31 = int.q(float.d(rax_30) f/ zmm0.q)
    
    *(r13 + 0x8e0) = rax_31

char rcx_9 = (*(r13 + 0x8f0)).b
uint64_t result

if ((rcx_9 & 0x10) != 0)
    result = 0
else
    int64_t r10_1 = *(r13 + 0x308)
    
    if (r10_1 == 0)
        int64_t rax_36 = *(r13 + 0x300)
        
        if (rax_36 == 0)
            if (r14.b != 0)
                if (rcx_9 s>= 0)
                    int64_t r8_4 = *(r13 + 0x4e50)
                    
                    if (r8_4 != 0)
                        r8_4, arg3 = sub_142c56480(*(r13 + 0x258), 
                            "** Resuming transfer from byte position %I64d\n", r8_4, arg3)
                    
                    arg3 = sub_142c56480(*(r13 + 0x258), 
                        "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  "
                    "Current\n                                 Dload  Upload   Total   Spen", 
                        r8_4, arg3)
                    *(r13 + 0x8f0) |= 0x80
                
                char r9_2 = (*(r13 + 0x8f0)).b
                
                if ((r9_2 & 0x20) != 0)
                    int64_t rcx_16 = *(r13 + 0x908)
                    
                    if (rcx_16 s> 0)
                        int64_t r8_5 = *(r13 + 0x8c8)
                        r15 = divs.dp.q(sx.o(r8_5), rcx_16)
                        
                        if (r8_5 s> 0x2710)
                            var_f8_1 = divs.dp.q(sx.o(*(r13 + 0x8d8)), r8_5 s/ 0x64)
                        else if (r8_5 s> 0)
                            var_f8_1 = divs.dp.q(sx.o(*(r13 + 0x8d8) * 0x64), r8_5)
                
                int64_t var_f0_1
                
                if ((r9_2 & 0x40) != 0)
                    int64_t rcx_20 = *(r13 + 0x900)
                    
                    if (rcx_20 s> 0)
                        int64_t r8_6 = *(r13 + 0x8c0)
                        rdi = divs.dp.q(sx.o(r8_6), rcx_20)
                        
                        if (r8_6 s> 0x2710)
                            var_f0_1 = divs.dp.q(sx.o(*(r13 + 0x8d0)), r8_6 s/ 0x64)
                        else if (r8_6 s> 0)
                            var_f0_1 = divs.dp.q(sx.o(*(r13 + 0x8d0) * 0x64), r8_6)
                
                if (r15 s> rdi)
                    rdi = r15
                
                int64_t rdx_26 = rdi - r12_2
                
                if (rdi s<= 0)
                    rdx_26 = 0
                
                void var_b8
                void var_a8
                void var_98
                int512_t zmm2_2 = sub_142c6fbe0(&var_a8, r12_2, 
                    sub_142c6fbe0(&var_98, rdi, sub_142c6fbe0(&var_b8, rdx_26, arg3)))
                char rax_59 = (*(r13 + 0x8f0)).b
                int64_t rcx_27
                
                if ((rax_59 & 0x20) == 0)
                    rcx_27 = *(r13 + 0x8d8)
                else
                    rcx_27 = *(r13 + 0x8c8)
                
                int64_t rax_60
                
                if ((rax_59 & 0x40) == 0)
                    rax_60 = *(r13 + 0x8d0)
                else
                    rax_60 = *(r13 + 0x8c0)
                
                int64_t r12_3 = rax_60 + rcx_27
                int64_t r9_4 = *(r13 + 0x8d8) + *(r13 + 0x8d0)
                int64_t var_e8_1
                
                if (r12_3 s> 0x2710)
                    var_e8_1 = divs.dp.q(sx.o(r9_4), r12_3 s/ 0x64)
                else if (r12_3 s> 0)
                    var_e8_1 = divs.dp.q(sx.o(r9_4 * 0x64), r12_3)
                
                void var_56
                char* rax_67
                int512_t zmm2_3
                rax_67, zmm2_3 = sub_142c6fa20(*(r13 + 0x8e0), &var_56, zmm2_2)
                void var_60
                char* rax_68
                int512_t zmm2_4
                rax_68, zmm2_4 = sub_142c6fa20(*(r13 + 0x908), &var_60, zmm2_3)
                void var_6a
                char* rax_69
                int512_t zmm2_5
                rax_69, zmm2_5 = sub_142c6fa20(*(r13 + 0x900), &var_6a, zmm2_4)
                void var_7e
                char* rax_70
                int512_t zmm2_6
                rax_70, zmm2_6 = sub_142c6fa20(*(r13 + 0x8d8), &var_7e, zmm2_5)
                void var_88
                char* rax_71
                int512_t zmm2_7
                rax_71, zmm2_7 = sub_142c6fa20(*(r13 + 0x8d0), &var_88, zmm2_6)
                void var_74
                char* rax_72
                int512_t zmm2_8
                rax_72, zmm2_8 = sub_142c6fa20(r12_3, &var_74, zmm2_7)
                char* var_100_1 = rax_67
                void* var_108_1 = &var_b8
                void* var_110_1 = &var_a8
                void* var_118_1 = &var_98
                char* var_120_1 = rax_68
                char* var_128_1 = rax_69
                char* var_130_1 = rax_70
                int64_t var_138_1 = var_f8_1
                char* var_140_1 = rax_71
                int64_t var_148_3 = var_f0_1
                sub_142c56480(*(r13 + 0x258), 
                    "\r%3I64d %s  %3I64d %s  %3I64d %s  %s  %s %s %s %s %s", var_e8_1, zmm2_8)
                fflush(*(r13 + 0x258))
            
            result = 0
        else
            zmm0.q = float.d(*(r13 + 0x8d8))
            int512_t zmm3
            zmm3.o = zx.o(0)
            arg3.o = zx.o(0)
            zmm3.q = float.d(*(r13 + 0x8c8))
            arg3.q = float.d(*(r13 + 0x8d0))
            int32_t result_2
            int64_t r8_3
            result_2, r8_3 = rax_36(*(r13 + 0x370), float.d(*(r13 + 0x8c0)), arg3, zmm3, zmm0.q)
            
            if (result_2 == 0)
                result = zx.q(result_2)
            else
                sub_142c64760(r13, "Callback aborted", r8_3, arg3)
                result = zx.q(result_2)
    else
        int32_t result_1
        int64_t r8_2
        result_1, r8_2 =
            r10_1(*(r13 + 0x370), *(r13 + 0x8c0), *(r13 + 0x8d0), *(r13 + 0x8c8), *(r13 + 0x8d8))
        
        if (result_1 != 0)
            sub_142c64760(r13, "Callback aborted", r8_2, arg3)
        
        result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_168)
return result
