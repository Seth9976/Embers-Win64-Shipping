// 函数: sub_14097f330
// 地址: 0x14097f330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t arg_8 = rbx
int32_t rdi = 0
int64_t* result

if (*(arg1 + 0x48) s<= 0)
label_14097f3bf:
    result.b = 0
else
    void* rsi_1 = nullptr
    
    while (true)
        result = *(arg1 + 0x40)
        int64_t* rcx = *(rsi_1 + result + 0x30)
        void* r14_1 = rsi_1 + result
        
        if (rcx != 0)
            result = (*(*rcx + 0x28))(rcx)
        
        if (rcx == 0 || result.b == 0)
            rbx.b = 0
        else
            rbx.b = 1
        
        int64_t* rcx_1 = *(arg2 + 8)
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x28))(rcx_1)
        
        if (rcx_1 == 0 || result.b == 0)
            result.b = 0
        else
            result.b = 1
        
        if (rbx.b == result.b)
            if (rbx.b != 0)
                int64_t* rcx_2 = *(r14_1 + 0x30)
                result = (**rcx_2)(rcx_2, *(arg2 + 8))
            
            if (rbx.b == 0 || result.b != 0)
                if (arg3[1].d s> 1)
                    sub_140597df0(r14_1 + 0x60, arg3)
                
                result.b = 1
                break
        
        rdi += 1
        rsi_1 += 0x78
        
        if (rdi s>= *(arg1 + 0x48))
            goto label_14097f3bf

return result
