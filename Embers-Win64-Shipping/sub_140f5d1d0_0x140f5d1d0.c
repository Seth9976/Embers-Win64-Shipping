// 函数: sub_140f5d1d0
// 地址: 0x140f5d1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx

if (arg1[0x79].d == 0)
    rbx.b = 0
else
    int64_t* rcx = arg1[0x78]
    
    if (rcx == 0)
        rbx.b = 0
    else if ((*(*rcx + 0x28))(rcx).b == 0)
        rbx.b = 0
    else
        rbx.b = 1

uint64_t result

if (arg2[6] == 0)
    result.b = 0
else
    int64_t* rcx_1 = *(arg2 + 0x10)
    
    if (rcx_1 == 0)
        result.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1).b == 0)
        result.b = 0
    else
        result.b = 1

if (rbx.b == result.b)
    bool cond:1_1
    
    if (rbx.b != 0)
        int64_t rbx_1 = 0
        int64_t rdi_1 = 0
        
        if (arg2[6] != 0)
            int64_t* rcx_2 = *(arg2 + 0x10)
            
            if (rcx_2 != 0)
                void arg_8
                result = (*(*rcx_2 + 0x30))(rcx_2, &arg_8)
                rdi_1 = *result
        
        if (arg1[0x79].d != 0)
            int64_t* rcx_3 = arg1[0x78]
            
            if (rcx_3 != 0)
                void arg_10
                result = (*(*rcx_3 + 0x30))(rcx_3, &arg_10)
                rbx_1 = *result
        
        cond:1_1 = rbx_1 == rdi_1
        goto label_140f5d29e
    
    if (arg1[0x77].b == arg2[2].b)
        result = zx.q(*(arg1 + 0x3b4))
        
        if (result.b == arg2[1].b)
            if (result.b == 0)
                return result
            
            result = zx.q(*arg2)
            cond:1_1 = arg1[0x76].d == result.d
        label_140f5d29e:
            
            if (cond:1_1)
                return result

if (arg2 != &arg1[0x76])
    if (*(arg1 + 0x3b4) != 0)
        *(arg1 + 0x3b4) = 0
    
    if (arg2[1].b != 0)
        arg1[0x76].d = *arg2
        *(arg1 + 0x3b4) = 1

arg1[0x77].b = arg2[2].b
sub_1407473e0(&arg1[0x78], &arg2[4])
return sub_140e19ef0(arg1, 2)
