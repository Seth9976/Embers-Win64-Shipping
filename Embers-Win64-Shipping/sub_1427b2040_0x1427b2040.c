// 函数: sub_1427b2040
// 地址: 0x1427b2040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* var_48 = nullptr
int64_t* rcx = *(arg1 + 0x38)
int32_t var_40 = 0
(*(*rcx + 0x2a0))(rcx, arg3, &var_48)
int64_t rbp

if (var_40 != 0)
    void arg_8
    void* arg_18 = &arg_8
    sub_14279bbe0(var_48, var_40)
    int64_t* rcx_3 = *(arg1 + 0xa0)
    rbp.b = 0
    int32_t var_38
    
    if (rcx_3 == 0)
    label_1427b212d:
        
        if (var_40 s> 0)
            int64_t* rdi_1 = nullptr
            
            do
                int64_t* rcx_5 = *(rdi_1 + var_48)
                (*(*rcx_5 + 0x2a8))(rcx_5, &var_38, arg2, 1)
                
                if (var_38 == 1)
                    rbp.b = 1
                    int64_t var_30
                    *(arg1 + 0xa0) = var_30
                    *(arg1 + 0x68) = var_48[sx.q(rbx) * 4 + 3]
                    break
                
                rbx += 1
                rdi_1 = &rdi_1[4]
            while (rbx s< var_40)
    else
        if (*var_48 != rcx_3)
        label_1427b210a:
            int64_t* rcx_4 = *(arg1 + 0xa0)
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x2b8))(rcx_4)
                *(arg1 + 0xa0) = 0
                *(arg1 + 0x68) = 0
            
            rbp.b = 1
            goto label_1427b212d
        
        (*(*rcx_3 + 0x2b0))(rcx_3, &var_38, arg2)
        
        if (var_38 == 3)
            goto label_1427b210a
        
        rbp.b = 1
else
    int64_t* rcx_1 = *(arg1 + 0xa0)
    
    if (rcx_1 == 0)
        rbp.b = 0
    else
        (*(*rcx_1 + 0x2b8))(rcx_1, var_40)
        *(arg1 + 0xa0) = 0
        rbp.b = 1
        *(arg1 + 0x68) = 0

int64_t* rcx_9 = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return zx.q(rbp.b)
