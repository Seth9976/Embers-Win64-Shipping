// 函数: sub_1408c4a00
// 地址: 0x1408c4a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0x3f800000
int128_t zmm7 = arg6
float zmm8[0x4] = arg2

if (*(arg1 + 0x70) != 0)
    *(arg1 + 0x70) = 0
    int32_t var_78_1 = 0
    int32_t var_80_1 = 0x3f800000
    int32_t var_88_1 = zmm7.d
    sub_1408c4a00(arg5, zx.o(0))

arg5 = *(arg1 + 0x50)

if (not(arg5 f>= *(arg1 + 0x1c4)))
    arg5 = arg5 + zmm8[0]
    *(arg1 + 0x50) = arg5
else if (*(arg1 + 0x282) == 0)
    bool cond:1_1 = *(arg1 + 0x280) == 0
    arg5 = arg4.d
    arg2 = arg4:4.d
    *(arg1 + 0x64) = arg5
    *(arg1 + 0x68) = arg2[0]
    *(arg1 + 0x6c) = zmm7.d
    
    if (cond:1_1)
        arg5 = arg8
        *(arg1 + 0x58) = arg7[0]
    else
        void* rcx = *(arg1 + 0x270)
        *(arg1 + 0x28c) = arg5
        void* rax_1 = rcx
        *(arg1 + 0x290) = arg2[0]
        
        if (rcx == 0)
            goto label_1408c4b40
        
        if (*(rcx + 0x27e0) != 0)
            arg2 = arg3[1]
            float zmm2 = *arg3
            arg2[0] = arg2[0] * -0.5f
            *(rcx + 0x17f8) = zmm2 * -0.5f
            *(rcx + 0x17fc) = arg2[0]
            arg2 = arg3[1]
            void* rax_2 = *(arg1 + 0x270)
            float zmm3 = *arg3 * 0.5f
            arg2[0] = arg2[0] * 0.5f
            *(rax_2 + 0x1800) = zmm3
            *(rax_2 + 0x1804) = arg2[0]
            rax_1 = *(arg1 + 0x270)
        label_1408c4b40:
            
            if (rax_1 == 0 || *(rax_1 + 0x27e1) == 0)
                goto label_1408c4b80
        else if (*(rax_1 + 0x27e1) == 0)
            goto label_1408c4b80
        
        if (*(rax_1 + 0x27e2) == 0)
            zmm6.d = arg3[1].d f/ *(rax_1 + 0x27e8)
        label_1408c4b80:
            arg5 = zmm8[0]
            *(arg1 + 0x58) = zmm6.d
            arg5 = arg5 f+ *(arg1 + 0x54)
        else
            arg5 = zmm8[0]
            zmm6.d = (*arg3).d f/ *(rax_1 + 0x27e4)
            *(arg1 + 0x58) = zmm6.d
            arg5 = arg5 f+ *(arg1 + 0x54)
    
    *(arg1 + 0x54) = arg5
    float zmm8_1 = sub_1408c4f80(arg1, zmm8)
    int32_t i = 0
    
    if (*(arg1 + 0xc8) s> 0)
        int64_t r15_1 = 0
        
        do
            int32_t r14_1 = 0
            int64_t rdi_1 = 0
            int64_t r12_1 = sx.q(*(r15_1 + *(arg1 + 0xc0) + 0x18))
            
            if (r12_1 s> 0)
                do
                    void* rbx_1 = *(*(r15_1 + *(arg1 + 0xc0) + 0x10) + (rdi_1 << 3))
                    
                    if (sub_1408c0250(rbx_1) != 0 && sub_1408c0320(rbx_1) != 0
                            && *(rbx_1 + 0x282) == 0)
                        *(rbx_1 + 0x282) = 1
                        void* rbx_3 = *(arg1 + 0xc0) + r15_1
                        int64_t rbp_1 = sx.q(*(rbx_3 + 0x28))
                        int32_t rax_7 = (rbp_1 + 1).d
                        *(rbx_3 + 0x28) = rax_7
                        
                        if (rax_7 s> *(rbx_3 + 0x2c))
                            sub_1405a4cf0(rbx_3 + 0x20)
                        
                        *(*(rbx_3 + 0x20) + (rbp_1 << 2)) = r14_1
                    
                    r14_1 += 1
                    rdi_1 += 1
                while (rdi_1 s< r12_1)
            
            i += 1
            r15_1 += 0x50
        while (i s< *(arg1 + 0xc8))
    
    *(arg1 + 8) = zmm8_1 f+ *(arg1 + 8)
    return sub_1408bc1e0(arg1)

return arg5
