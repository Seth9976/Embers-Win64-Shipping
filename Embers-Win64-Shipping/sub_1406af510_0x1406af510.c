// 函数: sub_1406af510
// 地址: 0x1406af510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const i = arg4
int64_t r12 = arg3
char* rdi = arg2
void* r10 = arg1

if (arg4 == 0)
    i = *(arg1 + 0xb0)

if (rdi != r12)
    while (i != 0)
        int64_t rax_1 = sx.q(*(i + 8))
        
        if (rax_1.d u> 0x15)
            break
        
        switch (rax_1)
            case 0, 4, 5, 0xa, 0xb, 0xf, 0x11, 0x12, 0x13
                break
            case 1, 8, 9, 0xd, 0xe, 0x14
                i = *(i + 0x10)
                continue
            case 2
                if (rdi[-1] != 0xa)
                    while (*rdi != 0xa)
                        rdi = &rdi[1]
                        
                        if (rdi == r12)
                            break
                    
                    if (rdi != r12)
                        return &rdi[1]
                
                break
            case 3
                while (*rdi != 0xa)
                    rdi = &rdi[1]
                    
                    if (rdi == r12)
                        return rdi
                
                break
            case 6
                while (true)
                    void* rbx_1 = &rdi[1]
                    char* r8 = *(i + 0x28)
                    
                    if (sub_140688e10(rdi, rbx_1, r8, &r8[1], *(r10 + 0xd0), *(r10 + 0xb8)) != rdi)
                        break
                    
                    r10 = arg1
                    rdi = rbx_1
                    
                    if (rbx_1 == r12)
                        return rbx_1
                
                break
            case 7
                void* r15_1
                
                do
                    int32_t* rbx_2 = *(i + 0x20)
                    r15_1 = &rdi[1]
                    uint64_t r13_1 = zx.q(*rdi)
                    void* rcx_1
                    
                    if (rbx_2 != 0)
                        while (true)
                            int32_t rbp_1 = rbx_2[3]
                            int32_t r11_1 = 0
                            
                            if (rbp_1 != 0)
                                uint64_t rsi_1 = zx.q(*rbx_2)
                                
                                while (true)
                                    int64_t rax_8 = 0
                                    char* r8_1 = rdi
                                    
                                    if (rsi_1.d != 0)
                                        do
                                            rcx_1 = zx.q(*r8_1)
                                            r8_1 = &r8_1[1]
                                            
                                            if (rcx_1.b != (zx.q(r11_1) + *(rbx_2 + 0x10))[rax_8])
                                                break
                                            
                                            rax_8 += 1
                                        while (rax_8 u< rsi_1)
                                    
                                    if (r8_1 == r15_1)
                                        break
                                    
                                    r11_1 += rsi_1.d
                                    
                                    if (r11_1 u>= rbp_1)
                                        goto label_1406af682
                                
                                if (r15_1 == rdi)
                                    goto label_1406af68b
                                
                                rcx_1.b = 1
                                goto label_1406af72a
                            
                        label_1406af682:
                            rbx_2 = *(rbx_2 + 0x18)
                            
                            if (rbx_2 == 0)
                            label_1406af68b:
                                r10 = arg1
                                break
                    
                    void* r9_1 = *(i + 0x38)
                    
                    if (r9_1 == 0)
                    label_1406af6f7:
                        int64_t r8_2 = *(i + 0x28)
                        
                        if (r8_2 == 0
                                || ((r13_1 u>> 3)[r8_2] & (1 << (zx.d(r13_1.b) & 7).b).b) == 0)
                            rcx_1.b = 0
                        else
                            rcx_1.b = 1
                    else
                        char j
                        
                        if ((*(r10 + 0xb8) & 0x800) == 0)
                            j = r13_1.b
                        else
                            char j_1
                            j_1, rcx_1 = sub_1406b15f0(*(r10 + 0xd0), r13_1.b)
                            r9_1 = *(i + 0x38)
                            j = j_1
                        
                        int32_t r10_3 = *(r9_1 + 4)
                        char* rdx_2 = nullptr
                        
                        if (r10_3 == 0)
                            goto label_1406af6f7
                        
                        int64_t r9_2 = *(r9_1 + 8)
                        
                        while (rdx_2[r9_2] u> j || j u> *(zx.q((&rdx_2[1]).d) + r9_2))
                            rdx_2 = zx.q(rdx_2.d + 2)
                            
                            if (rdx_2.d u>= r10_3)
                                goto label_1406af6f7
                        
                        rcx_1.b = 1
                    
                label_1406af72a:
                    
                    if (rcx_1.b != (*(i + 0xc) & 1))
                        break
                    
                    r10 = arg1
                    rdi = r15_1
                while (r15_1 != r12)
                return rdi
            case 0xc, 0x15
                i = nullptr
                continue
            case 0x10
                while (i != 0)
                    int64_t rax_16 = sub_1406af510(r10, rdi, r12, *(i + 0x10))
                    i = *(i + 0x28)
                    r12 = rax_16
                    r10 = arg1
                    
                    if (rdi == rax_16)
                        break
                
                return r12

return rdi
