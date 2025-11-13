// 函数: sub_142be7490
// 地址: 0x142be7490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = arg2[6]
int16_t i_6 = 0
int64_t* r13 = nullptr
int32_t arg_10
uint64_t i_7 = zx.q(sub_142b96f00(arg2, &arg_10))
int32_t rax_1 = arg_10
int32_t i_8 = i_7.d

if (rax_1 != 0)
    return rax_1

if (i_7.d s> zx.d(*(arg1 + 0x174)))
    return 3

uint16_t* rax_3 = sub_142b99a90(r15, 2, 0, i_7.d, 0, &arg_10)
uint16_t* rbx_1 = rax_3

if (arg_10 == 0)
    int32_t rax_4 = sub_142b96500(arg2, (i_7 * 2).d)
    arg_10 = rax_4
    
    if (rax_4 == 0)
        if (i_7.d s> 0)
            uint64_t i_3 = i_7
            uint64_t i
            
            do
                *rbx_1 = sub_142b967c0(arg2)
                rbx_1 = &rbx_1[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
            rbx_1 = rax_3
        
        sub_142b96620(arg2)
        
        if (i_7.d s> 0)
            uint16_t* rdx_2 = rbx_1
            uint64_t i_5 = i_7
            uint64_t i_1
            
            do
                uint32_t rcx_5 = zx.d(*rdx_2)
                
                if (rcx_5 s>= 0x102 && rcx_5 - 0x101 s> zx.d(i_6))
                    i_6 = (rcx_5 - 0x101).w
                
                rdx_2 = &rdx_2[1]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        int64_t* rax_7
        int512_t zmm0_1
        rax_7, zmm0_1 = sub_142b99a90(r15, 8, 0, zx.d(i_6), 0, &arg_10)
        r13 = rax_7
        
        if (arg_10 == 0)
            int16_t rdi_1 = 0
            
            if (0 u>= i_6)
            label_142be76d6:
                *(arg1 + 0x358) = i_7.w
                *(arg1 + 0x35a) = i_6
                *(arg1 + 0x360) = rax_3
                *(arg1 + 0x368) = r13
                return 0
            
            while (true)
                if (sub_1408e52d0(arg2) u>= arg3)
                    if (rdi_1 u>= i_6)
                    label_142be76c1:
                        i_7 = zx.q(i_8)
                        goto label_142be76d6
                    
                    while (true)
                        char* rax_16 = sub_142b99a90(r15, 1, 0, 1, 0, &arg_10)
                        r13[zx.q(rdi_1)] = rax_16
                        
                        if (arg_10 != 0)
                            break
                        
                        rdi_1 += 1
                        *rax_16 = 0
                        
                        if (rdi_1 u>= i_6)
                            goto label_142be76c1
                    
                    goto label_142be7747
                
                char rax_9
                uint64_t rbx_2 = zx.q(rax_9)
                
                if (arg_10 != 0)
                label_142be7747:
                    int64_t* rbx_4 = r13
                    uint64_t i_4 = zx.q(i_6)
                    uint64_t i_2
                    
                    do
                        sub_142b99980(r15, *rbx_4)
                        *rbx_4 = 0
                        rbx_4 = &rbx_4[1]
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                    r13 = rax_7
                    break
                
                int32_t rax_10
                
                if (rbx_2.d u<= arg3)
                    rax_10 = sub_1408e52d0(arg2)
                
                if (rbx_2.d u> arg3 || rax_10 u> arg3 - rbx_2.d)
                    int32_t rax_11 = sub_1408e52d0(arg2)
                    rbx_2 = zx.q(arg3 - rax_11)
                    
                    if (arg3 - rax_11 s< 0)
                        rbx_2 = 0
                
                int64_t rax_12
                int512_t zmm0_2
                rax_12, zmm0_2 = sub_142b99a90(r15, 1, 0, (rbx_2 + 1).d, 0, &arg_10)
                r13[zx.q(rdi_1)] = rax_12
                
                if (arg_10 != 0)
                    goto label_142be7747
                
                int32_t rax_13
                rax_13, zmm0_1 = sub_142b96990(arg2, rax_12, rbx_2.d, zmm0_2)
                arg_10 = rax_13
                
                if (rax_13 != 0)
                    goto label_142be7747
                
                rdi_1 += 1
                *(rbx_2 + r13[zx.q(rdi_1)]) = 0
                
                if (rdi_1 u< i_6)
                    continue
                
                goto label_142be76c1

sub_142b99980(r15, r13)
sub_142b99980(r15, rax_3)
return arg_10
