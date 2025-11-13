// 函数: sub_14227ff70
// 地址: 0x14227ff70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *arg1

if (rsi != 0)
    char rax_1 = *(arg2 + 0x24)
    int32_t zmm2
    
    if ((rax_1 & 1) == 0)
        zmm2 = (zx.o(0)).d
    else
        zmm2 = *(arg2 + 0x18)
    
    int32_t zmm1
    
    if ((rax_1 & 2) == 0)
        zmm1 = (zx.o(0)).d
    else
        zmm1 = *(arg2 + 0x1c)
    
    int32_t zmm0 = *(arg2 + 0x20)
    
    if (not(zmm0 f> 0f))
        zmm0 = 0x7f7fffff
    
    int64_t rbx_1 = *rsi
    int32_t var_38 = zmm2
    int32_t var_34_1 = zmm1
    int32_t var_30_1 = zmm0
    int32_t var_2c_1 = 1
    (*(rbx_1 + 0x140))(rsi, zx.q(sub_14227f3b0(0)), &var_38)
    rsi = *arg1
    
    if (rsi != 0)
        char rax_3 = *(arg2 + 0x34)
        
        if ((rax_3 & 1) == 0)
            zmm2 = (zx.o(0)).d
        else
            zmm2 = *(arg2 + 0x28)
        
        if ((rax_3 & 2) == 0)
            zmm1 = (zx.o(0)).d
        else
            zmm1 = *(arg2 + 0x2c)
        
        zmm0 = *(arg2 + 0x30)
        
        if (not(zmm0 f> 0f))
            zmm0 = 0x7f7fffff
        
        int64_t rbx_2 = *rsi
        var_38 = zmm2
        int32_t var_34_2 = zmm1
        int32_t var_30_2 = zmm0
        int32_t var_2c_2 = 1
        (*(rbx_2 + 0x140))(rsi, zx.q(sub_14227f3b0(1)), &var_38)
        rsi = *arg1
        
        if (rsi != 0)
            char rax_5 = *(arg2 + 0x44)
            
            if ((rax_5 & 1) == 0)
                zmm2 = (zx.o(0)).d
            else
                zmm2 = *(arg2 + 0x38)
            
            if ((rax_5 & 2) == 0)
                zmm1 = (zx.o(0)).d
            else
                zmm1 = *(arg2 + 0x3c)
            
            zmm0 = *(arg2 + 0x40)
            
            if (not(zmm0 f> 0f))
                zmm0 = 0x7f7fffff
            
            int64_t rbx_3 = *rsi
            var_38 = zmm2
            int32_t var_34_3 = zmm1
            int32_t var_30_3 = zmm0
            int32_t var_2c_3 = 1
            (*(rbx_3 + 0x140))(rsi, zx.q(sub_14227f3b0(2)), &var_38)
            rsi = *arg1

if (rsi == 0)
    return 

int64_t* arg_8 = nullptr
int64_t* arg_10 = nullptr
(*(*rsi + 0x30))(rsi, &arg_8, &arg_10)
sub_142281670(arg_8)
sub_142281670(arg_10)
