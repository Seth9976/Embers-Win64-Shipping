// 函数: sub_142bc56d0
// 地址: 0x142bc56d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2 - 1
*arg4 = 0
uint64_t rax = zx.q(arg3 - 1)
int32_t rcx = *(arg1 + 0x218)

if (arg2 == 0)
    r11 = arg2

if (arg3 == 0)
    rax = zx.q(arg3)

if (r11 u> rcx || rax.d u> rcx)
    return 0

int64_t rcx_1 = *(arg1 + 0x228)
void** i = *(arg1 + 0x238)
int64_t* r15 = *(arg1 + 0xa0)
int32_t rdi_1 = zx.d(*(rcx_1 + rax * 0x10)) | *(rcx_1 + zx.q(r11) * 0x10) << 0x10

for (; i != 0; i = *i)
    if (rdi_1 u>= i[3].d && rdi_1 u<= *(i + 0x1c))
        int32_t result = sub_142b97060(r15, i[2].d, arg5)
        
        if (result == 0)
            result = sub_142b96500(r15, zx.d(i[1].b) * *(i + 0xc))
            
            if (result == 0)
                uint32_t r10_1 = zx.d(i[1].b)
                void* r8 = r15[7]
                uint64_t rflags_1
                char temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(r10_1)
                int32_t rbp_1 = *(i + 0xc)
                uint8_t r12_1 = *(i + 9)
                int32_t rdx_3 = 1 << temp0_1
                uint32_t r9_1 = rdx_3 * rbp_1
                uint8_t r11_1 = r12_1 & 1
                r12_1 = r12_1 u>> 1 & 1
                void* rdx_6
                
                if (r10_1 == rdx_3)
                label_142bc5833:
                    
                    if (r9_1 u> rbp_1)
                        while (true)
                            r9_1 u>>= 1
                            void* r10_5 = zx.q(r9_1) + r8
                            uint32_t rax_12
                            
                            if (r11_1 == 0)
                                rdx_6 = r10_5 + 2
                                rax_12 = zx.d(*r10_5) << 0x10
                            else
                                rdx_6 = r10_5 + 4
                                rax_12 = ((zx.d(*(rdx_6 - 4)) << 8 | zx.d(*(r10_5 + 1))) << 8
                                    | zx.d(*(rdx_6 - 2))) << 8
                            
                            uint32_t rax_14 = rax_12 | zx.d(*(rdx_6 - 1))
                            
                            if (rax_14 == rdi_1)
                                break
                            
                            if (rax_14 u< rdi_1)
                                r8 = r10_5
                            
                            if (r9_1 u<= rbp_1)
                                goto label_142bc588d
                        
                        goto label_142bc58ca
                    
                label_142bc588d:
                    uint32_t rcx_23
                    
                    if (r11_1 == 0)
                        rdx_6 = r8 + 2
                        rcx_23 = zx.d(*r8) << 0x10
                    else
                        rdx_6 = r8 + 4
                        rcx_23 = ((zx.d(*(rdx_6 - 4)) << 8 | zx.d(*(r8 + 1))) << 8
                            | zx.d(*(rdx_6 - 2))) << 8
                    
                    if ((rcx_23 | zx.d(*(rdx_6 - 1))) == rdi_1)
                        goto label_142bc58ca
                else
                    char* rdx_5 = zx.q((r10_1 - rdx_3) * rbp_1) + r8
                    uint32_t rcx_12
                    
                    if (r11_1 == 0)
                        rdx_6 = &rdx_5[2]
                        rcx_12 = zx.d(*rdx_5) << 0x10
                    else
                        rdx_6 = &rdx_5[4]
                        rcx_12 = ((zx.d(*(rdx_6 - 4)) << 8 | zx.d(rdx_5[1])) << 8
                            | zx.d(*(rdx_6 - 2))) << 8
                    
                    uint32_t rcx_14 = rcx_12 | zx.d(*(rdx_6 - 1))
                    
                    if (rcx_14 != rdi_1)
                        if (rcx_14 u< rdi_1)
                            void* rsi
                            rsi.b = r12_1 != 0
                            r8 = rsi + 1 + rdx_6
                        
                        goto label_142bc5833
                    
                label_142bc58ca:
                    int32_t rcx_27
                    
                    if (r12_1 == 0)
                        rcx_27 = zx.d(*rdx_6)
                    else
                        rcx_27 = sx.d(zx.w(*rdx_6) << 8) | zx.d(*(rdx_6 + 1))
                    
                    *arg4 = sx.d(*(i + 0xa)) + rcx_27
                sub_142b96620(r15)
        
        return result

return 0
