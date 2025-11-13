// 函数: sub_140e11fb0
// 地址: 0x140e11fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140e1ad30(&arg_8, arg2, arg3)
int64_t result_1 = 0
int64_t rbx = arg_8

if (arg1[0x44].d == *(arg1 + 0x24c))
    goto label_140e12040

int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
void* r8 = &arg1[0x4a]
void* rcx_2 = *(r8 + 8)

if (rcx_2 != 0)
    r8 = rcx_2

int32_t rax_4 = *(r8 + (((sx.q(arg1[0x4c].d) - 1) & sx.q(rax_2)) << 2))
int64_t result

if (rax_4 == 0xffffffff)
label_140e1203b:
    rbx = arg_8
label_140e12040:
    result = 0
label_140e1204f:
    int64_t* rbx_1
    
    if (arg1[0x62].d == *(arg1 + 0x33c))
    label_140e120b0:
        rbx_1 = nullptr
    label_140e120b3:
        
        if (rbx_1 != 0)
            int32_t rax_10 = rbx_1[1].d
            
            if (rax_10 != 0)
                rbx_1[1].d = rax_10
                
                if (result_1 == 0)
                    result_1 = result
                
                result = result_1
                
                if (rax_10 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rbx_1 != 0)
                int32_t temp0_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp0_1 == 1)
                    int64_t r8_4 = *rbx_1
                    (*(r8_4 + 8))(rbx_1, 1, r8_4)
    else
        int32_t rax_7 = sub_140b5ead0(rbx.d) + rbx:4.d
        void* r8_2 = &arg1[0x68]
        void* rcx_5 = *(r8_2 + 8)
        
        if (rcx_5 != 0)
            r8_2 = rcx_5
        
        int32_t rax_9 = *(r8_2 + (((sx.q(arg1[0x6a].d) - 1) & sx.q(rax_7)) << 2))
        
        if (rax_9 == 0xffffffff)
            goto label_140e120b0
        
        int64_t r8_3 = arg1[0x61]
        int64_t rdx_7
        
        while (true)
            rdx_7 = sx.q(rax_9)
            int64_t rcx_7 = rdx_7 << 5
            
            if (*(rcx_7 + r8_3) == rbx)
                break
            
            rax_9 = *(rcx_7 + r8_3 + 0x18)
            
            if (rax_9 == 0xffffffff)
                goto label_140e120b0
        
        if (rax_9 == 0xffffffff)
            goto label_140e120b0
        
        int64_t rdx_8 = rdx_7 << 5
        void* rdx_9 = rdx_8 + r8_3
        
        if (rdx_8 == neg.q(r8_3))
            goto label_140e120b0
        
        rbx_1 = *(rdx_9 + 0x10)
        result_1 = *(rdx_9 + 8)
        
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
            goto label_140e120b3
    
    if (result == 0)
        return (*(*arg1 + 0x70))(arg1)
else
    int64_t r8_1 = arg1[0x43]
    int64_t rdx_3
    
    while (true)
        rdx_3 = sx.q(rax_4)
        int64_t rcx_3 = rdx_3 * 3
        
        if (*(r8_1 + (rcx_3 << 3)) == rbx)
            break
        
        rax_4 = *(r8_1 + (rcx_3 << 3) + 0x10)
        
        if (rax_4 == 0xffffffff)
            goto label_140e1203b
    
    if (rax_4 == 0xffffffff)
        goto label_140e1203b
    
    void* rdi_1 = r8_1 + rdx_3 * 0x18
    
    if (rdi_1 == 0)
        goto label_140e1203b
    
    result = *(rdi_1 + 8)
    
    if (result == 0)
        rbx = arg_8
        goto label_140e1204f

return result
