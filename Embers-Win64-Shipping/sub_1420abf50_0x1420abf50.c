// 函数: sub_1420abf50
// 地址: 0x1420abf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
int64_t* rcx = *(arg3 + 0x20)
void* rsi = arg3
float zmm12[0x4] = arg2

if (rcx == 0)
    return 

void* rax = (*(*rcx + 0x260))(rcx)

if (rax == 0)
    return 

rax = sub_140d21950(rax, sub_142545970())
void* rbx_2 = rax

if (rax == 0)
    return 

int32_t rax_3 = sub_142082360(arg1)
int32_t r10_1 = *(arg1 + 0xa0)
float zmm0_1[0x4]

if (r10_1 != 0)
    zmm0_1 = *(rsi + 0x28)

int32_t var_d8
int64_t var_d0

if (r10_1 == 0 || zmm12[0] <= zmm0_1[0] || arg4 != 0)
    var_d0 = 0
    var_d8 = 0
    arg_18.b = 0
    sub_14208c020(arg1, zmm12, &var_d0, &var_d8, &arg_18)
    int64_t r9_7 = var_d0
    
    if (r9_7 != 0)
        char* var_f8_1
        var_f8_1.d = var_d8
        (*(*rbx_2 + 0x48))(rbx_2, *(arg1 + 0x90), zx.q(rax_3), r9_7, var_f8_1, 0, arg_18.b)
else
    int32_t rdx_2 = -1
    int32_t r8 = -1
    
    if (r10_1 - 1 s> 0xffffffff)
        int32_t* rax_4 = *(arg1 + 0x98)
        int64_t rcx_3 = -1
        
        while (not(zmm0_1[0] f< *rax_4))
            r8 += 1
            rcx_3 += 1
            rax_4 = &rax_4[8]
            
            if (rcx_3 s>= sx.q(r10_1 - 1))
                break
        
        if (r10_1 - 1 s> 0xffffffff)
            int32_t* rax_5 = *(arg1 + 0x98)
            int64_t rcx_4 = -1
            
            while (not(zmm12[0] f< *rax_5))
                rdx_2 += 1
                rcx_4 += 1
                rax_5 = &rax_5[8]
                
                if (rcx_4 s>= sx.q(r10_1 - 1))
                    break
    
    int64_t r15_1 = sx.q(r8)
    int64_t r12_1 = sx.q(rdx_2)
    rax = r15_1
    var_d8.q = rax
    var_d0 = r12_1
    
    if (r15_1 s<= r12_1)
        int32_t zmm4_1 = 0x3f000000
        int128_t zmm7
        int128_t var_48_1 = zmm7
        float zmm8[0x4]
        float var_58_1[0x4] = zmm8
        float zmm6[0x4]
        float var_38_1[0x4] = zmm6
        float zmm9[0x4]
        float var_68_1[0x4] = zmm9
        float zmm10[0x4]
        float var_78_1[0x4] = zmm10
        int128_t zmm11
        int128_t var_88_1 = zmm11
        
        do
            void* rdi_1 = *(arg1 + 0x98)
            int64_t var_f8
            char var_e8_1
            void* r9_2
            float zmm2[0x4]
            
            if (r15_1 != -1)
                int64_t r14_2 = r15_1 << 5
                void* rsi_1 = *(r14_2 + rdi_1 + 8)
                zmm10 = *(r14_2 + rdi_1)
                zmm7 = *(r14_2 + rdi_1 + 0x10)
                zmm2 = *(r14_2 + rdi_1 + 0x14)
                zmm11 = *(r14_2 + rdi_1 + 0x18)
                float zmm3[0x4]
                
                if (r15_1 != rax)
                    zmm3 = zmm10
                else
                    zmm3 = *(arg_18 + 0x28)
                
                if (r15_1 != r12_1)
                    zmm6 = *(r14_2 + rdi_1 + 0x20)
                else
                    zmm6 = zmm12
                
                char rax_7 = (*(r14_2 + rdi_1 + 0x1c)).b
                
                if ((rax_7 & 1) == 0)
                    zmm6[0] = zmm6[0] - zmm10[0]
                    zmm6[0] = zmm6[0] f* zmm11.d
                    zmm6[0] = zmm6[0] f+ zmm7.d
                    
                    if (rsi_1 != 0)
                        if (zmm6[0] >= 0f)
                            zmm0_1 = *(rsi_1 + 0x90)
                            zmm0_1[0] = zmm0_1[0] - zmm2[0]
                            zmm0_1[0] = zmm0_1[0] + 9.99999975e-05f
                            
                            if (not(zmm6[0] < zmm0_1[0]))
                                zmm6 = zmm0_1
                        else
                            zmm6 = zx.o(0)
                    
                    if ((rax_7 & 2) == 0)
                        goto label_1420ac385
                    
                    if (rsi_1 != 0)
                        arg2 = *(rsi_1 + 0x90)
                        zmm2[0] = zmm2[0] f+ zmm7.d
                        zmm0_1 = zmm6
                        zmm0_1[0] = zmm0_1[0] f- zmm7.d
                        arg2[0] = arg2[0] - zmm2[0]
                        zmm6 = arg2
                        zmm6[0] = zmm6[0] - zmm0_1[0]
                        zmm6[0] = zmm6[0] f+ zmm7.d
                    label_1420ac385:
                        
                        if (rsi_1 != 0)
                            char rcx_13
                            
                            if (zmm6[0] f== zmm7.d)
                                rcx_13 = 0
                            else
                                rcx_13 = (not.d(*(arg1 + 0xa8))).b & 1
                            
                            var_f8.d = zmm6[0]
                            (*(*rbx_2 + 0x48))(rbx_2, *(arg1 + 0x90), zx.q(rax_3), rsi_1, var_f8, 
                                rcx_13, 0)
                else if (rsi_1 != 0)
                    zmm9 = *(rsi_1 + 0x90)
                    zmm9[0] = zmm9[0] - zmm2[0]
                    zmm2[0] = zmm2[0] f+ zmm7.d
                    zmm9[0] = zmm9[0] - zmm2[0]
                    float temp0_1[0x4] = _mm_max_ss(zmm9[0], 0x3c23d70a)
                    
                    if ((rax_7 & 2) == 0)
                        zmm0_1 = 0x3f800000
                        zmm3[0] = zmm3[0] - zmm10[0]
                        zmm0_1[0] = 1f / temp0_1[0]
                        zmm3[0] = zmm3[0] f* zmm11.d
                        zmm6[0] = zmm6[0] - zmm10[0]
                        zmm3[0] = zmm3[0] f+ zmm7.d
                        zmm6[0] = zmm6[0] f* zmm11.d
                        zmm3[0] = zmm3[0] * zmm0_1[0]
                        zmm6[0] = zmm6[0] f+ zmm7.d
                        zmm3[0] = zmm3[0] + zmm3[0]
                        zmm6[0] = zmm6[0] * zmm0_1[0]
                        zmm3[0] = zmm3[0] f- zmm4_1
                        zmm6[0] = zmm6[0] + zmm6[0]
                        int32_t rax_8 = int.d(zmm3[0])
                        zmm6[0] = zmm6[0] f- zmm4_1
                        int32_t i_2 = (int.d(zmm6[0]) s>> 1) - (rax_8 s>> 1)
                        
                        if (i_2 s> 0)
                            zmm9[0] = zmm9[0] + 9.99999975e-05f
                            uint64_t i_1 = zx.q(i_2)
                            uint64_t i
                            
                            do
                                var_f8.d = zmm9[0]
                                (*(*rbx_2 + 0x48))(rbx_2, *(arg1 + 0x90), zx.q(rax_3), rsi_1, 
                                    var_f8, 1, 1)
                                var_f8.d = zmm7.d
                                (*(*rbx_2 + 0x48))(rbx_2, *(arg1 + 0x90), zx.q(rax_3), rsi_1, 
                                    var_f8, 0, 1)
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                            r12_1 = var_d0
                    
                    zmm6[0] = zmm6[0] - zmm10[0]
                    zmm6[0] = zmm6[0] f* zmm11.d
                    zmm0_1, zmm7 = sub_140a454f0(zmm6, temp0_1)
                    bool cond:0_1 = (*(r14_2 + rdi_1 + 0x1c) & 2) == 0
                    float zmm4_2[0x4] = zmm0_1
                    zmm4_2[0] = zmm4_2[0] f+ zmm7.d
                    
                    if (not(cond:0_1))
                        zmm3 = *(r14_2 + rdi_1 + 0x10)
                        zmm0_1 = zmm4_2
                        zmm2 = *(rsi_1 + 0x90)
                        zmm0_1[0] = zmm0_1[0] - zmm3[0]
                        zmm3[0] = zmm3[0] f+ *(r14_2 + rdi_1 + 0x14)
                        zmm2[0] = zmm2[0] - zmm3[0]
                        zmm4_2 = zmm2
                        zmm4_2[0] = zmm4_2[0] - zmm0_1[0]
                        zmm4_2[0] = zmm4_2[0] + zmm3[0]
                    
                    var_f8.d = zmm4_2[0]
                    (*(*rbx_2 + 0x48))(rbx_2, *(arg1 + 0x90), zx.q(rax_3), zmm3, var_f8, 
                        not.b(*(arg1 + 0xa8)) & 1, 1)
                
                if (r15_1 s>= r12_1)
                    rax = var_d8.q
                else
                    int64_t rcx_15 = *(arg1 + 0x98)
                    int64_t rax_15 = (r15_1 + 1) << 5
                    char rdx_7 = (*(rax_15 + rcx_15 + 0x1c)).b
                    zmm2 = *(rax_15 + rcx_15 + 0x10)
                    r9_2 = *(rax_15 + rcx_15 + 8)
                    
                    if ((rdx_7 & 2) == 0)
                        goto label_1420ac40d
                    
                    if (r9_2 == 0)
                        rax = var_d8.q
                    else
                        arg2 = *(r9_2 + 0x90)
                        zmm2[0] = zmm2[0] f+ *(rax_15 + rcx_15 + 0x14)
                        arg2[0] = arg2[0] - zmm2[0]
                        arg2[0] = arg2[0] + zmm2[0]
                        zmm2 = arg2
                    label_1420ac40d:
                        
                        if (r9_2 != 0)
                            var_e8_1 = rdx_7 & 1
                            goto label_1420ac42e
                        
                        rax = var_d8.q
            else
                char rcx_5 = (*(rdi_1 + 0x1c)).b
                zmm2 = *(rdi_1 + 0x10)
                r9_2 = *(rdi_1 + 8)
                
                if ((rcx_5 & 2) == 0)
                    goto label_1420ac133
                
                if (r9_2 != 0)
                    arg2 = *(r9_2 + 0x90)
                    zmm2[0] = zmm2[0] f+ *(rdi_1 + 0x14)
                    arg2[0] = arg2[0] - zmm2[0]
                    arg2[0] = arg2[0] + zmm2[0]
                    zmm2 = arg2
                label_1420ac133:
                    
                    if (r9_2 != 0)
                        var_e8_1 = rcx_5 & 1
                    label_1420ac42e:
                        var_f8.d = zmm2[0]
                        (*(*rbx_2 + 0x48))(rbx_2, *(arg1 + 0x90), zmm2, r9_2, var_f8, 0, var_e8_1)
                        rax = var_d8.q
            zmm4_1 = 0x3f000000
            r15_1 += 1
        while (r15_1 s<= r12_1)
        
        rsi = arg_18
*(rsi + 0x28) = zmm12[0]
