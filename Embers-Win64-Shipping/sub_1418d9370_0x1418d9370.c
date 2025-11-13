// 函数: sub_1418d9370
// 地址: 0x1418d9370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg2 + 0x44))
int32_t rax = arg1[2].d
int32_t arg_8 = r10.d
int64_t* rax_2

if (rax == *(arg1 + 0x3c))
labelid_7:
    rax_2 = nullptr
else
    void* r8_1 = arg1[9]
    void* r9_1 = &arg1[8]
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_1 = *(r9_1 + (((sx.q(arg1[0xa].d) - 1) & r10) << 2))
    
    if (rax_1 == 0xffffffff)
    label_1418d93d7:
        rax_2 = nullptr
    else
        int64_t r8_2 = arg1[1]
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_1)
            int64_t rcx = rdx_3 * 3
            
            if (*(r8_2 + (rcx << 3)) == r10.d)
                break
            
            rax_1 = *(r8_2 + (rcx << 3) + 0x10)
            
            if (rax_1 == 0xffffffff)
                goto label_1418d93d7_2
        
        if (rax_1 == 0xffffffff)
        label_1418d93d7_1:
            rax_2 = nullptr
        else
            void* rax_6 = r8_2 + rdx_3 * 0x18
            
            if (rax_6 == 0)
            label_1418d93d7_2:
                rax_2 = nullptr
            else
                rax_2 = *(rax_6 + 8)

if (rax_2 != 0)
    return rax_2

int64_t* rax_3 = j_sub_140a82f30(zx.q((&rax_2[5]).d))
int64_t* rbx_1 = rax_3

if (rax_3 == 0)
    rbx_1 = nullptr
else
    *rbx_1 = *arg1
    rbx_1[1] = arg2
    rbx_1[2].d = 0
    rbx_1[3] = 0
    rbx_1[4] = 0
    sub_1418e5810(rbx_1)

int64_t* arg_10 = rbx_1
sub_140bd26e0(&arg1[1], &arg_8, &arg_10)
return arg_10
