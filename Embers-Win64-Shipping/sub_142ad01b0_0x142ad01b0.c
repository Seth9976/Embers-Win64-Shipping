// 函数: sub_142ad01b0
// 地址: 0x142ad01b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
int64_t zmm6_1
rax, zmm6_1 = sub_142ad0270(arg1)
int32_t rbx_1

if (rax != 0)
    rbx_1 = 0

if (rax == 0 || rax[1].d s<= 0)
label_142ad0206:
    sub_142a4ab40(arg3)
else
    while (true)
        int64_t* rax_1 = sub_142ae72d0(rax, rbx_1)
        
        if (not(zmm6_1 f< rax_1[1]) && rax_1[2] f> zmm6_1)
            int64_t rbx_2 = *rax_1
            sub_142a4afe0(arg3)
            int16_t rax_3 = *(arg3 + 8)
            int32_t r8_1
            
            if (rax_3 s< 0)
                r8_1 = *(arg3 + 0xc)
            else
                r8_1 = sx.d(rax_3) s>> 5
            
            sub_142a49390(arg3, 0, r8_1, rbx_2, 0, 0xffffffff)
            break
        
        rbx_1 += 1
        
        if (rbx_1 s>= rax[1].d)
            goto label_142ad0206

return arg3
