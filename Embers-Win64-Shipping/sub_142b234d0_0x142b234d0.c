// 函数: sub_142b234d0
// 地址: 0x142b234d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
int32_t rdi = 1
int32_t r15 = 1
int64_t var_50 = 0
int32_t var_38 = 0xffffffff
void* rcx = arg1[0x2f]

if (rcx != 0 && (*(rcx + 8) & 0xffe0) != 0)
    *(rcx + 0x88) = arg4
    *(rcx + 0x90) = arg4
    *(rcx + 0x98) = var_38

int32_t rsi = arg6
int32_t rax_3 = sub_142b10540(&var_50, rsi)
uint32_t rbx = arg5

while (true)
    if (rax_3 s< 2)
        int32_t rax_9
        
        if (rax_3 != 0)
            rax_9 = sub_142b23e00(arg1)
        
        if (rax_3 == 0 || rax_9 s< 0)
            if (test_bit(arg3, 0xa) && (not(test_bit(arg3, 8)) || rdi s< r15))
                if (rdi s> 1)
                    int32_t rsi_1 = rdi
                    void* rcx_7 = arg1[0x2f]
                    
                    if (rcx_7 != 0 && (*(rcx_7 + 8) & 0xffe0) != 0)
                        rsi_1 = sub_142b22e30(rcx_7, rdi)
                    
                    int64_t r9 = *arg1
                    (*(r9 + 0x60))(arg1, zx.q(rsi_1), arg7, r9)
                    int32_t rcx_9 = arg1[0x30].d
                    
                    if (rcx_9 s>= 0)
                        arg1[0x30].d = rcx_9 + rsi_1
                    
                    rsi = sub_142b23e00(arg1)
                    r15 += 1 - rdi
                    rdi = 1
                
                void* r8_1 = arg2[6]
                
                if (rsi s>= zx.d(*(r8_1 + 8)))
                    if (rsi s> 0xffff)
                    label_142b23723:
                        
                        if (sub_142b1def0(r8_1, rsi) u> 0xff)
                            rbx = sub_142b237d0(arg1, arg2, &var_50, rbx, r15, rsi, arg7)
                            break
                    else
                        uint8_t rdx_8 = *((sx.q(rsi) s>> 8) + *(r8_1 + 0x38))
                        
                        if (rdx_8 != 0 && (rdx_8 u>> ((rsi s>> 5).b & 7) & 1) != 0)
                            goto label_142b23723
            
            void* rcx_17 = arg1[0x2f]
            
            if (rcx_17 != 0 && (*(rcx_17 + 8) & 0xffe0) != 0)
                rdi = sub_142b22e30(rcx_17, rdi)
            
            int64_t r9_2 = *arg1
            (*(r9_2 + 0x60))(arg1, zx.q(rdi), arg7, r9_2)
            int32_t rax_19 = arg1[0x30].d
            
            if (rax_19 s>= 0)
                arg1[0x30].d = rax_19 + rdi
            
            break
        
        rsi = rax_9
        rdi += 1
    else
        uint32_t rbx_1 = zx.d(*arg4)
        
        if (test_bit(rbx_1, 0xf))
            rbx = rbx_1 & 0x7fff
            
            if (rbx u>= 0x4000)
                if (rbx u>= 0x7fff)
                    goto label_142b235d5
                
                rbx = (rbx - 0x4000) << 0x10 | zx.d(arg4[1])
        else if (rbx_1 u< 0x4040)
            rbx = (rbx_1 u>> 6) - 1
        else if (rbx_1 u>= 0x7fc0)
        label_142b235d5:
            rbx = zx.d(arg4[1]) << 0x10 | zx.d(arg4[2])
        else
            rbx = ((rbx_1 & 0x7fc0) - 0x4040) << 0xa | zx.d(arg4[1])
        
        if ((rax_3.b & 1) == 0)
            break
        
        int32_t rax_6 = sub_142b23e00(arg1)
        rsi = rax_6
        
        if (rax_6 s< 0)
            break
        
        void* rdx_2 = arg1[0x2f]
        
        if (rdx_2 != 0 && (*(rdx_2 + 8) & 0xffe0) != 0)
            *(rdx_2 + 0x88) = arg4
            *(rdx_2 + 0x90) = arg4
            *(rdx_2 + 0x98) = var_38
        
        rdi = 1
    
    r15 += 1
    rax_3 = sub_142b107e0(&var_50, rsi)

sub_142a97dd0(&var_50)
return zx.q(rbx)
