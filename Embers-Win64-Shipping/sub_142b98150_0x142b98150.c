// 函数: sub_142b98150
// 地址: 0x142b98150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg6
int64_t r12 = *arg1

if (rsi s< 0)
    rsi = not.d(rsi)

if (rsi s>= arg4)
    return 1

int32_t rdi = 0
int32_t rbx = 0
int32_t r15 = *(arg3 + (sx.q(rsi) << 2))
int64_t rax_2 = arg2[4]

if (rax_2 != 0)
    if (rax_2(arg2, zx.q(r15), 0, 0) == 0)
        *(arg2 + 0xc) = r15
    else
        rbx = 0x55
else if (r15 u<= arg2[1].d)
    *(arg2 + 0xc) = r15
else
    rbx = 0x55

arg6 = rbx

if (rbx == 0)
    uint32_t rax_4 = sub_142b96d30(arg2, &arg6)
    rbx = arg6
    
    if (rbx == 0)
        if (rax_4 s< 1)
            return rbx + 1
        
        if (rax_4 u> 0xffffff)
            return 9
        
        void** var_30_1 = arg7
        int32_t rax_6
        int512_t zmm1
        rax_6, zmm1 = sub_142b9aff0(arg1, arg2, rsi, 0, arg5, nullptr)
        rbx = rax_6
        
        if (rax_6 != 0)
            int32_t rax_7 = sub_142b97060(arg2, r15 + 4, zmm1)
            arg6 = rax_7
            rbx = rax_7
            
            if (rax_7 == 0)
                void** rax_8
                int512_t zmm0_1
                rax_8, zmm0_1 = sub_142b99860(r12, rax_4, &arg6)
                int32_t rax_5 = arg6
                
                if (rax_5 != 0)
                    return rax_5
                
                int32_t rax_9 = sub_142b969a0(arg2, *(arg2 + 0xc), rax_8, rax_4, zmm0_1)
                rbx = rax_9
                
                if (rax_9 == 0)
                    if (rax_4 s> 4 && *rax_8 == 0x4f54544f)
                        rdi = 1
                    
                    char const* const rax_11 = "truetype"
                    
                    if (rdi != 0)
                        rax_11 = &data_14367f380
                    
                    return sub_142b9b180(arg1, rax_8, rax_4, 0, zmm1, rax_11, arg7)
                
                if (rax_8 != 0)
                    (*(r12 + 0x10))(r12, rax_8)

return rbx
