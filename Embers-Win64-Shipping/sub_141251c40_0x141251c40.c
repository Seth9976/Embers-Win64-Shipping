// 函数: sub_141251c40
// 地址: 0x141251c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
uint64_t r15 = zx.q(arg1[8].d)
int64_t rax = arg1[6]
int32_t rdi_1 = r15.d & arg3
int32_t r13_3 = (*(arg1 + 0x44) + 1 + arg3) & r15.d
int32_t* result

while (true)
    int64_t rsi_1 = sx.q(rdi_1)
    
    if (arg3 == *(rax + (rsi_1 << 2)))
        if (sub_14125d210(arg4, sx.q(*(arg1[4] + (rsi_1 << 2))) * 0x88 + *arg1) != 0)
            *arg6 = 1
            result = arg2
            *result = *(arg1[4] + (rsi_1 << 2))
            break
        
        rax = arg1[6]
        arg4 = arg_20
    
    rdi_1 = (rdi_1 + 1) & r15.d
    
    if (rdi_1 == r13_3)
        if ((sx.q(arg1[1].d) - sx.q(arg1[3].d)) * 5 u>= zx.q((r15 * 3).d))
            int64_t r13_4 = arg1[4]
            int32_t i = 0
            __builtin_memset(&arg1[4], 0, 0x20)
            int64_t r15_1 = arg1[6]
            uint64_t rax_4 = zx.q(arg1[8].d)
            *(arg1 + 0x44) = 0
            int32_t rax_5 = ((rax_4 << 1) + 1).d
            arg1[8].d = rax_5
            
            if (rax_5 + 1 s> *(arg1 + 0x2c))
                sub_1405dadb0(&arg1[4], rax_5 + 1)
                rax_5 = arg1[8].d
            
            int32_t rax_7 = rax_5 + 1 + arg1[5].d
            arg1[5].d = rax_7
            
            if (rax_7 s> *(arg1 + 0x2c))
                sub_1405a4cf0(&arg1[4])
            
            int32_t rax_8 = arg1[8].d
            
            if (rax_8 + 1 s> *(arg1 + 0x3c))
                sub_1405dadb0(&arg1[6], rax_8 + 1)
                rax_8 = arg1[8].d
            
            int64_t rdi_3 = sx.q(arg1[7].d)
            int32_t rax_9 = rdi_3.d + rax_8 + 1
            arg1[7].d = rax_9
            
            if (rax_9 s> *(arg1 + 0x3c))
                sub_1405a4cf0(&arg1[6])
            
            int64_t rcx_10
            int64_t rdi_5
            
            if (rax_8 != 0xffffffff)
                rdi_5, rcx_10 = __memfill_u32(arg1[6] + (rdi_3 << 2), 0x80000000, zx.q(rax_8 + 1))
            
            do
                int64_t i_1 = sx.q(i)
                int32_t r8 = *(r15_1 + (i_1 << 2))
                
                if (r8 != 0x80000000)
                    sub_141270e40(arg1, *(r13_4 + (i_1 << 2)), r8)
                
                i += 1
            while (i u<= rax_4.d)
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
            
            if (r13_4 != 0)
                sub_140a74f90(r13_4)
        
        int64_t rsi_2
        
        if (arg1[3].d s<= 0)
            rsi_2 = zx.q(arg1[1].d)
            void var_c8
            sub_14125bd90(&var_c8, arg_20)
            int64_t rdi_10 = sx.q(arg1[1].d)
            int32_t rcx_19 = *arg5
            int32_t rax_17 = (rdi_10 + 1).d
            arg1[1].d = rax_17
            
            if (rax_17 s> *(arg1 + 0xc))
                sub_1405c5340(arg1)
            
            int64_t* rdi_12 = rdi_10 * 0x88 + *arg1
            sub_14125bd90(rdi_12, &var_c8)
            rdi_12[0xf].d = rcx_19
            rdi_12[0x10].d = arg3
            int64_t* var_a0
            
            if (var_a0 != 0)
                sub_1419d6470(var_a0)
            
            int64_t* var_a8
            
            if (var_a8 != 0)
                sub_1419d6470(var_a8)
            
            int64_t* var_b0
            
            if (var_b0 != 0)
                sub_1419d6470(var_b0)
            
            int64_t* var_b8
            
            if (var_b8 != 0)
                sub_1419d6470(var_b8)
            
            int64_t* var_c0
            
            if (var_c0 != 0)
                sub_1419d6470(var_c0)
        else
            int64_t rdi_7 = sx.q(arg1[3].d)
            rsi_2 = sx.q(*(arg1[2] + (rdi_7 << 2) - 4))
            arg1[3].d = (rdi_7 - 1).d
            sub_1405dac90(&arg1[2])
            int64_t* rdi_9 = rsi_2 * 0x88 + *arg1
            sub_14125bd90(rdi_9, arg_20)
            rdi_9[0xf].d = *arg5
            rdi_9[0x10].d = arg3
        
        sub_141270e40(arg1, rsi_2.d, arg3)
        *arg6 = 0
        result = arg2
        *result = rsi_2.d
        break

return result
