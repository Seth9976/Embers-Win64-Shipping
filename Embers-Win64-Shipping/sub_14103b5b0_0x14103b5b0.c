// 函数: sub_14103b5b0
// 地址: 0x14103b5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1 + 0x10, 0xff, 0x19)
uint64_t result = 0
int32_t r11 = arg3
*(arg1 + 0x7a) = 0
int32_t i = 0
*(arg1 + 0x7e) = 0
__builtin_memset(arg1 + 0x88, 0, 0x21)
int32_t r15 = arg2[8]
uint32_t r10_1
r10_1.b = (r15 u>> 1).b & 1
uint32_t r8_1
r8_1.b = (r15 u>> 4).b & 1
uint32_t arg_20 = r10_1
uint32_t r9_1
r9_1.b = (r15 u>> 5).b & 1
uint32_t arg_8 = r8_1
uint32_t arg_10 = r9_1

if (*arg2 u> 0)
    int64_t rsi
    int64_t var_38_1 = rsi
    
    do
        int32_t rcx = -1
        int32_t* rdi_3 = (zx.q(i) << 5) + *(arg2 + 8)
        uint64_t i_1 = zx.q(i)
        int32_t rax = *rdi_3
        
        if (rax == 0)
            rcx = *(*(rdi_3 + 0x10) + 0xc)
            *(i_1 + arg1 + 0x88) = *(arg1 + 0xa8)
            result.b = (r15 & 0x80) != 0
            result.b += 1
            *(arg1 + 0xa8) += result.b
        else if (rax == 1)
            rcx = rdi_3[3]
            *(i_1 + arg1 + 0x88) = *(arg1 + 0xa8)
            result = zx.q(rdi_3[4].b)
            *(arg1 + 0xa8) += result.b
        else
            result = zx.q(rax - 2)
            
            if (result.d u<= 2)
                result = zx.q(*(arg1 + 0xa8))
                rcx = rdi_3[3]
                *(i_1 + arg1 + 0x88) = result.b
                *(arg1 + 0xa8) += 2
        
        if (rcx == r11)
            int64_t rdx = sx.q(rdi_3[6])
            rsi.b = 0xa
            
            if (rdx.d u<= 5)
                switch (rdx)
                    case 0
                        rsi.b = 0xa
                    case 1
                        rsi.b = 0
                    case 2
                        rsi.b = 1
                    case 3
                        rsi.b = 2
                    case 4
                        rsi.b = 4
                    case 5
                        rsi.b = 3
            
            if (*(arg1 + 0x30) != 0 || (r10_1.b == 0 && rdx.d u<= 1))
                result.b = 1
            else
                result.b = 0
            
            bool cond:1_1 = *(arg1 + 0x38) != 0
            *(arg1 + 0x30) = result.b
            
            if (cond:1_1 || (((r15 u>> 2).b & 1) == 0 && (rdi_3[6] & 0xfffffffd) == 0))
                result.b = 1
            else
                result.b = 0
            
            bool cond:2_1 = *(arg1 + 0x40) != 0
            *(arg1 + 0x38) = result.b
            
            if (not(cond:2_1) && ((r15 u>> 3).b & 1) == 0)
                result = zx.q(rdi_3[6])
            
            if (cond:2_1 || (((r15 u>> 3).b & 1) == 0 && (result.d == 0 || result.d == 3)))
                result.b = 1
            else
                result.b = 0
            
            bool cond:3_1 = *(arg1 + 0x50) != 0
            *(arg1 + 0x40) = result.b
            
            if (cond:3_1 || (r8_1.b == 0 && (rdi_3[6] & 0xfffffffb) == 0))
                result.b = 1
            else
                result.b = 0
            
            bool cond:4_1 = *(arg1 + 0x48) != 0
            *(arg1 + 0x50) = result.b
            
            if (not(cond:4_1) && r9_1.b == 0)
                result = zx.q(rdi_3[6])
            
            if (cond:4_1 || (r9_1.b == 0 && (result.d == 0 || result.d == 5)))
                result.b = 1
            else
                result.b = 0
            
            bool cond:5_1 = *(arg1 + 0x58) != 0
            *(arg1 + 0x48) = result.b
            
            if (cond:5_1 || rdi_3[6] == 0)
                result.b = 1
            else
                result.b = 0
            
            *(arg1 + 0x58) = result.b
            result = zx.q(*rdi_3)
            
            if (result.d == 0)
                int32_t* rdi_4 = *(rdi_3 + 0x10)
                int32_t rcx_6 = *rdi_4
                
                if (rcx_6 == 0)
                    char rcx_17 = rdi_4[1].b
                    
                    if (rsi.b != 0xa)
                        *(arg1 + (zx.q(rsi.b) << 3) + 0x2b) = rcx_17
                    else
                        *(arg1 + 0x2b) = rcx_17
                        *(arg1 + 0x33) = rcx_17
                        *(arg1 + 0x3b) = rcx_17
                        *(arg1 + 0x43) = rcx_17
                        *(arg1 + 0x4b) = rcx_17
                        *(arg1 + 0x53) = rcx_17
                    
                    result = sub_14105aca0(arg1, rsi.b, i.b)
                    r9_1 = arg_10
                    r8_1 = arg_8
                else if (rcx_6 == 1)
                    char rcx_16 = rdi_4[1].b
                    
                    if (rsi.b != 0xa)
                        result = zx.q(rsi.b)
                        *(arg1 + (result << 3) + 0x2d) = rcx_16
                        *(arg1 + 0x28) = i.b
                        *(arg1 + 0x7a) = 1
                    else
                        *(arg1 + 0x2d) = rcx_16
                        *(arg1 + 0x35) = rcx_16
                        *(arg1 + 0x3d) = rcx_16
                        *(arg1 + 0x45) = rcx_16
                        *(arg1 + 0x4d) = rcx_16
                        *(arg1 + 0x55) = rcx_16
                        *(arg1 + 0x28) = i.b
                        *(arg1 + 0x7a) = 1
                else if (rcx_6 == 2)
                    char rcx_13 = rdi_4[1].b
                    
                    if (rsi.b != 0xa)
                        uint64_t rax_6 = zx.q(rsi.b)
                        *(arg1 + (rax_6 << 3) + 0x2a) += rcx_13
                    else
                        *(arg1 + 0x2a) += rcx_13
                        *(arg1 + 0x32) += rcx_13
                        *(arg1 + 0x3a) += rcx_13
                        *(arg1 + 0x42) += rcx_13
                        *(arg1 + 0x4a) += rcx_13
                        *(arg1 + 0x52) += rcx_13
                    
                    sub_14105a830(arg1, rsi.b, i.b)
                    int32_t r10_2 = rdi_4[2]
                    int32_t rdx_7 = rdi_4[1] + r10_2
                    char rax_7 = rsi.b
                    
                    if (rsi.b == 0xa)
                        rax_7 = 5
                    
                    result = zx.q(rsi.b)
                    
                    if (rsi.b == 0xa)
                        result = 0
                    
                    uint64_t r8_7 = zx.q(result.b)
                    
                    while (r8_7.d u<= zx.d(rax_7))
                        int32_t rcx_15 = r10_2
                        
                        if (r10_2 u< rdx_7)
                            void* r9_3 = arg1 + (r8_7 << 3)
                            result = zx.q(*(r9_3 + 0x2e))
                            
                            do
                                result = zx.q(result.w) | zx.q(1 << (rcx_15 u% 0x20))
                                rcx_15 += 1
                            while (rcx_15 u< rdx_7)
                            
                            *(r9_3 + 0x2e) = result.w
                        
                        r8_7 = zx.q(r8_7.d + 1)
                    
                    r9_1 = arg_10
                    r8_1 = arg_8
                else if (rcx_6 == 3)
                    char rcx_10 = rdi_4[1].b
                    
                    if (rsi.b != 0xa)
                        *(arg1 + (zx.q(rsi.b) << 3) + 0x2c) = rcx_10
                        result = sub_14105ad40(arg1, rsi.b, i.b)
                    else
                        *(arg1 + 0x2c) = rcx_10
                        *(arg1 + 0x34) = rcx_10
                        *(arg1 + 0x3c) = rcx_10
                        *(arg1 + 0x44) = rcx_10
                        *(arg1 + 0x4c) = rcx_10
                        *(arg1 + 0x54) = rcx_10
                        result = sub_14105ad40(arg1, rsi.b, i.b)
                    
                    r9_1 = arg_10
                    r8_1 = arg_8
            else if (result.d == 2)
                if (rsi.b != 0xa)
                    uint64_t rax_3 = zx.q(rsi.b)
                    *(arg1 + (rax_3 << 3) + 0x2a) += 1
                else
                    *(arg1 + 0x2a) += 1
                    *(arg1 + 0x32) += 1
                    *(arg1 + 0x3a) += 1
                    *(arg1 + 0x42) += 1
                    *(arg1 + 0x4a) += 1
                    *(arg1 + 0x52) += 1
                
                if (rdi_3[2] == 0)
                    sub_14105a770(arg1, rsi.b, i.b)
                
                char rax_4 = rsi.b
                
                if (rsi.b == 0xa)
                    rax_4 = 5
                
                result = zx.q(rsi.b)
                
                if (rsi.b == 0xa)
                    result = 0
                
                uint64_t r8_3 = zx.q(result.b)
                
                while (r8_3.d u<= zx.d(rax_4))
                    int16_t rcx_4 = *(arg1 + (r8_3 << 3) + 0x2e)
                    void* rdx_2 = arg1 + (r8_3 << 3)
                    result = zx.q(rdi_3[2])
                    r8_3 = zx.q(r8_3.d + 1)
                    *(rdx_2 + 0x2e) = rcx_4 | (1 << (result.d u% 0x20)).w
                
                r9_1 = arg_10
                r8_1 = arg_8
        
        r10_1 = arg_20
        i += 1
        r11 = arg3
    while (i u< *arg2)

return result
