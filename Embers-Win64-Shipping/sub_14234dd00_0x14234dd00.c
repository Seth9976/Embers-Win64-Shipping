// 函数: sub_14234dd00
// 地址: 0x14234dd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
uint32_t zmm6[0x4]
uint32_t var_48[0x4] = zmm6
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
int32_t* rbx = arg4
uint64_t result = zx.q((temp1 - temp0) s>> 1)
arg_18.d = result.d
uint32_t zmm0[0x4]
uint32_t zmm1[0x4]
float zmm2

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    int32_t arg_10 = rcx
    
    do
        int32_t r12_1 = result.d
        
        if (rcx s< arg2)
            uint64_t rdi_1
            
            do
                int32_t r15_1 = r12_1 * 2
                rdi_1 = zx.q(r15_1 + 1)
                uint64_t rax_3
                
                if ((rdi_1 + 1).d s< arg2)
                    int32_t rcx_1 = *rbx
                    void* rbp_1 = arg1[sx.q(rdi_1.d)]
                    void* r14_1 = arg1[sx.q(r15_1) + 2]
                    
                    if (rcx_1 == 4)
                    label_14234ddf9:
                        uint32_t zmm0_1[0x4] = sub_141dc8460(r14_1)
                        rax_3, zmm0 = sub_141dc8460(rbp_1)
                        zmm0_1[0] = zmm0_1[0] f- zmm0[0]
                        bool cond:6_1
                        
                        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f<= 9.99999975e-05f)
                            zmm0 = *(r14_1 + 0x190)
                            zmm1 = *(rbp_1 + 0x190)
                            
                            if (*rbx != 6)
                                cond:6_1 = zmm0[0] f> zmm1[0]
                            else
                                cond:6_1 = zmm1[0] f> zmm0[0]
                        else
                            cond:6_1 = zmm0[0] f> zmm0_1[0]
                        
                        rbx = arg4
                        rax_3.b = cond:6_1
                    else if (rcx_1 == 5)
                        zmm1 = *(r14_1 + 0x204)
                        zmm2 = *(rbp_1 + 0x204)
                        zmm1[0] = zmm1[0] f- zmm2
                        
                        if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999975e-05f)
                            rax_3.b = zmm2 f> zmm1[0]
                        else
                            zmm0 = *(rbp_1 + 0x190)
                            float temp13_1 = *(r14_1 + 0x190)
                            zmm0[0] f- temp13_1
                            rax_3.b = zmm0[0] f< temp13_1
                    else
                        if (rcx_1 == 6)
                            goto label_14234ddf9
                        
                        rax_3.b = 1
                    
                    if (rax_3.b != 0)
                        rdi_1 = zx.q(r15_1)
                    
                    rdi_1 = zx.q(rdi_1.d + 1)
                
                int32_t rcx_6 = *rbx
                int64_t r15_2 = sx.q(rdi_1.d)
                int64_t r12_2 = sx.q(r12_1)
                void* rbp_2 = arg1[r15_2]
                void* r14_2 = arg1[r12_2]
                bool cond:5_1
                
                if (rcx_6 == 4)
                label_14234de75:
                    uint32_t zmm0_2[0x4] = sub_141dc8460(r14_2)
                    rax_3, zmm0 = sub_141dc8460(rbp_2)
                    zmm0_2[0] = zmm0_2[0] f- zmm0[0]
                    
                    if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f<= 9.99999975e-05f)
                        zmm0 = *(r14_2 + 0x190)
                        zmm1 = *(rbp_2 + 0x190)
                        
                        if (*rbx != 6)
                            cond:5_1 = zmm0[0] f> zmm1[0]
                        else
                            cond:5_1 = zmm1[0] f> zmm0[0]
                    else
                        cond:5_1 = zmm0[0] f> zmm0_2[0]
                    
                    rbx = arg4
                    goto label_14234defb
                
                if (rcx_6 == 5)
                    zmm1 = *(r14_2 + 0x204)
                    zmm2 = *(rbp_2 + 0x204)
                    zmm1[0] = zmm1[0] f- zmm2
                    
                    if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999975e-05f)
                        cond:5_1 = zmm2 f> zmm1[0]
                    label_14234defb:
                        rax_3.b = cond:5_1
                    else
                        zmm0 = *(rbp_2 + 0x190)
                        float temp12_1 = *(r14_2 + 0x190)
                        zmm0[0] f- temp12_1
                        rax_3.b = zmm0[0] f< temp12_1
                    
                    if (rax_3.b == 0)
                        break
                else if (rcx_6 == 6)
                    goto label_14234de75
                
                int64_t rcx_11 = arg1[r12_2]
                arg1[r12_2] = arg1[r15_2]
                arg1[r15_2] = rcx_11
                r12_1 = rdi_1.d
            while (((rdi_1 << 1) + 1).d s< arg2)
            result = zx.q(arg_18.d)
            rcx = arg_10
        
        result = zx.q(result.d - 1)
        rcx -= 2
        arg_18.d = result.d
        arg_10 = rcx
    while (result.d s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)
int64_t i_1 = i

if (j s> 0)
    do
        result = arg1[i]
        int32_t r12_3 = 0
        uint64_t rcx_12 = *arg1
        *arg1 = result
        arg1[i] = rcx_12
        
        if (j s> 1)
            do
                int32_t r15_3 = r12_3 * 2
                uint64_t rdi_2 = zx.q(r15_3 + 1)
                
                if ((rdi_2 + 1).d s< j)
                    int32_t rcx_13 = *rbx
                    void* rbp_3 = arg1[sx.q(rdi_2.d)]
                    void* r14_3 = arg1[sx.q(r15_3) + 2]
                    
                    if (rcx_13 == 4)
                    label_14234dff9:
                        uint32_t zmm0_3[0x4] = sub_141dc8460(r14_3)
                        result, zmm0 = sub_141dc8460(rbp_3)
                        zmm0_3[0] = zmm0_3[0] f- zmm0[0]
                        bool cond:8_1
                        
                        if (_mm_and_ps(zmm0_3, 0x7fffffff)[0] f<= 9.99999975e-05f)
                            zmm0 = *(r14_3 + 0x190)
                            zmm1 = *(rbp_3 + 0x190)
                            
                            if (*rbx != 6)
                                cond:8_1 = zmm0[0] f> zmm1[0]
                            else
                                cond:8_1 = zmm1[0] f> zmm0[0]
                        else
                            cond:8_1 = zmm0[0] f> zmm0_3[0]
                        
                        rbx = arg4
                        result.b = cond:8_1
                    else if (rcx_13 == 5)
                        zmm1 = *(r14_3 + 0x204)
                        zmm2 = *(rbp_3 + 0x204)
                        zmm1[0] = zmm1[0] f- zmm2
                        
                        if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999975e-05f)
                            result.b = zmm2 f> zmm1[0]
                        else
                            zmm0 = *(rbp_3 + 0x190)
                            float temp11_1 = *(r14_3 + 0x190)
                            zmm0[0] f- temp11_1
                            result.b = zmm0[0] f< temp11_1
                    else
                        if (rcx_13 == 6)
                            goto label_14234dff9
                        
                        result.b = 1
                    
                    if (result.b != 0)
                        rdi_2 = zx.q(r15_3)
                    
                    rdi_2 = zx.q(rdi_2.d + 1)
                
                int32_t rcx_18 = *rbx
                int64_t r15_4 = sx.q(rdi_2.d)
                int64_t r12_4 = sx.q(r12_3)
                void* rbp_4 = arg1[r15_4]
                void* r14_4 = arg1[r12_4]
                bool cond:7_1
                
                if (rcx_18 == 4)
                label_14234e075:
                    uint32_t zmm0_4[0x4] = sub_141dc8460(r14_4)
                    result, zmm0 = sub_141dc8460(rbp_4)
                    zmm0_4[0] = zmm0_4[0] f- zmm0[0]
                    
                    if (_mm_and_ps(zmm0_4, 0x7fffffff)[0] f<= 9.99999975e-05f)
                        zmm0 = *(r14_4 + 0x190)
                        zmm1 = *(rbp_4 + 0x190)
                        
                        if (*rbx != 6)
                            cond:7_1 = zmm0[0] f> zmm1[0]
                        else
                            cond:7_1 = zmm1[0] f> zmm0[0]
                    else
                        cond:7_1 = zmm0[0] f> zmm0_4[0]
                    
                    rbx = arg4
                    goto label_14234e0fb
                
                if (rcx_18 == 5)
                    zmm1 = *(r14_4 + 0x204)
                    zmm2 = *(rbp_4 + 0x204)
                    zmm1[0] = zmm1[0] f- zmm2
                    
                    if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999975e-05f)
                        cond:7_1 = zmm2 f> zmm1[0]
                    label_14234e0fb:
                        result.b = cond:7_1
                    else
                        zmm0 = *(rbp_4 + 0x190)
                        float temp10_1 = *(r14_4 + 0x190)
                        zmm0[0] f- temp10_1
                        result.b = zmm0[0] f< temp10_1
                    
                    if (result.b == 0)
                        break
                else if (rcx_18 == 6)
                    goto label_14234e075
                
                int64_t rcx_23 = arg1[r12_4]
                arg1[r12_4] = arg1[r15_4]
                result = zx.q(((rdi_2 << 1) + 1).d)
                arg1[r15_4] = rcx_23
                r12_3 = rdi_2.d
            while (result.d s< j)
            
            i = i_1
        
        i -= 1
        j -= 1
        i_1 = i
    while (i s> 0)

return result
