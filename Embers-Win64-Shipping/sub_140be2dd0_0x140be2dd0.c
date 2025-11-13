// 函数: sub_140be2dd0
// 地址: 0x140be2dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi_1

if (data_1439a9aa8 == data_1439a9ad4)
labelid_9:
    rdi_1 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg1.d) + arg1:4.d
    void* rcx = data_1439a9ae0
    void* rax_4 = &data_1439a9ad8
    
    if (rcx != 0)
        rax_4 = rcx
    
    int32_t rax_5 = *(rax_4 + (((sx.q(data_1439a9ae8) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140be2e57:
        rdi_1 = nullptr
    else
        int64_t r8_4 = data_1439a9aa0
        int64_t rdx
        
        while (true)
            rdx = sx.q(rax_5)
            int64_t rcx_1 = rdx * 3
            
            if (*(r8_4 + (rcx_1 << 3)) == arg1)
                break
            
            rax_5 = *(r8_4 + (rcx_1 << 3) + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_140be2e57_2
        
        if (rax_5 == 0xffffffff)
        label_140be2e57_1:
            rdi_1 = nullptr
        else
            void* rdi_2 = r8_4 + rdx * 0x18
            
            if (rdi_2 == 0)
            label_140be2e57_2:
                rdi_1 = nullptr
            else
                rdi_1 = *(rdi_2 + 8)

if (arg2 != 0)
    *arg2 = rdi_1

if (rdi_1 != 0)
    int32_t rax_6 = sub_140bddcb0(rdi_1, arg1, 0)
    
    if (rax_6 != 0xffffffff)
        return *(rdi_1[8] + sx.q(rax_6) * 0x10 + 8)

return -1
