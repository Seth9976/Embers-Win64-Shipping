// 函数: sub_1420ffd70
// 地址: 0x1420ffd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd15d0(arg1)
sub_142102360(arg1, arg1[0x51].d, 0)
sub_142103dc0(arg1)
int64_t rbx = data_143f48708
int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

if (*(rbx + (rcx_2 << 2)) != 0)
    void* rax_2 = arg1[0x44]
    *(rax_2 + 0x20b) &= 0xbf

void* rcx_3 = arg1[0x44]

if (rcx_3 != 0 && *(rcx_3 + 0x440) == 0 && sub_141f15610(rcx_3) != 0)
    void* r13_1 = *(sub_141f15610(arg1[0x44]) + 0xa0)
    
    if (r13_1 != 0)
        void* rax_5 = sub_1425313d0()
        void* rdx_1 = *(r13_1 + 0x10)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
            int64_t** r8_2 = r13_1 + 0x290
            int64_t rcx_6 = sx.q(r8_2[1].d)
            int64_t** arg_8 = r8_2
            
            if (rcx_6.d != 0)
                int32_t r13_2 = 0
                int32_t rdi_1 = 0
                int64_t r14_1 = rcx_6
                int64_t rbx_1 = 0
                int64_t r12
                r12.b = **r8_2 != arg1
                
                do
                    int64_t r9_1 = sx.q(rdi_1)
                    rbx_1 += 1
                    rdi_1 += 1
                    
                    if (rbx_1 s< r14_1)
                        void* rcx_7 = &(*r8_2)[rbx_1]
                        
                        do
                            int32_t rax_10
                            rax_10.b = *rcx_7 != arg1
                            
                            if (zx.d(r12.b) != rax_10)
                                break
                            
                            rdi_1 += 1
                            rbx_1 += 1
                            rcx_7 += 8
                        while (rbx_1 s< r14_1)
                    
                    int32_t rbp_2 = rdi_1 - r9_1.d
                    
                    if (r12.b != 0)
                        if (r13_2 != r9_1.d)
                            int64_t* rcx_8 = *r8_2
                            memmove(&rcx_8[sx.q(r13_2)], &rcx_8[r9_1], rbp_2 << 3)
                            r8_2 = arg_8
                        
                        r13_2 += rbp_2
                    
                    r12.b ^= 1
                    rcx_6 = zx.q(r13_2)
                while (rbx_1 s< r14_1)
                
                r8_2[1].d = r13_2
            
            int64_t rbx_2 = sx.q(arg1[0x53].d)
            
            if (rbx_2.d != 0)
                int32_t rdx_4 = (rcx_6 + rbx_2).d
                
                if (rdx_4 s> *(r8_2 + 0xc))
                    sub_140638c50(r8_2, rdx_4)
                    rcx_6 = zx.q(*(r13_1 + 0x298))
                
                memcpy(*(r13_1 + 0x290) + (sx.q(rcx_6.d) << 3), arg1[0x52], (rbx_2 << 3).d)
                *(r13_1 + 0x298) += rbx_2.d
            
            int64_t rdi_2 = 0
            int64_t* rbx_3 = arg1[0x52]
            uint64_t r14_3 = sx.q(arg1[0x53].d) << 3 u>> 3
            
            if (rbx_3 u> &rbx_3[arg1[0x53]])
                r14_3 = 0
            
            if (r14_3 != 0)
                do
                    void* rcx_13 = *rbx_3
                    
                    if (rcx_13 != 0)
                        sub_141dd85b0(rcx_13, *(r13_1 + 0x220), *(r13_1 + 0x288))
                    
                    rbx_3 = &rbx_3[1]
                    rdi_2 += 1
                while (rdi_2 != r14_3)
            
            arg1[0x53].d = 0
            
            if (*(arg1 + 0x29c) != 0)
                sub_140638c50(&arg1[0x52], 0)
            
            *(arg1 + 0x2a1) |= 2

sub_1420ff940()
return sub_142103d10(arg1) __tailcall
