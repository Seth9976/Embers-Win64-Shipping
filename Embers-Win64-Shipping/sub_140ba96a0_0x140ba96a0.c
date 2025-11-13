// 函数: sub_140ba96a0
// 地址: 0x140ba96a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_5

if (arg1[1].d == *(arg1 + 0x34))
label_140ba9720:
    rcx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = &arg1[7]
    void* rdx = *(r8 + 8)
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140ba9720_1:
        rcx_5 = nullptr
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rax_4) * 3
            rcx_5 = r8_1 + (rdx_1 << 3)
            
            if (*(r8_1 + (rdx_1 << 3)) == arg2)
                break
            
            rax_4 = *(rcx_5 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_140ba9720_2
        
        if (rax_4 == 0xffffffff)
        label_140ba9720_2:
            rcx_5 = nullptr

void* result = rcx_5 + 8

if (rcx_5 == 0)
    result = nullptr

if (result != 0)
    int64_t rdx_2 = *result
    
    if (rdx_2 != 0)
        result = rdx_2(arg3)
        int32_t rdi_1 = arg3[1].d
        
        if (rdi_1 != 0)
            int32_t i = 0
            int32_t r14_1 = 0
            result = sub_140bac7a0(*arg3)
            int64_t rbp
            rbp.b = result.b == 0
            
            do
                int64_t i_1 = sx.q(i)
                
                for (i += 1; i s< rdi_1; i += 1)
                    result = sub_140bac7a0(sx.q(i) * 0x2c + *arg3)
                    int32_t rcx_10
                    rcx_10.b = result.b == 0
                    
                    if (zx.d(rbp.b) != rcx_10)
                        break
                
                int32_t rsi_3 = i - i_1.d
                
                if (rbp.b != 0)
                    if (r14_1 != i_1.d)
                        result =
                            memmove(sx.q(r14_1) * 0x2c + *arg3, i_1 * 0x2c + *arg3, rsi_3 * 0x2c)
                    
                    r14_1 += rsi_3
                
                rbp.b ^= 1
            while (i s< rdi_1)
            
            arg3[1].d = r14_1

return result
