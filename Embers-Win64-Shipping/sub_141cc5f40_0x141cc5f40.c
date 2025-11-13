// 函数: sub_141cc5f40
// 地址: 0x141cc5f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool result = arg2[5].b
bool result_1 = result

if ((result & 1) != 0 && result s< 0 && (arg2[6].d & 0x401000) == 0)
    void* rdi_1 = data_143f35848
    
    if (rdi_1 == 0)
        sub_141cc3750()
        rdi_1 = data_143f35848
    
    int64_t rbx_1 = *arg1
    void* const rcx_3
    
    if (*(rdi_1 + 0x1c8) == *(rdi_1 + 0x1f4))
    label_141cc6010:
        rcx_3 = nullptr
    else
        int32_t rax_2 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8 = rdi_1 + 0x1f8
        void* rcx_1 = *(r8 + 8)
        
        if (rcx_1 != 0)
            r8 = rcx_1
        
        int32_t rax_4 = *(r8 + (((sx.q(*(rdi_1 + 0x208)) - 1) & sx.q(rax_2)) << 2))
        
        if (rax_4 == 0xffffffff)
        label_141cc6010_1:
            rcx_3 = nullptr
        else
            int64_t r8_1 = *(rdi_1 + 0x1c0)
            
            while (true)
                int64_t rdx_3 = sx.q(rax_4) * 3
                rcx_3 = r8_1 + (rdx_3 << 3)
                
                if (*(r8_1 + (rdx_3 << 3)) == rbx_1)
                    break
                
                rax_4 = *(rcx_3 + 0x10)
                
                if (rax_4 == 0xffffffff)
                    goto label_141cc6010_2
            
            if (rax_4 == 0xffffffff)
            label_141cc6010_2:
                rcx_3 = nullptr
    
    void* rbx_2 = rcx_3 + 8
    
    if (rcx_3 == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        int32_t rcx_4
        rcx_4.b = sub_140b5b8a0(*rbx_2, 0) == 0
        
        if ((*(rbx_2 + 4) != 0 | rcx_4.b) != 0)
            *arg1 = *rbx_2
    
    result = sub_140920c10(rdi_1 + 0x38, arg1)
    result_1 = arg2[5].b

if ((result_1 & 2) != 0)
    int32_t rcx_6
    rcx_6.b = sub_140b5b8a0(*arg1, 0) == 0
    result = *(arg1 + 4) != 0 | rcx_6.b
    
    if (result != 0)
        void* rbx_3 = *arg2
        sub_141cc9450()
        jump(*(rbx_3 + 0x1d0))

return result
