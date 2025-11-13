// 函数: sub_142208450
// 地址: 0x142208450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
void* const rbx_1

if (arg2 == 0)
    rbx_1 = nullptr
else
    void* rax_1 = sub_1425312f0()
    void* rdx = *(arg2 + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(rdx + 0x38))
        rbx_1 = nullptr
    else
        rbx_1 = arg2
        
        if (*(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr

if (arg2 == 0)
label_142208560:
    
    if (rbx_1 != 0)
        int64_t arg_10
        int64_t rax_7
        
        if (*(rbx_1 + 0x4c8) s<= 0)
            arg_10 = 0
            rax_7 = 0
        else
            rax_7 = **(rbx_1 + 0x4c0)
        
        **(arg1 + 0x30) = rax_7
        int64_t rax_9
        
        if (*(rbx_1 + 0x4c8) s<= 1)
            arg_10 = 0
            rax_9 = 0
        else
            rax_9 = *(*(rbx_1 + 0x4c0) + 8)
        
        *(*(arg1 + 0x30) + 0x48) = rax_9
        int64_t rax_11
        
        if (*(rbx_1 + 0x4c8) s<= 2)
            arg_10 = 0
            rax_11 = 0
        else
            rax_11 = *(*(rbx_1 + 0x4c0) + 0x10)
        
        *(*(arg1 + 0x30) + 0x90) = rax_11
        
        if (*(rbx_1 + 0x4c8) s<= 3)
            arg_10 = 0
            rax = 0
        else
            rax = *(*(rbx_1 + 0x4c0) + 0x18)
        
        *(*(arg1 + 0x30) + 0xd8) = rax
else
    void* rax_2 = sub_142543880()
    void* rdx_1 = *(arg2 + 0x10)
    rax = sx.q(*(rax_2 + 0x38))
    
    if (rax.d s> *(rdx_1 + 0x38))
        goto label_142208560
    
    if (*(*(rdx_1 + 0x30) + (rax << 3)) != rax_2 + 0x30)
        goto label_142208560
    
    rbx_1 = *(arg2 + 0xd0)
    
    if (rbx_1 != 0)
        void* rax_3 = sub_1425312f0()
        void* rdx_2 = *(rbx_1 + 0x10)
        rax = sx.q(*(rax_3 + 0x38))
        int64_t rcx_2
        
        if (rax.d s<= *(rdx_2 + 0x38))
            rcx_2 = rax
        
        if (rax.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rcx_2 << 3)) != rax_3 + 0x30)
            while (true)
                if (rbx_1 == 0)
                    return 
                
                void* rax_4 = sub_142543880()
                void* rdx_3 = *(rbx_1 + 0x10)
                rax = sx.q(*(rax_4 + 0x38))
                
                if (rax.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax << 3)) == rax_4 + 0x30)
                    rbx_1 = *(rbx_1 + 0xd0)
                
                if (rbx_1 == 0)
                    return 
                
                void* rax_5 = sub_1425312f0()
                void* rdx_4 = *(rbx_1 + 0x10)
                rax = sx.q(*(rax_5 + 0x38))
                
                if (rax.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax << 3)) == rax_5 + 0x30)
                    break
        
        goto label_142208560
