// 函数: sub_1423d25f0
// 地址: 0x1423d25f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420e85e0(arg2, nullptr)
void* rcx_1 = *(arg2 + 0x560)

if (rcx_1 != 0)
    sub_142450440(rcx_1)

sub_14244a470(arg2)
char rax = sub_14243b130(arg2)
void* result

if (rax == 0)
    result = data_14399fa10()

if (rax != 0 || result.b != 0)
    int64_t* rbx_1 = nullptr
    
    if (*(arg1 + 0x788) != 0)
        int64_t* rcx_4 = *(data_143f5b298 + 0x9b0)
        
        if (rcx_4 != 0 && rcx_4[1].d != 0)
            int64_t* rcx_5 = *rcx_4
            
            if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
                int64_t* rcx_6 = *(data_143f5b298 + 0x9b0)
                int64_t* rcx_7
                
                if (rcx_6[1].d == 0)
                    rcx_7 = nullptr
                else
                    rcx_7 = *rcx_6
                
                (*(*rcx_7 + 0x48))(rcx_7)
    
    sub_142435600(arg2, 1)
    result = data_143f5b298
    int64_t* rcx_9 = *(result + 0x9b8)
    
    if (rcx_9 != 0 && rcx_9[1].d != 0)
        int64_t* rcx_10 = *rcx_9
        
        if (rcx_10 != 0)
            result = (*(*rcx_10 + 0x28))(rcx_10)
            
            if (result.b != 0)
                int64_t* rcx_11 = *(data_143f5b298 + 0x9b8)
                
                if (rcx_11[1].d != 0)
                    rbx_1 = *rcx_11
                
                return (*(*rbx_1 + 0x48))(rbx_1)

return result
