// 函数: sub_140f60ba0
// 地址: 0x140f60ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t arg_8 = 0
int64_t rdi

if (*(arg1 + 0x3c8) == 0)
    rdi.b = 0
else
    int64_t* rcx = *(arg1 + 0x3c0)
    
    if (rcx == 0)
        rdi.b = 0
    else if ((*(*rcx + 0x28))(rcx) == 0)
        rdi.b = 0
    else
        rdi.b = 1

char rax

if (arg2[6].d == 0)
    rax = 0
else
    int64_t* rcx_1 = arg2[5]
    
    if (rcx_1 == 0)
        rax = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        rax = 0
    else
        rax = 1

if (rdi.b != rax)
label_140f60c9c:
    sub_140f25980(arg1 + 0x398, arg2)
    int64_t* var_58
    int64_t* var_38
    int64_t* rdx_5
    int32_t rdi_2
    
    if (*(arg1 + 0x3b8) == 0)
        int64_t* rbx_1 = data_143e202c8
        int64_t rcx_17 = data_143e202c0
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t var_48 = data_143e202b8
        int64_t var_40_1 = rcx_17
        var_38 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int32_t var_30
        int32_t var_30_1 = var_30 & 0xfffffff0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdx_5 = &var_48
        rdi_2 = 2
    else
        int64_t* rax_15 = sub_140f46790(arg1 + 0x398)
        int64_t var_68 = *rax_15
        int64_t var_60_1 = rax_15[1]
        int64_t* rcx_10 = rax_15[2]
        var_58 = rcx_10
        
        if (rcx_10 != 0)
            rcx_10[1].d += 1
        
        rdi_2 = 1
        int32_t var_50
        int32_t rcx_12 = var_50 ^ ((rax_15[3].d ^ var_50) & 1)
        int32_t var_50_1 = rcx_12
        int32_t rax_22 = ((rax_15[3].d ^ rcx_12) & 2) ^ rcx_12
        int32_t var_50_2 = rax_22
        int32_t rcx_16 = ((rax_15[3].d ^ rax_22) & 4) ^ rax_22
        int32_t var_50_3 = rcx_16
        rdx_5 = &var_68
        int32_t var_50_4 = ((rax_15[3].d ^ rcx_16) & 8) ^ rcx_16
    
    sub_140926420(arg1 + 0x440, rdx_5)
    
    if ((rdi_2.b & 2) != 0)
        rdi_2 &= 0xfffffffd
        
        if (var_38 != 0)
            var_38[1].d -= 1
            
            if (var_38[1].d == 1)
                (**var_38)(var_38)
                int32_t temp5_1 = *(var_38 + 0xc)
                *(var_38 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_38 + 8))(var_38, 1)
    
    if ((rdi_2.b & 1) != 0 && var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t temp7_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_58 + 8))(var_58, 1)
else
    bool cond:0_1
    
    if (rdi.b != 0)
        int64_t rdi_1 = 0
        
        if (arg2[6].d != 0)
            int64_t* rcx_2 = arg2[5]
            
            if (rcx_2 != 0)
                rdi_1 = *(*(*rcx_2 + 0x30))(rcx_2, &arg_8)
        
        if (*(arg1 + 0x3c8) != 0)
            int64_t* rcx_3 = *(arg1 + 0x3c0)
            void arg_10
            
            if (rcx_3 != 0)
                rbx = *(*(*rcx_3 + 0x30))(rcx_3, &arg_10)
        
        cond:0_1 = rbx == rdi_1
        goto label_140f60c90
    
    if (*(arg1 + 0x3b8) != arg2[4].b || *(arg1 + 0x398) != *arg2)
        goto label_140f60c9c
    
    char rcx_4 = (*(arg1 + 0x3b0)).b
    char rdx_2 = (arg2[3].d).b
    
    if (((rcx_4 ^ rdx_2) & 1) != 0 || ((rcx_4 ^ rdx_2) & 2) != 0 || ((rcx_4 ^ rdx_2) & 4) != 0)
        goto label_140f60c9c
    
    cond:0_1 = ((rcx_4 ^ rdx_2) & 8) == 0
label_140f60c90:
    
    if (not(cond:0_1))
        goto label_140f60c9c

uint64_t result = sub_140745b20(&arg2[5])
int64_t* rbx_4 = arg2[2]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp6_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp6_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
