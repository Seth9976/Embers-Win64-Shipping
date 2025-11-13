// 函数: sub_140e17850
// 地址: 0x140e17850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg1

if (rbx != 0)
    void* rcx_3
    
    if (data_1439ae718 == data_1439ae744)
    labelid_7:
        rcx_3 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
        void* rcx_1 = data_1439ae750
        void* rax_5 = &data_1439ae748
        
        if (rcx_1 != 0)
            rax_5 = rcx_1
        
        int32_t rax_6 = *(rax_5 + (((sx.q(data_1439ae758) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_140e178ea:
            rcx_3 = nullptr
        else
            int64_t r8_1 = data_1439ae710
            int64_t rdx_5
            
            while (true)
                rdx_5 = sx.q(rax_6) * 0x18
                
                if (*(rdx_5 + r8_1) == rbx)
                    break
                
                rax_6 = *(rdx_5 + r8_1 + 0x10)
                
                if (rax_6 == 0xffffffff)
                    goto label_140e178ea_1
            
            rcx_3 = rdx_5 + r8_1
            
            if (rax_6 == 0xffffffff)
            label_140e178ea_1:
                rcx_3 = nullptr
    
    int64_t* rax_7 = rcx_3 + 8
    
    if (rcx_3 == 0)
        rax_7 = nullptr
    
    if (rax_7 != 0)
        return *rax_7

return 0
