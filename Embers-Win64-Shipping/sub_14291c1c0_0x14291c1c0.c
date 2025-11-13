// 函数: sub_14291c1c0
// 地址: 0x14291c1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r14 = 0
int64_t* rdi = arg1
int32_t* result = nullptr
int32_t r8

if (arg3 s>= 1)
    if (rdi != 0)
        result = *arg1
    
    if (rdi != 0 && result != 0)
    label_14291c223:
        char* rbp_1 = *arg2
        uint32_t r15_1 = zx.d(*rbp_1)
        void* rbp_2 = &rbp_1[1]
        
        if (r15_1 u<= 7)
            result[4] &= 0xfffffff8
            result[4] |= r15_1 | 8
            
            if (arg3 s<= 1)
                goto label_14291c2d0
            
            int64_t r13_1 = sx.q(arg3 - 1)
            int64_t rax_4 = sub_1428a6730(r13_1)
            r14 = rax_4
            
            if (rax_4 != 0)
                memcpy(r14, rbp_2, r13_1.d)
                int64_t rdx_2 = sx.q(arg3)
                *(rdx_2 + r14 - 2) &= 0xff << r15_1.b
                rbp_2 += r13_1
            label_14291c2d0:
                int64_t rcx_4 = *(result + 8)
                *result = arg3 - 1
                sub_1428a6780(rcx_4)
                *(result + 8) = r14
                result[1] = 3
                
                if (rdi != 0)
                    *rdi = result
                
                *arg2 = rbp_2
                return result
            
            r8 = (rax_4 + 0x41).d
        else
            r8 = 0xdc
        
        goto label_14291c290
    
    int32_t* result_1 = sub_1428c3490()
    result = result_1
    
    if (result_1 != 0)
        goto label_14291c223
else
    r8 = 0x98
label_14291c290:
    sub_1428a5670(0xd, 0xbd, r8, "crypto\asn1\a_bitstr.c", 0x89)
    
    if (rdi == 0 || *rdi != result)
        sub_1428c3460(result)
return nullptr
