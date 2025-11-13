// 函数: sub_14262dce0
// 地址: 0x14262dce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t rax = arg1 - 1
int32_t i = 0
float zmm3
float zmm4
float zmm5

if (arg1 s>= 4)
    zmm3 = arg3[2]
    float* rcx = arg2 + 0x14
    int64_t r8_1 = sx.q(rax) * 0xc
    
    do
        zmm4 = rcx[-3]
        zmm5 = *(r8_1 + arg2 + 8)
        int32_t rdx
        rdx.b = zmm4 > zmm3
        int32_t rax_2
        rax_2.b = zmm5 > zmm3
        
        if (rdx != rax_2 &&
                not((*(r8_1 + arg2) - rcx[-5]) * (zmm3 - zmm4) / (zmm5 - zmm4) + rcx[-5] f<= *arg3))
            int32_t rax_3
            rax_3.b = r9 == 0
            r9 = rax_3
        
        zmm5 = *rcx
        int32_t r8_2
        r8_2.b = zmm5 > zmm3
        
        if (r8_2 != rdx
                && not((rcx[-5] - rcx[-2]) * (zmm3 - zmm5) / (zmm4 - zmm5) + rcx[-2] f<= *arg3))
            int32_t rax_4
            rax_4.b = r9 == 0
            r9 = rax_4
        
        zmm4 = rcx[3]
        int32_t rdx_1
        rdx_1.b = zmm4 > zmm3
        
        if (rdx_1 != r8_2
                && not((rcx[-2] - rcx[1]) * (zmm3 - zmm4) / (zmm5 - zmm4) + rcx[1] f<= *arg3))
            int32_t rax_5
            rax_5.b = r9 == 0
            r9 = rax_5
        
        zmm5 = rcx[6]
        int32_t rax_6
        rax_6.b = zmm5 > zmm3
        
        if (rax_6 != rdx_1
                && not((rcx[1] - rcx[4]) * (zmm3 - zmm5) / (zmm4 - zmm5) + rcx[4] f<= *arg3))
            int32_t rax_7
            rax_7.b = r9 == 0
            r9 = rax_7
        
        rax = i + 3
        i += 4
        r8_1 = rcx + 0x10 - arg2
        rcx = &rcx[0xc]
    while (i s< arg1 - 3)

if (i s< arg1)
    zmm5 = arg3[2]
    float* rdx_3 = sx.q(rax) * 0xc
    void* r8_3 = arg2 + sx.q(i) * 0xc
    uint64_t i_2 = zx.q(arg1 - i)
    uint64_t i_1
    
    do
        zmm3 = *(rdx_3 + arg2 + 8)
        zmm4 = *(r8_3 + 8)
        int32_t rcx_2
        rcx_2.b = zmm3 > zmm5
        int32_t rax_10
        rax_10.b = zmm4 > zmm5
        
        if (rax_10 != rcx_2 &&
                not((zmm5 - zmm4) * (*(rdx_3 + arg2) f- *r8_3) / (zmm3 - zmm4) f+ *r8_3 f<= *arg3))
            int32_t rax_11
            rax_11.b = r9 == 0
            r9 = rax_11
        
        void* rdx_4 = r8_3
        r8_3 += 0xc
        rdx_3 = rdx_4 - arg2
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return zx.q(r9)
