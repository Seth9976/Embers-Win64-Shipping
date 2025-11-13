// 函数: sub_140bc7dc0
// 地址: 0x140bc7dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140bc6ec0(arg1 + 0x278, &arg_8, *arg2)
int64_t rbx = sx.q(arg_8)
int512_t result

if (rbx.d != 0xffffffff)
    EnterCriticalSection(arg1 + 0xd8)
    void* rbx_1
    
    if (*(arg1 + 0x108) == *(arg1 + 0x134))
    labelid_7:
        rbx_1 = nullptr
    else
        void* r8_1 = arg1 + 0x138
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_2 = *(r8_1 + (((sx.q(*(arg1 + 0x148)) - 1) & rbx) << 2))
        
        if (rax_2 == 0xffffffff)
        labelid_7:
            rbx_1 = nullptr
        else
            int64_t r8_2 = *(arg1 + 0x100)
            int64_t rcx_3
            
            while (true)
                rcx_3 = sx.q(rax_2)
                int64_t rdx_4 = rcx_3 * 3
                
                if (*(r8_2 + (rdx_4 << 3)) == rbx.d)
                    break
                
                rax_2 = *(r8_2 + (rdx_4 << 3) + 0x10)
                
                if (rax_2 == 0xffffffff)
                    goto label_140bc7e58_1
            
            if (rax_2 == 0xffffffff)
            label_140bc7e58:
                rbx_1 = nullptr
            else
                void* rbx_2 = r8_2 + rcx_3 * 0x18
                
                if (rbx_2 == 0)
                label_140bc7e58_1:
                    rbx_1 = nullptr
                else
                    rbx_1 = *(rbx_2 + 8)
    
    if (arg1 != -0xd8)
        LeaveCriticalSection(arg1 + 0xd8)
    
    if (rbx_1 != 0)
        result.o = *(rbx_1 + 0x80)
        return result

result.o = 0xbf800000
return result
