// 函数: sub_142606150
// 地址: 0x142606150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

char rax

if (arg4 != 0xffffffff)
    rax = (arg4.b - 4) & 7
else
    rax = 0x80

void* rcx = *(arg3 + 8)
int64_t rbx_1 = 0
char arg_10 = rax
int32_t i_1 = 0

if (*(rcx + 0x34) s<= 0)
    return 

int64_t var_68_1 = 0
int32_t i

do
    int64_t rdi_1 = *(arg3 + 0x48)
    int64_t rbx_2 = rbx_1 * 5
    
    if (*(rdi_1 + (rbx_2 << 3) + 0x26) == rax)
        char r8 = *(rdi_1 + (rbx_2 << 3) + 0x27)
        int32_t* r12_3 = (zx.q(*(rdi_1 + (rbx_2 << 3) + 0x24)) << 5) + *(arg3 + 0x10)
        char r14_1 = r8 s>> 7 & 0x20
        uint64_t rax_1 = zx.q(*r12_3)
        
        if (rax_1.d != 0xffffffff)
            int32_t rdx = *(rcx + 0x20)
            int64_t* rax_3
            
            if (rax_1.d u>= rdx)
                rax_3 = (sx.q(rax_1.d - rdx) << 4) + *(arg3 + 0x80)
            else
                rax_3 = (rax_1 << 4) + *(arg3 + 0x20)
            
            float zmm1 = *(rdi_1 + (rbx_2 << 3) + 0x18)
            void* rbp_1 = rdi_1 + (rbx_2 << 3)
            int64_t rax_7 = *rax_3
            float zmm0 = *(rdi_1 + (rbx_2 << 3) + 0x1c)
            float var_50 = zmm1
            float var_4c_1 = zmm0
            float var_48_1 = zmm1
            float var_60
            float var_58
            int32_t r8_2
            float zmm3_1
            float zmm4_1
            
            if ((r8 & 0x40) == 0)
            label_1426062e1:
                int64_t rax_9 = sub_14260afd0(arg1, arg2, rbp_1 + 0xc, &var_50, &var_60, 1)
                r8_2 = rax_9.d
                
                if (rax_9 != 0 && rax_9 != rax_7)
                    zmm3_1 = var_60
                    zmm4_1 = var_58
                    float zmm2_2 = zmm3_1 f- *(rbp_1 + 0xc)
                    zmm0 = *(rdi_1 + (rbx_2 << 3) + 0x18)
                    zmm1 = zmm4_1 f- *(rbp_1 + 0x14)
                    
                    if (not(zmm1 * zmm1 + zmm2_2 * zmm2_2 > zmm0 * zmm0))
                        goto label_142606338
            else
                int64_t rax_8 = sub_142609d30(arg1, arg2, rbp_1 + 0xc, &var_50, &var_60)
                r8_2 = rax_8.d
                
                if (rax_8 == 0 || rax_8 == rax_7)
                    goto label_1426062e1
                
                zmm3_1 = var_60
                zmm4_1 = var_58
                float zmm2_1 = zmm3_1 f- *(rbp_1 + 0xc)
                zmm1 = *(rdi_1 + (rbx_2 << 3) + 0x18)
                zmm0 = zmm4_1 f- *(rbp_1 + 0x14)
                
                if (not(zmm2_1 * zmm2_1 + zmm0 * zmm0 <= zmm1 * zmm1))
                    goto label_1426062e1
                
            label_142606338:
                uint64_t rcx_3 = zx.q(*(r12_3 + 6)) * 3
                int64_t rax_11 = *(arg3 + 0x18)
                *(rax_11 + (rcx_3 << 2)) = zmm3_1
                float var_5c
                *(rax_11 + (rcx_3 << 2) + 4) = var_5c
                *(rax_11 + (rcx_3 << 2) + 8) = zmm4_1
                char rax_12 = r14_1 | arg_10 | 0x40
                uint64_t rbp_4 = zx.q((1 << (*(arg1 + 0xa0)).b).d - 1) & zx.q(r8_2)
                char rcx_5 = rax_12 & 0x7f
                
                if (arg2 == arg3)
                    rcx_5 = rax_12
                
                float* var_98_1
                var_98_1.d = rbp_4.d
                sub_1426128a0(arg1, arg3, zx.d(*(rdi_1 + (rbx_2 << 3) + 0x24)), arg2, var_98_1.d, 
                    rcx_5, 1)
                char rax_14 = arg4.b
                
                if (arg4 == 0xffffffff)
                    rax_14 = -0x80
                
                rax_14 = rax_14 | r14_1 | 0x40
                char rcx_7 = rax_14 & 0x7f
                
                if (arg2 == arg3)
                    rcx_7 = rax_14
                
                char rcx_8 = rcx_7 | 0x10
                
                if (r14_1 != 0)
                    rcx_8 = rcx_7
                
                var_98_1.d = zx.d(*(rdi_1 + (rbx_2 << 3) + 0x24))
                sub_1426128a0(arg1, arg2, rbp_4.d, arg3, var_98_1.d, rcx_8, 0xff)
                
                if (arg5 != 0)
                    uint64_t rdx_10 = zx.q((1 << (*(arg1 + 0xa0)).b).d - 1) & zx.q(rax_7.d)
                    
                    if (rbp_4.d u< *(*(arg2 + 8) + 0x3c) && rdx_10.d u< *(*(arg3 + 8) + 0x3c))
                        int64_t r8_6 = *(arg2 + 0x78)
                        
                        if (r8_6 != 0)
                            int64_t rcx_11 = *(arg3 + 0x78)
                            
                            if (rcx_11 != 0)
                                uint32_t rbx_3 = zx.d(*(rcx_11 + (rdx_10 << 1)))
                                char rax_20 = 1
                                uint32_t rdi_2 = zx.d(*(r8_6 + (rbp_4 << 1)))
                                
                                if (r14_1 != 0)
                                    rax_20 = 3
                                
                                var_98_1.d = rdi_2
                                sub_142605ad0(arg1, arg3, rbx_3, arg2, var_98_1.d, rax_20, 1)
                                var_98_1.d = rbx_3
                                sub_142605ad0(arg1, arg2, rdi_2, arg3, var_98_1.d, 
                                    (r14_1 != 0) + 2, 1)
        
        rax = arg_10
    
    i = i_1 + 1
    rcx = *(arg3 + 8)
    rbx_1 = var_68_1 + 1
    i_1 = i
    var_68_1 = rbx_1
while (i s< *(rcx + 0x34))
