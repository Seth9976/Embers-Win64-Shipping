// 函数: sub_1421258e0
// 地址: 0x1421258e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *(arg1 + 0x178)
int32_t result = -1
void* rdi_1 = sx.q(*(arg1 + 0x180)) * 0x68 + r11

if (r11 == rdi_1)
label_14212595c:
    int64_t* rcx_1 = *(arg1 + 0xd0)
    
    if (rcx_1 != 0)
        return (*(*rcx_1 + 0x350))(rcx_1, zx.q(arg2))
else
    int32_t* r9_1 = r11 + 0x30
    
    do
        if (r9_1[-8].b != 0)
            if (arg2 == 1)
                int64_t* r10_1 = *(r9_1 + 8)
                int64_t* rax = r10_1
                void* rdx = &r10_1[sx.q(r9_1[4])]
                
                if (r10_1 == rdx)
                label_142125945:
                    result = -1
                else
                    while (*rax != arg3)
                        rax = &rax[1]
                        
                        if (rax == rdx)
                            goto label_142125945_1
                    
                    result = ((rax - r10_1) s>> 3).d
            else if (arg2 == 0)
                int64_t* r10_2 = *(r9_1 - 8)
                int64_t* rcx_2 = r10_2
                void* rdx_2 = &r10_2[sx.q(*r9_1)]
                
                if (r10_2 == rdx_2)
                label_142125945_1:
                    result = -1
                else
                    while (*rcx_2 != arg3)
                        rcx_2 = &rcx_2[1]
                        
                        if (rcx_2 == rdx_2)
                            goto label_142125945_1
                    
                    result = ((rcx_2 - r10_2) s>> 3).d
        
        r11 += 0x68
        r9_1 = &r9_1[0x1a]
    while (r11 != rdi_1)
    
    if (result == 0xffffffff)
        goto label_14212595c

return result
