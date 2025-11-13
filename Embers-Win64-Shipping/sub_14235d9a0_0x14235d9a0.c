// 函数: sub_14235d9a0
// 地址: 0x14235d9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
void*** rax
uint32_t rdx
rax, rdx = j_sub_140a82f30(0x6e0)
int64_t r12 = 0
void*** result

if (rax == 0)
    result = nullptr
else
    void*** result_2
    result_2, rdx = sub_141db5dc0(rax, arg2)
    result = result_2

rdx.b = 0
result[0xa] = *arg1
void** r13 = *arg3
void*** result_1 = result
uint32_t arg_18 = rdx
void* r14_1 = &r13[sx.q(arg3[1].d)]
void* var_f8 = r14_1
int32_t var_e0

if (r13 == r14_1)
    *(result + 0x204) = 0xbf800000
else
    void* r10_1 = &result[0xb]
    uint32_t zmm6[0x4]
    uint32_t var_48_1[0x4] = zmm6
    uint32_t zmm7[0x4]
    uint32_t var_58_1[0x4] = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    void* var_100_1 = r10_1
    
    do
        int64_t* rsi_1 = *r13
        zmm7 = *(rsi_1 + 0x24)
        
        if (zmm7[0] f>= 0f)
            zmm7 = _mm_min_ss(zmm7[0], 0x3f800000)
        else
            zmm7 = zx.o(0)
        
        zmm7[0] = zmm7[0] f- 1f
        
        if (not(_mm_and_ps(zmm7, 0x7fffffff)[0] f<= 9.99999994e-09f))
            int64_t* r14_2 = *rsi_1
            int64_t rbp = 0
            int64_t rcx_1 = sx.q(rsi_1[1].d)
            uint64_t r15_2 = rcx_1 << 3 u>> 3
            
            if (r14_2 u> &r14_2[rcx_1])
                r15_2 = 0
            
            if (r15_2 != 0)
                zmm8 = _mm_cvtepi32_ps(zx.o(rcx_1.d))
                
                do
                    void* rdi_1 = *r14_2
                    int32_t* rdx_5
                    
                    if (*(rdi_1 + 0x60) == *(rdi_1 + 0x8c))
                    label_14235db7e:
                        rdx_5 = nullptr
                    else
                        void* r8 = rdi_1 + 0x90
                        void* rdx_2 = *(r8 + 8)
                        int64_t r9 = sx.q(rsi_1[2].d)
                        
                        if (rdx_2 != 0)
                            r8 = rdx_2
                        
                        int32_t rax_5 = *(r8 + (((sx.q(*(rdi_1 + 0xa0)) - 1) & r9) << 2))
                        
                        if (rax_5 == 0xffffffff)
                        label_14235db7e_1:
                            rdx_5 = nullptr
                        else
                            while (true)
                                rdx_5 = (sx.q(rax_5) << 5) + *(rdi_1 + 0x58)
                                
                                if (*rdx_5 == r9.d)
                                    break
                                
                                rax_5 = rdx_5[6]
                                
                                if (rax_5 == 0xffffffff)
                                    goto label_14235db7e_2
                            
                            if (rax_5 == 0xffffffff)
                            label_14235db7e_2:
                                rdx_5 = nullptr
                    
                    float _Y = zmm8.d f- _mm_cvtepi32_ps(zx.o(rdx_5[1]))[0]
                    zmm6 = powf(zmm7[0], _Y)
                    uint32_t zmm0_1[0x4]
                    
                    if ((*(rsi_1 + 0x2c) & 1) != 0)
                        zmm0_1 = powf(0x41200000[0], rdx_5[4] f* 0.0500000007f)
                    
                    if ((*(rsi_1 + 0x2c) & 1) == 0 || not(zmm0_1[0] f< zmm6[0]))
                        sub_142376e80(rdi_1, &rdx_5[1], zmm6, rsi_1[5].d)
                    
                    r14_2 = &r14_2[1]
                    rbp += 1
                while (rbp != r15_2)
                
                r10_1 = var_100_1
                rdx = arg_18
            
            r14_1 = var_f8
            result = result_1
        
        uint32_t rdx_7 = zx.d(rdx.b)
        
        if (rsi_1[4].b == 5)
            rdx_7 = 1
        
        arg_18 = rdx_7
        
        if (*(r10_1 + 8) == *(r10_1 + 0x34))
        label_14235dc5c:
            int64_t rbx_2 = sx.q(rsi_1[1].d)
            var_e0 = rbx_2.d
            int64_t var_d4_1 = 0
            int64_t var_dc_1 = 0
            int32_t rax_8 = (rbx_2 + 1).d
            rsi_1[1].d = rax_8
            
            if (rax_8 s> *(rsi_1 + 0xc))
                sub_1405a4d70(rsi_1)
                r10_1 = var_100_1
            
            *(*rsi_1 + (rbx_2 << 3)) = result
            sub_14234d530(r10_1, &rsi_1[2], &var_e0)
        else
            void* rdx_8 = *(r10_1 + 0x40)
            void* r8_2 = r10_1 + 0x38
            int64_t r9_1 = sx.q(rsi_1[2].d)
            
            if (rdx_8 != 0)
                r8_2 = rdx_8
            
            int32_t rax_7 = *(r8_2 + (((sx.q(*(r10_1 + 0x48)) - 1) & r9_1) << 2))
            
            if (rax_7 == 0xffffffff)
                goto label_14235dc5c
            
            int64_t rdx_9 = *r10_1
            
            while (true)
                int32_t* rcx_10 = sx.q(rax_7) << 5
                
                if (*(rcx_10 + rdx_9) == r9_1.d)
                    break
                
                rax_7 = *(rcx_10 + rdx_9 + 0x18)
                
                if (rax_7 == 0xffffffff)
                    goto label_14235dc5c
            
            if (rax_7 == 0xffffffff)
                goto label_14235dc5c
            
            int64_t var_f0
            int64_t* rax_15 = sub_141dcb120(result, &var_f0)
            int16_t* const r9_2
            
            if (rax_15[1].d == 0)
                r9_2 = &data_142d40450
            else
                r9_2 = *rax_15
            
            sub_140af98a0("Unknown", 0x9a, 
                Attempting to add active sound '%s' to concurrency group multiple times.", r9_2)
            int64_t rcx_18 = var_f0
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            sub_140afbb40()
        
        r10_1 = var_100_1
        r13 = &r13[1]
        rdx = arg_18
    while (r13 != r14_1)
    
    if (rdx.b == 0)
        *(result + 0x204) = 0xbf800000

int64_t* rax_10 = arg_20
void** rdi_2 = *rax_10
uint64_t r14_4 = sx.q(rax_10[1].d) << 3 u>> 3

if (rdi_2 u> &rdi_2[rax_10[1]])
    r14_4 = 0

if (r14_4 != 0)
    int64_t* rsi_2 = arg1
    
    do
        void* rbx_3 = *rdi_2
        sub_142372980(rsi_2, rbx_3)
        
        if (*(rbx_3 + 0x185) != 2 && sub_141e80a60(*rsi_2, rbx_3) == 0)
            arg_20.d = 0
            char rax_14
            int32_t zmm0_3
            rax_14, zmm0_3 = sub_141dc78d0(rbx_3, &arg_20)
            void* rcx_16 = *(rbx_3 + 0x50)
            
            if (rax_14 == 0)
                zmm0_3 = sub_141e744f0(rcx_16, rbx_3)
            else
                sub_141e89d80(rcx_16, rbx_3)
            
            sub_141e71360(&var_e0)
            
            if (sub_141e8d400(rbx_3, 0, &var_e0, zmm0_3) != 0)
                sub_141dbcc30(rbx_3)
                sub_141e74a30(*(rbx_3 + 0x50), &var_e0)
            
            if (rax_14 != 0)
                int128_t zmm2_1 = arg_20.d
                *(rbx_3 + 0x185) = 2
                sub_141c46d20(rbx_3 + 0x1ac, zx.o(0), zmm2_1, 1)
                sub_141c45d50(rbx_3 + 0x1ac, arg_20.d)
            
            rsi_2 = arg1
        
        rdi_2 = &rdi_2[1]
        r12 += 1
    while (r12 != r14_4)

return result
