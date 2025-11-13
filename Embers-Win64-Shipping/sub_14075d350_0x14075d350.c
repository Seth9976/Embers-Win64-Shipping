// 函数: sub_14075d350
// 地址: 0x14075d350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* var_18 = nullptr
int32_t var_10 = 0
sub_1406f7bd0(arg1 + 0xc8, &var_18)
int32_t* r9 = var_18
void* r11 = &r9[sx.q(var_10)]
int32_t rdi_1

if (r9 != r11)
    while (true)
        void* const rcx_5
        
        if (*(arg1 + 0xd0) == *(arg1 + 0xfc))
        label_14075d3f0:
            rcx_5 = nullptr
        else
            void* rdx_1 = *(arg1 + 0x108)
            void* r8_1 = arg1 + 0x100
            int64_t r10_1 = sx.q(*r9)
            
            if (rdx_1 != 0)
                r8_1 = rdx_1
            
            int32_t rax_2 = *(r8_1 + (((sx.q(*(arg1 + 0x110)) - 1) & r10_1) << 2))
            
            if (rax_2 == 0xffffffff)
            label_14075d3f0_1:
                rcx_5 = nullptr
            else
                int64_t r8_2 = *(arg1 + 0xc8)
                
                while (true)
                    int64_t rdx_2 = sx.q(rax_2) * 3
                    rcx_5 = r8_2 + (rdx_2 << 3)
                    
                    if (*(r8_2 + (rdx_2 << 3)) == r10_1.d)
                        break
                    
                    rax_2 = *(rcx_5 + 0x10)
                    
                    if (rax_2 == 0xffffffff)
                        goto label_14075d3f0_2
                
                if (rax_2 == 0xffffffff)
                label_14075d3f0_2:
                    rcx_5 = nullptr
        
        void* rdx_3 = *(rcx_5 + 8)
        int32_t rax_3 = 0
        bool z_1
        
        if (0 == *(rdx_3 + 8))
            *(rdx_3 + 8) = 0
            z_1 = true
        else
            rax_3 = *(rdx_3 + 8)
            z_1 = false
        
        rdi_1 = rax_3
        
        if (not(z_1))
            r9 = var_18
            goto label_14075d41c
        
        r9 = &r9[1]
        
        if (r9 == r11)
            r9 = var_18
            break

rdi_1 = 0
label_14075d41c:

if (r9 != 0)
    sub_140a74f90(r9)

return zx.q(rdi_1)
