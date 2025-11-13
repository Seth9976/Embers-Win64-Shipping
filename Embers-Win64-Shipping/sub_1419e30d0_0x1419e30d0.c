// 函数: sub_1419e30d0
// 地址: 0x1419e30d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_58 = nullptr
float var_50 = 0f
int64_t r15
r15.b = 1
sub_1419e2a70(arg1 + 0xe8, arg2, &var_58)
int64_t* r14 = var_58
int64_t* r8_1 = r14
void* rsi = &r14[sx.q(var_50) * 3]
int32_t* arg_8
int32_t* arg_18
float zmm0_1[0x4]
float zmm1_1
float zmm2_1
float zmm3_1[0x4]

if (r14 == rsi)
label_1419e31a1:
    int64_t* rdi_1 = r14
    
    if (r14 != rsi)
        do
            int32_t* rcx_3 = *rdi_1
            int32_t* rbx_1 = rdi_1[1]
            
            if (rcx_3[0x10].b == 0)
                if (rbx_1[0x10].b == 0)
                    zmm0_1 = *(*(rcx_3 + 0x38) + 0x2c8)
                    zmm1_1 = *(*(rbx_1 + 0x38) + 0x2c8)
                    
                    if (zmm0_1[0] != zmm1_1)
                    label_1419e32ab:
                        
                        if (zmm1_1 > zmm0_1[0])
                            rbx_1 = rcx_3
                    else
                        zmm0_1 = rcx_3[0xb]
                        zmm1_1 = rbx_1[0xb]
                        
                        if (zmm0_1[0] != zmm1_1)
                            goto label_1419e32ab
                        
                        if (rcx_3[0xc][0] f< rbx_1[0xc])
                            rbx_1 = rcx_3
                else
                    rbx_1 = rcx_3
            
            if ((rdi_1[2].d != 1 || *(*(rbx_1 + 0x38) + 0x2bc) == 0) && rbx_1 != 0)
                bool cond:0_1 = rbx_1[0x14].b == 0
                int32_t* arg_20 = rbx_1
                
                if (not(cond:0_1))
                    arg_18 = rbx_1
                    zmm0_1 = rbx_1[0xc]
                    void* rax_8 = *(rbx_1 + 0x38)
                    zmm2_1 = *rbx_1
                    zmm3_1 = rbx_1[1]
                    zmm0_1[0] = zmm0_1[0] f* *(rax_8 + 0x29c)
                    zmm0_1[0] = zmm0_1[0] f* *(rax_8 + 0x298)
                    char var_48_2 = 1
                    float temp0_2[0x4] = _mm_max_ss(zmm0_1[0], zmm0_1[0])
                    zmm1_1 = temp0_2[0] + zmm2_1
                    temp0_2[0] = temp0_2[0] + zmm3_1[0]
                    zmm2_1 = zmm2_1 - temp0_2[0]
                    zmm3_1[0] = zmm3_1[0] - temp0_2[0]
                    var_50 = zmm1_1
                    var_50 = temp0_2[0]
                    var_58.d = zmm2_1
                    var_58:4.d = zmm3_1[0]
                    sub_1419e4ce0(arg1 + 0xe8, &arg_18, &var_58)
                    rbx_1[0x14].b = 0
                    sub_140b91690(arg1 + 0x30, &arg_8, &arg_20, nullptr)
            
            rdi_1 = &rdi_1[3]
        while (rdi_1 != rsi)
else
    while (true)
        void* rdx = *r8_1
        void* const rcx_2 = r8_1[1]
        
        if (*(rdx + 0x40) == 0)
            if (*(rcx_2 + 0x40) == 0)
                zmm0_1 = *(*(rdx + 0x38) + 0x2c8)
                zmm1_1 = *(*(rcx_2 + 0x38) + 0x2c8)
                
                if (zmm0_1[0] != zmm1_1)
                label_1419e3175:
                    
                    if (zmm1_1 > zmm0_1[0])
                        rcx_2 = rdx
                else
                    zmm0_1 = *(rdx + 0x2c)
                    zmm1_1 = *(rcx_2 + 0x2c)
                    
                    if (zmm0_1[0] != zmm1_1)
                        goto label_1419e3175
                    
                    if ((*(rdx + 0x30))[0] f< *(rcx_2 + 0x30))
                        rcx_2 = rdx
            else
                rcx_2 = rdx
        
        if (r8_1[2].d == 1 && *(*(rcx_2 + 0x38) + 0x2bc) != 0)
            rcx_2 = nullptr
        
        if (rcx_2 == arg2)
            r15.b = 0
            arg_18 = arg2
            
            if (arg2[0x14].b != 0)
                arg_8 = arg2
                zmm0_1 = arg2[0xc]
                void* rax_4 = *(arg2 + 0x38)
                zmm2_1 = *arg2
                zmm3_1 = arg2[1]
                zmm0_1[0] = zmm0_1[0] f* *(rax_4 + 0x298)
                zmm0_1[0] = zmm0_1[0] f* *(rax_4 + 0x29c)
                char var_48_1 = 1
                float temp0_1[0x4] = _mm_max_ss(zmm0_1[0], zmm0_1[0])
                zmm1_1 = zmm2_1 + temp0_1[0]
                zmm3_1[0] = zmm3_1[0] + temp0_1[0]
                zmm2_1 = zmm2_1 - temp0_1[0]
                zmm3_1[0] = zmm3_1[0] - temp0_1[0]
                var_50 = zmm1_1
                var_50 = zmm3_1[0]
                var_58.d = zmm2_1
                var_58:4.d = zmm3_1[0]
                sub_1419e4ce0(arg1 + 0xe8, &arg_8, &var_58)
                arg2[0x14].b = 0
                sub_140b91690(arg1 + 0x30, &arg_8, &arg_18, nullptr)
            
            break
        
        r8_1 = &r8_1[3]
        
        if (r8_1 == rsi)
            goto label_1419e31a1

if (r14 != 0)
    sub_140a74f90(r14)

return zx.q(r15.b)
