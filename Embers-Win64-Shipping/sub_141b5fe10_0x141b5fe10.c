// 函数: sub_141b5fe10
// 地址: 0x141b5fe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0x48)
int64_t rsi = arg1

if (rdi == 0)
label_141b5fe80:
    char rax_25 = *(arg2 + 0x80)
    
    if ((rax_25 & 1) == 0)
        if (rdi != 0 || (rax_25 & 2) != 0)
            arg1.b = 1
        else
            arg1.b = 0
    
    if ((rax_25 & 1) != 0 || arg1.b != 0)
        if (rdi != 0)
            void* rax_20
            rax_20, arg1 = sub_142543940()
            void* rdx_3 = *(rdi + 0x10)
            int64_t rax_21 = sx.q(*(rax_20 + 0x38))
            
            if (rax_21.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_21 << 3)) == rax_20 + 0x30)
                int32_t var_18 = 0
                return sub_141b5f910(rsi - 8, rdi, arg2, 0)[2]
            
            rax_25 = *(arg2 + 0x80)
        
        if ((rax_25 & 1) == 0)
            if (*(arg2 + 0x48) != 0 || (rax_25 & 2) != 0)
                arg1.b = 1
            else
                arg1.b = 0
        
        if ((rax_25 & 1) != 0 || arg1.b != 0)
            if (*(arg2 + 0x48) != 0 || (rax_25 & 2) != 0)
                rax_25 = 1
            else
                rax_25 = 0
            
            if (rax_25 != 0 && rdi == 0)
                sub_141b61890(arg2)
            
            return sub_141b5e420(rsi - 8, arg2) __tailcall
    else
        int32_t rcx_3
        rcx_3.b = sub_140b5b8a0(*(arg2 + 0x50), 0) == 0
        void* rax_11
        
        if ((*(arg2 + 0x54) != 0 | rcx_3.b) == 0)
            rax_11 = *(arg2 + 0x48)
        
        int64_t rbx_1
        
        if ((*(arg2 + 0x54) != 0 | rcx_3.b) != 0 || rax_11 == 0)
            rbx_1 = *(arg2 + 0x50)
        else
            rbx_1 = *(rax_11 + 0x18)
        
        if (*(rsi + 0x10) != *(rsi + 0x3c))
            int32_t rax_14 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
            void* r9_1 = rsi + 0x40
            void* rcx_5 = *(r9_1 + 8)
            
            if (rcx_5 != 0)
                r9_1 = rcx_5
            
            int32_t i = *(r9_1 + (((sx.q(*(rsi + 0x50)) - 1) & sx.q(rax_14)) << 2))
            
            if (i != 0xffffffff)
                int64_t r8_5 = *(rsi + 8)
                
                do
                    int64_t i_1 = sx.q(i)
                    int64_t rcx_6 = i_1 * 3
                    
                    if (*(r8_5 + (rcx_6 << 3)) == rbx_1)
                        if (i != 0xffffffff)
                            void* rax_18 = r8_5 + i_1 * 0x18
                            
                            if (rax_18 != 0)
                                return *(rax_18 + 8)
                        
                        break
                    
                    i = *(r8_5 + (rcx_6 << 3) + 0x10)
                while (i != 0xffffffff)
else
    int32_t rax_1 = *(rdi + 0xc)
    void* const rax_7
    
    if (rax_1 s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if ((*(rax_7 + 8) & 0x30000000) == 0 && ((*(rdi + 8) u>> 0xf).b & 1) == 0)
        goto label_141b5fe80

return 0
