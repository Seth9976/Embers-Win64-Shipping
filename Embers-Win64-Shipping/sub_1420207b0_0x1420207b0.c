// 函数: sub_1420207b0
// 地址: 0x1420207b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0

if ((*(*arg1 + 0x6d0))(arg1, 0) == 0 && arg1[0x57].d s> 0)
    sub_14203a670(&arg1[0x56], 0)
    rsi.b = 1

int32_t rax_9 = arg1[0x57].d
int32_t rbx = rax_9 - 1

if (rbx s>= 0)
    int64_t rdi_2 = sx.q(rbx) << 4
    int32_t temp0_1
    
    do
        int64_t* rcx_2 = arg1[0x56] + rdi_2
        int64_t* var_28 = nullptr
        int32_t var_20_1 = 0
        
        if (rcx_2 == &var_28 || rcx_2[1].d == 0)
            sub_140e86170(&arg1[0x56], rbx, 1, 0)
            rsi.b = 1
        else
            int64_t* rcx_3 = *rcx_2
            
            if (rcx_3 == 0)
                sub_140e86170(&arg1[0x56], rbx, 1, 0)
                rsi.b = 1
            else
                (*(*rcx_3 + 0x40))(rcx_3, &var_28)
                
                if (var_20_1 == 0)
                    sub_140e86170(&arg1[0x56], rbx, 1, 0)
                    rsi.b = 1
                else
                    int64_t* rcx_4 = var_28
                    
                    if (rcx_4 == 0)
                        sub_140e86170(&arg1[0x56], rbx, 1, 0)
                        rsi.b = 1
                    else if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
                        sub_140e86170(&arg1[0x56], rbx, 1, 0)
                        rsi.b = 1
                    else
                        int64_t* rcx_5 = nullptr
                        
                        if (var_20_1 != 0)
                            rcx_5 = var_28
                        
                        if ((*(*rcx_5 + 0x48))(rcx_5) != 0)
                            sub_140e86170(&arg1[0x56], rbx, 1, 0)
                            rsi.b = 1
        
        int64_t* rax_8
        
        if (var_20_1 == 0)
            rax_8 = var_28
        label_1420208dd:
            
            if (rax_8 != 0)
                sub_140a74f90(rax_8)
        else
            int64_t* rcx_7 = var_28
            
            if (rcx_7 != 0)
                (*(*rcx_7 + 0x38))(rcx_7, 0)
                rax_8 = var_28
                
                if (rax_8 != 0)
                    rax_8 = sub_140a84c80(rax_8, 0, 0)
                    var_28 = rax_8
                
                int32_t var_20_2 = 0
                goto label_1420208dd
        rdi_2 -= 0x10
        temp0_1 = rbx
        rbx -= 1
    while (temp0_1 - 1 s>= 0)
    rax_9 = arg1[0x57].d

if (rax_9 == 0)
    int64_t* rax_10 = sub_141dcc7c0(arg1)
    int64_t r8_1 = *rax_10
    (*(r8_1 + 0x660))(rax_10, 0, r8_1)

return zx.q(rsi.b)
