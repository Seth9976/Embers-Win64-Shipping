// 函数: sub_1423ae710
// 地址: 0x1423ae710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_1423ae86e:
    
    if (sub_1405b6470(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x14) = rax_14
        void* rdx_10 = *(r9 + 8)
        int64_t r8_2 = sx.q(rax_14)
        void* rax_15 = r9
        
        if (rdx_10 != 0)
            rax_15 = rdx_10
        
        arg4[2].d = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_17 = *(r9 + 8)
        
        if (rax_17 != 0)
            r9 = rax_17
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1423ae809:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t r14_1 = sx.q(rbx_1) * 0x18
            void* const rdi_2
            
            if (*(r14_1 + rdx_3) == 0)
                rdi_2 = nullptr
            else
                void* rax_3 = sub_1425b3a40()
                
                if (rax_3 == 0)
                    rdi_2 = nullptr
                else
                    rdi_2 = *(r14_1 + rdx_3)
                    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_4.d s> *(rdi_2 + 0x38)
                            || *(*(rdi_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                        rdi_2 = nullptr
            
            int64_t rdx_5
            
            if (*arg4 == 0)
                rdx_5 = 0
            else
                void* rax_6 = sub_1425b3a40()
                
                if (rax_6 == 0)
                    rdx_5 = 0
                else
                    rdx_5 = *arg4
                    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                    
                    if (rax_7.d s> *(rdx_5 + 0x38)
                            || *(*(rdx_5 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                        rdx_5 = 0
            
            if (rdi_2 == rdx_5)
                break
            
            rdx_3 = *arg1
            rbx_1 = *(r14_1 + rdx_3 + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_1423ae809
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x18, arg4, 0x10)
        sub_1405c3640(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1423ae86e

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
