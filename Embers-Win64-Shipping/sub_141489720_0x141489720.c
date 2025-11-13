// 函数: sub_141489720
// 地址: 0x141489720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(*(arg1 + 0x20) + 8))
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm6[0x4]
int128_t zmm7
float zmm8[0x4]
int128_t zmm9

if (rcx.d != 0 && (arg3 & 4) != 0 && (arg3 & 2) != 0 && rcx.d s> 0)
    int64_t rdi_1 = 0
    int128_t* rdx = arg2 + 0xc
    int64_t r14_1 = 0
    
    do
        void* rbx_1 = *(**(arg1 + 0x20) + (rdi_1 << 3))
        char rax_2
        rax_2, zmm1, zmm2, zmm3, zmm6, zmm7, zmm8, zmm9 =
            sub_141f8d5e0(rbx_1 + 0x170, arg2, rbx_1 + 0x54, rdx)
        
        if (rax_2 != 0 && sub_14121cac0(rbx_1 + 0x5d0, arg2, arg5, zmm3, zmm1, zmm2) != 0)
            int64_t* rbx_3 = *(arg1 + 0x38) + r14_1
            int64_t rsi_1 = sx.q(rbx_3[1].d)
            int32_t rax_4 = (rsi_1 + 1).d
            rbx_3[1].d = rax_4
            
            if (rax_4 s> *(rbx_3 + 0xc))
                sub_1405a4d70(rbx_3)
            
            *(*rbx_3 + (rsi_1 << 3)) = arg4
        
        rdi_1 += 1
        rdx = arg2 + 0xc
        r14_1 += 0x10
    while (rdi_1 s< rcx)

uint64_t result = sx.q(*(*(arg1 + 0x28) + 8))
uint64_t result_1 = result

if (result s> 0)
    float var_48_1[0x4] = zmm6
    int64_t r12_2 = 0
    int128_t var_58_1 = zmm7
    float var_68_1[0x4] = zmm8
    int128_t var_78_1 = zmm9
    zmm9 = zx.o(0)
    int64_t var_88_1 = 0
    
    do
        result = *(arg1 + 0x28)
        void* rdi_2 = *(*result + (r12_2 << 3))
        zmm6 = *(rdi_2 + 0x3b4)
        float zmm5[0x4] = *(rdi_2 + 0x3b8)
        zmm6[0] = zmm6[0] f- *arg2
        zmm5[0] = zmm5[0] f- *(arg2 + 4)
        zmm7.d = (*(rdi_2 + 0x3bc)).d f- *(arg2 + 8)
        void* r14_2 = *(rdi_2 + 0x5c0)
        int64_t* rsi_2 = *(r14_2 + 0x20)
        zmm2 = rsi_2[8].d
        zmm3 = rsi_2[0xa].d
        float zmm4[0x4] = rsi_2[0xc].d
        zmm8 = zmm3
        float zmm0 = zmm2[0] * zmm6[0]
        zmm4[0] = zmm4[0] f* zmm7.d
        zmm8[0] = zmm8[0] * zmm5[0]
        zmm8[0] = zmm8[0] + zmm0
        zmm8[0] = zmm8[0] + zmm4[0]
        zmm2[0] = zmm2[0] * zmm8[0]
        zmm3[0] = zmm3[0] * zmm8[0]
        zmm6[0] = zmm6[0] - zmm2[0]
        zmm4[0] = zmm4[0] * zmm8[0]
        zmm5[0] = zmm5[0] - zmm3[0]
        zmm3 = *(rdi_2 + 0x3c0)
        zmm3[0] = zmm3[0] f+ *(arg2 + 0x18)
        zmm0 = zmm7.d - zmm4[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm5[0] = zmm5[0] * zmm5[0]
        zmm5[0] = zmm5[0] + zmm6[0]
        zmm3[0] = zmm3[0] * zmm3[0]
        zmm5[0] = zmm5[0] + zmm0 * zmm0
        
        if (not(zmm5[0] >= zmm3[0]))
            if (not(zmm8[0] f>= zmm9.d))
                zmm5[0] = zmm5[0] * zmm5[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7.d = zmm7.d f* zmm7.d
                zmm5[0] = zmm5[0] + zmm6[0]
                zmm5[0] = zmm5[0] f+ zmm7.d
            
            if (zmm8[0] f>= zmm9.d || not(zmm5[0] > zmm3[0]))
                result, zmm9 = sub_141f8d780(rdi_2 + 0x3f0, arg2, arg2 + 0xc)
                
                if (result.b != 0)
                    if ((*(rdi_2 + 0x570) & 0x80) == 0)
                        zmm4 = data_1439b6df0
                    else
                        zmm4 = data_1439b6df4
                    
                    result = *(rdi_2 + 0x48)
                    zmm1 = *arg2
                    zmm3 = *(arg2 + 4)
                    zmm0 = *(arg2 + 8)
                    zmm3[0] = zmm3[0] f- *(result + 0xa40)
                    zmm1[0] = zmm1[0] f- *(result + 0xa3c)
                    zmm0 = zmm0 f- *(result + 0xa44)
                    zmm2 = *(arg2 + 0x18)
                    uint8_t rbx_4 = *(arg5 + 0x3a)
                    zmm3[0] = zmm3[0] * zmm3[0]
                    int64_t r10_1 = sx.q(*(arg4 + 0x20))
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm3[0] = zmm3[0] + zmm1[0]
                    zmm4[0] = zmm4[0] * zmm4[0]
                    zmm2[0] = zmm2[0] * zmm2[0]
                    zmm3[0] = zmm3[0] + zmm0 * zmm0
                    zmm3[0] = zmm3[0] * zmm4[0]
                    zmm3[0] = zmm3[0] f* *(result + 0xd60)
                    rbx_4 = rbx_4 u>> 3 & 1
                    
                    if (r10_1.d != 0)
                        void* r9_1 = *(arg4 + 0xf0)
                        void* const rcx_9
                        
                        if (*(r9_1 + 0x1d10) == *(r9_1 + 0x1d3c))
                        label_141489a40:
                            rcx_9 = nullptr
                        else
                            void* r8_3 = r9_1 + 0x1d40
                            void* rcx_7 = *(r8_3 + 8)
                            
                            if (rcx_7 != 0)
                                r8_3 = rcx_7
                            
                            int32_t rax_8 = *(r8_3 + (((sx.q(*(r9_1 + 0x1d50)) - 1) & r10_1) << 2))
                            
                            if (rax_8 == 0xffffffff)
                            label_141489a40_1:
                                rcx_9 = nullptr
                            else
                                int64_t r8_4 = *(r9_1 + 0x1d08)
                                
                                while (true)
                                    int64_t rdx_8 = sx.q(rax_8) * 5
                                    rcx_9 = r8_4 + (rdx_8 << 3)
                                    
                                    if (*(r8_4 + (rdx_8 << 3)) == r10_1.d)
                                        break
                                    
                                    rax_8 = *(rcx_9 + 0x20)
                                    
                                    if (rax_8 == 0xffffffff)
                                        goto label_141489a40_2
                                
                                if (rax_8 == 0xffffffff)
                                label_141489a40_2:
                                    rcx_9 = nullptr
                        
                        result = *(rcx_9 + 8)
                        
                        if (result == 0)
                            rbx_4 = 0
                        else
                            result = *(result + 8)
                            
                            if ((*(result + 0x3a) & 8) == 0)
                                rbx_4 = 0
                            else
                                rbx_4 = 1
                    
                    if (zmm3[0] > zmm2[0] == 0)
                        result = sub_14121cac0(rdi_2 + 0x5d0, arg2, arg5, zmm3, zmm1, zmm2)
                        
                        if (result.b != 0)
                            if ((rsi_2[0x27].b & 4) == 0)
                            label_141489ab2:
                                result = zx.q(*(rdi_2 + 0x570)) & 0x80
                                
                                if ((result.d == 0 || (*(arg5 + 0x39) & 4) != 0)
                                        && (rbx_4 == 0 || result.d != 0))
                                    if (*(r14_2 + 0x7c) == 0)
                                    label_141489af3:
                                        
                                        if (*(arg1 + 0x34) == 0 || (*(arg5 + 0x37) & 8) != 0)
                                            result = (*(*rsi_2 + 0x98))(rsi_2)
                                            
                                            if (result.b == 0 || (*(arg5 + 0x37) & 8) == 0)
                                                int64_t* rbx_6 = var_88_1 + *(arg1 + 0x48)
                                                int64_t rdi_3 = sx.q(rbx_6[1].d)
                                                int32_t rax_13 = (rdi_3 + 1).d
                                                rbx_6[1].d = rax_13
                                                
                                                if (rax_13 s> *(rbx_6 + 0xc))
                                                    sub_1405a4d70(rbx_6)
                                                
                                                result = *rbx_6
                                                *(result + (rdi_3 << 3)) = arg4
                                    else
                                        result = sub_14122cc00(r14_2)
                                        
                                        if (result.b == 0)
                                            goto label_141489af3
                                        
                                        result = *(r14_2 + 0x20)
                                        
                                        if (*(result + 0xf8) == 0xffffffff
                                                || (*(arg5 + 0x37) & 8) != 0)
                                            goto label_141489af3
                            else
                                if (sub_14122cc00(r14_2) == 0)
                                    goto label_141489ab2
                                
                                result = (*(*rsi_2 + 0x98))(rsi_2)
                                
                                if (result.b != 0)
                                    goto label_141489ab2
        
        var_88_1 += 0x10
        r12_2 += 1
    while (r12_2 s< result_1)

return result
