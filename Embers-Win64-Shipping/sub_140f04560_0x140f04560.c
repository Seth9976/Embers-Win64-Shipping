// 函数: sub_140f04560
// 地址: 0x140f04560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg4
int32_t rdx = arg3[1].d
int32_t r12 = 0
void var_60
float arg_18

if (rdx s> 0)
    int64_t r13_1 = 0
    
    do
        int64_t* rsi_2 = *arg3 + r13_1
        int64_t* rbx_1 = *rsi_2
        int64_t* rdi_1 = *(*(*rbx_1 + 8))(rbx_1, &var_60)
        void var_68
        float zmm1 = *((*(*rbx_1 + 0x38))(rbx_1, &var_68) + 4)
        int512_t zmm3
        zmm3.o = *(arg1 + 0x8c)
        arg5 = zmm1
        arg_18 = *arg4
        int32_t rax_7 = (*(*rdi_1 + 0x40))(rdi_1, rsi_2, &arg_18, zmm3, arg6)
        int64_t* var_58
        
        if (var_58 != 0)
            var_58[1].d -= 1
            
            if (var_58[1].d == 1)
                int64_t rdx_4 = *var_58
                (*rdx_4)(var_58, rdx_4)
                int32_t temp1_1 = *(var_58 + 0xc)
                *(var_58 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_58 + 8))(var_58, 1)
        
        if (rax_7 != 0xffffffff)
            *arg2 = *(arg3 + 0x54)
            arg2[1] = rax_7
            goto label_140f047d6
        
        rdx = arg3[1].d
        r12 += 1
        r13_1 += 0x10
    while (r12 s< rdx)
    
    rbx = arg4

uint64_t r8_1 = sx.q(*(arg3 + 0x54))
int32_t rax_11 = *(*(r8_1 * 0x70 + *(arg1 + 0x18)) + 8)
int32_t rcx_8 = rax_11 - 1

if (rax_11 == 0)
    rcx_8 = 0

if (rcx_8 == 0 || rdx == 0)
    if (arg6 != 0)
        *arg6 = 0
        r8_1 = zx.q(*(arg3 + 0x54))
    
    *arg2 = r8_1.d
    arg2[1] = 0
else
    int64_t* rcx_9 = **arg3
    float* rdx_6 = &arg_18
    bool cond:1_1 = *(*(*rcx_9 + 0x38))(rcx_9, &arg_18) f<= *rbx
    int64_t* rbx_3 = *arg3
    float rax_18
    char var_48
    
    if (cond:1_1)
        int64_t rdi_4 = sx.q(arg3[1].d) * 2
        int64_t* rcx_12 = rbx_3[rdi_4 - 2]
        (*(*rcx_12 + 0x10))(rcx_12, rdx_6)
        int64_t* rcx_13 = rbx_3[rdi_4 - 2]
        (*(*rcx_13 + 0x20))(rcx_13, &var_60)
        
        if (var_48 != 0)
        label_140f04762:
            
            if (arg6 != 0)
                *arg6 = 1
            
            *arg2 = *(arg3 + 0x54)
            rax_18 = arg_18
        else if (arg6 == 0)
            *arg2 = *(arg3 + 0x54)
            rax_18 = arg5
        else
            *arg6 = 2
            *arg2 = *(arg3 + 0x54)
            rax_18 = arg5
    else
        int64_t* rcx_10 = *rbx_3
        (*(*rcx_10 + 0x10))(rcx_10, rdx_6)
        int64_t* rcx_11 = *rbx_3
        (*(*rcx_11 + 0x20))(rcx_11, &var_60)
        
        if (var_48 == 0)
            goto label_140f04762
        
        if (arg6 != 0)
            *arg6 = 2
        
        *arg2 = *(arg3 + 0x54)
        rax_18 = arg5
    arg2[1] = rax_18
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp3_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_50 + 8))(var_50, 1)

label_140f047d6:
return arg2
