// 函数: sub_142857200
// 地址: 0x142857200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r14 = 1
*(arg2 + 0x114)
*(arg2 + 0x114) += 1
sub_1428a5c40(arg1[0x6f])
void* rax_1 = sub_1428a8a90(arg1[5], arg2)

if (rax_1 == 0)
    if (sub_1428a8d10(arg1[5], arg2) != 0)
        goto label_142857277
    
    if (arg2 == 0)
        goto label_142857277
    
    sub_1428574d0(arg2)
    r14 = 0
else if (rax_1 == arg2)
    sub_1428574d0(rax_1)
    r14 = 0
else
    sub_1428576f0(arg1, rax_1)
    sub_1428574d0(rax_1)
label_142857277:
    
    if (*(arg2 + 0x150) != 0 && *(arg2 + 0x148) != 0)
        sub_1428576f0(arg1, arg2)
    
    void* rax_2 = arg1[7]
    
    if (rax_2 != 0)
        *(arg2 + 0x150) = rax_2
        *(rax_2 + 0x148) = arg2
        *(arg2 + 0x148) = &arg1[7]
        arg1[7] = arg2
    else
        arg1[7] = arg2
        arg1[8] = arg2
        *(arg2 + 0x148) = &arg1[7]
        *(arg2 + 0x150) = &arg1[8]
    
    if (sub_14284dc40(arg1, 0x2b, 0, nullptr) s> 0)
        int32_t rax_6 = sub_14284dc40(arg1, 0x2b, 0, nullptr)
        
        if (sub_14284dc40(arg1, 0x14, 0, nullptr) s> rax_6)
            int32_t rax_12
            int32_t rax_13
            
            do
                void* rdi_2 = arg1[8]
                int32_t rbp_1 = 0
                
                if (rdi_2 == 0)
                    break
                
                if (*(rdi_2 + 0x90) == 0)
                    break
                
                int64_t* rax_8 = sub_1428a8d10(arg1[5], rdi_2)
                int64_t* rsi_1 = rax_8
                
                if (rax_8 != 0)
                    rbp_1 = 1
                    int64_t* rax_9 = sub_1428a8790(arg1[5], rax_8)
                    rsi_1 = rax_9
                    sub_1428576f0(arg1, rax_9)
                
                *(rdi_2 + 0xf0) = 1
                int64_t rax_10 = arg1[0xb]
                
                if (rax_10 != 0)
                    rax_10(arg1, rdi_2)
                
                if (rbp_1 == 0)
                    break
                
                sub_1428574d0(rsi_1)
                arg1[0x11].d
                arg1[0x11].d += 1
                rax_12 = sub_14284dc40(arg1, 0x2b, 0, nullptr)
                rax_13 = sub_14284dc40(arg1, 0x14, 0, nullptr)
            while (rax_13 s> rax_12)

sub_1428a5d00(arg1[0x6f])
return zx.q(r14)
