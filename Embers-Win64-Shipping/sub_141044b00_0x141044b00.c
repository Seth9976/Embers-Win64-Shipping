// 函数: sub_141044b00
// 地址: 0x141044b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = **(arg1 + 0x20)
int64_t* rax

if (data_143e2c7c8 != 0)
    int32_t var_68
    rax = GFSDK_Aftermath_GetDeviceStatus(&var_68)
    
    if (rax.d == 1 && var_68 != 0)
        int64_t* r14 = nullptr
        data_143dbb3e0 = rax.b
        int32_t rdi = *(rbx + 0x880)
        uint64_t rcx_1 = zx.q(rdi)
        int64_t* var_60 = nullptr
        int32_t var_54 = 0
        
        if (rdi s> 0)
            sub_1405a4f90(&var_60)
            rcx_1 = zx.q(*(rbx + 0x880))
            r14 = var_60
        
        uint32_t j
        
        if (GFSDK_Aftermath_GetData(rcx_1, *(rbx + 0x878), r14) == 1)
            int64_t* rdi_1 = r14
            void* rbp_3 = &r14[sx.q(rdi) * 2]
            
            if (r14 != rbp_3)
                do
                    if (*(rdi_1 + 0xc) == 1)
                        int32_t* r10_1 = *rdi_1
                        j = rdi_1[1].d u>> 2
                        
                        if (j != 0)
                            uint64_t r11_1 = zx.q(j)
                            uint64_t i
                            
                            do
                                if (*(rbx + 0x940) - *(rbx + 0x96c) != 0)
                                    void* r8_1 = rbx + 0x970
                                    void* rdx_3 = *(r8_1 + 8)
                                    int64_t r9_1 = sx.q(*r10_1)
                                    
                                    if (rdx_3 != 0)
                                        r8_1 = rdx_3
                                    
                                    j = *(r8_1 + (((sx.q(*(rbx + 0x980)) - 1) & r9_1) << 2))
                                    
                                    if (j != 0xffffffff)
                                        int64_t rdx_4 = *(rbx + 0x938)
                                        
                                        do
                                            int64_t rcx_7 = sx.q(j) << 5
                                            
                                            if (*(rcx_7 + rdx_4) == r9_1.d)
                                                break
                                            
                                            j = *(rcx_7 + rdx_4 + 0x18)
                                        while (j != 0xffffffff)
                                
                                r10_1 = &r10_1[1]
                                i = r11_1
                                r11_1 -= 1
                            while (i != 1)
                    
                    rdi_1 = &rdi_1[2]
                while (rdi_1 != rbp_3)
        
        void var_50
        
        if (var_68 == 3)
            GFSDK_Aftermath_GetPageFaultInformation(&var_50)
        
        if (r14 != 0)
            sub_140a74f90(r14)
        
        j.b = 0
        return j

rax.b = 1
return rax
