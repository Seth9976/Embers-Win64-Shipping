// 函数: sub_140ec2bb0
// 地址: 0x140ec2bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(*arg2, 0) == 0
int32_t result

if ((arg2[1] != 0 | r8) != 0)
    result = sub_140afb760(*(arg1 + 0x130), *arg2)

if ((arg2[1] != 0 | r8) == 0 || result.b != 0)
    int64_t* rdi_1 = *(arg1 + 0x68)
    int64_t rbx_1 = *arg2
    *(rdi_1 + 0x34)
    int64_t* rdx_6
    
    if (rdi_1[1].d == *(rdi_1 + 0x34))
    label_140ec2c5e:
        rdx_6 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8_1 = &rdi_1[7]
        void* rcx_3 = *(r8_1 + 8)
        
        if (rcx_3 != 0)
            r8_1 = rcx_3
        
        result = *(r8_1 + (((sx.q(rdi_1[9].d) - 1) & sx.q(rax_3)) << 2))
        
        if (result == 0xffffffff)
        label_140ec2c5e_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(result) << 5) + *rdi_1
                
                if (*rdx_6 == rbx_1)
                    break
                
                result = rdx_6[3].d
                
                if (result == 0xffffffff)
                    goto label_140ec2c5e_2
            
            if (result == 0xffffffff)
            label_140ec2c5e_2:
                rdx_6 = nullptr
    
    void* rcx_4 = &rdx_6[1]
    
    if (rdx_6 == 0)
        rcx_4 = nullptr
    
    if (rcx_4 != 0)
        result = sub_140ec29e0(*rcx_4)
    
    if (rcx_4 == 0 || result.b == 0)
        result.b = 1
        return result

result.b = 0
return result
