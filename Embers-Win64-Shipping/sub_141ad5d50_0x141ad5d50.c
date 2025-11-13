// 函数: sub_141ad5d50
// 地址: 0x141ad5d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int128_t zmm6
result, zmm6 = sub_141e1eab0(sub_141e23160(arg1), arg2)

if (*(arg1 + 0x28) != 0)
    int64_t r8_1 = sx.q(*(arg1 + 0x50))
    int64_t rcx_1 = *(arg1 + 0x40)
    int64_t* rsi_3 = r8_1 * 0x30 + rcx_1
    int128_t var_38_1 = zmm6
    int32_t r8_3 = (r8_1.d + 1) & 0x80000001
    
    if (r8_3 s< 0)
        r8_3 = ((r8_3 - 1) | 0xfffffffe) + 1
    
    int64_t* rdx_1 = *rsi_3
    float zmm1_1[0x4] = rsi_3[2].d
    float zmm0_1 = *(rsi_3 + 0xc)
    int64_t* rdi_3 = sx.q(r8_3) * 0x30 + rcx_1
    void* rcx_2 = *rdx_1
    
    if (not(zmm0_1 >= zmm1_1[0]))
        zmm1_1[0] = zmm1_1[0] f- *(rcx_2 + 0x90)
    
    float zmm2_1 = rsi_3[1].d
    
    if (not(zmm1_1[0] >= zmm2_1) && not(zmm2_1 > zmm0_1))
        *(rsi_3 + 0x1c) -= 1
    
    int32_t rax_2 = *(rsi_3 + 0x1c)
    int64_t r15
    r15.b = 0
    zmm6 = 0x3727c5ac
    
    if (rax_2 s<= 0)
        void* r14_1 = *rdi_3
        
        if (rdx_1 != r14_1)
            if (not(9.99999975e-06f f< *(r14_1 + 0x2c)))
                zmm1_1 = *(rcx_2 + 0x90)
                zmm0_1 = zmm0_1 - zmm2_1
                
                if (not(zmm0_1 >= 0f))
                    zmm0_1 = zmm0_1 + zmm1_1[0]
                
                zmm1_1[0] = zmm1_1[0] - zmm0_1
            
            if (9.99999975e-06f f< *(r14_1 + 0x2c) || not(zmm1_1[0] f> *(r14_1 + 0x28)))
                sub_141df01a0(r14_1 + 0x20, arg2[3].d)
                char rax_3
                rax_3, zmm6 = sub_141ded470(r14_1 + 0x20)
                
                if (rax_3 == 0)
                    zmm1_1 = *(r14_1 + 0x38)
                    
                    if (not(zmm1_1[0] >= 1f))
                        rdi_3[3].d = zmm1_1[0]
                        rsi_3[3].d = 1f - zmm1_1[0]
                else
                    rdi_3[1].d = *(rdi_3 + 0xc)
                    r15.b = 1
        else if (rax_2 s< 0)
            *(rdi_3 + 0xc) = zmm0_1
            rdi_3[1].d = zmm0_1
            r15.b = 1
    
    rsi_3[2].d = *(rsi_3 + 0xc)
    rdi_3[2].d = *(rdi_3 + 0xc)
    
    if (r15.b != 0)
        int32_t rax_7 = sub_141abbab0(arg1)
        int32_t rcx_8 = (*(arg1 + 0x50) + 1) & 0x80000001
        
        if (rcx_8 s< 0)
            rcx_8 = ((rcx_8 - 1) | 0xfffffffe) + 1
        
        int64_t r8_6 = *(arg1 + 0x40)
        *(arg1 + 0x50) = rcx_8
        int64_t rdx_3 = sx.q(rcx_8) * 6
        int32_t rcx_12 = (rcx_8 + 1) & 0x80000001
        
        if (rcx_12 s< 0)
            rcx_12 = ((rcx_12 - 1) | 0xfffffffe) + 1
        
        int64_t* rcx_16 = *(r8_6 + (rdx_3 << 3)) + 0x20
        *(r8_6 + (rdx_3 << 3) + 0x18) = 0x3f800000
        zmm6 = sub_141deef50(rcx_16)
        sub_141ac0740(arg1, sx.q(rcx_12) * 0x30 + r8_6, rax_7, (zx.o(0)).d)
        int64_t rcx_18 = sx.q(*(arg1 + 0x50))
        int64_t rdx_5 = *(arg1 + 0x40)
        rsi_3 = rcx_18 * 0x30 + rdx_5
        int32_t rcx_20 = (rcx_18.d + 1) & 0x80000001
        
        if (rcx_20 s< 0)
            rcx_20 = ((rcx_20 - 1) | 0xfffffffe) + 1
        
        rdi_3 = sx.q(rcx_20) * 0x30 + rdx_5
    
    void* rbx_4 = *arg2
    void arg_8
    result = sub_141e06760(rbx_4, sub_141df60d0(rbx_4, 0xffffffff, &arg_8), **rsi_3, 1, 
        (*(rsi_3 + 0x14))[0], rsi_3[3].d, rsi_3 + 0xc, &rsi_3[4])
    
    if (not(zmm6.d f>= rdi_3[3].d))
        void* r9_2
        r9_2.b = 1
        return sub_141e06760(rbx_4, sub_141df60d0(rbx_4, 0xffffffff, &arg_8), **rdi_3, r9_2.b, 
            *(rdi_3 + 0x14), rdi_3[3].d, rdi_3 + 0xc, &rdi_3[4])

return result
