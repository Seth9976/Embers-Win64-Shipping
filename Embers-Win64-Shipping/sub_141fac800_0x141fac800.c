// 函数: sub_141fac800
// 地址: 0x141fac800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_14216b7d0(arg2) != 0)
    return 0

int64_t* rbx = arg2
int64_t r15
r15.b = 0

if (arg2 == 0 || *(arg2 + 0x5f) != 3)
    rbx = nullptr
else
    sub_141dd9f90(arg2)

if (*(arg2 + 0x5f) != 0 || (arg2[0xb].b & 0x40) != 0)
    void* rax_1
    int64_t rax_2
    void* rdx
    
    if (arg2 != arg3[6])
        rax_1 = sub_14256a090()
        rdx = arg2[2]
        rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (arg2 == arg3[6] || rax_2.d s> *(rdx + 0x38)
            || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        uint8_t rax_4
        char rax_6
        
        if ((*(arg2 + 0x59) & 4) != 0 && (arg2[0xb].b & 0x40) == 0)
            rax_4 = sub_141dce3a0(arg2)
            
            if (rax_4 != 0)
                rax_6 = (*(*arg3 + 0x330))(arg3, arg2)
        
        int64_t rbp
        
        if ((*(arg2 + 0x59) & 4) == 0 || (arg2[0xb].b & 0x40) != 0 || (rax_4 != 0 && rax_6 == 0))
            rbp.b = 0
        else
            rbp.b = 1
        
        void var_2c
        sub_140d3a3a0(&var_2c, arg2)
        int64_t* rax_7 = sub_141fb2e20(arg3, &var_2c)
        int64_t* rsi_1 = rax_7
        
        if (rbp.b == 0)
            goto label_141fac92e
        
        if (rax_7 != 0)
        label_141fac933:
            
            if ((rsi_1[6].b & 2) == 0)
                r15.b = sub_141f97be0(rsi_1) s> 0
                
                if (rbp.b == 0 && arg3[0x2a1].b == rbp.b)
                    int64_t r8_2 = *rsi_1
                    (*(r8_2 + 0x278))(rsi_1, 0, r8_2)
        else
            void var_38
            int32_t var_34 = *sub_140b5e500(&var_38, (rax_7 + 0x66).d)
            int32_t var_30_1 = rsi_1.d
            int64_t* rax_9 = sub_14213fce0(arg3, &var_34, (rsi_1 + 2).d, (rsi_1 - 1).d)
            rsi_1 = rax_9
            
            if (rax_9 != 0)
                sub_141f9b710(rax_9, arg2, 0)
            label_141fac92e:
                
                if (rsi_1 != 0)
                    goto label_141fac933

if (rbx != 0)
    sub_141dd9f90(rbx)

return zx.q(r15.b)
