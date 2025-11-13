// 函数: sub_142604160
// 地址: 0x142604160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t i = 0

if (*(*(arg2 + 8) + 0x34) s<= 0)
    return 

int64_t r15_1 = 0

do
    int32_t* rdi_2 = *(arg2 + 0x48) + r15_1
    float zmm1 = rdi_2[6]
    float zmm0 = rdi_2[7]
    void* rbx_3 = (zx.q(rdi_2[9].w) << 5) + *(arg2 + 0x10)
    bool cond:0_1 = (*(rdi_2 + 0x27) & 0x40) == 0
    float var_28 = zmm1
    float var_24_1 = zmm0
    float var_20_1 = zmm1
    float var_38
    float var_30
    int32_t r14_1
    float zmm3_1
    float zmm4_1
    
    if (cond:0_1)
    label_14260424c:
        int64_t rax_2 = sub_14260afd0(arg1, arg2, rdi_2, &var_28, &var_38, 1)
        r14_1 = rax_2.d
        
        if (rax_2 != 0)
            zmm3_1 = var_38
            zmm4_1 = var_30
            float zmm2_2 = zmm3_1 f- *rdi_2
            zmm0 = rdi_2[6]
            zmm1 = zmm4_1 f- rdi_2[2]
            
            if (not(zmm1 * zmm1 + zmm2_2 * zmm2_2 > zmm0 * zmm0))
                goto label_142604296
    else
        int64_t rax_1 = sub_142609d30(arg1, arg2, rdi_2, &var_28, &var_38)
        r14_1 = rax_1.d
        
        if (rax_1 == 0)
            goto label_14260424c
        
        zmm3_1 = var_38
        zmm4_1 = var_30
        float zmm2_1 = zmm3_1 f- *rdi_2
        zmm0 = rdi_2[6]
        zmm1 = zmm4_1 f- rdi_2[2]
        
        if (not(zmm1 * zmm1 + zmm2_1 * zmm2_1 <= zmm0 * zmm0))
            goto label_14260424c
        
    label_142604296:
        uint64_t rcx_2 = zx.q(*(rbx_3 + 4)) * 3
        int64_t rax_4 = *(arg2 + 0x18)
        *(rax_4 + (rcx_2 << 2)) = zmm3_1
        float var_34
        *(rax_4 + (rcx_2 << 2) + 4) = var_34
        *(rax_4 + (rcx_2 << 2) + 8) = zmm4_1
        char rbx_4 = (*(rdi_2 + 0x27) s>> 7 & 0xe0) | 0xc0
        float* var_58_1
        var_58_1.d = ((1 << (*(arg1 + 0xa0)).b).d - 1) & r14_1
        sub_1426128a0(arg1, arg2, zx.d(rdi_2[9].w), arg2, var_58_1.d, rbx_4 | 0x10, 0)
        var_58_1.d = zx.d(rdi_2[9].w)
        sub_1426128a0(arg1, arg2, ((1 << (*(arg1 + 0xa0)).b).d - 1) & r14_1, arg2, var_58_1.d, 
            rbx_4, 0xff)
    i += 1
    r15_1 += 0x28
while (i s< *(*(arg2 + 8) + 0x34))
