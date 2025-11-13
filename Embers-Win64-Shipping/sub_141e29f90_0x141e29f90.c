// 函数: sub_141e29f90
// 地址: 0x141e29f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1
int64_t rax_2
void* r9

if (arg3 != 0)
    rax_1 = sub_1424641d0()
    r9 = arg3[2]
    rax_2 = sx.q(*(rax_1 + 0x38))

int64_t* rdi

if (arg3 == 0 || rax_2.d s> *(r9 + 0x38) || *(*(r9 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rdi = nullptr
else
    rdi = arg3

if (arg2 == 0)
    return 0

void* rax_4 = sub_142469550()
void* rdx = arg2[2]
int64_t rax_5 = sx.q(*(rax_4 + 0x38))

if (rax_5.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
    if (rdi == 0)
        int64_t*** r14 = arg2[0xf]
        float zmm6[0x4] = zx.o(0)
        void* r12 = &r14[sx.q(arg2[0x10].d)]
        
        if (r14 != r12)
            float zmm7[0x4] = 0x3f800000
            
            do
                int64_t** r15_1 = *r14
                
                if (r15_1 != 0)
                    int64_t* rsi_1 = *r15_1
                    int64_t rax_13
                    
                    if (rsi_1 != 0)
                        if (zmm6[0] f!= r15_1[0x2a].d)
                            rax_13.b = 0
                        else
                            rax_13.b = 1
                    
                    if (rsi_1 == 0 || rax_13.b != 0)
                        rax_13.b = 0
                    else
                        rax_13.b = 1
                    
                    if (rax_13.b != 0)
                        if (rsi_1 == 0)
                        label_141e2a168:
                            rax_13 = 0
                        else if (rsi_1[4] != sub_140cde0b0())
                        label_141e2a168_1:
                            rax_13 = 0
                        else
                            int64_t rax_15 = sx.q(rsi_1[0x2c].d)
                            int32_t rdx_5 = 0
                            int64_t rcx_9 = 0
                            
                            if (rax_15.d s<= 0)
                            label_141e2a168_2:
                                rax_13 = 0
                            else
                                int64_t* r9_1 = rsi_1[0x2b]
                                int64_t* rax_16 = r9_1
                                
                                while (*rax_16 != arg1)
                                    rdx_5 += 1
                                    rcx_9 += 1
                                    rax_16 = &rax_16[3]
                                    
                                    if (rcx_9 s>= rax_15)
                                        goto label_141e2a168_2
                                
                                rax_13 = &r9_1[sx.q(rdx_5) * 3 + 1]
                        
                        if (rax_13 != 0)
                            if (*(rax_13 + 8) == 1 && **rax_13 == arg3)
                                return rsi_1
                            
                            sub_141defe90(&r15_1[0x26], zmm6[0])
                            rax_13, zmm6, zmm7 = sub_141defc30(&r15_1[0x26], zmm7)
                
                r14 = &r14[1]
            while (r14 != r12)
        
        float var_58_1 = zmm6[0]
        return sub_141e09a20(arg2, arg3, arg1, zmm6, zmm6[0], zmm6[0], 1, 0xbf800000)
    
    if (sub_141e06e70(arg2, rdi) == 0)
        sub_141e07230(arg2, rdi, zx.o(0), 0, 0, 1)
else
    if (sub_141e3e480(arg2) != arg3)
        (*(*arg2 + 0x318))(arg2, arg3, zx.q(arg4), 0x3f800000)
        sub_141e499c0(arg2, zx.o(0), 1)
    
    if (sub_141e44ce0(arg2) != arg4)
        sub_141e49620(arg2, arg4)

return rdi
