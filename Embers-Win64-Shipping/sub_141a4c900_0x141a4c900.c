// 函数: sub_141a4c900
// 地址: 0x141a4c900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *(arg2 + 0x90)
int64_t rdx = zmm0.q
int64_t rbx = zmm0:8.q

if (rdx.b != 2 && rbx.b != 2)
    uint32_t result = (rbx u>> 0x20).d
    
    if ((rdx u>> 0x20).d s>= result)
        return result

int64_t* r8_2 = *arg1
int64_t r10_1 = sx.q(arg1[1].d)
int64_t* rdi_1 = r8_2
void* rcx = &r8_2[r10_1]
char arg_10

if (r8_2 != rcx)
    do
        if (*rdi_1 == arg2)
            int32_t rdi_3 = ((rdi_1 - r8_2) s>> 3).d
            
            if (rdi_3 != 0xffffffff)
                uint32_t arg_14
                
                if (rdi_3 s> 0 && rdi_3 - 1 s< r10_1.d)
                    if (arg3 != 0)
                        void* rcx_1 = r8_2[sx.q(rdi_3) - 1]
                        int64_t rax_4 = *(rcx_1 + 0x90)
                        uint32_t r8_5
                        
                        if (rax_4.b != 2)
                            r8_5 = (rax_4 u>> 0x20).d + 1
                            
                            if (rax_4.b == 1)
                                r8_5 = (rax_4 u>> 0x20).d
                        
                        if (rax_4.b == 2 || (rbx u>> 0x20).d s> r8_5)
                            sub_141a686b0(rcx_1, rbx)
                        
                        goto label_141a4c9e2
                    
                    if (rdx.b == 0)
                        arg_10 = 1
                        arg_14 = (rdx u>> 0x20).d
                        rdx = arg_10.q
                    else if (rdx.b == 1)
                        arg_10 = 0
                        arg_14 = (rdx u>> 0x20).d
                        rdx = arg_10.q
                    
                    void* rcx_2 = r8_2[sx.q(rdi_3) - 1]
                    int64_t rax_9 = *(rcx_2 + 0x90)
                    uint32_t r9_3
                    
                    if (rax_9.b != 2)
                        r9_3 = (rax_9 u>> 0x20).d + 1
                        
                        if (rax_9.b == 1)
                            r9_3 = (rax_9 u>> 0x20).d
                    
                    if (rax_9.b == 2 || (rdx u>> 0x20).d s> r9_3)
                        sub_141a686b0(rcx_2, rdx)
                    
                    goto label_141a4c9ee
                
            label_141a4c9e2:
                
                if (arg3 == 0)
                label_141a4c9ee:
                    
                    if (rdi_3 + 1 s>= 0 && rdi_3 + 1 s< arg1[1].d)
                        if (rbx.b == 0)
                            arg_10 = 1
                            arg_14 = (rbx u>> 0x20).d
                            rbx = arg_10.q
                        else if (rbx.b == 1)
                            arg_10 = 0
                            arg_14 = (rbx u>> 0x20).d
                            rbx = arg_10.q
                        
                        void* rcx_4 = *(*arg1 + (sx.q(rdi_3) << 3) + 8)
                        int64_t rax_13 = *(rcx_4 + 0x98)
                        uint32_t rdx_6
                        
                        if (rax_13.b != 2)
                            rdx_6 = (rax_13 u>> 0x20).d
                            
                            if (rax_13.b == 1)
                                rdx_6 = (rax_13 u>> 0x20).d + 1
                        
                        if (rax_13.b == 2 || (rbx u>> 0x20).d s< rdx_6)
                            sub_141a69340(rcx_4, rbx)
            
            break
        
        rdi_1 = &rdi_1[1]
    while (rdi_1 != rcx)

int32_t rdx_8 = arg1[1].d
int64_t rcx_5 = *arg1
arg_10 = 0
return sub_141a2bc20(rcx_5, rdx_8, arg_10, &arg_10)
